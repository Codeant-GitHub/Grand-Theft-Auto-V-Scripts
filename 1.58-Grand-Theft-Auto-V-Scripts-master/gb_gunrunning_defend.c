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
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
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
	var uLocal_83 = -1;
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
	float fLocal_128 = 0f;
	float fLocal_129 = 0f;
	float fLocal_130 = 0f;
	float fLocal_131 = 0f;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	int iLocal_139 = 0;
	var uLocal_140 = 0;
	float fLocal_141 = 0f;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	float fLocal_154 = 0f;
	int iLocal_155[5] = { 0, 0, 0, 0, 0 };
	float fLocal_156 = 0f;
	float fLocal_157 = 0f;
	float fLocal_158 = 0f;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	struct<2> Local_166 = { 0, 0 } ;
	struct<2> Local_167[8];
	struct<2> Local_168 = { 0, 0 } ;
	struct<4> Local_169[8];
	float fLocal_170 = 0f;
	float fLocal_171 = 0f;
	float fLocal_172 = 0f;
	float fLocal_173 = 0f;
	float fLocal_174 = 0f;
	int iLocal_175 = 0;
	int iLocal_176[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	float fLocal_184 = 0f;
	int iLocal_185 = 0;
	float fLocal_186 = 0f;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	int iLocal_189 = 0;
	float fLocal_190 = 0f;
	var uLocal_191 = 0;
	float fLocal_192 = 0f;
	float fLocal_193 = 0f;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	int iLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	float fLocal_203 = 0f;
	struct<3> Local_204 = { 0, 0, 0 } ;
	float fLocal_205 = 0f;
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
	var uLocal_217 = 5;
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
	var uLocal_228 = 5;
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
	struct<1257> Local_239 = { 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 4, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 1, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 1, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 2, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, -1, -1082130432, 4, 0, 0, 0, 0, 5, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, -1, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1 } ;
	var uLocal_240 = -1;
	var uLocal_241 = -1000;
	struct<32> Local_242 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 5;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 4;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 5;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 5;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 5;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 5;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 5;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 5;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 5;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 5;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 5;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 5;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 5;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	struct<26> Local_327[8];
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	struct<34> Local_337 = { 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4 } ;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	struct<8> Local_361[30];
	var uLocal_362[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367[1] = { 0 };
	var uLocal_368[3] = { 0, 0, 0 };
	var uLocal_369 = 0;
	var uLocal_370 = -1;
	int iLocal_371 = 0;
	var uLocal_372[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<23> Local_373 = { 0, 0, 0, 0, 0, 0, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 1015222895;
	var uLocal_380 = 1021665346;
	var uLocal_381 = 0;
	var uLocal_382 = 255;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = -1;
	var uLocal_392 = 996499522;
	var uLocal_393 = 1002740646;
	var uLocal_394 = 0;
	var uLocal_395 = 60;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 1016296636;
	var uLocal_457 = 220;
	var uLocal_458 = 255;
	var uLocal_459 = 255;
	var uLocal_460 = 255;
	var uLocal_461 = 255;
	var uLocal_462 = 255;
	var uLocal_463 = 255;
	var uLocal_464 = 4096;
	var uLocal_465 = 40;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 4;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 1065353216;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 1056964608;
	var uLocal_644 = 1056964608;
	int iLocal_645 = 0;
	int iLocal_646 = 0;
	int iLocal_647 = 0;
	struct<4> Local_648 = { 0, 0, 0, 0 } ;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	char* sLocal_657 = NULL;
	var uLocal_658 = 16;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	struct<4> Local_823 = { 0, 0, 0, 0 } ;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	struct<4> Local_826 = { 0, 0, 0, 0 } ;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	int iLocal_829 = 0;
	int iLocal_830 = 0;
	int iLocal_831 = 0;
	int iLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	int iLocal_835 = 0;
	int iLocal_836 = 0;
	int iLocal_837 = 0;
	struct<21> Local_838 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	fLocal_128 = 3f;
	fLocal_129 = 0f;
	fLocal_130 = 2f;
	fLocal_131 = 100f;
	iLocal_139 = -1;
	fLocal_141 = 0.5f;
	fLocal_154 = 0f;
	fLocal_156 = 0f;
	fLocal_157 = 0f;
	fLocal_158 = 0f;
	fLocal_171 = 0.62f;
	fLocal_172 = 0.51f;
	fLocal_173 = 0.55f;
	fLocal_174 = 25f;
	fLocal_184 = 30000f;
	iLocal_185 = 1000;
	fLocal_190 = 40f;
	fLocal_192 = 500f;
	fLocal_193 = 250f;
	iLocal_195 = -1;
	iLocal_196 = -1;
	iLocal_197 = -1;
	iLocal_198 = -1;
	Local_204 = { 0f, 0f, 0f };
	fLocal_205 = 30f;
	iLocal_333 = -2;
	iLocal_645 = -1;
	iLocal_646 = -1;
	sLocal_657 = "";
	iLocal_832 = -1;
	if (unk_0x9315DBF7D972F07A() && func_2370(unk_0x9E2D6C50374FCFA9(), 0, 1))
	{
		func_2322(ScriptParam_838);
	}
	else
	{
		func_2259();
	}
	func_2258(&(Local_239.f_1256));
	while (true)
	{
		func_2257();
		if (func_2251())
		{
			func_2259();
		}
		Global_1944620.f_2 = Local_239.f_932;
		Global_1944620.f_3 = Local_239.f_933;
		func_2250();
		switch (func_2249(unk_0xF1354995C6159A78()))
		{
			case 0:
				if (unk_0x70F555A7CCF10659("ALARM_BELL_02", 0, -1))
				{
					if (func_2248() == 1)
					{
						func_2247();
						if (func_2246())
						{
							func_2214(227, 1, func_2234(), 0);
							iLocal_336 = unk_0x6F8FB52F5D1D0B84(unk_0xE2D3D51028F0428A());
							func_2213();
							func_2212();
							func_2211();
							if (Local_239.f_703 == 1)
							{
								unk_0x8FB472886552D737("P_cargo_chute_S");
							}
						}
						else
						{
							func_2214(227, 0, func_2234(), 0);
						}
						Local_327[unk_0xF1354995C6159A78() /*26*/] = 1;
					}
					else if (func_2248() == 4)
					{
						Local_327[unk_0xF1354995C6159A78() /*26*/] = 3;
					}
				}
				break;
			
			case 1:
				if (func_2205(1))
				{
					Local_327[unk_0xF1354995C6159A78() /*26*/] = 2;
				}
				if (func_2248() == 1)
				{
					func_2186();
					func_584();
					func_577();
					if (func_2246())
					{
						func_413(&(Global_1633702.f_534), &Global_1633702, 28, &(Global_1633702.f_1), &(Global_1633702.f_117), -1, 0, 0);
					}
					func_412();
				}
				else if (func_2248() == 4)
				{
					Local_327[unk_0xF1354995C6159A78() /*26*/] = 3;
				}
				func_398();
				break;
			
			case 3:
				func_397(&(Local_239.f_796));
				if (func_396(&(Local_239.f_796)))
				{
					Local_327[unk_0xF1354995C6159A78() /*26*/] = 4;
				}
				break;
			
			case 2:
				Local_327[unk_0xF1354995C6159A78() /*26*/] = 4;
			
			case 4:
				func_2259();
				break;
		}
		if (unk_0x54E30A65F4FA4962())
		{
			func_391();
			switch (func_2248())
			{
				case 0:
					if (func_2234() > -1)
					{
						if (Local_239.f_790 == -1)
						{
							Local_239.f_789 = unk_0xF1354995C6159A78();
							Local_239.f_790 = unk_0x9E2D6C50374FCFA9();
						}
						func_385();
						func_379();
						func_376();
						func_374();
						func_369();
						func_368();
						if (func_139())
						{
							unk_0x034E89ED97681AC2(&(Local_239.f_932), &(Local_239.f_933));
							func_138();
							Local_239 = 1;
							func_2214(227, 1, func_2234(), 0);
						}
					}
					func_118();
					break;
				
				case 1:
					func_118();
					func_374();
					func_369();
					func_107();
					func_8();
					func_5();
					if (func_2())
					{
						Local_239 = 4;
					}
					else if (func_1())
					{
						Local_239 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (Global_2810287.f_5193.f_42)
	{
		Global_2810287.f_5193.f_42 = 0;
		return 1;
	}
	return 0;
}

int func_2()
{
	if (func_4())
	{
		return 1;
	}
	if (func_3(2))
	{
		return 1;
	}
	return 0;
}

bool func_3(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xE2D0C323A1AE5D85(Local_239.f_1[iVar0], iVar1);
}

int func_4()
{
	return 0;
}

void func_5()
{
	bool bVar0;
	
	if (func_3(31) && func_3(4))
	{
		if (unk_0x90F6E2F6488B98BA(Local_239.f_719[0]))
		{
			if (unk_0xCCDCD6672DAE6835(Local_239.f_719[0]))
			{
				if (unk_0x07B2F8356DC13CF4(Local_239.f_719[0]))
				{
					bVar0 = true;
				}
				else if (func_7(Local_239.f_719[0]))
				{
					bVar0 = true;
				}
				if (bVar0)
				{
					switch (iLocal_837)
					{
						case 0:
							if (unk_0x90F6E2F6488B98BA(Local_239.f_719[0]))
							{
								unk_0xB970266897BDB48D(unk_0xF2D8DACFAEBD9629(Local_239.f_719[0]), 1, 1);
							}
							iLocal_837++;
							break;
						
						case 1:
							if (unk_0x55A0C756C4A8220C(unk_0xA5677134B9672173(Local_239.f_719[0]), 0) && !unk_0x2B5F4FBAF644BEC8(unk_0xF2D8DACFAEBD9629(Local_239.f_719[0])))
							{
								func_6(&(Local_239.f_719[0]));
							}
							break;
						}
					}
				}
			}
	}
}

void func_6(var uParam0)
{
	var uVar0;
	
	if (unk_0xCCDCD6672DAE6835(*uParam0))
	{
		if (!unk_0x07B2F8356DC13CF4(*uParam0))
		{
		}
	}
	if (unk_0x90F6E2F6488B98BA(*uParam0))
	{
		uVar0 = unk_0xF2D8DACFAEBD9629(*uParam0);
		unk_0x531055A66E7A812C(&uVar0);
	}
}

int func_7(var uParam0)
{
	if (unk_0xCCDCD6672DAE6835(uParam0))
	{
		unk_0xC31EECA11005273C(uParam0);
		return unk_0x07B2F8356DC13CF4(uParam0);
	}
	return 0;
}

void func_8()
{
	if (!func_3(25))
	{
		func_106(25);
	}
	if (!func_105(&(Local_239.f_6)))
	{
		func_104(&(Local_239.f_6), 0, 0);
	}
	else if (func_103(&(Local_239.f_6), 300000, 0))
	{
		func_106(23);
	}
	if (!func_105(&(Local_239.f_4)))
	{
		switch (Local_239.f_703)
		{
			case 1:
				if (Local_239.f_878.f_15[0] != -1)
				{
					func_104(&(Local_239.f_4), 0, 0);
				}
				break;
		}
		if (Local_239.f_787 != -1)
		{
			func_104(&(Local_239.f_4), 0, 0);
		}
	}
	else if (func_103(&(Local_239.f_4), 15000, 0))
	{
		func_106(32);
	}
	func_55(&(Local_239.f_942), &Local_242);
	switch (Local_239.f_786)
	{
		case 0:
			switch (Local_239.f_703)
			{
				case 0:
					if ((unk_0xE2D0C323A1AE5D85(Local_239.f_8, 0) || unk_0xE2D0C323A1AE5D85(Local_239.f_8, 1)) || unk_0xE2D0C323A1AE5D85(Local_239.f_8, 2))
					{
						func_16(joaat("mp_g_m_pros_01"));
					}
					break;
			}
			func_14();
			func_11();
			if (func_10())
			{
				func_9();
			}
			if (func_3(19))
			{
				Local_239.f_786 = 2;
			}
			else if (func_3(3))
			{
				Local_239.f_786 = 2;
			}
			else if (func_3(4))
			{
				Local_239.f_786 = 2;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
}

void func_9()
{
	if (unk_0x54E30A65F4FA4962())
	{
		if (Local_239.f_936 == -1f)
		{
			if (func_3(15) || func_3(3))
			{
				switch (Local_239.f_703)
				{
					case 1:
						Local_239.f_936 = Global_262145.f_21499;
						break;
					
					case 0:
						Local_239.f_936 = Global_262145.f_21504;
						break;
				}
				return;
			}
			if (func_3(5))
			{
				switch (Local_239.f_703)
				{
					case 1:
						Local_239.f_936 = Global_262145.f_21499;
						break;
					
					case 0:
						Local_239.f_936 = Global_262145.f_21504;
						break;
				}
				return;
			}
			if (func_3(8))
			{
				switch (Local_239.f_703)
				{
					case 1:
						Local_239.f_936 = Global_262145.f_21499;
						break;
					
					case 0:
						Local_239.f_936 = Global_262145.f_21504;
						break;
				}
				return;
			}
			if (func_3(9))
			{
				switch (Local_239.f_703)
				{
					case 1:
						Local_239.f_936 = Global_262145.f_21499;
						break;
					
					case 0:
						Local_239.f_936 = Global_262145.f_21504;
						break;
				}
				return;
			}
			if (func_3(4))
			{
				Local_239.f_936 = 0f;
				return;
			}
			switch (Local_239.f_703)
			{
				case 1:
					if (func_3(17))
					{
						Local_239.f_936 = Global_262145.f_21500;
						return;
					}
					break;
				}
			}
	}
}

bool func_10()
{
	return ((((((func_3(3) || func_3(4)) || func_3(5)) || func_3(8)) || func_3(9)) || func_3(17)) || func_3(15));
}

void func_11()
{
	if (!func_105(&(Local_239.f_804)))
	{
		func_104(&(Local_239.f_804), 0, 0);
	}
	else if (func_103(&(Local_239.f_804), func_12(), 0))
	{
		func_106(15);
	}
}

int func_12()
{
	return func_13();
}

int func_13()
{
	switch (Local_239.f_703)
	{
		case 0:
			return Global_262145.f_21506;
		
		case 1:
			return Global_262145.f_21501;
		
		default:
	}
	return Global_262145.f_21506;
}

void func_14()
{
	if (!func_105(&(Local_239.f_802)))
	{
		func_104(&(Local_239.f_802), 0, 0);
		return;
	}
	else if (!func_103(&(Local_239.f_802), func_15(), 0))
	{
		if (func_3(1))
		{
			if (Local_239.f_934 == -1)
			{
				Local_239.f_934 = func_13();
			}
		}
		return;
	}
	switch (Local_239.f_703)
	{
		case 0:
			if (!func_3(1))
			{
				if (!func_105(&(Local_239.f_798)))
				{
					func_104(&(Local_239.f_798), 0, 0);
				}
				else if (func_103(&(Local_239.f_798), func_13(), 0))
				{
					func_106(3);
				}
			}
			break;
	}
}

int func_15()
{
	switch (Local_239.f_703)
	{
		case 0:
			return Local_239.f_794;
		
		default:
	}
	return 0;
}

void func_16(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	
	if (!func_3(29))
	{
		return;
	}
	iVar3 = Local_239.f_706 * 5;
	iVar0 = ((func_54(Local_239.f_703, Local_239.f_704) + iVar3) + iLocal_194);
	if (Local_239.f_9 == -1 || Local_239.f_9 == iVar0)
	{
		Local_239.f_9 = iVar0;
		func_52(&Var1, &uVar2);
		if (!func_51(Var1))
		{
			if (func_50(iParam0))
			{
				if (func_36(Var1, 1f, 1065353216, 1065353216, 1084227584, 0, 0, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					Local_239.f_10[iVar0 /*15*/].f_5 = { Var1 };
					Local_239.f_10[iVar0 /*15*/].f_8 = uVar2;
					func_35(iVar0, 24);
					if (func_18(iVar0))
					{
						Local_204 = { 0f, 0f, 0f };
						iLocal_194++;
						Local_239.f_9 = -1;
					}
				}
				else
				{
					Local_204 = { 0f, 0f, 0f };
				}
			}
		}
	}
	if (iLocal_194 == 5)
	{
		func_17(29);
		Local_239.f_706++;
		iLocal_194 = 0;
	}
}

void func_17(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (!unk_0x54E30A65F4FA4962())
	{
		return;
	}
	unk_0xB0550BC91B0159D6(&(Local_239.f_1[iVar0]), iVar1);
}

int func_18(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	var uVar2;
	
	iVar0 = func_34(Local_239.f_703, Local_239.f_704, iParam0);
	if (!unk_0x90F6E2F6488B98BA(Local_239.f_10[iParam0 /*15*/].f_1))
	{
		if (unk_0xA777DF215CCFCC77(1))
		{
			if (func_50(iVar0))
			{
				if (func_33(Local_239.f_10[iParam0 /*15*/].f_5, 0f, 0f, 0f, 0))
				{
					if (func_32(iParam0, &Var1, &uVar2))
					{
						Local_239.f_10[iParam0 /*15*/].f_5 = { Var1 };
						Local_239.f_10[iParam0 /*15*/].f_8 = uVar2;
					}
				}
				else if (func_31(&(Local_239.f_10[iParam0 /*15*/].f_1), 22, iVar0, Local_239.f_10[iParam0 /*15*/].f_5, Local_239.f_10[iParam0 /*15*/].f_8, 1, 1, 1))
				{
					if (func_30(iParam0, 17))
					{
					}
					func_19(iParam0);
					switch (Local_239.f_703)
					{
						case 1:
							unk_0x348A212511C78DBF(unk_0x8AF984152F749D80(Local_239.f_10[iParam0 /*15*/].f_1), Global_262145.f_21498);
							break;
						
						case 0:
							unk_0x348A212511C78DBF(unk_0x8AF984152F749D80(Local_239.f_10[iParam0 /*15*/].f_1), Global_262145.f_21503);
							break;
					}
					if (func_30(iParam0, 15))
					{
						Local_239.f_1238 = Local_239.f_10[iParam0 /*15*/].f_1;
					}
					unk_0xCED9E32812D6C7C7(&(Local_239.f_772), iParam0);
					return 1;
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

void func_19(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_28(iParam0);
	unk_0x0407CF7EFEE35240(iVar0, 1);
	unk_0x50274A7EACA3133A(iVar0, 1);
	if (!func_30(iParam0, 10))
	{
		unk_0xFF4BEB6CFF55A013(iVar0, Global_1837183);
	}
	else
	{
		unk_0x8601AD4E55C81412(iVar0, 1);
		unk_0x19399C3895328EC3(iVar0, 1);
		unk_0xFF4BEB6CFF55A013(iVar0, Global_1837186);
	}
	unk_0xA5D600C274CC186F(iVar0, 1);
	if (func_30(iParam0, 24))
	{
		iVar1 = joaat("weapon_pistol");
	}
	else
	{
		iVar1 = func_27(iParam0, Local_239.f_703, Local_239.f_704);
	}
	unk_0xD6A76BAB45A4B460(iVar0, 281, 1);
	unk_0x9521FB98DB6DDF50(iVar0, iVar1, 9999999, 1, 1);
	unk_0x71B502FC2E129665(iVar0, 2);
	unk_0xD6A76BAB45A4B460(iVar0, 42, 1);
	unk_0x25D0F99524B26091(iVar0, 1);
	unk_0xBC12D08EE7559CCD(iVar0, 13, 1);
	unk_0x7DCB4594ACF18DA7(iVar0, 1);
	unk_0xD6A76BAB45A4B460(iVar0, 146, 1);
	if ((func_30(iParam0, 0) || func_30(iParam0, 2)) || func_30(iParam0, 20))
	{
		unk_0xBC12D08EE7559CCD(iVar0, 3, 0);
		unk_0xBC12D08EE7559CCD(iVar0, 2, 1);
	}
	unk_0xB11C0CF5CCDFE10A(iVar0, 3);
	if (!func_30(iParam0, 24))
	{
		if (func_30(iParam0, 1))
		{
			unk_0x1EE49ABA6B11E9CF(iVar0, Local_239.f_10[iParam0 /*15*/].f_5, 7f, 0, 0);
		}
	}
	if (func_30(iParam0, 21))
	{
		unk_0xE014FF3C785EEFB5(iVar0, 10f);
		unk_0x5C9D9A4EA475F37E(iVar0, 10f);
	}
	iVar2 = func_26();
	func_20(&iVar0, iVar2);
	unk_0xABC2CA6F28903308(iVar0, 1);
}

void func_20(int iParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 1f;
	if (!unk_0xF68107C40359970C(*iParam0))
	{
		if (iParam1 == -1)
		{
			iVar2 = func_21();
		}
		else
		{
			iVar2 = iParam1;
		}
		if (iVar2 >= 1)
		{
			switch (iVar2)
			{
				case 1:
					unk_0x348A212511C78DBF(*iParam0, Global_262145.f_18380);
					unk_0xC97BA48BC273A1F3(*iParam0, Global_262145.f_18386);
					unk_0xBC12D08EE7559CCD(*iParam0, 24, 0);
					unk_0x395228F7A14C6543(*iParam0, 0);
					fVar0 = Global_262145.f_18383;
					break;
				
				case 2:
					unk_0x348A212511C78DBF(*iParam0, Global_262145.f_18381);
					unk_0xC97BA48BC273A1F3(*iParam0, Global_262145.f_18387);
					unk_0xBC12D08EE7559CCD(*iParam0, 24, 0);
					fVar0 = Global_262145.f_18384;
					break;
				
				case 3:
					unk_0x348A212511C78DBF(*iParam0, Global_262145.f_18382);
					unk_0xC97BA48BC273A1F3(*iParam0, Global_262145.f_18388);
					fVar0 = Global_262145.f_18385;
					break;
			}
			iVar1 = round((100f + (100f * fVar0)));
			if (unk_0x0CF63873D754B965(*iParam0) > iVar1)
			{
				unk_0x8FBB27C41710F120(*iParam0, iVar1);
				unk_0xF160248D9083ED0C(*iParam0, iVar1, 0);
			}
		}
	}
}

int func_21()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_25(unk_0x9E2D6C50374FCFA9());
	iVar1 = 1;
	if (iVar0 != func_24())
	{
		iVar1 = (iVar1 + func_22(iVar0));
		if (iVar1 <= Global_262145.f_18424)
		{
			return 1;
		}
		else if (iVar1 > Global_262145.f_18424 && iVar1 <= Global_262145.f_18425)
		{
			return 2;
		}
		else
		{
			return 3;
		}
	}
	return -1;
}

int func_22(int iParam0)
{
	if (func_23(iParam0) == func_24())
	{
		return 0;
	}
	return Global_1893548[iParam0 /*600*/].f_11.f_19;
}

int func_23(int iParam0)
{
	if (iParam0 != func_24())
	{
		return Global_1893548[iParam0 /*600*/].f_11;
	}
	return func_24();
}

int func_24()
{
	return -1;
}

int func_25(int iParam0)
{
	return Global_1893548[iParam0 /*600*/].f_11.f_35;
}

int func_26()
{
	int iVar0;
	
	switch (Local_239.f_703)
	{
		case 0:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_27(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return joaat("weapon_carbinerifle");
						
						case 1:
							return joaat("weapon_pistol");
						
						case 2:
							return joaat("weapon_pistol");
						
						case 3:
							return joaat("weapon_carbinerifle");
						
						case 4:
							return joaat("weapon_pistol");
						
						case 5:
							return joaat("weapon_carbinerifle");
						
						case 6:
							return joaat("weapon_pistol");
						
						case 7:
							return joaat("weapon_carbinerifle");
						
						case 8:
							return joaat("weapon_pistol");
						
						case 9:
							return joaat("weapon_carbinerifle");
						
						case 10:
							return joaat("weapon_pistol");
						
						case 11:
							return joaat("weapon_pistol");
						
						default:
					}
					break;
				
				case 1:
					switch (iParam0)
					{
						case 0:
							return joaat("weapon_carbinerifle");
						
						case 1:
							return joaat("weapon_carbinerifle");
						
						case 2:
							return joaat("weapon_pistol");
						
						case 3:
							return joaat("weapon_pistol");
						
						case 4:
							return joaat("weapon_pistol");
						
						case 5:
							return joaat("weapon_pistol");
						
						case 6:
							return joaat("weapon_carbinerifle");
						
						case 7:
							return joaat("weapon_pistol");
						
						case 8:
							return joaat("weapon_carbinerifle");
						
						case 9:
							return joaat("weapon_pistol");
						
						case 10:
							return joaat("weapon_carbinerifle");
						
						case 11:
							return joaat("weapon_pistol");
						
						default:
					}
					break;
				
				case 2:
					switch (iParam0)
					{
						case 0:
							return joaat("weapon_carbinerifle");
						
						case 1:
							return joaat("weapon_pistol");
						
						case 2:
							return joaat("weapon_carbinerifle");
						
						case 3:
							return joaat("weapon_pistol");
						
						case 4:
							return joaat("weapon_carbinerifle");
						
						case 5:
							return joaat("weapon_pistol");
						
						case 6:
							return joaat("weapon_carbinerifle");
						
						case 7:
							return joaat("weapon_pistol");
						
						case 8:
							return joaat("weapon_carbinerifle");
						
						case 9:
							return joaat("weapon_pistol");
						
						case 10:
							return joaat("weapon_pistol");
						
						case 11:
							return joaat("weapon_pistol");
						
						default:
					}
					break;
				
				case 3:
					switch (iParam0)
					{
						case 0:
							return joaat("weapon_carbinerifle");
						
						case 1:
							return joaat("weapon_pistol");
						
						case 2:
							return joaat("weapon_carbinerifle");
						
						case 3:
							return joaat("weapon_pistol");
						
						case 4:
							return joaat("weapon_carbinerifle");
						
						case 5:
							return joaat("weapon_pistol");
						
						case 6:
							return joaat("weapon_pistol");
						
						case 7:
							return joaat("weapon_carbinerifle");
						
						case 8:
							return joaat("weapon_pistol");
						
						case 9:
							return joaat("weapon_carbinerifle");
						
						case 10:
							return joaat("weapon_pistol");
						
						case 11:
							return joaat("weapon_pistol");
						
						default:
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return joaat("weapon_pistol");
						
						case 1:
							return joaat("weapon_carbinerifle");
						
						case 2:
							return joaat("weapon_carbinerifle");
						
						case 3:
							return joaat("weapon_sniperrifle");
						
						case 4:
							return joaat("weapon_pistol");
						
						case 5:
							return joaat("weapon_sniperrifle");
						
						case 6:
							return joaat("weapon_pistol");
						
						case 7:
							return joaat("weapon_carbinerifle");
						
						case 8:
							return joaat("weapon_pistol");
						
						case 9:
							return joaat("weapon_carbinerifle");
						
						case 10:
							return joaat("weapon_pistol");
						
						case 11:
							return joaat("weapon_carbinerifle");
						
						default:
					}
					break;
				
				case 1:
					switch (iParam0)
					{
						case 0:
							return joaat("weapon_pistol");
						
						case 1:
							return joaat("weapon_pistol");
						
						case 2:
							return joaat("weapon_carbinerifle");
						
						case 3:
							return joaat("weapon_carbinerifle");
						
						case 4:
							return joaat("weapon_pistol");
						
						case 5:
							return joaat("weapon_carbinerifle");
						
						case 6:
							return joaat("weapon_pistol");
						
						case 7:
							return joaat("weapon_pistol");
						
						case 8:
							return joaat("weapon_carbinerifle");
						
						case 9:
							return joaat("weapon_carbinerifle");
						
						case 10:
							return joaat("weapon_carbinerifle");
						
						case 11:
							return joaat("weapon_pistol");
						
						default:
					}
					break;
				
				case 2:
					switch (iParam0)
					{
						case 0:
							return joaat("weapon_carbinerifle");
						
						case 1:
							return joaat("weapon_carbinerifle");
						
						case 2:
							return joaat("weapon_pistol");
						
						case 3:
							return joaat("weapon_pistol");
						
						case 4:
							return joaat("weapon_carbinerifle");
						
						case 5:
							return joaat("weapon_pistol");
						
						case 6:
							return joaat("weapon_carbinerifle");
						
						case 7:
							return joaat("weapon_carbinerifle");
						
						case 8:
							return joaat("weapon_pistol");
						
						case 9:
							return joaat("weapon_carbinerifle");
						
						case 10:
							return joaat("weapon_pistol");
						
						case 11:
							return joaat("weapon_carbinerifle");
						
						default:
					}
					break;
			}
			break;
	}
	return joaat("weapon_microsmg");
}

int func_28(int iParam0)
{
	return unk_0x8AF984152F749D80(func_29(iParam0));
}

var func_29(int iParam0)
{
	return Local_239.f_10[iParam0 /*15*/].f_1;
}

bool func_30(int iParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(Local_239.f_10[iParam0 /*15*/].f_9, iParam1);
}

int func_31(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (!unk_0xA777DF215CCFCC77(1))
	{
		return 0;
	}
	iVar0 = unk_0xA8D58C3AADA2C41C(iParam1, iParam2, Param3, uParam4, iParam6, bParam5);
	*uParam0 = unk_0xED28EE4BE581A032(iVar0);
	if (unk_0xCCDCD6672DAE6835(*uParam0))
	{
		unk_0x398C962F550CF3B4(iVar0, iParam7);
		if (unk_0xD64C90C3F536F963(iVar0))
		{
			if (bParam5)
			{
				unk_0x4C6E9D70687FCDCE(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_32(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iParam0;
	if (!func_33(Local_239.f_462[iVar0 /*5*/], 0f, 0f, 0f, 0))
	{
		if (!Local_239.f_462[iVar0 /*5*/].f_4)
		{
			if (func_36(Local_239.f_462[iVar0 /*5*/], 1f, 1065353216, 1065353216, 1084227584, 0, 0, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				*uParam1 = { Local_239.f_462[iVar0 /*5*/] };
				*uParam2 = Local_239.f_462[iVar0 /*5*/].f_3;
				Local_239.f_462[iVar0 /*5*/].f_4 = 1;
				return 1;
			}
			else
			{
				if (unk_0x34FAA537D539192C(Local_239.f_462[iVar0 /*5*/], 1f))
				{
					bVar1 = true;
				}
				else if (unk_0xAC48FF26FAAA8DD0(Local_239.f_462[iVar0 /*5*/], Local_239.f_462[iVar0 /*5*/].f_1, (Local_239.f_462[iVar0 /*5*/].f_2 + 1f), 1f) || unk_0xAC48FF26FAAA8DD0(Local_239.f_462[iVar0 /*5*/], 1f))
				{
					bVar1 = true;
				}
				if (bVar1)
				{
					if (!unk_0xE2D0C323A1AE5D85(Local_239.f_784, iVar0))
					{
						unk_0xCED9E32812D6C7C7(&(Local_239.f_784), iVar0);
					}
				}
			}
		}
	}
	return 0;
}

bool func_33(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_34(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			return joaat("mp_g_m_pros_01");
		
		case 1:
			return joaat("s_m_y_blackops_02");
		
		default:
	}
	return joaat("mp_g_m_pros_01");
}

void func_35(int iParam0, int iParam1)
{
	if (!unk_0xE2D0C323A1AE5D85(Local_239.f_10[iParam0 /*15*/].f_9, iParam1))
	{
		unk_0xCED9E32812D6C7C7(&(Local_239.f_10[iParam0 /*15*/].f_9), iParam1);
	}
}

int func_36(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	Global_2667222.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (unk_0x34FAA537D539192C(Param0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (unk_0xAC48FF26FAAA8DD0(Param0.x, Param0.f_1, (Param0.f_2 + 1f), fParam2) || unk_0xAC48FF26FAAA8DD0(Param0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (unk_0x2D3CDDF3FE35FCA6(Param0, fParam3, iParam16))
		{
			return 0;
		}
	}
	Global_2667222.f_2++;
	if (bParam11)
	{
		if (unk_0x3FDE5764A07BA515(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2667222.f_2++;
	if (fParam12 > 0f)
	{
		if (func_45(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2667222.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_37(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2667222.f_2++;
	return 1;
}

int func_37(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_2370(unk_0x9E2D6C50374FCFA9(), 1, 1))
		{
			if (!unk_0xA829C9A2767AC8EF())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x987A5F1E1A67E3C0(func_42(unk_0x9E2D6C50374FCFA9()), Param0, 1) <= (fVar2 + fParam1))
				{
					if (unk_0x0318E2EE6FB4563F(Param0, fParam1))
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
		if (func_2370(iVar1, 1, 1))
		{
			if (!func_39(iVar1, 0) && unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x9E2D6C50374FCFA9()))
				{
					if ((func_38(iVar1) || !bParam8) && !Global_2689156[iVar1 /*453*/].f_268)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x0E40F846A70BA3EC(iVar1) == -1)
							{
								if (unk_0x0E40F846A70BA3EC(iVar1) == unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x0E40F846A70BA3EC(iVar1) != unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()))) || unk_0x0E40F846A70BA3EC(iVar1) == -1)
							{
								if (unk_0x987A5F1E1A67E3C0(func_42(iVar1), Param0, 1) <= (fVar2 + fParam1))
								{
									if (unk_0x0809D748691DCA79(iVar1, Param0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x0E40F846A70BA3EC(iVar1) != iParam6 || unk_0x0E40F846A70BA3EC(iVar1) == -1)
						{
							if (unk_0x987A5F1E1A67E3C0(func_42(iVar1), Param0, 1) <= (fVar2 + fParam1))
							{
								if (unk_0x0809D748691DCA79(iVar1, Param0, fParam1))
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

int func_38(int iParam0)
{
	if (unk_0x4A1EA713628C49D4(unk_0x407E03586628E458(iParam0)) || Global_2689156[iParam0 /*453*/].f_254)
	{
		return 1;
	}
	return 0;
}

bool func_39(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		bVar0 = func_40(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853128[iParam0 /*888*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x0D01086B38EC256F(iParam0))
		{
			bVar0 = unk_0x0E40F846A70BA3EC(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_40(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_41();
	}
	if (Global_1575026[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574901[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_41()
{
	return Global_1574907;
}

Vector3 func_42(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_44() && Global_1853128[iVar0 /*888*/].f_858) && !func_51(Global_1853128[iVar0 /*888*/].f_859))
	{
		return Global_1853128[iVar0 /*888*/].f_859;
	}
	return func_43(iParam0);
}

Vector3 func_43(int iParam0)
{
	return unk_0x6B62510F212526DC(unk_0x407E03586628E458(iParam0), 0);
}

bool func_44()
{
	return Global_2714627.f_19;
}

int func_45(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x9E2D6C50374FCFA9() != iVar1) || iParam6 == 0)
		{
			if (func_2370(iVar1, bParam2, bParam3))
			{
				if (unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), iVar1))
				{
					if (!bParam5 || (!unk_0xF68107C40359970C(unk_0x407E03586628E458(iVar1)) && func_38(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) != unk_0x0E40F846A70BA3EC(iVar1))) || unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) == -1)
						{
							if (((unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) == -1 && iParam7) && bParam4) && func_46(iVar1))
							{
							}
							else if (unk_0xE5965CDF24F93A9F(unk_0x407E03586628E458(iVar1)))
							{
								if (unk_0x987A5F1E1A67E3C0(func_43(iVar1), Param0, 1) < fParam1)
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

int func_46(int iParam0)
{
	if (func_49(unk_0x9E2D6C50374FCFA9(), iParam0))
	{
		return 1;
	}
	Global_2783300 = { func_48(iParam0) };
	if (unk_0x106C9EE9D83F20DF(&Global_2783300))
	{
		return 1;
	}
	if (func_47(unk_0x9E2D6C50374FCFA9(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_47(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_23(iParam0);
	if (!iVar0 == func_24())
	{
		if (iVar0 == func_23(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_48(int iParam0)
{
	struct<13> Var0;
	
	unk_0x460FFCEC183339C6(iParam0, &Var0, 13);
	return Var0;
}

int func_49(int iParam0, int iParam1)
{
	if (unk_0xF453DE81BDFDAE6F())
	{
		Global_2783300 = { func_48(iParam0) };
		Global_2783313 = { func_48(iParam1) };
		if (unk_0x8C992447292D600F(&Global_2783300))
		{
			if (unk_0x8C992447292D600F(&Global_2783313))
			{
				unk_0x4FFBF2C0D8249E45(&Global_2783230, 35, &Global_2783300);
				unk_0x4FFBF2C0D8249E45(&Global_2783265, 35, &Global_2783313);
				if (Global_2783230 == Global_2783265)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_50(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xD69A0C3662175E68(iParam0);
	return unk_0x0152AA00FA3130F1(iParam0);
}

int func_51(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_52(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = unk_0x5853B15F78E1A265(0, 30);
	if (!unk_0xE2D0C323A1AE5D85(Local_239.f_795, iVar0))
	{
		func_53(Local_239.f_704, iVar0, uParam0, uParam1);
		unk_0xCED9E32812D6C7C7(&(Local_239.f_795), iVar0);
	}
	else
	{
		func_52(uParam0, uParam1);
	}
}

void func_53(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1055.47f, -1995.876f, 30.0166f };
					*uParam3 = 351f;
					break;
				
				case 1:
					*uParam2 = { 1117.399f, -1983.151f, 29.9457f };
					*uParam3 = 95.9999f;
					break;
				
				case 2:
					*uParam2 = { 1083.745f, -1973.928f, 30.015f };
					*uParam3 = 341.2f;
					break;
				
				case 3:
					*uParam2 = { 1098.755f, -1984.182f, 30.015f };
					*uParam3 = 15.4f;
					break;
				
				case 4:
					*uParam2 = { 1108.749f, -1983.484f, 30.026f };
					*uParam3 = 98.799f;
					break;
				
				case 5:
					*uParam2 = { 1060.829f, -1998.614f, 30.016f };
					*uParam3 = 98.799f;
					break;
				
				case 6:
					*uParam2 = { 1042.406f, -1970.369f, 33.968f };
					*uParam3 = 302.799f;
					break;
				
				case 7:
					*uParam2 = { 1049.922f, -1958.528f, 30.032f };
					*uParam3 = 260.799f;
					break;
				
				case 8:
					*uParam2 = { 1046.553f, -1957.319f, 34.139f };
					*uParam3 = 260.799f;
					break;
				
				case 9:
					*uParam2 = { 1054.797f, -1953.686f, 31.1f };
					*uParam3 = 260.799f;
					break;
				
				case 10:
					*uParam2 = { 1056.239f, -1944.503f, 35.325f };
					*uParam3 = 260.799f;
					break;
				
				case 11:
					*uParam2 = { 1082.867f, -1947.094f, 30.114f };
					*uParam3 = 126.998f;
					break;
				
				case 12:
					*uParam2 = { 1124.435f, -1990.691f, 30.015f };
					*uParam3 = 61.998f;
					break;
				
				case 13:
					*uParam2 = { 1110.838f, -1970.211f, 30.014f };
					*uParam3 = 199.798f;
					break;
				
				case 14:
					*uParam2 = { 1075.808f, -1973.669f, 46.927f };
					*uParam3 = 4.997f;
					break;
				
				case 15:
					*uParam2 = { 1084.753f, -1949.257f, 39.739f };
					*uParam3 = 112.797f;
					break;
				
				case 16:
					*uParam2 = { 1036.087f, -1976.225f, 30.0445f };
					*uParam3 = 284.9967f;
					break;
				
				case 17:
					*uParam2 = { 1101.358f, -1977.805f, 35.301f };
					*uParam3 = 59.597f;
					break;
				
				case 18:
					*uParam2 = { 1037.334f, -1974.562f, 30.045f };
					*uParam3 = 257.197f;
					break;
				
				case 19:
					*uParam2 = { 1029.209f, -1957.449f, 30.043f };
					*uParam3 = 257.197f;
					break;
				
				case 20:
					*uParam2 = { 1057.171f, -1924.927f, 35.326f };
					*uParam3 = 207.997f;
					break;
				
				case 21:
					*uParam2 = { 1095.153f, -1945.825f, 30.48f };
					*uParam3 = 78.996f;
					break;
				
				case 22:
					*uParam2 = { 1104.814f, -1961.607f, 39.392f };
					*uParam3 = 111.796f;
					break;
				
				case 23:
					*uParam2 = { 1052.437f, -1952.885f, 39.028f };
					*uParam3 = 265.596f;
					break;
				
				case 24:
					*uParam2 = { 1046.366f, -1993.395f, 30.0447f };
					*uParam3 = 293.3969f;
					break;
				
				case 25:
					*uParam2 = { 1034.962f, -1969.472f, 30.0438f };
					*uParam3 = 314.5968f;
					break;
				
				case 26:
					*uParam2 = { 1088.337f, -1980.554f, 49.8624f };
					*uParam3 = 49.7967f;
					break;
				
				case 27:
					*uParam2 = { 1091.725f, -1943.373f, 30.7072f };
					*uParam3 = 94.1965f;
					break;
				
				case 28:
					*uParam2 = { 1070.505f, -1914.369f, 30.557f };
					*uParam3 = 159.1963f;
					break;
				
				case 29:
					*uParam2 = { 1042.077f, -1991.481f, 30.0192f };
					*uParam3 = 321.3989f;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 223.8943f, -1872.443f, 25.8715f };
					*uParam3 = 136.5995f;
					break;
				
				case 1:
					*uParam2 = { 233.5436f, -1874.814f, 25.4799f };
					*uParam3 = 143.7995f;
					break;
				
				case 2:
					*uParam2 = { 224.8463f, -1885.055f, 24.7187f };
					*uParam3 = 347.7993f;
					break;
				
				case 3:
					*uParam2 = { 215.3888f, -1862.009f, 29.8679f };
					*uParam3 = 72.399f;
					break;
				
				case 4:
					*uParam2 = { 224.0119f, -1849.136f, 25.96f };
					*uParam3 = 155.7985f;
					break;
				
				case 5:
					*uParam2 = { 229.6837f, -1846.246f, 25.8657f };
					*uParam3 = 120.9982f;
					break;
				
				case 6:
					*uParam2 = { 181.8554f, -1840.346f, 27.0975f };
					*uParam3 = 134.1981f;
					break;
				
				case 7:
					*uParam2 = { 182.4445f, -1837.023f, 27.1026f };
					*uParam3 = 152.1979f;
					break;
				
				case 8:
					*uParam2 = { 179.469f, -1832.004f, 27.1166f };
					*uParam3 = 150.9978f;
					break;
				
				case 9:
					*uParam2 = { 174.4112f, -1824.662f, 27.275f };
					*uParam3 = 178.1977f;
					break;
				
				case 10:
					*uParam2 = { 162.9509f, -1809.811f, 27.7446f };
					*uParam3 = 164.9975f;
					break;
				
				case 11:
					*uParam2 = { 173.9211f, -1805.98f, 28.0737f };
					*uParam3 = 170.5974f;
					break;
				
				case 12:
					*uParam2 = { 183.2023f, -1813.514f, 28.0026f };
					*uParam3 = 159.5974f;
					break;
				
				case 13:
					*uParam2 = { 194.7354f, -1839.018f, 31.254f };
					*uParam3 = 168.5973f;
					break;
				
				case 14:
					*uParam2 = { 194.8095f, -1831.298f, 33.552f };
					*uParam3 = 173.5972f;
					break;
				
				case 15:
					*uParam2 = { 216.5745f, -1863.355f, 33.8676f };
					*uParam3 = 80.5969f;
					break;
				
				case 16:
					*uParam2 = { 215.0836f, -1855.612f, 30.2272f };
					*uParam3 = 93.7968f;
					break;
				
				case 17:
					*uParam2 = { 233.5953f, -1877.874f, 25.2969f };
					*uParam3 = 89.5968f;
					break;
				
				case 18:
					*uParam2 = { 228.045f, -1885.558f, 24.7885f };
					*uParam3 = 52.3967f;
					break;
				
				case 19:
					*uParam2 = { 209.8642f, -1834.138f, 30.9008f };
					*uParam3 = 165.1964f;
					break;
				
				case 20:
					*uParam2 = { 151.3684f, -1812.255f, 27.1353f };
					*uParam3 = 240.7961f;
					break;
				
				case 21:
					*uParam2 = { 157.5625f, -1803.725f, 27.759f };
					*uParam3 = 213.9962f;
					break;
				
				case 22:
					*uParam2 = { 212.8072f, -1844.208f, 30.5683f };
					*uParam3 = 144.796f;
					break;
				
				case 23:
					*uParam2 = { 163.3574f, -1831.611f, 26.5229f };
					*uParam3 = 237.1957f;
					break;
				
				case 24:
					*uParam2 = { 159.2808f, -1836.943f, 26.4316f };
					*uParam3 = 235.9957f;
					break;
				
				case 25:
					*uParam2 = { 226.8004f, -1843.637f, 25.9307f };
					*uParam3 = 177.1956f;
					break;
				
				case 26:
					*uParam2 = { 157.4909f, -1816.947f, 27.1418f };
					*uParam3 = 232.3954f;
					break;
				
				case 27:
					*uParam2 = { 146.3948f, -1816.041f, 26.8111f };
					*uParam3 = 282.9952f;
					break;
				
				case 28:
					*uParam2 = { 174.1512f, -1815.227f, 27.7846f };
					*uParam3 = 167.3948f;
					break;
				
				case 29:
					*uParam2 = { 167.8879f, -1815.257f, 27.6257f };
					*uParam3 = 176.3947f;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -108.1577f, -2503.167f, 13.6445f };
					*uParam3 = 188.7996f;
					break;
				
				case 1:
					*uParam2 = { -124.4544f, -2526.156f, 13.6445f };
					*uParam3 = 222.5996f;
					break;
				
				case 2:
					*uParam2 = { -131.2542f, -2535.624f, 11.0446f };
					*uParam3 = 246.5995f;
					break;
				
				case 3:
					*uParam2 = { -139.7364f, -2532.972f, 5.0007f };
					*uParam3 = 246.5995f;
					break;
				
				case 4:
					*uParam2 = { -147.1421f, -2525.929f, 5.1f };
					*uParam3 = 231.3995f;
					break;
				
				case 5:
					*uParam2 = { -110.1184f, -2509.693f, 3.8278f };
					*uParam3 = 242.3994f;
					break;
				
				case 6:
					*uParam2 = { -111.5171f, -2492.404f, 5.0091f };
					*uParam3 = 250.9992f;
					break;
				
				case 7:
					*uParam2 = { -105.616f, -2496.719f, 5.0054f };
					*uParam3 = 250.9992f;
					break;
				
				case 8:
					*uParam2 = { -95.416f, -2490.602f, 5.0186f };
					*uParam3 = 168.199f;
					break;
				
				case 9:
					*uParam2 = { -108.7311f, -2483.662f, 5.0265f };
					*uParam3 = 195.7988f;
					break;
				
				case 10:
					*uParam2 = { -62.7724f, -2509.564f, 10.3494f };
					*uParam3 = 112.9986f;
					break;
				
				case 11:
					*uParam2 = { -77.9648f, -2534.814f, 5.01f };
					*uParam3 = 76.3984f;
					break;
				
				case 12:
					*uParam2 = { -60.2275f, -2523.229f, 5.1609f };
					*uParam3 = 106.9983f;
					break;
				
				case 13:
					*uParam2 = { -146.5238f, -2531.698f, 5.0009f };
					*uParam3 = 241.9981f;
					break;
				
				case 14:
					*uParam2 = { -56.1022f, -2501.861f, 5.1609f };
					*uParam3 = 114.5979f;
					break;
				
				case 15:
					*uParam2 = { -77.9708f, -2488.709f, 5.0232f };
					*uParam3 = 165.1976f;
					break;
				
				case 16:
					*uParam2 = { -98.0264f, -2490.627f, 10.6453f };
					*uParam3 = 165.1976f;
					break;
				
				case 17:
					*uParam2 = { -86.4462f, -2498.533f, 13.4656f };
					*uParam3 = 153.1974f;
					break;
				
				case 18:
					*uParam2 = { -121.4051f, -2499.352f, 13.6445f };
					*uParam3 = 229.1971f;
					break;
				
				case 19:
					*uParam2 = { -126.2097f, -2505.173f, 13.6445f };
					*uParam3 = 238.1971f;
					break;
				
				case 20:
					*uParam2 = { -137.8986f, -2521.034f, 11.0446f };
					*uParam3 = 238.1971f;
					break;
				
				case 21:
					*uParam2 = { -62.7017f, -2532.741f, 5.0127f };
					*uParam3 = 58.1967f;
					break;
				
				case 22:
					*uParam2 = { -49.0633f, -2530.009f, 5.154f };
					*uParam3 = 85.3966f;
					break;
				
				case 23:
					*uParam2 = { -154.0171f, -2525.74f, 5.005f };
					*uParam3 = 239.9962f;
					break;
				
				case 24:
					*uParam2 = { -113.3242f, -2482.563f, 5.0263f };
					*uParam3 = 234.3963f;
					break;
				
				case 25:
					*uParam2 = { -92.1973f, -2486.097f, 5.0197f };
					*uParam3 = 153.396f;
					break;
				
				case 26:
					*uParam2 = { -105.087f, -2480.149f, 5.0228f };
					*uParam3 = 156.396f;
					break;
				
				case 27:
					*uParam2 = { -51.5454f, -2506.03f, 6.4012f };
					*uParam3 = 62.7957f;
					break;
				
				case 28:
					*uParam2 = { -63.3921f, -2545.302f, 5.01f };
					*uParam3 = 62.7957f;
					break;
				
				case 29:
					*uParam2 = { -63.3405f, -2520.345f, 6.4002f };
					*uParam3 = 104.7956f;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 751.7123f, -531.2252f, 39.9524f };
					*uParam3 = 130.7997f;
					break;
				
				case 1:
					*uParam2 = { 738.7371f, -575.906f, 33.7772f };
					*uParam3 = 80.1995f;
					break;
				
				case 2:
					*uParam2 = { 741.0178f, -568.4597f, 33.7772f };
					*uParam3 = 66.9995f;
					break;
				
				case 3:
					*uParam2 = { 744.3707f, -556.338f, 33.7772f };
					*uParam3 = 87.1994f;
					break;
				
				case 4:
					*uParam2 = { 753.6755f, -525.5611f, 26.2189f };
					*uParam3 = 84.1994f;
					break;
				
				case 5:
					*uParam2 = { 748.2568f, -528.6512f, 26.7782f };
					*uParam3 = 84.1994f;
					break;
				
				case 6:
					*uParam2 = { 759.2032f, -507.8281f, 26.8752f };
					*uParam3 = 130.3993f;
					break;
				
				case 7:
					*uParam2 = { 751.4592f, -537.2648f, 40.8336f };
					*uParam3 = 128.5993f;
					break;
				
				case 8:
					*uParam2 = { 746.9885f, -541.8518f, 33.7772f };
					*uParam3 = 99.1991f;
					break;
				
				case 9:
					*uParam2 = { 747.5743f, -583.4346f, 26.1191f };
					*uParam3 = 91.9991f;
					break;
				
				case 10:
					*uParam2 = { 738.1207f, -578.9072f, 26.1012f };
					*uParam3 = 74.399f;
					break;
				
				case 11:
					*uParam2 = { 757.5797f, -520.5892f, 26.6085f };
					*uParam3 = 113.3985f;
					break;
				
				case 12:
					*uParam2 = { 702.1577f, -589.6456f, 24.7053f };
					*uParam3 = 325.1983f;
					break;
				
				case 13:
					*uParam2 = { 713.7491f, -592.7561f, 26.0064f };
					*uParam3 = 349.1982f;
					break;
				
				case 14:
					*uParam2 = { 732.3572f, -586.2111f, 26.0538f };
					*uParam3 = 44.3979f;
					break;
				
				case 15:
					*uParam2 = { 724.5908f, -573.8358f, 34.5614f };
					*uParam3 = 357.3978f;
					break;
				
				case 16:
					*uParam2 = { 717.2817f, -570.5662f, 34.5583f };
					*uParam3 = 345.1972f;
					break;
				
				case 17:
					*uParam2 = { 698.3436f, -561.2944f, 36.3998f };
					*uParam3 = 313.7969f;
					break;
				
				case 18:
					*uParam2 = { 765.7123f, -502.6945f, 27.1826f };
					*uParam3 = 135.5966f;
					break;
				
				case 19:
					*uParam2 = { 753.4877f, -528.0688f, 37.9419f };
					*uParam3 = 2.3964f;
					break;
				
				case 20:
					*uParam2 = { 713.2164f, -605.7006f, 26.13f };
					*uParam3 = 349.1963f;
					break;
				
				case 21:
					*uParam2 = { 732.471f, -597.0988f, 26.5775f };
					*uParam3 = 27.5961f;
					break;
				
				case 22:
					*uParam2 = { 751.6623f, -540.7039f, 40.8336f };
					*uParam3 = 109.5959f;
					break;
				
				case 23:
					*uParam2 = { 698.4994f, -598.7482f, 24.6356f };
					*uParam3 = 327.9953f;
					break;
				
				case 24:
					*uParam2 = { 709.1746f, -566.9232f, 35.093f };
					*uParam3 = 323.9951f;
					break;
				
				case 25:
					*uParam2 = { 692.4679f, -612.009f, 24.5906f };
					*uParam3 = 326.995f;
					break;
				
				case 26:
					*uParam2 = { 740.032f, -500.5943f, 24.8953f };
					*uParam3 = 231.5945f;
					break;
				
				case 27:
					*uParam2 = { 752.7185f, -490.9646f, 25.4253f };
					*uParam3 = 174.3943f;
					break;
				
				case 28:
					*uParam2 = { 690.1321f, -565.8355f, 24.2646f };
					*uParam3 = 261.3941f;
					break;
				
				case 29:
					*uParam2 = { 683.7603f, -581.3099f, 24.4894f };
					*uParam3 = 279.5942f;
					break;
			}
			break;
	}
}

int func_54(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return 12;
		
		case 1:
			return 12;
		
		default:
	}
	return 0;
}

void func_55(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<3> Var8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	if (!func_102(uParam0, 0))
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			(uParam0[iVar1 /*52*/])->f_13 = -1;
			iVar1++;
		}
		func_101(uParam0, 0);
		if (*uParam1 == 0)
		{
			*uParam1 = 3;
		}
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = 2;
		}
		if (uParam1->f_2 == 0)
		{
			uParam1->f_2 = 2;
		}
		if (uParam1->f_1 == 0)
		{
			uParam1->f_1 = 10000;
		}
		if (uParam1->f_29 == 0)
		{
			uParam1->f_29 = joaat("bati");
		}
		if (uParam1->f_31 == 0)
		{
			uParam1->f_31 = joaat("g_m_y_korean_01");
		}
		if (uParam1->f_9 == 0f)
		{
			uParam1->f_9 = 200f;
		}
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam1->f_46[iVar1] == 0)
			{
				uParam1->f_46[iVar1] = -1;
			}
			iVar1++;
		}
	}
	func_100(uParam0, uParam1);
	if (func_99(uParam0))
	{
		if (!func_33(uParam0->f_278, uParam1->f_6, 0))
		{
			if (!func_33(uParam1->f_6, 0f, 0f, 0f, 0))
			{
				uParam0->f_278 = { uParam1->f_6 };
			}
		}
		iVar2 = -1;
		iVar3 = -1;
		if (uParam0->f_266 < 0)
		{
			func_91(uParam0);
		}
		iVar2 = uParam0->f_266;
		iVar3 = uParam0->f_270;
		if (iVar2 > -1)
		{
			if (!func_90(uParam0, iVar3))
			{
				if (uParam0->f_262[iVar3] < func_89(uParam1) || func_89(uParam1) == -1)
				{
					if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(iVar2)))
					{
						if (func_88(uParam0, iVar2) <= 5)
						{
							if (uParam0->f_267 == -1)
							{
								iVar0 = func_87(uParam0);
								if (iVar0 > -1)
								{
									uParam0->f_267 = iVar0;
								}
							}
							else
							{
								iVar4 = unk_0x6B01934FA503547F(unk_0x54F800F95142C750(iVar2));
								iVar5 = iVar4;
								if (!func_33(Global_1893548[iVar5 /*600*/].f_11.f_445.f_2, 0f, 0f, 0f, 0))
								{
									if (func_33(uParam0->f_282, 0f, 0f, 0f, 0) || !func_33(uParam0->f_282, Global_1893548[iVar5 /*600*/].f_11.f_445.f_2, 0))
									{
										Var8 = { Global_1893548[iVar5 /*600*/].f_11.f_445.f_2 };
										fVar9 = Global_1893548[iVar5 /*600*/].f_11.f_445.f_5.f_2;
										iVar6 = func_86(uParam0, uParam1);
										iVar7 = uParam1->f_31;
										iVar10 = func_85(uParam0, uParam1);
										if (uParam1->f_4 == 0)
										{
											uParam1->f_4 = 10;
										}
										if (uParam1->f_34 == 0)
										{
											uParam1->f_34 = Global_1837183;
										}
										if (func_76(uParam0, uParam1, Var8, fVar9, iVar10, iVar6, iVar7))
										{
											uParam0->f_261++;
											uParam0->f_282 = { Var8 };
											uParam0->f_293 = 0;
											(uParam0[uParam0->f_267 /*52*/])->f_12 = iVar3;
											unk_0xCED9E32812D6C7C7(&((uParam0[uParam0->f_267 /*52*/])->f_11), 0);
											unk_0xB0550BC91B0159D6(&(uParam0->f_268), uParam0->f_267);
											(uParam0[uParam0->f_267 /*52*/])->f_13 = uParam0->f_266;
											func_104(&((uParam0[uParam0->f_267 /*52*/])->f_50), 0, 0);
											uParam0->f_266 = -1;
											uParam0->f_267 = -1;
											iVar11 = func_75(uParam1);
											iVar12 = func_74(uParam0, iVar3);
											if (iVar12 == iVar11)
											{
												uParam0->f_262[iVar3]++;
												func_73(uParam0, iVar3);
											}
											else if (iVar3 == 0)
											{
											}
										}
									}
								}
							}
						}
					}
					else
					{
						uParam0->f_266 = -1;
						uParam0->f_267 = -1;
					}
				}
			}
		}
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (!func_105(&(uParam0->f_286[iVar1 /*2*/])))
			{
				if (func_90(uParam0, iVar1))
				{
					if (func_74(uParam0, iVar1) == 0)
					{
						uParam0->f_272++;
						func_104(&(uParam0->f_286[iVar1 /*2*/]), 0, 0);
						unk_0xCED9E32812D6C7C7(&(uParam0->f_269), 4);
					}
				}
			}
			else
			{
				iVar13 = func_72(uParam1);
				if (func_103(&(uParam0->f_286[iVar1 /*2*/]), iVar13, 0))
				{
					func_71(&(uParam0->f_286[iVar1 /*2*/]));
					func_69(uParam0, iVar1);
					unk_0xB0550BC91B0159D6(&(uParam0->f_269), 4);
				}
			}
			iVar1++;
		}
	}
	iVar14 = 0;
	while (iVar14 < 5)
	{
		func_65(uParam0, iVar14);
		func_56(uParam0, iVar14);
		iVar14++;
	}
}

void func_56(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	
	if (!unk_0x90F6E2F6488B98BA((uParam0[iParam1 /*52*/])->f_5))
	{
		if (unk_0xE2D0C323A1AE5D85((uParam0[iParam1 /*52*/])->f_11, 0))
		{
			func_64(uParam0, iParam1);
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = func_63(uParam0, iParam1, iVar0);
		switch (iVar1)
		{
			case 0:
				if (unk_0x90F6E2F6488B98BA(func_62(uParam0, iParam1, iVar0)))
				{
					iVar2 = func_61(uParam0, iParam1, iVar0);
					iVar3 = func_59(uParam0, iParam1);
					if (func_33((uParam0[iParam1 /*52*/])->f_14, 0f, 0f, 0f, 0))
					{
						if (!unk_0x90F6E2F6488B98BA(uParam0->f_273))
						{
							if (!unk_0x90F6E2F6488B98BA(uParam0->f_274))
							{
								if (unk_0x4262B4DCEADC2695(unk_0x15CAA6D7B11F1A7C(iVar3)))
								{
									if (unk_0xAB793EA186AB8DAA(iVar3, -1, 0) == iVar2)
									{
										func_58(uParam0, iParam1, iVar0, 5);
									}
									else
									{
										func_58(uParam0, iParam1, iVar0, 1);
									}
								}
								else
								{
									func_58(uParam0, iParam1, iVar0, 1);
								}
							}
							else
							{
								func_58(uParam0, iParam1, iVar0, 1);
							}
						}
						else
						{
							func_58(uParam0, iParam1, iVar0, 3);
						}
					}
					else if (iVar0 == 0)
					{
						func_58(uParam0, iParam1, iVar0, 4);
					}
					else
					{
						func_58(uParam0, iParam1, iVar0, 1);
					}
				}
				break;
			
			case 4:
				iVar2 = func_61(uParam0, iParam1, iVar0);
				if (!unk_0xF68107C40359970C(iVar2))
				{
					if (!unk_0x174B84F6B78D6CA7(iVar2))
					{
						func_58(uParam0, iParam1, iVar0, 1);
					}
					else
					{
						Var4 = { unk_0x6B62510F212526DC(iVar2, 1) };
						if (!func_33((uParam0[iParam1 /*52*/])->f_14, 0f, 0f, 0f, 0))
						{
							if (vdist2(Var4, (uParam0[iParam1 /*52*/])->f_14) < (8f * 8f))
							{
								func_58(uParam0, iParam1, iVar0, 1);
							}
						}
					}
				}
				break;
			
			case 1:
				if (func_57(uParam0, iParam1))
				{
					func_58(uParam0, iParam1, iVar0, 2);
				}
				break;
			
			case 3:
				if (func_57(uParam0, iParam1))
				{
					func_58(uParam0, iParam1, iVar0, 2);
				}
				break;
			
			case 5:
				if (func_57(uParam0, iParam1))
				{
					func_58(uParam0, iParam1, iVar0, 2);
				}
				break;
		}
		iVar0++;
	}
}

bool func_57(var uParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(uParam0->f_268, iParam1);
}

void func_58(var uParam0, int iParam1, int iParam2, int iParam3)
{
	(uParam0[iParam1 /*52*/])->f_6[iParam2] = iParam3;
}

int func_59(var uParam0, int iParam1)
{
	return unk_0xA5677134B9672173(func_60(uParam0, iParam1));
}

var func_60(var uParam0, int iParam1)
{
	return (uParam0[iParam1 /*52*/])->f_5;
}

int func_61(var uParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	if (unk_0x90F6E2F6488B98BA(func_62(uParam0, iParam1, iParam2)))
	{
		uVar0 = unk_0x8AF984152F749D80(func_62(uParam0, iParam1, iParam2));
	}
	return uVar0;
}

var func_62(var uParam0, int iParam1, int iParam2)
{
	return (*uParam0[iParam1 /*52*/])[iParam2];
}

var func_63(var uParam0, int iParam1, int iParam2)
{
	return (uParam0[iParam1 /*52*/])->f_6[iParam2];
}

void func_64(var uParam0, int iParam1)
{
	if (unk_0xE2D0C323A1AE5D85((uParam0[iParam1 /*52*/])->f_11, 0))
	{
		(uParam0[iParam1 /*52*/])->f_11 = 0;
		(uParam0[iParam1 /*52*/])->f_13 = -1;
		(uParam0[iParam1 /*52*/])->f_6[0] = 0;
		(uParam0[iParam1 /*52*/])->f_6[1] = 0;
		(uParam0[iParam1 /*52*/])->f_6[2] = 0;
		(uParam0[iParam1 /*52*/])->f_6[3] = 0;
		func_71(&((uParam0[iParam1 /*52*/])->f_50));
	}
}

void func_65(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xA1087A6350CD9244(iVar1);
		if (unk_0x0D01086B38EC256F(iVar2))
		{
			if (!func_39(iVar2, 0))
			{
				if (unk_0x976D40337FCB1481(iVar2))
				{
					if (!bVar0)
					{
						if (func_68(iVar2, 1, 1))
						{
							bVar0 = true;
						}
					}
					if (!unk_0xE2D0C323A1AE5D85(uParam0->f_268, iParam1))
					{
						if (unk_0xE2D0C323A1AE5D85(Global_1893548[iVar1 /*600*/].f_11.f_445, iParam1))
						{
							unk_0xCED9E32812D6C7C7(&(uParam0->f_268), iParam1);
						}
					}
				}
			}
		}
		iVar1++;
	}
	if (bVar0)
	{
		if (!func_99(uParam0))
		{
			func_67(uParam0);
		}
	}
	else if (func_99(uParam0))
	{
		func_66(uParam0);
	}
}

void func_66(var uParam0)
{
	if (unk_0xE2D0C323A1AE5D85(uParam0->f_269, 1))
	{
		unk_0xB0550BC91B0159D6(&(uParam0->f_269), 1);
	}
}

void func_67(var uParam0)
{
	if (!unk_0xE2D0C323A1AE5D85(uParam0->f_269, 1))
	{
		unk_0xCED9E32812D6C7C7(&(uParam0->f_269), 1);
	}
}

int func_68(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 != func_24())
	{
		if (unk_0x976D40337FCB1481(iParam0))
		{
			iVar0 = unk_0x32F47FD509BB6D38(iParam0);
			if (unk_0x81F82FFBED0CACCA(iVar0))
			{
				if (!unk_0xF68107C40359970C(unk_0x407E03586628E458(iParam0)))
				{
					if (bParam2)
					{
						if (unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_11.f_445.f_1, 2))
						{
							return 1;
						}
					}
					if (bParam1)
					{
						if (unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_11.f_445.f_1, 1))
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

void func_69(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_70(uParam0, 2);
			break;
		
		case 1:
			func_70(uParam0, 3);
			break;
	}
}

void func_70(var uParam0, int iParam1)
{
	if (unk_0xE2D0C323A1AE5D85(uParam0->f_269, iParam1))
	{
		unk_0xB0550BC91B0159D6(&(uParam0->f_269), iParam1);
	}
}

void func_71(var uParam0)
{
	uParam0->f_1 = 0;
}

var func_72(var uParam0)
{
	return uParam0->f_1;
}

void func_73(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_101(uParam0, 2);
			break;
		
		case 1:
			func_101(uParam0, 3);
			break;
	}
}

int func_74(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x90F6E2F6488B98BA(func_60(uParam0, iVar0)))
		{
			if ((uParam0[iVar0 /*52*/])->f_12 == iParam1)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

var func_75(var uParam0)
{
	return uParam0->f_3;
}

int func_76(var uParam0, var uParam1, struct<3> Param2, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (uParam1->f_41[iVar0] != 0)
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar2 = uParam0->f_267;
	if (!unk_0x90F6E2F6488B98BA((uParam0[iVar2 /*52*/])->f_5))
	{
		if (unk_0x993E56B8150C834F(1))
		{
			if (func_50(iParam5))
			{
				if (func_82(&((uParam0[iVar2 /*52*/])->f_5), iParam5, Param2, fParam3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
				{
					iVar1 = unk_0xA5677134B9672173((uParam0[iVar2 /*52*/])->f_5);
					unk_0xAFE1B52F0DE91595(iVar1, 1);
					unk_0x05EAB38F5AC8DA1D(iVar1, 0);
					unk_0x1AF469C927341A18(iVar1, 1);
					unk_0x371D594409A68A18(iVar1, 1, 1, 0);
					unk_0x9F65B3BAFA302A65(iVar1, 1084227584);
					unk_0xB2D5451CC5606248(iVar1, 20f);
					if (iParam5 != joaat("seashark"))
					{
						if (uParam1->f_115)
						{
							unk_0x3B2646B62E7BBE11(iVar1, 2);
						}
					}
					unk_0x484CCFB803FCFD80(iVar1, 1);
					unk_0x28C1AA9789AB5554(iVar1, 1);
					if (uParam1->f_55[iVar2])
					{
						unk_0x58DAFDEB2F46A5EA(iVar1, uParam1->f_79[iVar2], uParam1->f_85[iVar2]);
					}
					if (uParam1->f_61[iVar2])
					{
						unk_0x952B5201CC721090(iVar1, uParam1->f_91[iVar2], uParam1->f_97[iVar2]);
					}
					if (uParam1->f_67[iVar2])
					{
						unk_0x63140C89AD7622EF(iVar1, uParam1->f_103[iVar2]);
					}
					if (uParam1->f_73[iVar2])
					{
						unk_0x63140C89AD7622EF(iVar1, uParam1->f_109[iVar2]);
					}
					if (!uParam1->f_55[iVar2])
					{
						if (iParam5 == joaat("bati") || iParam5 == joaat("fugitive"))
						{
							unk_0x58DAFDEB2F46A5EA(iVar1, 0, 0);
						}
					}
					func_81(iVar1, iVar2);
					if (unk_0x6BD06F4780EAC5DD("Not_Allow_As_Saved_Veh", 3))
					{
						unk_0x05B874E9ABFF72B4(iVar1, "Not_Allow_As_Saved_Veh", 1);
					}
					if (unk_0x6BD06F4780EAC5DD("MPBitset", 3))
					{
						if (unk_0xF2549FF74D64B720(iVar1, "MPBitset"))
						{
							iVar3 = unk_0xC3B76795ECBDEF41(iVar1, "MPBitset");
						}
						unk_0xCED9E32812D6C7C7(&iVar3, 10);
						unk_0xCED9E32812D6C7C7(&iVar3, 11);
						unk_0x05B874E9ABFF72B4(iVar1, "MPBitset", iVar3);
					}
				}
			}
		}
	}
	uVar6 = iParam6;
	iVar7 = joaat("weapon_microsmg");
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (!unk_0x90F6E2F6488B98BA((*uParam0[iVar2 /*52*/])[iVar0]))
		{
			if (unk_0xA777DF215CCFCC77(1))
			{
				if (uParam1->f_41[iVar0] != 0)
				{
					iParam6 = uParam1->f_41[iVar0];
				}
				else
				{
					iParam6 = uVar6;
				}
				if (func_50(iParam6))
				{
					if (unk_0x90F6E2F6488B98BA((uParam0[iVar2 /*52*/])->f_5))
					{
						if (!unk_0x07B2F8356DC13CF4((uParam0[iVar2 /*52*/])->f_5))
						{
							unk_0xC31EECA11005273C((uParam0[iVar2 /*52*/])->f_5);
						}
						if (unk_0x07B2F8356DC13CF4((uParam0[iVar2 /*52*/])->f_5))
						{
							iVar5 = (iVar0 - 1);
							if (func_80(uParam0[iVar2 /*52*/][iVar0], (uParam0[iVar2 /*52*/])->f_5, 22, iParam6, iVar5, 1, 1, 1))
							{
								iVar4 = unk_0x8AF984152F749D80((*uParam0[iVar2 /*52*/])[iVar0]);
								unk_0x50274A7EACA3133A(iVar4, 1);
								unk_0xA5D600C274CC186F(iVar4, 1);
								if (unk_0xD2B5B1C8FC84FE0F(iParam5))
								{
								}
								if (iVar5 == -1 && uParam1->f_54)
								{
									iVar7 = joaat("weapon_pistol");
								}
								else if (uParam1->f_53 != 0)
								{
									iVar7 = uParam1->f_53;
								}
								else
								{
									iVar7 = joaat("weapon_microsmg");
								}
								unk_0x9521FB98DB6DDF50(iVar4, iVar7, 999999999, 1, 1);
								unk_0xD6A76BAB45A4B460(iVar4, 42, 1);
								unk_0x25D0F99524B26091(iVar4, 1);
								unk_0xBC12D08EE7559CCD(iVar4, 43, 1);
								unk_0x7DCB4594ACF18DA7(iVar4, 1);
								unk_0xD6A76BAB45A4B460(iVar4, 146, 1);
								unk_0xABC2CA6F28903308(iVar4, 1);
								unk_0xFF4BEB6CFF55A013(iVar4, uParam1->f_34);
								unk_0xBC12D08EE7559CCD(iVar4, 2, 1);
								unk_0xBC12D08EE7559CCD(iVar4, 64, 0);
								unk_0xBC12D08EE7559CCD(iVar4, 66, 0);
								unk_0xBC12D08EE7559CCD(iVar4, 1, 1);
								unk_0xBC12D08EE7559CCD(iVar4, 53, 1);
								unk_0xB11C0CF5CCDFE10A(iVar4, 3);
								if (func_79(uParam0, 0))
								{
									unk_0xD6A76BAB45A4B460(iVar4, 342, 1);
								}
								if (func_79(uParam0, 2))
								{
									unk_0xBC12D08EE7559CCD(iVar4, 3, 0);
								}
								if (uParam0->f_271 <= 0)
								{
									unk_0x348A212511C78DBF(iVar4, uParam1->f_4);
								}
								else
								{
									func_78(&iVar4, uParam0->f_271);
								}
								if (unk_0x4262B4DCEADC2695(iParam5))
								{
									if (iVar5 == -1 || iVar5 == 0)
									{
										if (uParam1->f_4 > 10)
										{
											unk_0x348A212511C78DBF(iVar4, 10);
										}
										unk_0xC97BA48BC273A1F3(iVar4, 80);
										uVar8 = Global_262145.f_11618;
										uVar9 = Global_262145.f_11619;
										uVar10 = Global_262145.f_11620;
										uVar11 = Global_262145.f_11621;
										unk_0x9DC5CCC4C16546CB(iVar4, 23, uVar8);
										unk_0x9DC5CCC4C16546CB(iVar4, 24, uVar9);
										unk_0x9DC5CCC4C16546CB(iVar4, 25, uVar10);
										unk_0x9DC5CCC4C16546CB(iVar4, 26, uVar11);
									}
								}
								if (!unk_0x90F6E2F6488B98BA(uParam0->f_273))
								{
									unk_0x9DC5CCC4C16546CB(iVar4, 17, 2f);
									unk_0x99BB016876EFEC17(iVar4, 1f);
								}
								func_77(uParam0, iParam6, iVar2, iVar0);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	if (!unk_0x90F6E2F6488B98BA((uParam0[iVar2 /*52*/])->f_5))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (!unk_0x90F6E2F6488B98BA((*uParam0[iVar2 /*52*/])[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_77(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = unk_0x8AF984152F749D80((*uParam0[iParam2 /*52*/])[iParam3]);
	if (iParam1 == joaat("g_m_importexport_01"))
	{
		switch ((iParam2 % 5))
		{
			case 0:
				switch (iParam3)
				{
					case 0:
						unk_0xE3752B10DC995E95(iVar0, 0, 0, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 2, 0, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 3, 0, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 4, 0, 2, 0);
						unk_0xD9D122A54FFE62B8(iVar0, 0, 0, 0, false);
						break;
					
					case 1:
						unk_0xE3752B10DC995E95(iVar0, 0, 1, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 2, 1, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 3, 1, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 4, 1, 0, 0);
						unk_0xD9D122A54FFE62B8(iVar0, 1, 0, 0, false);
						break;
					
					default:
						unk_0xE3752B10DC995E95(iVar0, 0, 2, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 2, 2, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 3, 2, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 4, 2, 0, 0);
						break;
				}
				break;
			
			case 1:
				switch (iParam3)
				{
					case 0:
						unk_0xE3752B10DC995E95(iVar0, 0, 2, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 2, 2, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 3, 2, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 4, 2, 0, 0);
						break;
					
					case 1:
						unk_0xE3752B10DC995E95(iVar0, 0, 3, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 2, 3, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 3, 3, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 4, 3, 0, 0);
						break;
					
					default:
						unk_0xE3752B10DC995E95(iVar0, 0, 4, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 2, 4, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 3, 4, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 4, 4, 0, 0);
						unk_0xD9D122A54FFE62B8(iVar0, 0, 1, 0, false);
						break;
				}
				break;
			
			case 2:
				switch (iParam3)
				{
					case 0:
						unk_0xE3752B10DC995E95(iVar0, 0, 4, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 2, 4, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 3, 4, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 4, 4, 0, 0);
						unk_0xD9D122A54FFE62B8(iVar0, 0, 1, 0, false);
						break;
					
					case 1:
						unk_0xE3752B10DC995E95(iVar0, 0, 0, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 2, 0, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 3, 0, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 4, 0, 2, 0);
						unk_0xD9D122A54FFE62B8(iVar0, 0, 0, 0, false);
						break;
					
					default:
						unk_0xE3752B10DC995E95(iVar0, 0, 1, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 2, 1, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 3, 1, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 4, 1, 0, 0);
						unk_0xD9D122A54FFE62B8(iVar0, 1, 0, 0, false);
						break;
				}
				break;
			
			case 3:
				switch (iParam3)
				{
					case 0:
						unk_0xE3752B10DC995E95(iVar0, 0, 1, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 2, 1, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 3, 1, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 4, 1, 0, 0);
						unk_0xD9D122A54FFE62B8(iVar0, 1, 0, 0, false);
						break;
					
					case 1:
						unk_0xE3752B10DC995E95(iVar0, 0, 2, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 2, 2, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 3, 2, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 4, 2, 0, 0);
						break;
					
					default:
						unk_0xE3752B10DC995E95(iVar0, 0, 3, 2, 0);
						unk_0xE3752B10DC995E95(iVar0, 2, 3, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 3, 3, 2, 0);
						unk_0xE3752B10DC995E95(iVar0, 4, 3, 0, 0);
						break;
				}
				break;
			
			case 4:
				switch (iParam3)
				{
					case 0:
						unk_0xE3752B10DC995E95(iVar0, 0, 3, 2, 0);
						unk_0xE3752B10DC995E95(iVar0, 2, 3, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 3, 3, 2, 0);
						unk_0xE3752B10DC995E95(iVar0, 4, 3, 0, 0);
						break;
					
					case 1:
						unk_0xE3752B10DC995E95(iVar0, 0, 0, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 2, 0, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 3, 0, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 4, 0, 2, 0);
						unk_0xD9D122A54FFE62B8(iVar0, 0, 0, 0, false);
						break;
					
					default:
						unk_0xE3752B10DC995E95(iVar0, 0, 4, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 2, 4, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 3, 4, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 4, 4, 0, 0);
						unk_0xD9D122A54FFE62B8(iVar0, 0, 1, 0, false);
						break;
				}
				break;
		}
	}
	else if (iParam1 == joaat("g_f_importexport_01"))
	{
		switch ((iParam2 % 5))
		{
			case 0:
				switch (iParam3)
				{
					case 0:
						unk_0xE3752B10DC995E95(iVar0, 0, 0, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 2, 0, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 3, 0, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 4, 0, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 8, 0, 0, 0);
						break;
					
					case 1:
						unk_0xE3752B10DC995E95(iVar0, 0, 1, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 2, 1, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 3, 1, 1, 0);
						unk_0xE3752B10DC995E95(iVar0, 4, 1, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 8, 1, 0, 0);
						break;
					
					default:
						unk_0xE3752B10DC995E95(iVar0, 0, 2, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 2, 2, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 3, 2, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 4, 2, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 8, 2, 0, 0);
						break;
				}
				break;
			
			case 1:
				switch (iParam3)
				{
					case 0:
						unk_0xE3752B10DC995E95(iVar0, 0, 2, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 2, 2, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 3, 2, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 4, 2, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 8, 2, 0, 0);
						break;
					
					case 1:
						unk_0xE3752B10DC995E95(iVar0, 0, 3, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 2, 3, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 3, 3, 3, 0);
						unk_0xE3752B10DC995E95(iVar0, 4, 3, 3, 0);
						unk_0xE3752B10DC995E95(iVar0, 8, 3, 0, 0);
						break;
					
					default:
						unk_0xE3752B10DC995E95(iVar0, 0, 4, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 2, 4, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 3, 4, 1, 0);
						unk_0xE3752B10DC995E95(iVar0, 4, 4, 2, 0);
						unk_0xE3752B10DC995E95(iVar0, 8, 4, 0, 0);
						break;
				}
				break;
			
			case 2:
				switch (iParam3)
				{
					case 0:
						unk_0xE3752B10DC995E95(iVar0, 0, 4, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 2, 4, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 3, 4, 1, 0);
						unk_0xE3752B10DC995E95(iVar0, 4, 4, 2, 0);
						unk_0xE3752B10DC995E95(iVar0, 8, 4, 0, 0);
						break;
					
					case 1:
						unk_0xE3752B10DC995E95(iVar0, 0, 0, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 2, 0, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 3, 0, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 4, 0, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 8, 0, 0, 0);
						break;
					
					default:
						unk_0xE3752B10DC995E95(iVar0, 0, 1, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 2, 1, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 3, 1, 1, 0);
						unk_0xE3752B10DC995E95(iVar0, 4, 1, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 8, 1, 0, 0);
						break;
				}
				break;
			
			case 3:
				switch (iParam3)
				{
					case 0:
						unk_0xE3752B10DC995E95(iVar0, 0, 1, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 2, 1, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 3, 1, 1, 0);
						unk_0xE3752B10DC995E95(iVar0, 4, 1, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 8, 1, 0, 0);
						break;
					
					case 1:
						unk_0xE3752B10DC995E95(iVar0, 0, 2, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 2, 2, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 3, 2, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 4, 2, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 8, 2, 0, 0);
						break;
					
					default:
						unk_0xE3752B10DC995E95(iVar0, 0, 3, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 2, 3, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 3, 3, 3, 0);
						unk_0xE3752B10DC995E95(iVar0, 4, 3, 3, 0);
						unk_0xE3752B10DC995E95(iVar0, 8, 3, 0, 0);
						break;
				}
				break;
			
			case 4:
				switch (iParam3)
				{
					case 0:
						unk_0xE3752B10DC995E95(iVar0, 0, 3, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 2, 3, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 3, 3, 3, 0);
						unk_0xE3752B10DC995E95(iVar0, 4, 3, 3, 0);
						unk_0xE3752B10DC995E95(iVar0, 8, 3, 0, 0);
						break;
					
					case 1:
						unk_0xE3752B10DC995E95(iVar0, 0, 0, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 2, 0, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 3, 0, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 4, 0, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 8, 0, 0, 0);
						break;
					
					default:
						unk_0xE3752B10DC995E95(iVar0, 0, 4, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 2, 4, 0, 0);
						unk_0xE3752B10DC995E95(iVar0, 3, 4, 1, 0);
						unk_0xE3752B10DC995E95(iVar0, 4, 4, 2, 0);
						unk_0xE3752B10DC995E95(iVar0, 8, 4, 0, 0);
						break;
				}
				break;
			}
	}
}

void func_78(int iParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 1f;
	if (!unk_0xF68107C40359970C(*iParam0))
	{
		if (iParam1 == -1)
		{
			iVar2 = func_21();
		}
		else
		{
			iVar2 = iParam1;
		}
		if (iVar2 >= 1)
		{
			switch (iVar2)
			{
				case 1:
					unk_0x348A212511C78DBF(*iParam0, Global_262145.f_18413);
					unk_0xC97BA48BC273A1F3(*iParam0, Global_262145.f_18419);
					unk_0xBC12D08EE7559CCD(*iParam0, 24, 0);
					unk_0x395228F7A14C6543(*iParam0, 0);
					fVar0 = Global_262145.f_18416;
					break;
				
				case 2:
					unk_0x348A212511C78DBF(*iParam0, Global_262145.f_18414);
					unk_0xC97BA48BC273A1F3(*iParam0, Global_262145.f_18420);
					unk_0xBC12D08EE7559CCD(*iParam0, 24, 0);
					fVar0 = Global_262145.f_18417;
					break;
				
				case 3:
					unk_0x348A212511C78DBF(*iParam0, Global_262145.f_18415);
					unk_0xC97BA48BC273A1F3(*iParam0, Global_262145.f_18421);
					fVar0 = Global_262145.f_18418;
					break;
			}
			iVar1 = round((100f + (100f * fVar0)));
			if (unk_0x0CF63873D754B965(*iParam0) > iVar1)
			{
				unk_0x8FBB27C41710F120(*iParam0, iVar1);
				unk_0xF160248D9083ED0C(*iParam0, iVar1, 0);
			}
		}
	}
}

bool func_79(var uParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(uParam0->f_285, iParam1);
}

int func_80(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0xA777DF215CCFCC77(1))
	{
		return 0;
	}
	if (!unk_0xCCDCD6672DAE6835(uParam1))
	{
		return 0;
	}
	if (!unk_0x55A0C756C4A8220C(unk_0xA5677134B9672173(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xED28EE4BE581A032(unk_0x487C17B41938052C(unk_0xA5677134B9672173(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0xCCDCD6672DAE6835(*uParam0))
	{
		unk_0x398C962F550CF3B4(unk_0x8AF984152F749D80(*uParam0), iParam7);
		if (unk_0xD64C90C3F536F963(unk_0x8AF984152F749D80(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x4C6E9D70687FCDCE(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

void func_81(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 % 2);
	iVar1 = unk_0x15CAA6D7B11F1A7C(iParam0);
	switch (iVar1)
	{
		case joaat("banshee2"):
			unk_0x3C1BCE3438ECBFC0(iParam0, 0);
			switch (iVar0)
			{
				case 0:
					unk_0x58DAFDEB2F46A5EA(iParam0, 27, 27);
					unk_0x952B5201CC721090(iParam0, 27, 156);
					unk_0x63140C89AD7622EF(iParam0, 31);
					unk_0xCE01344F3CABBA9D(iParam0, 134);
					unk_0x0061B7C9351B41ED(iParam0, 0, 2, false);
					unk_0x0061B7C9351B41ED(iParam0, 1, 1, false);
					unk_0x0061B7C9351B41ED(iParam0, 48, 2, false);
					unk_0x0061B7C9351B41ED(iParam0, 23, 40, false);
					break;
				
				case 1:
					unk_0x58DAFDEB2F46A5EA(iParam0, 36, 36);
					unk_0x952B5201CC721090(iParam0, 88, 156);
					unk_0x63140C89AD7622EF(iParam0, 31);
					unk_0xCE01344F3CABBA9D(iParam0, 134);
					unk_0x0061B7C9351B41ED(iParam0, 0, 1, false);
					unk_0x0061B7C9351B41ED(iParam0, 3, 1, false);
					unk_0x0061B7C9351B41ED(iParam0, 1, 2, false);
					unk_0x0061B7C9351B41ED(iParam0, 48, 5, false);
					unk_0x0061B7C9351B41ED(iParam0, 23, 46, false);
					break;
			}
			break;
		
		case joaat("sultanrs"):
			unk_0x3C1BCE3438ECBFC0(iParam0, 0);
			switch (iVar0)
			{
				case 0:
					unk_0x58DAFDEB2F46A5EA(iParam0, 92, 92);
					unk_0x952B5201CC721090(iParam0, 88, 158);
					unk_0x63140C89AD7622EF(iParam0, 31);
					unk_0xCE01344F3CABBA9D(iParam0, 134);
					unk_0x0061B7C9351B41ED(iParam0, 0, 10, false);
					unk_0x0061B7C9351B41ED(iParam0, 7, 0, false);
					unk_0x0061B7C9351B41ED(iParam0, 1, 8, false);
					unk_0x0061B7C9351B41ED(iParam0, 23, 28, false);
					unk_0x0061B7C9351B41ED(iParam0, 48, 3, false);
					break;
				
				case 1:
					unk_0x58DAFDEB2F46A5EA(iParam0, 28, 28);
					unk_0x952B5201CC721090(iParam0, 27, 0);
					unk_0x63140C89AD7622EF(iParam0, 31);
					unk_0xCE01344F3CABBA9D(iParam0, 134);
					unk_0x0061B7C9351B41ED(iParam0, 0, 11, false);
					unk_0x0061B7C9351B41ED(iParam0, 7, 7, false);
					unk_0x0061B7C9351B41ED(iParam0, 1, 10, false);
					unk_0x0061B7C9351B41ED(iParam0, 23, 1, false);
					unk_0x0061B7C9351B41ED(iParam0, 48, 4, false);
					break;
			}
			break;
	}
}

int func_82(var uParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x61ADF697DF551DA6(iParam1))
	{
		return 0;
	}
	if (!unk_0x993E56B8150C834F(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		unk_0x02B222EADC9DC566(Param2, fVar0, 0, 0, 0, 0, 0, 0, 0);
	}
	iVar1 = unk_0xBA715A7BEBA5A1F9(iParam1, Param2, fParam3, iParam5, iParam4, iParam12);
	if (unk_0xE5965CDF24F93A9F(iVar1))
	{
		*uParam0 = unk_0xA08CC064DAC564A5(iVar1);
		Global_2810287.f_6635 = iVar1;
		if (unk_0xCCDCD6672DAE6835(*uParam0))
		{
			if (bParam13)
			{
				unk_0x229DD509EDB2FBD4(iVar1, 1);
			}
			unk_0x398C962F550CF3B4(iVar1, iParam8);
			if (unk_0xD64C90C3F536F963(iVar1))
			{
				if (bParam6)
				{
					unk_0x4C6E9D70687FCDCE(*uParam0, 1);
				}
				else
				{
					unk_0x4C6E9D70687FCDCE(*uParam0, 0);
				}
				if (bParam11)
				{
					unk_0xAEBA172874A3DEFC(*uParam0, unk_0x9E2D6C50374FCFA9(), 1);
				}
			}
			unk_0x4FA753674D81BF2E(iVar1, bParam7);
			unk_0x41EC6688527C1C31(iVar1, 1);
			if (bParam10)
			{
				unk_0xA4FCB26551D216B8(iVar1);
				unk_0x59492C1B3DB11BDE(iVar1, 5, 5, 1f);
			}
			func_83(Param2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_83(struct<3> Param0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_84(unk_0x9E2D6C50374FCFA9(), Param0, iParam2) > -1)
	{
		if ((Global_2667222.f_2919[1 /*6*/].f_5 == iParam3 && Global_2667222.f_2919[1 /*6*/].f_4 == iParam2) && vdist(Global_2667222.f_2919[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2667222.f_2919[iVar0 /*6*/] = { Global_2667222.f_2919[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2667222.f_2919[1 /*6*/] = { Param0 };
		Global_2667222.f_2919[1 /*6*/].f_3 = uParam1;
		Global_2667222.f_2919[1 /*6*/].f_4 = iParam2;
		Global_2667222.f_2919[1 /*6*/].f_5 = iParam3;
	}
}

int func_84(int iParam0, struct<3> Param1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				Var2 = { Param1 };
				if (unk_0x48053974ED6F63CE((Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (vdist(Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

var func_85(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = uParam0->f_267;
	if (uParam1->f_46[iVar0] > 0)
	{
		return uParam1->f_46[iVar0];
	}
	return uParam1->f_2;
}

var func_86(var uParam0, var uParam1)
{
	int iVar0;
	
	switch (uParam0->f_270)
	{
		case 0:
			iVar0 = uParam0->f_267;
			if (uParam1->f_35[iVar0] != 0)
			{
				if (unk_0x54E30A65F4FA4962())
				{
					if (uParam0->f_293 != uParam1->f_35[iVar0])
					{
						uParam0->f_293 = uParam1->f_35[iVar0];
					}
				}
				return uParam1->f_35[iVar0];
			}
			else
			{
				return uParam1->f_29;
			}
			break;
		
		case 1:
			return uParam1->f_30;
	}
	return uParam1->f_29;
}

int func_87(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar1 == -1)
		{
			if (!unk_0x90F6E2F6488B98BA((uParam0[iVar0 /*52*/])->f_5))
			{
				if (!unk_0xE2D0C323A1AE5D85((uParam0[iVar0 /*52*/])->f_11, 0))
				{
					iVar1 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_88(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((uParam0[iVar0 /*52*/])->f_13 == iParam1)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_89(var uParam0)
{
	return *uParam0;
}

int func_90(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_102(uParam0, 2);
		
		case 1:
			return func_102(uParam0, 3);
		
		default:
	}
	return 0;
}

void func_91(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = -1;
	if (unk_0x90F6E2F6488B98BA(uParam0->f_273))
	{
		iVar1 = func_98(uParam0);
	}
	else if (unk_0x90F6E2F6488B98BA(uParam0->f_274))
	{
		iVar1 = func_97(uParam0);
	}
	else if (!func_33((uParam0[0 /*52*/])->f_14, 0f, 0f, 0f, 0))
	{
		iVar1 = func_96(uParam0);
	}
	else
	{
		iVar0 = func_95(uParam0);
		if (iVar0 > -1)
		{
			if (iVar1 == -1)
			{
				if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(iVar0)))
				{
					if (func_94(uParam0, iVar0, 1, 1))
					{
						iVar2 = func_93(uParam0, iVar0);
						if (!func_90(uParam0, iVar2))
						{
							iVar1 = iVar0;
						}
					}
				}
			}
		}
	}
	uParam0->f_266 = iVar1;
	uParam0->f_270 = func_92(uParam0);
	if (uParam0->f_266 > -1)
	{
	}
}

int func_92(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0->f_266;
	if (func_94(uParam0, iVar0, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_93(var uParam0, int iParam1)
{
	int iVar0;
	
	if (func_94(uParam0, iParam1, 1, 0))
	{
		iVar0 = 0;
	}
	else if (func_94(uParam0, iParam1, 0, 1))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_94(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 > -1)
	{
		if (func_88(uParam0, iParam1) <= 5)
		{
			return func_68(unk_0x6B01934FA503547F(unk_0x54F800F95142C750(iParam1)), bParam2, bParam3);
		}
	}
	return 0;
}

int func_95(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	iVar0 = -1;
	iVar1 = 99;
	iVar3 = 0;
	while (iVar3 < unk_0x5D79167FED95F0B0())
	{
		if (!bVar4)
		{
			if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(iVar3)))
			{
				if (func_94(uParam0, iVar3, 1, 1))
				{
					iVar2 = func_88(uParam0, iVar3);
					if (iVar2 == 0)
					{
						bVar4 = true;
						iVar0 = iVar3;
					}
					else if (iVar2 < iVar1)
					{
						iVar0 = iVar3;
						iVar1 = iVar2;
						if (func_94(uParam0, iVar3, 1, 1))
						{
						}
					}
				}
			}
		}
		iVar3++;
	}
	return iVar0;
}

int func_96(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	iVar1 = -1;
	fVar4 = 1E+10f;
	iVar0 = 0;
	while (iVar0 < unk_0x5D79167FED95F0B0())
	{
		iVar2 = unk_0x54F800F95142C750(iVar0);
		if (unk_0x81F82FFBED0CACCA(iVar2))
		{
			iVar3 = unk_0x6B01934FA503547F(iVar2);
			fVar5 = vdist2(unk_0x6B62510F212526DC(unk_0x407E03586628E458(iVar3), 0), (uParam0[0 /*52*/])->f_14);
			if (fVar5 < fVar4)
			{
				fVar4 = fVar5;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_97(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	iVar1 = -1;
	fVar4 = 1E+10f;
	iVar0 = 0;
	while (iVar0 < unk_0x5D79167FED95F0B0())
	{
		iVar2 = unk_0x54F800F95142C750(iVar0);
		if (unk_0x81F82FFBED0CACCA(iVar2))
		{
			iVar3 = unk_0x6B01934FA503547F(iVar2);
			fVar5 = vdist2(unk_0x6B62510F212526DC(unk_0x407E03586628E458(iVar3), 0), unk_0x6B62510F212526DC(unk_0xA5677134B9672173(uParam0->f_274), 0));
			if (fVar5 < fVar4)
			{
				fVar4 = fVar5;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_98(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	iVar1 = -1;
	fVar4 = 1E+10f;
	iVar0 = 0;
	while (iVar0 < unk_0x5D79167FED95F0B0())
	{
		iVar2 = unk_0x54F800F95142C750(iVar0);
		if (unk_0x81F82FFBED0CACCA(iVar2))
		{
			iVar3 = unk_0x6B01934FA503547F(iVar2);
			fVar5 = vdist2(unk_0x6B62510F212526DC(unk_0x407E03586628E458(iVar3), 0), unk_0x6B62510F212526DC(unk_0x8AF984152F749D80(uParam0->f_273), 0));
			if (fVar5 < fVar4)
			{
				fVar4 = fVar5;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_99(var uParam0)
{
	return func_102(uParam0, 1);
}

void func_100(var uParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x90F6E2F6488B98BA(uParam1->f_32))
	{
		if (uParam0->f_273 != uParam1->f_32)
		{
			uParam0->f_273 = uParam1->f_32;
		}
	}
	if (unk_0x90F6E2F6488B98BA(uParam1->f_33))
	{
		if (uParam0->f_274 != uParam1->f_33)
		{
			uParam0->f_274 = uParam1->f_33;
		}
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_33(uParam1->f_10[iVar0 /*3*/], 0f, 0f, 0f, 0))
		{
			if (!func_33(uParam1->f_10[iVar0 /*3*/], (uParam0[iVar0 /*52*/])->f_14, 0))
			{
				(uParam0[iVar0 /*52*/])->f_14 = { uParam1->f_10[iVar0 /*3*/] };
			}
		}
		iVar0++;
	}
	if (!func_33(uParam1->f_26, 0f, 0f, 0f, 0))
	{
		if (!func_33(uParam1->f_26, uParam0->f_275, 0))
		{
			uParam0->f_275 = { uParam1->f_26 };
		}
	}
	if (uParam1->f_5 > 0)
	{
		if (uParam0->f_271 != uParam1->f_5)
		{
			uParam0->f_271 = uParam1->f_5;
		}
	}
	if (uParam1->f_29 != 0)
	{
		if (uParam0->f_294 != uParam1->f_29)
		{
			uParam0->f_294 = uParam1->f_29;
		}
	}
	if (uParam0->f_285 != uParam1->f_52)
	{
		uParam0->f_285 = uParam1->f_52;
	}
	if (uParam0->f_281 != uParam1->f_9)
	{
		uParam0->f_281 = uParam1->f_9;
	}
}

void func_101(var uParam0, int iParam1)
{
	if (!unk_0xE2D0C323A1AE5D85(uParam0->f_269, iParam1))
	{
		unk_0xCED9E32812D6C7C7(&(uParam0->f_269), iParam1);
	}
}

bool func_102(var uParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(uParam0->f_269, iParam1);
}

int func_103(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_104(uParam0, bParam2, 0);
	if (unk_0x9315DBF7D972F07A() && !bParam2)
	{
		if (unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x320D1840B6DAA1CC(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_104(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x9315DBF7D972F07A() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x0A89FDFA763DCAED();
			}
			else
			{
				*uParam0 = unk_0xE75390F3CA208D5E();
			}
		}
		else
		{
			*uParam0 = unk_0x320D1840B6DAA1CC();
		}
		uParam0->f_1 = 1;
	}
}

bool func_105(var uParam0)
{
	return uParam0->f_1;
}

void func_106(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (!unk_0x54E30A65F4FA4962())
	{
		return;
	}
	unk_0xCED9E32812D6C7C7(&(Local_239.f_1[iVar0]), iVar1);
}

void func_107()
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	var uVar7;
	
	if (func_10())
	{
	}
	if (unk_0x54E30A65F4FA4962())
	{
		iVar0 = 0;
		while (iVar0 < 30)
		{
			switch (Local_239.f_10[iVar0 /*15*/].f_10)
			{
				case 0:
					if (unk_0x90F6E2F6488B98BA(Local_239.f_10[iVar0 /*15*/].f_1))
					{
						if (func_30(iVar0, 7))
						{
							Local_239.f_10[iVar0 /*15*/].f_10 = 11;
						}
						else if (func_30(iVar0, 1))
						{
							Local_239.f_10[iVar0 /*15*/].f_10 = 6;
						}
						else if (func_30(iVar0, 20))
						{
							Local_239.f_10[iVar0 /*15*/].f_10 = 7;
						}
						else if (func_30(iVar0, 15))
						{
							Local_239.f_10[iVar0 /*15*/].f_10 = 11;
							Local_239.f_1238 = Local_239.f_10[iVar0 /*15*/].f_1;
						}
					}
					break;
				
				case 13:
					if (((((Local_239.f_775 != 0 || Local_239.f_776 != 0) || Local_239.f_779 != 0) || Local_239.f_778 != 0) || unk_0xE2D0C323A1AE5D85(Local_327[unk_0xF1354995C6159A78() /*26*/].f_1, 8)) || func_3(13))
					{
						if (func_30(iVar0, 16))
						{
							Local_239.f_10[iVar0 /*15*/].f_10 = 7;
						}
						else
						{
							Local_239.f_10[iVar0 /*15*/].f_10 = 19;
						}
					}
					break;
				
				case 14:
					if (func_10())
					{
						Local_239.f_10[iVar0 /*15*/].f_10 = 15;
					}
					else if (unk_0x90F6E2F6488B98BA(Local_239.f_10[iVar0 /*15*/].f_1))
					{
						iVar4 = func_28(iVar0);
						if (!unk_0xF68107C40359970C(func_28(iVar0)))
						{
							if (unk_0x174B84F6B78D6CA7(func_28(iVar0)))
							{
								iVar3 = unk_0xB3FF0049C1FD38EC(iVar4, 0);
								iVar5 = Local_239.f_10[iVar0 /*15*/].f_11;
								Var1 = { func_117(Local_239.f_703, Local_239.f_704, iVar5) };
								fVar2 = unk_0x987A5F1E1A67E3C0(Var1, unk_0x6B62510F212526DC(iVar3, 0), 0);
								if (Local_239.f_10[iVar0 /*15*/].f_11 == func_116(Local_239.f_703, Local_239.f_704))
								{
									fVar6 = 2f;
								}
								else
								{
									fVar6 = 20f;
								}
								if (fVar2 < fVar6)
								{
									Local_239.f_10[iVar0 /*15*/].f_11++;
									if (Local_239.f_10[iVar0 /*15*/].f_11 == func_116(Local_239.f_703, Local_239.f_704))
									{
										func_106(22);
									}
									if (Local_239.f_10[iVar0 /*15*/].f_11 > func_115(Local_239.f_703, Local_239.f_704))
									{
										if (func_114(Local_239.f_703))
										{
											if (!func_3(9))
											{
												func_106(9);
											}
										}
									}
								}
							}
						}
					}
					break;
				
				case 19:
					if (func_10())
					{
						Local_239.f_10[iVar0 /*15*/].f_10 = 15;
					}
					else if (unk_0x90F6E2F6488B98BA(Local_239.f_10[iVar0 /*15*/].f_1))
					{
						if (!unk_0xF68107C40359970C(func_28(iVar0)))
						{
							if (!unk_0x174B84F6B78D6CA7(func_28(iVar0)))
							{
								Local_239.f_10[iVar0 /*15*/].f_10 = 7;
							}
						}
					}
					break;
				
				case 11:
					if (!func_30(iVar0, 12))
					{
						if (((func_3(13) || unk_0xE2D0C323A1AE5D85(Local_327[unk_0xF1354995C6159A78() /*26*/].f_1, 8)) || func_3(20)) || func_3(23))
						{
							if (func_113(iVar0))
							{
								if (!func_30(iVar0, 9))
								{
									if (!func_30(iVar0, 15))
									{
										Local_239.f_10[iVar0 /*15*/].f_10 = 6;
									}
									else
									{
										Local_239.f_10[iVar0 /*15*/].f_10 = 20;
									}
								}
								else
								{
									Local_239.f_10[iVar0 /*15*/].f_10 = 12;
								}
							}
						}
						else if (Local_239.f_780 != 0)
						{
							Local_239.f_10[iVar0 /*15*/].f_10 = 6;
						}
					}
					else if (((Local_239.f_775 != 0 || Local_239.f_776 != 0) || Local_239.f_779 != 0) || Local_239.f_778 != 0)
					{
						if (!func_30(iVar0, 9))
						{
							if (!func_30(iVar0, 15))
							{
								Local_239.f_10[iVar0 /*15*/].f_10 = 6;
							}
							else
							{
								Local_239.f_10[iVar0 /*15*/].f_10 = 20;
							}
						}
						else
						{
							Local_239.f_10[iVar0 /*15*/].f_10 = 12;
						}
					}
					break;
				
				case 8:
					if (func_3(6))
					{
						Local_239.f_10[iVar0 /*15*/].f_10 = 1;
					}
					else
					{
						func_110(iVar4, iVar0);
					}
					break;
				
				case 1:
					if (unk_0x90F6E2F6488B98BA(Local_239.f_10[iVar0 /*15*/].f_1))
					{
						if (!unk_0xF68107C40359970C(func_28(iVar0)))
						{
							if (!unk_0x174B84F6B78D6CA7(func_28(iVar0)))
							{
								Local_239.f_10[iVar0 /*15*/].f_10 = 7;
							}
						}
					}
					break;
				
				case 18:
					if (unk_0x90F6E2F6488B98BA(Local_239.f_10[iVar0 /*15*/].f_1))
					{
						if (!unk_0xF68107C40359970C(func_28(iVar0)))
						{
							if (!unk_0x174B84F6B78D6CA7(func_28(iVar0)))
							{
								Local_239.f_10[iVar0 /*15*/].f_10 = 7;
							}
						}
					}
					break;
				
				case 10:
					break;
				
				case 9:
					break;
				
				case 2:
					break;
				
				case 3:
					if (func_109(iVar0))
					{
						if (!unk_0xF68107C40359970C(func_28(iVar0)))
						{
							if (!unk_0xD5C6B5E3B93A5EDC(func_28(iVar0), 0))
							{
								Local_239.f_10[iVar0 /*15*/].f_10 = 7;
							}
						}
					}
					break;
				
				case 20:
					if (func_109(iVar0))
					{
						if (!unk_0xF68107C40359970C(func_28(iVar0)))
						{
							if (unk_0xD5C6B5E3B93A5EDC(func_28(iVar0), 0))
							{
								if (func_30(iVar0, 15))
								{
									Local_239.f_1238 = Local_239.f_10[iVar0 /*15*/].f_1;
									func_106(21);
									Local_239.f_10[iVar0 /*15*/].f_10 = 14;
								}
							}
						}
					}
					break;
				
				case 5:
					break;
				
				case 4:
					break;
				
				case 6:
					if (func_30(iVar0, 15))
					{
						if (func_3(20))
						{
							Local_239.f_10[iVar0 /*15*/].f_10 = 20;
						}
					}
					break;
				
				case 7:
					if (func_30(iVar0, 6) || func_30(iVar0, 5))
					{
						if (func_10())
						{
							Local_239.f_10[iVar0 /*15*/].f_10 = 15;
						}
					}
					break;
				
				case 15:
					if (func_109(iVar0))
					{
						uVar7 = func_29(iVar0);
						func_108(&uVar7);
					}
					break;
			}
			iVar0++;
		}
	}
}

void func_108(var uParam0)
{
	var uVar0;
	
	if (unk_0x90F6E2F6488B98BA(*uParam0))
	{
		uVar0 = unk_0xF2D8DACFAEBD9629(*uParam0);
		unk_0xEC548B5E95E61DF6(&uVar0);
	}
}

bool func_109(int iParam0)
{
	return unk_0x90F6E2F6488B98BA(Local_239.f_10[iParam0 /*15*/].f_1);
}

void func_110(int iParam0, int iParam1)
{
	if (!func_112(Local_239.f_10[iParam1 /*15*/].f_1))
	{
		if (unk_0x174B84F6B78D6CA7(unk_0x8AF984152F749D80(Local_239.f_10[iParam1 /*15*/].f_1)))
		{
			if (unk_0xE2D0C323A1AE5D85(Local_239.f_774, iParam1))
			{
				unk_0xCED9E32812D6C7C7(&(Local_239.f_773), iParam1);
				iParam0 = unk_0x8AF984152F749D80(Local_239.f_10[iParam1 /*15*/].f_1);
				if (func_111(&iParam0))
				{
					Local_239.f_10[iParam1 /*15*/].f_10 = 2;
				}
				else
				{
					Local_239.f_10[iParam1 /*15*/].f_10 = 7;
				}
			}
			else if (unk_0xE2D0C323A1AE5D85(Local_239.f_775, iParam1))
			{
				unk_0xCED9E32812D6C7C7(&(Local_239.f_773), iParam1);
				iParam0 = unk_0x8AF984152F749D80(Local_239.f_10[iParam1 /*15*/].f_1);
				if (func_111(&iParam0))
				{
					Local_239.f_10[iParam1 /*15*/].f_10 = 2;
				}
				else
				{
					Local_239.f_10[iParam1 /*15*/].f_10 = 7;
				}
			}
			else if (unk_0xE2D0C323A1AE5D85(Local_239.f_776, iParam1))
			{
				unk_0xCED9E32812D6C7C7(&(Local_239.f_773), iParam1);
				iParam0 = unk_0x8AF984152F749D80(Local_239.f_10[iParam1 /*15*/].f_1);
				if (func_111(&iParam0))
				{
					Local_239.f_10[iParam1 /*15*/].f_10 = 2;
				}
				else
				{
					Local_239.f_10[iParam1 /*15*/].f_10 = 7;
				}
			}
		}
		else if (Local_239.f_10[iParam1 /*15*/].f_10 != 7)
		{
			Local_239.f_10[iParam1 /*15*/].f_10 = 7;
		}
	}
}

int func_111(int iParam0)
{
	if (unk_0xD5C6B5E3B93A5EDC(*iParam0, 0))
	{
		if (unk_0xAB793EA186AB8DAA(unk_0xD9BD5965B9552645(*iParam0), -1, 0) == *iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_112(var uParam0)
{
	if (unk_0xCCDCD6672DAE6835(uParam0))
	{
		return unk_0xF68107C40359970C(unk_0x8AF984152F749D80(uParam0));
	}
	return 1;
}

int func_113(int iParam0)
{
	if (func_103(&(Local_239.f_10[iParam0 /*15*/].f_12), Local_239.f_10[iParam0 /*15*/].f_14, 0))
	{
		return 1;
	}
	return 0;
}

int func_114(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

int func_115(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 6;
				
				case 1:
					return 7;
				
				case 2:
					return 7;
				
				default:
			}
			break;
	}
	return 0;
}

int func_116(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 6;
				
				case 1:
					return 7;
				
				case 2:
					return 7;
				
				default:
			}
			break;
	}
	return 0;
}

Vector3 func_117(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 1695.19f, 3315.922f, 91.272f;
						
						case 1:
							return 1320.615f, 1927.616f, 142.405f;
						
						case 2:
							return 1096.169f, 553.284f, 183.723f;
						
						case 3:
							return 777.194f, -730.307f, 76.659f;
						
						case 4:
							return 826.327f, -1752.486f, 78.532f;
						
						case 5:
							return 645.707f, -2697.196f, 78.532f;
						
						case 6:
							return 477.492f, -3371.308f, 76.162f;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 1366.73f, -1860.514f, 133.214f;
						
						case 1:
							return 1080.37f, -1403.725f, 135.7079f;
						
						case 2:
							return 1021.954f, -612.2437f, 135.7079f;
						
						case 3:
							return 1208.479f, 483.2035f, 167.298f;
						
						case 4:
							return 1635.089f, 1202.567f, 167.6163f;
						
						case 5:
							return 2052.191f, 2606.052f, 170.5815f;
						
						case 6:
							return 2777.644f, 3227.485f, 149.9717f;
						
						case 7:
							return 3570.771f, 3665.035f, 91.6934f;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 741.975f, -1845.051f, 76.314f;
						
						case 1:
							return 1155.844f, -2075.653f, 72.6f;
						
						case 2:
							return 1815.19f, -1465.108f, 184.557f;
						
						case 3:
							return 2360.091f, -334.341f, 155.767f;
						
						case 4:
							return 2628.522f, 1573.633f, 81.445f;
						
						case 5:
							return 2690.137f, 3038.388f, 97.082f;
						
						case 6:
							return 3241.995f, 3580.926f, 139.694f;
						
						case 7:
							return 3568.314f, 3663.176f, 84.743f;
						
						default:
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_118()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3[4];
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	iVar0 = 0;
	iVar1 = 0;
	bVar2 = false;
	iVar4 = -1;
	iVar5 = 0;
	iVar6 = 0;
	while (iVar6 < 4)
	{
		iVar3[iVar6] = -1;
		iVar6++;
	}
	if (Local_239 != 4)
	{
		iLocal_332 = 0;
		while (iLocal_332 < unk_0x5D79167FED95F0B0())
		{
			if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(iLocal_332)))
			{
				iVar8 = unk_0x6B01934FA503547F(unk_0x54F800F95142C750(iLocal_332));
				if (!func_39(iVar8, 0))
				{
					if (func_2370(iVar8, 1, 1))
					{
					}
					if (!func_3(31))
					{
						if (unk_0xE2D0C323A1AE5D85(Local_327[iLocal_332 /*26*/].f_1, 19))
						{
							func_106(31);
						}
					}
					if (func_2248() == 1)
					{
						func_135(iLocal_332);
						func_132(iLocal_332);
						if (((unk_0xE2D0C323A1AE5D85(Local_327[iLocal_332 /*26*/].f_1, 14) || func_3(24)) || Local_327[iLocal_332 /*26*/].f_13 != 0) || Local_239.f_778 != 0)
						{
							func_106(20);
						}
						if (unk_0xE2D0C323A1AE5D85(Local_327[iLocal_332 /*26*/].f_1, 17))
						{
							func_106(27);
						}
						if (unk_0xE2D0C323A1AE5D85(Local_327[iLocal_332 /*26*/].f_1, 18))
						{
							func_106(30);
						}
						if (!func_3(26))
						{
							if (unk_0xE2D0C323A1AE5D85(Local_327[iLocal_332 /*26*/].f_1, 16))
							{
								func_106(26);
							}
						}
						if (!func_3(13))
						{
							if (unk_0xE2D0C323A1AE5D85(Local_327[iLocal_332 /*26*/].f_1, 8))
							{
								func_106(13);
								if (Local_239.f_935 == -1)
								{
									if (func_105(&(Local_239.f_798)))
									{
										Local_239.f_935 = (func_13() - func_131(&(Local_239.f_798), 0, 0));
									}
									else
									{
										Local_239.f_935 = func_13();
									}
								}
							}
						}
						if (!bVar7)
						{
							if (unk_0xE2D0C323A1AE5D85(Local_327[iLocal_332 /*26*/].f_1, 12))
							{
								bVar7 = true;
							}
						}
						iVar6 = 0;
						if (Local_239.f_703 == 0)
						{
							iVar6 = 0;
							while (iVar6 < 3)
							{
								if (Local_239.f_871[iVar6] == -1)
								{
									if (Local_239.f_867[iVar6] == -1)
									{
										if (unk_0xE2D0C323A1AE5D85(Local_327[iLocal_332 /*26*/].f_15, iVar6))
										{
											Local_239.f_867[iVar6] = iVar8;
										}
									}
									else if (unk_0xE2D0C323A1AE5D85(Local_327[iLocal_332 /*26*/].f_16, iVar6))
									{
										Local_239.f_461++;
										Local_239.f_871[iVar6] = iVar8;
									}
									else if ((Local_239.f_867[iVar6] == iVar8 && !unk_0xE2D0C323A1AE5D85(Local_327[iLocal_332 /*26*/].f_15, iVar6)) && !unk_0xE2D0C323A1AE5D85(Local_327[iLocal_332 /*26*/].f_25, iVar6))
									{
										Local_239.f_867[iVar6] = -1;
									}
								}
								if (!unk_0xE2D0C323A1AE5D85(Local_239.f_8, iVar6))
								{
									if (unk_0xE2D0C323A1AE5D85(Local_327[iLocal_332 /*26*/].f_25, iVar6))
									{
										unk_0xCED9E32812D6C7C7(&(Local_239.f_8), iVar6);
										func_106(29);
									}
								}
								iVar6++;
							}
						}
						iVar6 = 0;
						if (Local_239.f_703 == 1)
						{
							iVar6 = 0;
							while (iVar6 < 4)
							{
								if (func_2248() >= 1)
								{
									if (iVar3[iVar6] == -1)
									{
										if (Local_239.f_878.f_5[iVar6] == -1)
										{
											if (func_130(iLocal_332, iVar6))
											{
												iVar3[iVar6] = iLocal_332;
											}
										}
									}
									if (Local_239.f_878.f_5[iVar6] == -1)
									{
										if (func_129(iLocal_332, iVar6))
										{
											Local_239.f_878.f_5[iVar6] = iVar8;
										}
									}
									if (!unk_0xE2D0C323A1AE5D85(Local_239.f_937[iVar6], 1))
									{
										if (unk_0xE2D0C323A1AE5D85(Local_327[iLocal_332 /*26*/].f_20[iVar6], 1))
										{
											unk_0xCED9E32812D6C7C7(&(Local_239.f_937[iVar6]), 1);
										}
									}
									if (!unk_0xE2D0C323A1AE5D85(Local_239.f_937[iVar6], 0))
									{
										if (unk_0xE2D0C323A1AE5D85(Local_327[iLocal_332 /*26*/].f_20[iVar6], 0))
										{
											unk_0xCED9E32812D6C7C7(&(Local_239.f_937[iVar6]), 0);
										}
									}
									if (!unk_0xE2D0C323A1AE5D85(Local_239.f_937[iVar6], 2))
									{
										if (unk_0xE2D0C323A1AE5D85(Local_327[iLocal_332 /*26*/].f_20[iVar6], 2))
										{
											unk_0xCED9E32812D6C7C7(&(Local_239.f_937[iVar6]), 1);
										}
									}
								}
								iVar6++;
							}
						}
						if (Local_239.f_703 == 1)
						{
							if (!func_3(24))
							{
								if (unk_0xE2D0C323A1AE5D85(Local_327[iLocal_332 /*26*/].f_1, 20))
								{
									func_106(24);
								}
							}
						}
						if (Local_239.f_703 == 1 || Local_239.f_703 == 0)
						{
							if (!func_3(8))
							{
								if (unk_0xE2D0C323A1AE5D85(Local_327[iLocal_332 /*26*/].f_1, 6))
								{
									func_106(8);
								}
							}
							if (iVar4 == -1)
							{
								if (unk_0xE2D0C323A1AE5D85(Local_327[iLocal_332 /*26*/].f_1, 2))
								{
									iVar4 = iLocal_332;
								}
							}
							if (!func_3(4))
							{
								if (unk_0xE2D0C323A1AE5D85(Local_327[iLocal_332 /*26*/].f_1, 1))
								{
									func_106(4);
									Local_239.f_792 = Local_239.f_788;
								}
							}
						}
						if (!func_3(2))
						{
							if (!bVar2)
							{
								if (func_10())
								{
									if (!unk_0xE2D0C323A1AE5D85(Local_327[iLocal_332 /*26*/].f_1, 3))
									{
										bVar2 = true;
									}
								}
								else
								{
									bVar2 = true;
								}
							}
						}
						if (!func_3(16))
						{
							if (unk_0xE2D0C323A1AE5D85(Local_327[iLocal_332 /*26*/].f_1, 10))
							{
								func_106(16);
							}
						}
					}
				}
			}
			else if (!func_3(5))
			{
				if (Local_239.f_789 > -1)
				{
					if (iLocal_332 == Local_239.f_789)
					{
						func_106(5);
					}
				}
			}
			iLocal_332++;
		}
		if (func_2248() > 0)
		{
			func_128();
			iVar1 = 0;
			while (iVar1 < 30)
			{
				if (unk_0xE2D0C323A1AE5D85(Local_239.f_779, iVar1))
				{
					iVar0++;
				}
				iVar1++;
			}
			if (Local_239.f_785 != iVar0)
			{
				Local_239.f_785 = iVar0;
			}
			iVar9 = func_54(Local_239.f_703, Local_239.f_704);
			if (!func_3(1))
			{
				if (iVar0 >= iVar9)
				{
					func_106(1);
				}
			}
			if (Local_239.f_703 == 0)
			{
				if (!func_3(7))
				{
					iVar6 = 0;
					iVar5 = 0;
					iVar6 = 0;
					while (iVar6 < 3)
					{
						if (Local_239.f_871[iVar6] > -1)
						{
							iVar5++;
						}
						iVar6++;
					}
					if (iVar5 >= func_127())
					{
						func_106(7);
					}
				}
			}
			if (Local_239.f_703 == 1 || Local_239.f_703 == 0)
			{
				if (!func_10())
				{
					if (Local_239.f_787 != iVar4)
					{
						Local_239.f_787 = iVar4;
						if (Local_239.f_787 > -1)
						{
							if (!func_3(10))
							{
								func_106(10);
							}
							if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(Local_239.f_787)))
							{
								iVar10 = unk_0x6B01934FA503547F(unk_0x54F800F95142C750(Local_239.f_787));
								Local_239.f_788 = iVar10;
							}
						}
						else
						{
							Local_239.f_788 = -1;
						}
					}
				}
			}
			if (bVar7)
			{
				if (!func_3(0))
				{
					func_106(0);
				}
			}
			if (Local_239.f_703 == 1)
			{
				if (func_3(24))
				{
					if (!func_3(0))
					{
						func_106(0);
					}
				}
			}
			iVar6 = 0;
			if (Local_239.f_703 == 1)
			{
				iVar6 = 0;
				while (iVar6 < 1)
				{
					if (Local_239.f_878.f_15[iVar6] != iVar3[iVar6])
					{
						if (func_2248() > 0)
						{
							if (unk_0xE2D0C323A1AE5D85(Local_239.f_878.f_20, 2))
							{
								if (iVar3[iVar6] == -1)
								{
									if (Local_239.f_878.f_15[iVar6] > -1)
									{
										if (!func_126(&(Local_239.f_878), iVar6, &iVar11))
										{
											iVar12 = unk_0x6B01934FA503547F(unk_0x54F800F95142C750(Local_239.f_878.f_15[iVar6]));
											if (iVar12 != func_24())
											{
												func_125(iVar12);
											}
										}
										else
										{
											func_124(unk_0xA1087A6350CD9244(iVar11));
										}
									}
								}
								else if (iVar3[iVar6] > -1)
								{
									iVar12 = unk_0x6B01934FA503547F(unk_0x54F800F95142C750(iVar3[iVar6]));
									if (iVar12 != func_24())
									{
										func_121(iVar12);
									}
								}
							}
						}
						Local_239.f_878.f_15[iVar6] = iVar3[iVar6];
					}
					iVar6++;
				}
			}
			if (!func_3(2))
			{
				if (!bVar2)
				{
					func_106(2);
				}
			}
		}
		if (func_119() != iLocal_334)
		{
			iLocal_334 = func_119();
			iVar6 = 0;
			while (iVar6 < 3)
			{
				if (Local_239.f_867[iVar6] != -1)
				{
					if (!unk_0x0D01086B38EC256F(unk_0xA1087A6350CD9244(Local_239.f_867[iVar6])))
					{
						Local_239.f_867[iVar6] = -1;
					}
				}
				iVar6++;
			}
		}
	}
}

int func_119()
{
	if (func_120() == func_24())
	{
		return 0;
	}
	return func_22(func_120());
}

int func_120()
{
	return Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11;
}

void func_121(int iParam0)
{
	struct<14> Var0;
	int iVar1;
	
	Var0.f_2 = 1171104057;
	Var0.f_10 = iParam0;
	iVar1 = func_123(1);
	func_122(Var0, iVar1);
}

void func_122(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = 677240627;
	Param0.f_1 = unk_0x9E2D6C50374FCFA9();
	if (!iParam13 == 0)
	{
		unk_0x2700C00F82C16BF0(1, &Param0, 14, iParam13);
	}
}

var func_123(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x5D79167FED95F0B0())
	{
		if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(iVar1)))
		{
			iVar2 = unk_0x6B01934FA503547F(unk_0x54F800F95142C750(iVar1));
			if (func_2370(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x9E2D6C50374FCFA9() || iParam0)
				{
					unk_0xCED9E32812D6C7C7(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_124(int iParam0)
{
	struct<14> Var0;
	int iVar1;
	
	Var0.f_2 = -1269681122;
	Var0.f_10 = iParam0;
	iVar1 = func_123(1);
	func_122(Var0, iVar1);
}

void func_125(int iParam0)
{
	struct<14> Var0;
	int iVar1;
	
	Var0.f_2 = -118624111;
	Var0.f_10 = iParam0;
	iVar1 = func_123(1);
	func_122(Var0, iVar1);
}

int func_126(var uParam0, int iParam1, var uParam2)
{
	if (uParam0->f_5[iParam1] > -1)
	{
		*uParam2 = uParam0->f_5[iParam1];
		return 1;
	}
	return 0;
}

int func_127()
{
	return 3;
}

void func_128()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (unk_0x90F6E2F6488B98BA(Local_239.f_10[iVar0 /*15*/].f_1))
		{
			if (!unk_0xE2D0C323A1AE5D85(Local_239.f_779, iVar0))
			{
				if (!func_105(&(Local_239.f_806[iVar0 /*2*/])))
				{
					if (func_112(Local_239.f_10[iVar0 /*15*/].f_1))
					{
						func_104(&(Local_239.f_806[iVar0 /*2*/]), 0, 0);
					}
				}
				else if (func_103(&(Local_239.f_806[iVar0 /*2*/]), 10000, 0))
				{
					unk_0xCED9E32812D6C7C7(&(Local_239.f_779), iVar0);
				}
			}
		}
		iVar0++;
	}
}

int func_129(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = unk_0x6B01934FA503547F(unk_0x54F800F95142C750(iParam0));
		if (iVar0 > -1)
		{
			return unk_0xE2D0C323A1AE5D85(Global_1893548[iVar0 /*600*/].f_11.f_456.f_1, iParam1);
		}
	}
	return 0;
}

int func_130(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = unk_0x6B01934FA503547F(unk_0x54F800F95142C750(iParam0));
		if (iVar0 > -1)
		{
			return unk_0xE2D0C323A1AE5D85(Global_1893548[iVar0 /*600*/].f_11.f_456, iParam1);
		}
	}
	return 0;
}

int func_131(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x9315DBF7D972F07A() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), *uParam0);
		}
		else
		{
			return unk_0x780A854E3A976A66(unk_0xE75390F3CA208D5E(), *uParam0);
		}
	}
	return unk_0x780A854E3A976A66(unk_0x320D1840B6DAA1CC(), *uParam0);
}

void func_132(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (!unk_0xE2D0C323A1AE5D85(Local_239.f_775, iVar0))
		{
			if (unk_0xE2D0C323A1AE5D85(Local_327[iParam0 /*26*/].f_2, iVar0))
			{
				unk_0xCED9E32812D6C7C7(&(Local_239.f_775), iVar0);
			}
		}
		if (!unk_0xE2D0C323A1AE5D85(Local_239.f_776, iVar0))
		{
			if (unk_0xE2D0C323A1AE5D85(Local_327[iParam0 /*26*/].f_4, iVar0))
			{
				unk_0xCED9E32812D6C7C7(&(Local_239.f_776), iVar0);
			}
		}
		if (!unk_0xE2D0C323A1AE5D85(Local_239.f_778, iVar0))
		{
			if (unk_0xE2D0C323A1AE5D85(Local_327[iParam0 /*26*/].f_8, iVar0))
			{
				unk_0xCED9E32812D6C7C7(&(Local_239.f_778), iVar0);
			}
		}
		if (!unk_0xE2D0C323A1AE5D85(Local_239.f_779, iVar0))
		{
			if (unk_0xE2D0C323A1AE5D85(Local_327[iParam0 /*26*/].f_7, iVar0))
			{
				unk_0xCED9E32812D6C7C7(&(Local_239.f_779), iVar0);
			}
			else if (unk_0xE2D0C323A1AE5D85(Local_327[iParam0 /*26*/].f_9, iVar0))
			{
				if (!unk_0xE2D0C323A1AE5D85(Local_239.f_780, iVar0))
				{
					unk_0xCED9E32812D6C7C7(&(Local_239.f_780), iVar0);
				}
			}
			else if (unk_0xE2D0C323A1AE5D85(Local_327[iParam0 /*26*/].f_10, iVar0))
			{
				unk_0xCED9E32812D6C7C7(&(Local_239.f_779), iVar0);
			}
		}
		if (!func_30(iVar0, 19))
		{
			if (unk_0xE2D0C323A1AE5D85(Local_327[unk_0xF1354995C6159A78() /*26*/].f_14, iVar0))
			{
				func_35(iVar0, 19);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!func_134(iVar0, 1))
		{
			if (unk_0xE2D0C323A1AE5D85(Local_327[iParam0 /*26*/].f_5, iVar0))
			{
				func_133(iVar0, 1);
			}
		}
		if (func_134(iVar0, 2))
		{
			if (!func_134(iVar0, 3))
			{
				if (unk_0xE2D0C323A1AE5D85(Local_327[iParam0 /*26*/].f_6, iVar0))
				{
					func_133(iVar0, 3);
				}
			}
		}
		iVar0++;
	}
}

void func_133(int iParam0, int iParam1)
{
	if (!unk_0xE2D0C323A1AE5D85(Local_239.f_742[iParam0], iParam1))
	{
		unk_0xCED9E32812D6C7C7(&(Local_239.f_742[iParam0]), iParam1);
	}
}

bool func_134(int iParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(Local_239.f_742[iParam0], iParam1);
}

void func_135(int iParam0)
{
	int iVar0;
	
	if (!unk_0xE2D0C323A1AE5D85(Local_239.f_781, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 30)
		{
			if (unk_0x90F6E2F6488B98BA(Local_239.f_10[iVar0 /*15*/].f_2))
			{
				if (func_136(Local_239.f_10[iVar0 /*15*/].f_2))
				{
					unk_0xCEEFCE6C0D7566C9(unk_0xA5677134B9672173(Local_239.f_10[iVar0 /*15*/].f_2), unk_0x6B01934FA503547F(unk_0x54F800F95142C750(iParam0)), 1);
					unk_0xCED9E32812D6C7C7(&(Local_239.f_781), iParam0);
				}
			}
			else
			{
				unk_0xCED9E32812D6C7C7(&(Local_239.f_781), iParam0);
			}
			iVar0++;
		}
	}
}

int func_136(var uParam0)
{
	if (unk_0xCCDCD6672DAE6835(uParam0))
	{
		return !func_137(unk_0xA5677134B9672173(uParam0));
	}
	return 0;
}

int func_137(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if (unk_0x55B23FE400FCEA6B(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x55A0C756C4A8220C(iParam0, 0))
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

void func_138()
{
}

int func_139()
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
	
	iVar1 = Local_239.f_703;
	iVar2 = func_54(iVar1, Local_239.f_704);
	iVar3 = func_367(iVar1, Local_239.f_704);
	iVar4 = func_366(iVar1, Local_239.f_704);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iVar3)
	{
		iVar5 = iVar0;
		iVar6 = func_365(iVar1, Local_239.f_704, iVar5);
		if (func_310(iVar5, iVar6, 0, func_134(iVar5, 4)))
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (func_30(iVar0, 3))
		{
			func_18(iVar0);
		}
		else if (func_30(iVar0, 0))
		{
			func_307(iVar0, func_309(Local_239.f_703, Local_239.f_704, iVar0), -1);
		}
		else if (func_30(iVar0, 2))
		{
			func_307(iVar0, func_309(Local_239.f_703, Local_239.f_704, iVar0), 0);
		}
		else if (func_30(iVar0, 5))
		{
			func_307(iVar0, func_309(Local_239.f_703, Local_239.f_704, iVar0), 1);
		}
		else if (func_30(iVar0, 6))
		{
			func_307(iVar0, func_309(Local_239.f_703, Local_239.f_704, iVar0), 2);
		}
		else if (func_30(iVar0, 20))
		{
			func_307(iVar0, func_309(Local_239.f_703, Local_239.f_704, iVar0), 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iVar4)
	{
		func_302(iVar0, func_306(Local_239.f_703, Local_239.f_704, iVar0), 1);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iVar3)
	{
		iVar5 = iVar0;
		if (!unk_0x90F6E2F6488B98BA(Local_239.f_712[iVar5]))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (!unk_0x90F6E2F6488B98BA(Local_239.f_10[iVar0 /*15*/].f_1))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iVar4)
	{
		if (!unk_0x90F6E2F6488B98BA(Local_239.f_719[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	iVar7 = Local_239.f_931;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iVar7)
	{
		iVar8 = func_301(Local_239.f_703, Local_239.f_704, iVar0);
		if (iVar8 > -1)
		{
			if (!func_141(&(Local_239.f_878), &Local_337, Local_239.f_691[iVar0 /*5*/], iVar0, 1, Local_239.f_10[iVar8 /*15*/].f_1, 0))
			{
				return 0;
			}
		}
		else if (!func_141(&(Local_239.f_878), &Local_337, Local_239.f_691[iVar0 /*5*/], iVar0, 0, 0, 1))
		{
			return 0;
		}
		iVar0++;
	}
	if (Local_239.f_703 == 1)
	{
		unk_0x8FB472886552D737("P_cargo_chute_S");
		unk_0xD69A0C3662175E68(func_140(1, Local_239.f_704));
		unk_0xD69A0C3662175E68(joaat("p_cargo_chute_s"));
	}
	return 1;
}

int func_140(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			return joaat("ex_prop_adv_case_sm");
		
		default:
	}
	return 0;
}

int func_141(var uParam0, var uParam1, struct<3> Param2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	struct<35> Var1;
	struct<3> Var2;
	
	iVar0 = uParam0->f_44.f_1;
	Var1.f_5 = 1115815936;
	Var1.f_13 = 2;
	Var1.f_20 = 2;
	Var1.f_32 = -1082130432;
	Var1.f_34 = 1;
	Var1.f_3 = 0;
	Var1.f_5 = 10f;
	if (!unk_0x90F6E2F6488B98BA((*uParam0)[iParam3]))
	{
		if (iVar0 != 0)
		{
			unk_0xD69A0C3662175E68(iVar0);
			if (unk_0x0152AA00FA3130F1(iVar0))
			{
				if (unk_0x853FFA3D0A54864F(1))
				{
					if (bParam4)
					{
						if (!unk_0x90F6E2F6488B98BA(iParam5))
						{
							return 0;
						}
					}
					Var2 = { Param2 };
					if (!func_105(&(uParam0->f_35[iParam3 /*2*/])))
					{
						func_104(&(uParam0->f_35[iParam3 /*2*/]), 0, 0);
					}
					if (func_142(Var2, 5f, &(uParam1->f_15[iParam3 /*3*/]), &(uParam1->f_28[iParam3]), &Var1) || unk_0xE2D0C323A1AE5D85(uParam0->f_20, 0))
					{
						if (unk_0xE2D0C323A1AE5D85(uParam0->f_20, 0))
						{
							uParam1->f_15[iParam3 /*3*/] = { Var2 };
						}
						(*uParam0)[iParam3] = unk_0x2D0F5291E9305922(unk_0x9431D28BFC30340B(joaat("pickup_portable_crate_fixed_incar"), uParam1->f_15[iParam3 /*3*/], 1, iVar0));
						unk_0x4C6E9D70687FCDCE((*uParam0)[iParam3], 1);
						unk_0xA539EDE8DA5BBC22(unk_0xE8BBC6CC2C60F24A((*uParam0)[iParam3]), uParam1->f_15[iParam3 /*3*/] + Vector(0.5f, 0f, 0f), 0, 0, 1);
						unk_0xF1A23B343DFEDFD0(iVar0);
						unk_0x9210F85E9CD785F1(unk_0xE8BBC6CC2C60F24A((*uParam0)[iParam3]), 1);
						unk_0x398C962F550CF3B4(unk_0xE8BBC6CC2C60F24A((*uParam0)[iParam3]), 1);
						if (bParam4)
						{
						}
						if (bParam6)
						{
							unk_0xA539EDE8DA5BBC22(unk_0xE8BBC6CC2C60F24A((*uParam0)[iParam3]), Var2 + Vector(0.5f, 0f, 0f), 0, 0, 1);
						}
					}
					else if (!unk_0xE2D0C323A1AE5D85(uParam0->f_20, 0))
					{
						if (func_103(&(uParam0->f_35[iParam3 /*2*/]), 15000, 0))
						{
							unk_0xCED9E32812D6C7C7(&(uParam0->f_20), 0);
						}
					}
				}
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0xE2D0C323A1AE5D85(uParam0->f_20, (4 + iParam3)))
		{
			if (unk_0x90F6E2F6488B98BA((*uParam0)[iParam3]))
			{
				if (unk_0x90F6E2F6488B98BA(iParam5))
				{
					if (!func_112(iParam5))
					{
						if (!unk_0x07B2F8356DC13CF4(iParam5))
						{
							unk_0xC31EECA11005273C(iParam5);
						}
						if (unk_0x07B2F8356DC13CF4(iParam5))
						{
							unk_0xA4DC05DFB08A8957(unk_0xE8BBC6CC2C60F24A((*uParam0)[iParam3]), unk_0x8AF984152F749D80(iParam5));
							unk_0xCED9E32812D6C7C7(&(uParam0->f_20), (4 + iParam3));
						}
					}
				}
			}
		}
	}
	if (unk_0x90F6E2F6488B98BA((*uParam0)[iParam3]))
	{
		if (!bParam4)
		{
			return 1;
		}
		else if (unk_0xE2D0C323A1AE5D85(uParam0->f_20, (4 + iParam3)))
		{
			return 1;
		}
	}
	return 0;
}

int func_142(struct<3> Param0, float fParam1, var uParam2, var uParam3, var uParam4)
{
	struct<17> Var0;
	struct<18> Var1;
	struct<3> Var2;
	
	if (uParam4->f_5 > (fParam1 - 20f))
	{
		uParam4->f_5 = (fParam1 - 20f);
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var0.f_28 = 5;
	Var1.f_16 = 1;
	Var1.f_22 = 1;
	Var1.f_23 = 1;
	Var1.f_24 = 1;
	Var1.f_28 = -1;
	Var1 = { Param0 };
	Var1.f_3 = uParam4->f_11;
	Var1.f_4 = fParam1;
	Var1.f_5 = 0;
	Var1.f_6 = 1;
	Var1.f_7 = 0;
	Var1.f_15 = 0;
	Var1.f_16 = 1;
	Var1.f_17 = 0;
	if (func_143(&Var1, uParam4, &Var0))
	{
		if ((uParam4->f_12 > 0f && uParam4->f_7) && uParam4->f_8)
		{
			Var2 = { Param0 - Var0[0 /*3*/] };
			if (Var2.f_2 > uParam4->f_12)
			{
				Var0[0 /*3*/] = { Param0 };
				Var0.f_16[0] = uParam4->f_11;
			}
		}
		*uParam2 = { Var0[0 /*3*/] };
		*uParam3 = Var0.f_16[0];
		return 1;
	}
	return 0;
}

int func_143(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	int iVar9;
	struct<3> Var10;
	struct<3> Var11;
	var uVar12;
	bool bVar13;
	struct<61> Var14;
	bool bVar15;
	
	bVar13 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2667222.f_2465 == *uParam0 || !Global_2667222.f_2465.f_1 == uParam0->f_1) || !Global_2667222.f_2465.f_2 == uParam0->f_2) || !Global_2667222.f_2468 == uParam0->f_4)
			{
				bVar13 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2667222.f_2479 == uParam0->f_8 || !Global_2667222.f_2479.f_1 == uParam0->f_8.f_1) || !Global_2667222.f_2479.f_2 == uParam0->f_8.f_2) || !Global_2667222.f_2482 == uParam0->f_11) || !Global_2667222.f_2482.f_1 == uParam0->f_11.f_1) || !Global_2667222.f_2482.f_2 == uParam0->f_11.f_2)
			{
				bVar13 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2667222.f_2479 == uParam0->f_8 || !Global_2667222.f_2479.f_1 == uParam0->f_8.f_1) || !Global_2667222.f_2479.f_2 == uParam0->f_8.f_2) || !Global_2667222.f_2482 == uParam0->f_11) || !Global_2667222.f_2482.f_1 == uParam0->f_11.f_1) || !Global_2667222.f_2482.f_2 == uParam0->f_11.f_2) || !Global_2667222.f_2485 == uParam0->f_14)
			{
				bVar13 = true;
			}
			break;
	}
	if (Global_1574477)
	{
		if (!Global_2667222.f_2486 == uParam0->f_7)
		{
			bVar13 = true;
		}
		if (unk_0x87C0DA419F19FF57(Global_2667222.f_2472) && !Global_2667222.f_2472 == unk_0x69CE66B03B2184EB())
		{
			bVar13 = true;
		}
	}
	if (bVar13)
	{
		if (Global_2667222.f_2463 == 1)
		{
			if (unk_0x87C0DA419F19FF57(Global_2667222.f_2472))
			{
				if (Global_2667222.f_2472 == unk_0x69CE66B03B2184EB())
				{
					if (unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Global_2667222.f_2469) < func_300(0))
					{
						return 0;
					}
				}
				else if (unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Global_2667222.f_2469) < func_300(0))
				{
					return 0;
				}
			}
			unk_0x8CAEA922D207D693();
			unk_0x3D9CB48B182F9F3B();
			func_299();
		}
		Global_2667222.f_2463 = 0;
	}
	else if (unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Global_2667222.f_2469) > func_300(0))
	{
		Global_2667222.f_2470 = unk_0x0A89FDFA763DCAED();
		func_293();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar2 = (*uParam0 - uParam0->f_4);
			fVar3 = (uParam0->f_1 - uParam0->f_4);
			fVar4 = (*uParam0 + uParam0->f_4);
			fVar5 = (uParam0->f_1 + uParam0->f_4);
			break;
		
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = uParam0->f_8;
				fVar4 = uParam0->f_11;
			}
			else
			{
				fVar2 = uParam0->f_11;
				fVar4 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = uParam0->f_8.f_1;
				fVar5 = uParam0->f_11.f_1;
			}
			else
			{
				fVar3 = uParam0->f_11.f_1;
				fVar5 = uParam0->f_8.f_1;
			}
			break;
		
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = (uParam0->f_8 - (0.5f * uParam0->f_14));
				fVar4 = (uParam0->f_11 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar2 = (uParam0->f_11 - (0.5f * uParam0->f_14));
				fVar4 = (uParam0->f_8 + (0.5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_14));
				fVar5 = (uParam0->f_11.f_1 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar3 = (uParam0->f_11.f_1 - (0.5f * uParam0->f_14));
				fVar5 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_14));
			}
			break;
	}
	unk_0x2EE5FFF3E1E3400D(fVar2, fVar3, fVar4, fVar5);
	if (uParam0->f_7 == 0)
	{
		Var6 = { *uParam0 };
	}
	else
	{
		Var6 = { uParam0->f_8 + uParam0->f_11 * Vector(0.5f, 0.5f, 0.5f) };
	}
	Var7 = { Var6 + Vector(-0.1f, -0.1f, -0.1f) };
	Var8 = { Var6 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_2667222.f_2463)
	{
		unk_0x8CAEA922D207D693();
		unk_0x3D9CB48B182F9F3B();
		func_299();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (vmag(*uParam0) > 0f)
			{
				if (func_36(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!unk_0xCCD530822438FEA4())
		{
			Global_2667222.f_2486 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2667222.f_2465 = { *uParam0 };
					Global_2667222.f_2468 = uParam0->f_4;
					break;
				
				case 1:
					Global_2667222.f_2479 = { uParam0->f_8 };
					Global_2667222.f_2482 = { uParam0->f_11 };
					Global_2667222.f_2485 = 0f;
					Global_2667222.f_2465 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2667222.f_2479 = { uParam0->f_8 };
					Global_2667222.f_2482 = { uParam0->f_11 };
					Global_2667222.f_2485 = uParam0->f_14;
					Global_2667222.f_2465 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_292(Var6.x, Var6.f_1);
			}
			Global_2667222.f_2464 = 1;
			Global_2667222.f_2463 = 1;
			Global_2667222.f_2470 = unk_0x0A89FDFA763DCAED();
			Global_2667222.f_2469 = unk_0x0A89FDFA763DCAED();
			Global_2667222.f_2472 = unk_0x69CE66B03B2184EB();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2667222.f_2463)
	{
		if (Global_2667222.f_2464 == 1)
		{
			if (unk_0xF8805443C3DB6256(fVar2, fVar3, fVar4, fVar5) || unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Global_2667222.f_2470) > 5000)
			{
				Global_2667222.f_2470 = unk_0x0A89FDFA763DCAED();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_18 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { Var6 };
					}
					Var14.f_6 = 1082130432;
					Var14.f_7 = 1176255488;
					Var14.f_8 = 1;
					Var14.f_10 = 1;
					Var14.f_13 = 1;
					Var14.f_15 = 1;
					Var14.f_16 = 1;
					Var14.f_31 = 1;
					Var14.f_34 = joaat("tailgater");
					Var14.f_38 = 2;
					Var14.f_45 = 2;
					Var14.f_49 = 1123024896;
					Var14.f_53 = 999;
					Var14.f_54 = 1176256410;
					Var14.f_55 = 1;
					Var14.f_56 = 1;
					Var14.f_57 = 1;
					Var14 = { *uParam1 };
					Var14.f_3 = uParam1->f_5;
					Var14.f_11 = uParam1->f_9;
					Var14.f_18 = 1;
					if (uParam1->f_32 > 0f)
					{
						Var14.f_6 = uParam1->f_32;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var14.f_19 = { *uParam0 };
							Var14.f_25 = uParam0->f_4;
							break;
						
						case 1:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = 0f;
							break;
						
						case 2:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = uParam0->f_14;
							break;
					}
					Var14.f_26 = uParam0->f_7;
					Var14.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var14.f_30 = 1;
						Var14.f_32 = 1;
					}
					iVar9 = 0;
					while (iVar9 < 2)
					{
						Var14.f_38[iVar9 /*3*/] = { uParam1->f_13[iVar9 /*3*/] };
						Var14.f_45[iVar9] = uParam1->f_20[iVar9];
						iVar9++;
					}
					Var14.f_51 = uParam1->f_30;
					Var14.f_55 = uParam0->f_16;
					if (uParam0->f_26)
					{
						Var14.f_10 = 0;
					}
					if (func_291(Global_4718592.f_138117))
					{
						Var14.f_9 = 1;
					}
					Var14.f_60 = uParam0->f_30;
					func_264(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var14);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_263(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2667222.f_2464 = 9;
				}
				else
				{
					Global_2667222.f_2464 = 2;
				}
			}
		}
		if (Global_2667222.f_2464 == 2)
		{
			if ((unk_0x422C66E6B46D5AEF(Var7, Var8) || unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Global_2667222.f_2470) > 15000) || unk_0xE64C2E86EAC945DD(Var7, Var8) == 0)
			{
				Global_2667222.f_2470 = unk_0x0A89FDFA763DCAED();
				if (uParam0->f_5 && !func_39(unk_0x9E2D6C50374FCFA9(), 0))
				{
					Global_2667222.f_2464 = 3;
				}
				else
				{
					Global_2667222.f_2464 = 4;
				}
			}
			else if (unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Global_2667222.f_2474) > 7000)
			{
				func_262(Var6.x, Var6.f_1);
			}
		}
		if (Global_2667222.f_2464 == 3)
		{
			if (func_261() || unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Global_2667222.f_2470) > 10000)
			{
				Global_2667222.f_2470 = unk_0x0A89FDFA763DCAED();
				Global_2667222.f_2464 = 4;
			}
		}
		if (Global_2667222.f_2464 == 4)
		{
			if (unk_0xCCD530822438FEA4())
			{
				unk_0x8CAEA922D207D693();
				unk_0x3D9CB48B182F9F3B();
			}
			else
			{
				iVar0 = 0;
				func_293();
				if (uParam0->f_5)
				{
					if (vmag(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (unk_0x93946E27B42AA58E(unk_0x9E2D6C50374FCFA9(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2667222.f_2470 = unk_0x0A89FDFA763DCAED();
								Global_2667222.f_2464 = 5;
							}
							break;
						
						case 1:
							func_260(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &uVar12);
							if (unk_0x20139897F77C3B3F(unk_0x9E2D6C50374FCFA9(), Var10, Var11, uVar12, *uParam1, iVar0))
							{
								Global_2667222.f_2470 = unk_0x0A89FDFA763DCAED();
								Global_2667222.f_2464 = 5;
							}
							break;
						
						case 2:
							if (unk_0x20139897F77C3B3F(unk_0x9E2D6C50374FCFA9(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2667222.f_2470 = unk_0x0A89FDFA763DCAED();
								Global_2667222.f_2464 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2667222.f_2470 = unk_0x0A89FDFA763DCAED();
					Global_2667222.f_2464 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							unk_0xC9C2F7B876EE4E15(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_260(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &uVar12);
							unk_0xC9ACA2E149098784(Var10, Var11, uVar12, iVar0, 2f, 5000);
							break;
						
						case 2:
							unk_0xC9ACA2E149098784(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2667222.f_2464 == 5)
		{
			if (func_196(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2667222.f_2490.f_5)
				{
					Global_2667222.f_2470 = unk_0x0A89FDFA763DCAED();
					Global_2667222.f_2464 = 6;
				}
				else
				{
					Global_2667222.f_2470 = unk_0x0A89FDFA763DCAED();
					if (!uParam0->f_5)
					{
						if (!vmag(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = unk_0xD12EFCAB87804BED(Var1.x, Var1.f_1);
						}
					}
					Global_2667222.f_2464 = 9;
				}
			}
			else if (unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Global_2667222.f_2470) > 20000)
			{
				unk_0x8CAEA922D207D693();
				unk_0x3D9CB48B182F9F3B();
				Global_2667222.f_2470 = unk_0x0A89FDFA763DCAED();
				Global_2667222.f_2464 = 8;
			}
		}
		if (Global_2667222.f_2464 == 6)
		{
			iVar0 = 0;
			Global_2667222.f_2490.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_195(uParam0->f_4))
				{
					if (unk_0xBCC73B466E2B2350(unk_0xA0F62C1038208492(Var6)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_194(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (unk_0xBCC73B466E2B2350(unk_0xA0F62C1038208492(Var6)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2667222.f_2470 = unk_0x0A89FDFA763DCAED();
			Global_2667222.f_2464 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					unk_0xC9C2F7B876EE4E15(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_260(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &uVar12);
					unk_0xC9ACA2E149098784(Var10, Var11, uVar12, iVar0, 2f, 5000);
					break;
				
				case 2:
					unk_0xC9ACA2E149098784(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2667222.f_2464 == 7)
		{
			if (func_196(uParam2, uParam0, uParam1, 1))
			{
				if (vmag(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 3)
					{
						if (vmag(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!vmag(Global_2667222.f_2624[iVar9 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_263(Global_2667222.f_2624[iVar9 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2667222.f_2624[iVar9 /*3*/] };
										}
										break;
									
									case 1:
										if (func_192(Global_2667222.f_2624[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2667222.f_2624[iVar9 /*3*/] };
										}
										break;
									
									case 2:
										if (unk_0x5F8653E60ED2288E(Global_2667222.f_2624[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1))
										{
											*(uParam2[0 /*3*/]) = { Global_2667222.f_2624[iVar9 /*3*/] };
										}
										break;
									}
								}
						}
						iVar9++;
					}
					if (vmag(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								Var1 = { *uParam0 };
								break;
							
							case 1:
							case 2:
								Var1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_146(&Var1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { Var1 };
					}
				}
				Global_2667222.f_2470 = unk_0x0A89FDFA763DCAED();
				if (!vmag(*uParam1) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 5)
					{
						Var1 = { *uParam1 - *(uParam2[iVar9 /*3*/]) };
						uParam2->f_16[iVar9] = unk_0xD12EFCAB87804BED(Var1.x, Var1.f_1);
						iVar9++;
					}
				}
				Global_2667222.f_2464 = 9;
			}
			else if (unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Global_2667222.f_2470) > 20000)
			{
				Global_2667222.f_2470 = unk_0x0A89FDFA763DCAED();
				Global_2667222.f_2464 = 8;
			}
		}
		if (Global_2667222.f_2464 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_145(Global_2667222.f_488))
				{
				}
			}
			else if (Global_2667222.f_2490.f_2)
			{
				func_144(uParam2, &(Global_2667222.f_2490.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar15 = false;
				}
				else
				{
					bVar15 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2667222.f_2465 };
				func_146(uParam2[0 /*3*/], 0, bVar15, 0, 0, uParam0, uParam1);
			}
			Global_2667222.f_2470 = unk_0x0A89FDFA763DCAED();
			Global_2667222.f_2464 = 9;
		}
		if (Global_2667222.f_2464 == 9)
		{
			Global_2667222.f_2463 = 0;
			unk_0x8CAEA922D207D693();
			unk_0x3D9CB48B182F9F3B();
			func_299();
			return 1;
		}
		Global_2667222.f_2469 = unk_0x0A89FDFA763DCAED();
	}
	return 0;
}

void func_144(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*10*/])->f_4 };
		uParam0->f_16[iVar0] = (uParam1[iVar0 /*10*/])->f_7;
		uParam0->f_22[iVar0] = (*uParam1)[iVar0 /*10*/];
		iVar0++;
	}
}

int func_145(int iParam0)
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

void func_146(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)
{
	struct<3> Var0;
	var uVar1;
	struct<61> Var2;
	var uVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	float fVar10;
	
	Var2.f_6 = 1082130432;
	Var2.f_7 = 1176255488;
	Var2.f_8 = 1;
	Var2.f_10 = 1;
	Var2.f_13 = 1;
	Var2.f_15 = 1;
	Var2.f_16 = 1;
	Var2.f_31 = 1;
	Var2.f_34 = joaat("tailgater");
	Var2.f_38 = 2;
	Var2.f_45 = 2;
	Var2.f_49 = 1123024896;
	Var2.f_53 = 999;
	Var2.f_54 = 1176256410;
	Var2.f_55 = 1;
	Var2.f_56 = 1;
	Var2.f_57 = 1;
	if (bParam1)
	{
		iVar6 = 0;
	}
	else
	{
		iVar6 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar6 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						Var7 = { *uParam5 };
						if (func_195(uParam5->f_4) || !unk_0xBCC73B466E2B2350(unk_0xA0F62C1038208492(Var7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 1:
						Var7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_194(uParam5->f_8, uParam5->f_11, 0f) || !unk_0xBCC73B466E2B2350(unk_0xA0F62C1038208492(Var7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 2:
						Var7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_194(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !unk_0xBCC73B466E2B2350(unk_0xA0F62C1038208492(Var7)))
						{
							iVar6 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar6 += 4;
		}
	}
	if (func_160(*uParam0, &Var0, iVar6, iParam3, 1))
	{
	}
	else
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		Var0 = { *uParam0 };
		Var2 = { *uParam6 };
		Var2.f_8 = 1;
		Var2.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var2.f_10 = 0;
		}
		else
		{
			Var2.f_10 = 1;
		}
		Var2.f_13 = uParam5->f_15;
		Var2.f_15 = iParam3;
		if (uParam6->f_32 > 0f)
		{
			Var2.f_6 = uParam6->f_32;
		}
		if (bParam4)
		{
			Var2.f_18 = 1;
			Var2.f_26 = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var2.f_19 = { *uParam5 };
					Var2.f_25 = uParam5->f_4;
					break;
				
				case 1:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = 0f;
					break;
				
				case 2:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = uParam5->f_14;
					break;
				}
		}
		iVar4 = 0;
		while (iVar4 < 2)
		{
			Var2.f_38[iVar4 /*3*/] = { uParam6->f_13[iVar4 /*3*/] };
			Var2.f_45[iVar4] = uParam6->f_20[iVar4];
			iVar4++;
		}
		Var2.f_51 = uParam6->f_30;
		Var2.f_55 = uParam5->f_16;
		if (func_158(unk_0x9E2D6C50374FCFA9(), 0))
		{
			Var2.f_9 = 1;
		}
		Var2.f_60 = uParam5->f_30;
		func_264(&Var0, &uVar1, &Var2);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				Var8 = { *uParam5 };
				fVar10 = uParam5->f_4;
				break;
			
			case 1:
				Var8 = { uParam5->f_8 };
				Var9 = { uParam5->f_11 };
				break;
			
			case 2:
				Var8 = { uParam5->f_8 };
				Var9 = { uParam5->f_11 };
				fVar10 = uParam5->f_14;
				break;
		}
		if (!func_157(Var0, uParam5->f_7, Var8, Var9, fVar10))
		{
			if (func_160(*uParam0, &Var0, iVar6, iParam3, 0))
			{
				if (!func_157(Var0, uParam5->f_7, Var8, Var9, fVar10))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						Var0 = { Var8 + Var9 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						Var0 = { Var8 };
					}
					if (unk_0x9CD4CBF2BBE10F00(Var0, &uVar3, 0, 0))
					{
						Var0.f_2 = uVar3;
					}
				}
			}
			else if (func_147(uParam0, 1, 1, 1, 1))
			{
				func_146(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, uParam6);
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					Var0 = { Var8 + Var9 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					Var0 = { Var8 };
				}
				if (unk_0x9CD4CBF2BBE10F00(Var0, &uVar3, 0, 0))
				{
					Var0.f_2 = uVar3;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2667222.f_666 = 1;
}

int func_147(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2672163[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2672163[iVar0 /*17*/].f_16))
			{
				if (func_156(*uParam0, &(Global_2672163[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2672163[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2672163[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_148(&Var1, &(Global_2672163[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_147(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								func_148(&Var1, &(Global_2672163[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { Var1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_148(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_155(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2667222.f_2733) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_155(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_155(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_153(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2667222.f_2733) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_152(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_149(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_149(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, float fParam4, bool bParam5)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	struct<3> Var10;
	struct<3> Var11;
	
	Var0 = { Param2 - Param1 };
	Var0.f_2 = 0f;
	Var1 = { *uParam0 - Param1 };
	Var1.f_2 = 0f;
	Var2 = { func_151(0f, 0f, 1f, Var0) };
	Var2 = { Var2 / FtoV(vmag(Var2)) };
	fVar3 = (vmag(Var1) * sin(unk_0x952F3FA2E7880565(Var0.x, Var0.f_1, Var1.x, Var1.f_1)));
	if (fVar3 < (fParam3 * 0.5f))
	{
		if (!bParam5)
		{
			if (func_150(Var2, Var1) >= 0f)
			{
				Var2 = { Var2 * FtoV((((fParam3 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				Var2 = { Var2 * FtoV(((((fParam3 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_150(Var2, Var1) >= 0f)
		{
			Var2 = { Var2 * FtoV(((((fParam3 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			Var2 = { Var2 * FtoV((((fParam3 * 0.5f) + fVar3) + fParam4)) };
		}
		Var4 = { *uParam0 + Var2 };
		fVar6 = vdist(Param1.x, Param1.f_1, 0f, Param2.x, Param2.f_1, 0f);
		Var7 = { Param1 + Param2 / Vector(2f, 2f, 2f) };
		Var7.f_2 = 0f;
		Var2 = { func_151(0f, 0f, 1f, Var0) };
		Var2 = { Var2 / FtoV(vmag(Var2)) };
		Var2 = { Var2 * FtoV((fParam3 * 0.5f)) };
		Var8 = { Var7 - Var2 };
		Var9 = { Var7 + Var2 };
		Var10 = { Var9 - Var8 };
		Var10.f_2 = 0f;
		Var11 = { *uParam0 - Var8 };
		Var11.f_2 = 0f;
		Var2 = { func_151(0f, 0f, 1f, Var10) };
		Var2 = { Var2 / FtoV(vmag(Var2)) };
		fVar3 = (vmag(Var11) * sin(unk_0x952F3FA2E7880565(Var10.x, Var10.f_1, Var11.x, Var11.f_1)));
		if (!bParam5)
		{
			if (func_150(Var2, Var11) >= 0f)
			{
				Var2 = { Var2 * FtoV((((fVar6 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				Var2 = { Var2 * FtoV(((((fVar6 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_150(Var2, Var11) >= 0f)
		{
			Var2 = { Var2 * FtoV(((((fVar6 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			Var2 = { Var2 * FtoV((((fVar6 * 0.5f) + fVar3) + fParam4)) };
		}
		Var5 = { *uParam0 + Var2 };
		if (vdist(Var4, *uParam0, uParam0->f_1, 0f) < vdist(Var5, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { Var4 };
		}
		else
		{
			*uParam0 = { Var5 };
		}
	}
}

float func_150(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.x * Param1.x) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_151(struct<3> Param0, struct<3> Param1)
{
	return ((Param0.f_1 * Param1.f_2) - (Param0.f_2 * Param1.f_1)), ((Param0.f_2 * Param1.x) - (Param0.x * Param1.f_2)), ((Param0.x * Param1.f_1) - (Param0.f_1 * Param1.x));
}

void func_152(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	Var0 = { *uParam0 };
	fVar1 = (*uParam0 - Param1);
	fVar2 = (*uParam0 - Param3);
	if (fVar1 < fVar2)
	{
		fVar3 = fVar1;
	}
	else
	{
		fVar3 = fVar2;
	}
	fVar4 = (uParam0->f_1 - Param1.f_1);
	fVar5 = (uParam0->f_1 - Param3.f_1);
	if (fVar4 < fVar5)
	{
		fVar6 = fVar4;
	}
	else
	{
		fVar6 = fVar5;
	}
	Var0 = { *uParam0 };
	if (!bParam6)
	{
		if (fVar3 < fVar6)
		{
			if (fVar1 < fVar2)
			{
				Var0.x = (Param1 - fParam5);
			}
			else
			{
				Var0.x = (Param3 + fParam5);
			}
		}
		else if (fVar4 < fVar5)
		{
			Var0.f_1 = (Param1.f_1 - fParam5);
		}
		else
		{
			Var0.f_1 = (Param3.f_1 + fParam5);
		}
	}
	else if (fVar3 < fVar6)
	{
		if (fVar1 < fVar2)
		{
			Var0.x = (Param3 + fParam5);
		}
		else
		{
			Var0.x = (Param1 - fParam5);
		}
	}
	else if (fVar4 < fVar5)
	{
		Var0.f_1 = (Param3.f_1 + fParam5);
	}
	else
	{
		Var0.f_1 = (Param1.f_1 - fParam5);
	}
	*uParam0 = { Var0 };
}

void func_153(var uParam0, struct<3> Param1, float fParam2, float fParam3, bool bParam4, float fParam5)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { *uParam0 - Param1 };
	Var0.f_2 = 0f;
	if (vmag(Var0) > 0f)
	{
		Var0 = { Var0 / FtoV(vmag(Var0)) };
	}
	else
	{
		Var0 = { 0f, 1f, 0f };
		if (fParam5 == 0f)
		{
			func_154(&Var0, 0f, 0f, unk_0xC4EAB25A108C2429(0f, 360f));
		}
		else
		{
			func_154(&Var0, 0f, 0f, fParam5);
		}
	}
	Var0 = { Var0 * FtoV((fParam2 + fParam3)) };
	if (!bParam4)
	{
		Var1 = { Param1 + Var0 };
	}
	else
	{
		Var1 = { Param1 - Var0 };
	}
	*uParam0 = Var1.x;
	uParam0->f_1 = Var1.f_1;
}

void func_154(var uParam0, struct<3> Param1)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	fVar0 = cos(Param1.x);
	fVar1 = sin(Param1.x);
	Var2.x = *uParam0;
	Var2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = cos(Param1.f_1);
	fVar1 = sin(Param1.f_1);
	Var2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.f_1 = uParam0->f_1;
	Var2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = cos(Param1.f_2);
	fVar1 = sin(Param1.f_2);
	Var2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.f_2 = uParam0->f_2;
	*uParam0 = { Var2 };
}

Vector3 func_155(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, float fParam5, bool bParam6)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam4)
	{
		case 0:
			func_153(&Param0, Param1, fParam3, fParam5, bParam6, 0);
			break;
		
		case 1:
			func_152(&Param0, Param1, Param2, fParam5, bParam6);
			break;
		
		case 2:
			func_149(&Param0, Param1, Param2, fParam3, fParam5, bParam6);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x29579BC5971CA4B6(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam4)
		{
			case 0:
				if (!func_263(Var1, Param1, fParam3, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_192(Var1, Param1, Param2, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!unk_0x5F8653E60ED2288E(Var1, Param1, Param2, fParam3, 0, 1))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

int func_156(struct<3> Param0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	switch (uParam1->f_10)
	{
		case 0:
			return func_263(Param0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_2667222.f_2733) * uParam1->f_8)), bParam3, bParam4);
			break;
		
		case 1:
			return func_192(Param0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
			break;
		
		case 2:
			if (bParam3 && bParam4)
			{
				return unk_0x5F8653E60ED2288E(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0);
			}
			else if (bParam3)
			{
				if (unk_0x5F8653E60ED2288E(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(Param0.f_2 < uParam1->f_2 && Param0.f_2 < uParam1->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam4)
			{
				if (unk_0x5F8653E60ED2288E(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(Param0.f_2 > uParam1->f_2 && Param0.f_2 > uParam1->f_3.f_2))
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
				return unk_0x5F8653E60ED2288E(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_157(struct<3> Param0, int iParam1, struct<3> Param2, struct<3> Param3, float fParam4)
{
	switch (iParam1)
	{
		case 0:
			if (vdist(Param0, Param2) <= fParam4)
			{
				return 1;
			}
			break;
		
		case 1:
			return func_192(Param0, Param2, Param3, 0, 0);
			break;
		
		case 2:
			return unk_0x5F8653E60ED2288E(Param0, Param2, Param3, fParam4, 0, 1);
			break;
	}
	return 0;
}

int func_158(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (bParam1)
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			uVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
			if (unk_0x15CAA6D7B11F1A7C(uVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_24())
	{
		if (func_2370(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1 && Global_2689156[iParam0 /*453*/].f_319.f_9 != func_24())
			{
				return func_159(Global_2689156[iParam0 /*453*/].f_319.f_6) == 12;
			}
		}
	}
	return 0;
}

int func_159(int iParam0)
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
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	}
	return -1;
}

int func_160(struct<3> Param0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_191(Param0, uParam1))
	{
		if (func_161(Param0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	if (unk_0x1555F0FA7BA4FE0F(Param0, 0, uParam1, iParam2))
	{
		if (func_161(Param0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_161(struct<3> Param0, var uParam1, int iParam2, bool bParam3)
{
	float fVar0;
	var uVar1;
	var uVar2;
	
	fVar0 = vdist(Param0, *uParam1);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar2 = 2;
		if ((iParam2 == 1 && !func_177(Global_2667222.f_511, uParam1, &uVar1, &uVar2, bParam3, 1)) || iParam2 == 0)
		{
			if (!func_165(*uParam1, 1056964608))
			{
				if (!func_162(uParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_162(var uParam0, bool bParam1)
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	
	Var1 = { *uParam0 };
	iVar2 = func_164(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2673701[iVar2])
	{
		if (func_163(Var1, &(Global_2672368[iVar2 /*148*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_149(&Var1, Global_2672368[iVar2 /*148*/][iVar0 /*7*/], Global_2672368[iVar2 /*148*/][iVar0 /*7*/].f_3, Global_2672368[iVar2 /*148*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2673701[8])
	{
		if (func_163(Var1, &(Global_2672368[8 /*148*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_149(&Var1, Global_2672368[8 /*148*/][iVar0 /*7*/], Global_2672368[8 /*148*/][iVar0 /*7*/].f_3, Global_2672368[8 /*148*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_163(struct<3> Param0, var uParam1)
{
	return unk_0x5F8653E60ED2288E(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
}

int func_164(struct<2> Param0, var uParam1)
{
	if (Param0.f_1 > Global_2673711[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2673711[1])
	{
		if (Param0 < Global_2673715[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2673711[2])
	{
		if (Param0 < Global_2673715[1])
		{
			return 3;
		}
		else if (Param0 < Global_2673715[2])
		{
			return 4;
		}
		else if (Param0 < Global_2673715[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_165(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	if (func_174(unk_0x9E2D6C50374FCFA9(), 1, 0))
	{
		if (Global_4980736.f_33237 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_33237)
			{
				if (Global_4980736.f_33238[iVar0 /*125*/].f_7 != 0)
				{
					if (func_166(Param0, Global_4980736.f_33238[iVar0 /*125*/], Global_4980736.f_33238[iVar0 /*125*/].f_6, Global_4980736.f_33238[iVar0 /*125*/].f_7, fParam1))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4980736.f_5739 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_5739)
			{
				if (Global_4980736.f_5742[iVar0 /*366*/].f_15 != 0)
				{
					if (func_166(Param0, Global_4980736.f_5742[iVar0 /*366*/], Global_4980736.f_5742[iVar0 /*366*/].f_3, Global_4980736.f_5742[iVar0 /*366*/].f_15, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4980736.f_72860 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_72860)
			{
				if (Global_4980736.f_72864[iVar0 /*435*/].f_12 != 0)
				{
					if (func_166(Param0, Global_4980736.f_72864[iVar0 /*435*/], Global_4980736.f_72864[iVar0 /*435*/].f_3, Global_4980736.f_72864[iVar0 /*435*/].f_12, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1058064.f_268 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1058064.f_268)
			{
				if (unk_0xE5965CDF24F93A9F(Global_1058064.f_233[iVar0]) && !unk_0x55B23FE400FCEA6B(Global_1058064.f_233[iVar0], 0))
				{
					if (func_166(Param0, unk_0x6B62510F212526DC(Global_1058064.f_233[iVar0], 1), unk_0x82FE2343F8BDFF0B(Global_1058064.f_233[iVar0]), unk_0x15CAA6D7B11F1A7C(Global_1058064.f_233[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1058064.f_266 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1058064.f_266)
			{
				if (unk_0xE5965CDF24F93A9F(Global_1058064.f_119[iVar0]) && !unk_0x55B23FE400FCEA6B(Global_1058064.f_119[iVar0], 0))
				{
					if (func_166(Param0, unk_0x6B62510F212526DC(Global_1058064.f_119[iVar0], 1), unk_0x82FE2343F8BDFF0B(Global_1058064.f_119[iVar0]), unk_0x15CAA6D7B11F1A7C(Global_1058064.f_119[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_166(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var1;
	var uVar2;
	
	if (vdist(Param0, Param1) < func_173(iParam3, 1008981770))
	{
		func_167(Param1, fParam2, iParam3, &Var0, &Var1, &uVar2, fParam4);
		if (unk_0x5F8653E60ED2288E(Param0, Var0, Var1, uVar2, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_167(struct<3> Param0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	
	Var0 = { 0f, 1f, 0f };
	func_154(&Var0, 0f, 0f, uParam1);
	Var0 = { Var0 / FtoV(vmag(Var0)) };
	func_168(iParam2, &Var1, &Var2, 1086324736, 1080033280, 1077936128);
	Var3 = { Param0 + Var0 * FtoV((Var2.f_1 + fParam6)) };
	Var3.f_2 = (Var3.f_2 - ((0.5f * unk_0x48053974ED6F63CE((Var2.f_2 - Var1.f_2))) + fParam6));
	Var4 = { Param0 - Var0 * FtoV(((Var1.f_1 * -1f) + fParam6)) };
	Var4.f_2 = (Var4.f_2 + ((0.5f * unk_0x48053974ED6F63CE((Var2.f_2 - Var1.f_2))) + fParam6));
	*uParam3 = { Var3 };
	*uParam4 = { Var4 };
	*uParam5 = unk_0x48053974ED6F63CE((Var2.x - Var1.x));
}

void func_168(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0x61ADF697DF551DA6(iParam0))
	{
		unk_0xB38EF75835FAF667(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_171(iParam0);
		if (iVar0 != 0)
		{
			func_169(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
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

void func_169(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_170(iParam0, &Global_1577980);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x61ADF697DF551DA6(Global_1577980[iVar0]))
		{
			unk_0xB38EF75835FAF667(Global_1577980[iVar0], &(Global_1577984[iVar0 /*3*/]), &(Global_1577991[iVar0 /*3*/]));
		}
		if (vmag(Global_1577984[iVar0 /*3*/]) <= 0.01f || vmag(Global_1577991[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1577984[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1577991[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1577984[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1577991[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1577984[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1577991[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1577998[iVar0] = (Global_1577991[iVar0 /*3*/] - Global_1577984[iVar0 /*3*/]);
		Global_1578001[iVar0] = (Global_1577991[iVar0 /*3*/].f_1 - Global_1577984[iVar0 /*3*/].f_1);
		Global_1578004[iVar0] = (Global_1577991[iVar0 /*3*/].f_2 - Global_1577984[iVar0 /*3*/].f_2);
		if (Global_1577998[iVar0] > Global_1578007)
		{
			Global_1578007 = Global_1577998[iVar0];
		}
		if (Global_1578004[iVar0] > Global_1578008)
		{
			Global_1578008 = Global_1578004[iVar0];
		}
		iVar0++;
	}
	Global_1578009 = (Global_1578007 * -0.5f);
	Global_1578012 = (Global_1578007 * 0.5f);
	Global_1578009.f_1 = ((((0.5f * Global_1578001[0]) + Global_1578001[1]) + Global_1577980.f_3) * -1f);
	Global_1578012.f_1 = (0.5f * Global_1578001[0]);
	Global_1578009.f_2 = (Global_1578004[0] * -0.5f);
	Global_1578012.f_2 = (Global_1578004[0] * 0.5f);
	*uParam1 = { Global_1578009 };
	*uParam2 = { Global_1578012 };
}

void func_170(int iParam0, var uParam1)
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

int func_171(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_172(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_172(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

float func_173(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_168(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
	Var2 = { Var1 - Var0 };
	fVar3 = (sqrt(((((Var2.x * 0.5f) * (Var2.x * 0.5f)) + ((Var2.f_1 * 0.5f) * (Var2.f_1 * 0.5f))) + ((Var2.f_2 * 0.5f) * (Var2.f_2 * 0.5f)))) + fParam1);
	return fVar3;
}

int func_174(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_175(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853128[iParam0 /*888*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_175(int iParam0)
{
	return func_176(iParam0);
}

bool func_176(int iParam0)
{
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_11.f_1, 0);
}

int func_177(struct<3> Param0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	
	if (func_184(Param0))
	{
		if (func_147(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (func_179(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (func_178(*uParam1, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (vdist(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0])
		{
			if (bParam4)
			{
				func_153(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_178(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (vdist(Param0, Global_2667222.f_2735[iVar0 /*3*/]) < fParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_179(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_181(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_148(&Var2, &(Global_2667222.f_367[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_181(Var2, &uVar1) || func_180(Var2))
			{
				Var2 = { *uParam0 };
				func_148(&Var2, &(Global_2667222.f_367[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

int func_180(struct<3> Param0)
{
	float fVar0;
	
	if (Global_2667222.f_595 > 0f)
	{
		fVar0 = vdist(Param0, Global_2667222.f_592);
		if (fVar0 < Global_2667222.f_595)
		{
			return 1;
		}
	}
	return 0;
}

int func_181(struct<3> Param0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_183())
	{
		return 0;
	}
	iVar1 = func_182();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2667222.f_367[iVar0 /*12*/].f_9 == 1)
		{
			if (func_156(Param0, &(Global_2667222.f_367[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam1 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_182()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2667222.f_367[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_183()
{
	return Global_1946934.f_518;
}

int func_184(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2667222.f_514 && !Global_2667222.f_515)
	{
		if (!Global_2667222.f_45.f_316)
		{
			if (!func_188(unk_0x9E2D6C50374FCFA9(), 1))
			{
				return 1;
			}
			if (!func_187(Param0, 1008981770))
			{
				if (!func_147(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_147(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_186(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_185(&(Global_2667222.f_45[iVar0 /*12*/])) };
					if (!func_147(&Var1, 0, 0, 0, 1))
					{
						if (!func_147(&Param0, 0, 0, 0, 1))
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

Vector3 func_185(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_186(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2667222.f_45[iVar0 /*12*/].f_9)
		{
			if (func_156(Param0, &(Global_2667222.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_187(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2667222.f_45[iVar0 /*12*/].f_9)
		{
			if (func_156(Param0, &(Global_2667222.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_188(int iParam0, bool bParam1)
{
	if (func_190() != 0)
	{
		return func_189(iParam0) != 0;
	}
	return func_174(iParam0, bParam1, 0);
}

int func_189(int iParam0)
{
	if (func_2370(iParam0, 0, 1))
	{
		return Global_2689156[iParam0 /*453*/].f_1;
	}
	return 0;
}

int func_190()
{
	return Global_31505;
}

int func_191(struct<3> Param0, var uParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2667222.f_2261 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2667222.f_2261)
		{
			fVar3 = vdist(Global_2667222.f_2262[iVar0 /*4*/], Param0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam1 = { Global_2667222.f_2262[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_192(struct<3> Param0, struct<3> Param1, struct<3> Param2, bool bParam3, bool bParam4)
{
	func_193(&Param1, &Param2);
	if (((!Param0.x >= Param1.x || !Param0.f_1 >= Param1.f_1) || !Param0.x <= Param2.x) || !Param0.f_1 <= Param2.f_1)
	{
		return 0;
	}
	if (bParam3 && bParam4)
	{
		return 1;
	}
	else if (bParam3)
	{
		if (Param0.f_2 >= Param1.f_2)
		{
			return 1;
		}
	}
	else if (bParam4)
	{
		if (Param0.f_2 <= Param2.f_2)
		{
			return 1;
		}
	}
	else if (Param0.f_2 >= Param1.f_2 && Param0.f_2 <= Param2.f_2)
	{
		return 1;
	}
	return 0;
}

void func_193(var uParam0, var uParam1)
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

int func_194(struct<3> Param0, struct<3> Param1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (Param0.x > Param1.x)
	{
		Var1.x = Param0.x;
		Var0.x = Param1.x;
	}
	else
	{
		Var1.x = Param1.x;
		Var0.x = Param0.x;
	}
	if (Param0.f_1 > Param1.f_1)
	{
		Var1.f_1 = Param0.f_1;
		Var0.f_1 = Param1.f_1;
	}
	else
	{
		Var1.f_1 = Param1.f_1;
		Var0.f_1 = Param0.f_1;
	}
	if (Param0.f_2 > Param1.f_2)
	{
		Var1.f_2 = Param0.f_2;
		Var0.f_2 = Param1.f_2;
	}
	else
	{
		Var1.f_2 = Param1.f_2;
		Var0.f_2 = Param0.f_2;
	}
	if (vmag(Var1 - Var0) > 100f)
	{
		return 1;
	}
	if (fParam2 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_195(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_196(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	
	if (Global_2667222.f_2490.f_1 == 0 && Global_2667222.f_2490 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0xFCB1DFEFD6237222(&(Global_2667222.f_2490.f_1)))
			{
				case 0:
					func_258(uParam1, uParam2);
					if (!Global_2667222.f_2490.f_2)
					{
						if (uParam2->f_7 && Global_2667222.f_554.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_21)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_18 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_2667222.f_2465 };
							}
							if (uParam1->f_5 && func_145(Global_2667222.f_488))
							{
								if (!Global_2667222.f_2490.f_5)
								{
									Global_2667222.f_2490.f_5 = 1;
								}
								else
								{
									func_146(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_146(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = unk_0xC4EAB25A108C2429(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_258(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (unk_0xCCD530822438FEA4())
		{
			if (!unk_0xD41858BE1441F8A7())
			{
				if (unk_0xF4408128C21A71B1())
				{
					func_258(uParam1, uParam2);
					Global_2667222.f_2490.f_1 = unk_0x040E56A95FCFB423();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0x3D9CB48B182F9F3B();
				func_258(uParam1, uParam2);
				if (!Global_2667222.f_2490.f_2)
				{
					Global_2667222.f_2490.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_255(Global_2667222.f_554, &(Global_2667222.f_2490.f_57), &(Global_2667222.f_2490.f_90));
	}
	if (uParam2->f_7 && !Global_2667222.f_2490.f_4)
	{
		Global_2667222.f_2490.f_4 = 1;
		func_204(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar4 = 0;
	if (uParam1->f_5)
	{
		iVar5 = 64;
	}
	else
	{
		iVar5 = 32;
	}
	if (Global_2667222.f_2490.f_1 > 0 || Global_2667222.f_2490 > 0)
	{
		if (uParam1->f_5 || unk_0xCCD530822438FEA4())
		{
			iVar2 = 0;
			while (iVar2 < Global_2667222.f_2490.f_1)
			{
				if (iVar4 < iVar5)
				{
					if (iVar2 <= Global_2667222.f_2490.f_3)
					{
						iVar2 = Global_2667222.f_2490.f_3 + 1;
					}
					if (iVar2 > (Global_2667222.f_2490.f_1 - 1))
					{
						iVar2 = (Global_2667222.f_2490.f_1 - 1);
					}
					if (iVar2 < 0)
					{
						iVar2 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0x95CFC066B227F10D(iVar2, &Var0, &fVar1);
						fVar1 = (fVar1 * 57.29578f);
					}
					else
					{
						unk_0x27B82F0C405755B0(iVar2, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar3 = unk_0x821CEDAF62C8B557(iVar2);
					}
					else
					{
						unk_0x4ABAF316ADD9B9EA(iVar2, &iVar3);
					}
					func_204(Var0, fVar1, uParam1, uParam2, 0, iVar3);
					iVar4++;
					Global_2667222.f_2490.f_3 = iVar2;
				}
				else
				{
					return 0;
				}
				iVar2++;
			}
		}
		else
		{
			iVar2 = Global_2667222.f_2490.f_1;
		}
		if (Global_2667222.f_2490.f_1 == iVar2)
		{
			if (uParam1->f_5 && Global_2667222.f_2887)
			{
				func_198(&(Global_2667222.f_2490.f_6[0 /*10*/]), &(Global_2667222.f_2490.f_6[1 /*10*/]), &(Global_2667222.f_2490.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && func_145(Global_2667222.f_488))
			{
				if (Global_2667222.f_2490.f_2)
				{
					func_144(uParam0, &(Global_2667222.f_2490.f_6));
					func_197(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2667222.f_2465 };
					func_146(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = unk_0xC4EAB25A108C2429(0f, 360f);
					func_197(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2667222.f_2490.f_2)
			{
				func_144(uParam0, &(Global_2667222.f_2490.f_6));
				func_197(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar2 = unk_0x5853B15F78E1A265(0, Global_2667222.f_2490.f_1);
				unk_0x95CFC066B227F10D(iVar2, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!func_162(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					func_197(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2667222.f_2465 };
					func_146(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = unk_0xC4EAB25A108C2429(0f, 360f);
					func_197(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2667222.f_2465 };
				func_146(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = unk_0xC4EAB25A108C2429(0f, 360f);
				func_197(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2667222.f_2465 };
		if (uParam1->f_5 && func_145(Global_2667222.f_488))
		{
			if (!Global_2667222.f_2490.f_5)
			{
				Global_2667222.f_2490.f_5 = 1;
			}
			else
			{
				func_146(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar6 = false;
			}
			else
			{
				bVar6 = true;
			}
			func_146(uParam0[0 /*3*/], 0, bVar6, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = unk_0xC4EAB25A108C2429(0f, 360f);
		func_197(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_197(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2667222.f_2624[(3 - iVar0) /*3*/] = { Global_2667222.f_2624[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2667222.f_2624[0 /*3*/] = { Param0 };
}

void func_198(var uParam0, var uParam1, var uParam2)
{
	if (func_145(Global_2667222.f_488) && func_203() < 4096)
	{
		func_202(uParam0, 0f);
		func_202(uParam1, uParam0->f_2);
		func_202(uParam2, uParam1->f_2);
	}
	else
	{
		func_201(uParam0);
		func_200(uParam2, uParam0->f_4);
		func_199(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_199(var uParam0, struct<3> Param1, struct<3> Param2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<10> Var5;
	
	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2670163[iVar0 /*10*/] > 0)
		{
			fVar2 = vdist(Global_2670163[iVar0 /*10*/].f_4, Param1);
			fVar3 = vdist(Global_2670163[iVar0 /*10*/].f_4, Param2);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2670163[iVar0 /*10*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2670163[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_200(var uParam0, struct<3> Param1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<10> Var3;
	
	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2670163[iVar0 /*10*/] > 0)
		{
			fVar2 = vdist(Global_2670163[iVar0 /*10*/].f_4, Param1);
			fVar2 = (fVar2 * Global_2670163[iVar0 /*10*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2670163[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_201(var uParam0)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2670163[iVar0 /*10*/] > 0)
		{
			if (Global_2670163[iVar0 /*10*/].f_1 > fVar1)
			{
				fVar1 = Global_2670163[iVar0 /*10*/].f_1;
				Var2 = { Global_2670163[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_202(var uParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2670163[iVar0 /*10*/] > 0)
		{
			if (Global_2670163[iVar0 /*10*/].f_2 < fVar1 && Global_2670163[iVar0 /*10*/].f_2 > fParam1)
			{
				fVar1 = Global_2670163[iVar0 /*10*/].f_2;
				Var2 = { Global_2670163[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_203()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2670163[iVar0 /*10*/] > iVar1)
		{
			iVar1 = Global_2670163[iVar0 /*10*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_204(struct<3> Param0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	struct<3> Var12;
	bool bVar13;
	int iVar14;
	struct<3> Var15;
	struct<3> Var16;
	float fVar17;
	int iVar18;
	struct<10> Var19;
	bool bVar20;
	bool bVar21;
	
	iVar10 = 0;
	iVar8 = 0;
	bVar9 = false;
	if (uParam2->f_5)
	{
		if (Global_2667222.f_488 == 1)
		{
			if (unk_0x48053974ED6F63CE((Global_2667222.f_511.f_2 - Param0.f_2)) < 25f)
			{
				iVar8++;
			}
		}
		else
		{
			iVar8++;
		}
	}
	else
	{
		iVar8++;
	}
	if (uParam2->f_5)
	{
		if (func_251(unk_0x9E2D6C50374FCFA9()))
		{
			if (iParam5 == -1)
			{
				bVar9 = true;
			}
			else if (!iParam5 & 1 == 0)
			{
				bVar9 = true;
			}
		}
		else if (iParam5 == -1)
		{
			iVar8 += 2;
		}
		else if (!iParam5 & 1 == 0)
		{
			iVar8 += 2;
		}
	}
	else
	{
		iVar8 += 2;
	}
	if (uParam2->f_5 && uParam2->f_6)
	{
		if (!func_250(Param0, 1084227584, 1123024896, 0))
		{
			iVar8 += 4;
		}
	}
	else
	{
		iVar8 += 4;
	}
	if (uParam2->f_5)
	{
		if (!unk_0x3F9CA94B386E2F8C(unk_0xE2D3D51028F0428A(), Param0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!unk_0x3F9CA94B386E2F8C(unk_0xE2D3D51028F0428A(), Param0, 20f))
		{
			iVar8 += 8;
		}
	}
	else
	{
		iVar8 += 8;
		iVar8 += 16;
	}
	if (uParam2->f_5)
	{
		if (!func_45(Param0, uParam3->f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar8 += 32;
		}
	}
	else
	{
		iVar8 += 32;
	}
	bVar13 = true;
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (vmag(uParam3->f_13[iVar11 /*3*/]) > 0f)
		{
			if (!vdist(Param0, uParam3->f_13[iVar11 /*3*/]) > uParam3->f_20[iVar11])
			{
				bVar13 = false;
			}
		}
		iVar11++;
	}
	if (bVar13)
	{
		if ((vmag(uParam3->f_23) > 0f && vmag(uParam3->f_26) > 0f) && uParam3->f_29 > 0f)
		{
			if (unk_0x5F8653E60ED2288E(Param0, uParam3->f_23, uParam3->f_26, uParam3->f_29, 0, 1))
			{
				bVar13 = false;
			}
		}
	}
	if (bVar13)
	{
		iVar8 += 256;
	}
	if (uParam2->f_5)
	{
		if (func_244(Param0, fParam1, uParam2->f_15, func_249(1), uParam2->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_2667222.f_3;
		}
	}
	else if (!func_241(Param0, 25f, unk_0x9E2D6C50374FCFA9(), 1, 1))
	{
		if (uParam2->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_37(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!func_37(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar8 += 64;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2667222.f_700)
		{
			Var12 = { Global_2667222.f_511 };
			if (Global_2667222.f_488 == 26)
			{
				Var12 = { Global_2667222.f_554.f_18 };
			}
			if (!func_178(Param0, 0.5f))
			{
				if (func_184(Var12))
				{
					if (!func_147(&Param0, 0, 0, 0, 1) && !func_240(&Param0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!func_240(&Param0, 0))
				{
					iVar8 += 512;
				}
			}
		}
		else
		{
			iVar8 += 512;
		}
	}
	else if (!func_239(Param0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam2->f_5)
	{
		if (!(func_238(unk_0x9E2D6C50374FCFA9()) && func_236(unk_0x9E2D6C50374FCFA9())))
		{
			if (!func_235(&Param0, &(Global_2667222.f_2490.f_90), 0, 1065353216))
			{
				iVar8 += 1024;
			}
		}
		else
		{
			iVar8 += 1024;
		}
	}
	else
	{
		iVar8 += 1024;
	}
	if (uParam2->f_5)
	{
		if (!func_236(unk_0x9E2D6C50374FCFA9()))
		{
			if (!func_234(Param0, &(Global_2667222.f_2490.f_57), &(Global_2667222.f_2490.f_90), 1073741824))
			{
				iVar8 += 2048;
			}
		}
		else
		{
			iVar8 += 2048;
		}
	}
	else
	{
		iVar8 += 2048;
	}
	if (func_233(Param0))
	{
		if (uParam2->f_5)
		{
			if (func_145(Global_2667222.f_488))
			{
				if (func_187(Param0, 0.01f))
				{
					iVar8 += 4096;
				}
			}
			else
			{
				iVar8 += 4096;
			}
		}
		else
		{
			iVar8 += 4096;
		}
	}
	if (uParam2->f_5)
	{
		if (func_232(Param0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_2667222.f_45.f_55)
	{
		iVar8 += 16384;
	}
	else if (uParam2->f_5)
	{
		if (!iParam5 & 1 == 0)
		{
			if (unk_0xBCC73B466E2B2350(unk_0xA0F62C1038208492(Param0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam5 & 2 == 0)
	{
		if (unk_0xBCC73B466E2B2350(unk_0xA0F62C1038208492(Param0)))
		{
			iVar8 += 16384;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2667222.f_700)
		{
			if (!func_179(&Param0, 0, 0))
			{
				iVar8 = (iVar8 + 32768);
			}
		}
		else
		{
			iVar8 = (iVar8 + 32768);
		}
	}
	else
	{
		iVar8 = (iVar8 + 32768);
	}
	if (!func_162(&Param0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar14 = func_186(Param0, 1008981770);
		if (iVar14 > -1)
		{
			func_231(Param0, &Var15, &Var16, &fVar17);
			if (!func_226(&(Global_2667222.f_45[iVar14 /*12*/]), Var15, Var16, fVar17))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (func_165(Param0, 1056964608))
	{
		iVar8 = -1;
	}
	if (uParam3->f_33)
	{
		if (unk_0xAC48FF26FAAA8DD0(Param0.x, Param0.f_1, (Param0.f_2 + 1f), 0.3f))
		{
			iVar8 = -1;
		}
	}
	if (uParam3->f_34)
	{
		if (unk_0x34FAA537D539192C(Param0.x, Param0.f_1, (Param0.f_2 + 1f), 1f))
		{
			iVar8 = -1;
		}
	}
	if (uParam2->f_5)
	{
	}
	else if (func_225(Param0, 1, 0, uParam2->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar8 = 0;
	}
	Var19.f_2 = 1176256410;
	bVar20 = false;
	bVar21 = false;
	if (Global_2667222.f_2887 && uParam2->f_5)
	{
		if (iVar8 > 0)
		{
			if (bParam4)
			{
				uParam3->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam2->f_21)
			{
				fVar0 = func_216(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			else
			{
				fVar0 = func_216(Param0, Global_2667222.f_2465, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_145(Global_2667222.f_488) && iVar8 < 4096)
			{
				Var19.f_2 = func_214(Param0);
			}
			fVar7 = func_209(Param0, 1, 0, 0, 0, 0);
			Var19.f_4 = { Param0 };
			Var19.f_7 = fParam1;
			Var19 = iVar8;
			Var19.f_1 = fVar0;
			Var19.f_9 = fVar7;
			func_208(Var19);
			Global_2667222.f_2490.f_2 = 1;
		}
	}
	else
	{
		iVar18 = 0;
		while (iVar18 < 5)
		{
			if (iVar8 >= Global_2667222.f_2490.f_6[iVar18 /*10*/])
			{
				if (uParam2->f_5)
				{
					if (!bVar20)
					{
						if (bParam4)
						{
							uParam3->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam2->f_21)
						{
							fVar0 = func_216(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						else
						{
							fVar0 = func_216(Param0, Global_2667222.f_2465, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar20 = true;
					}
					if ((func_145(Global_2667222.f_488) && iVar8 == Global_2667222.f_2490.f_6[iVar18 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar21)
						{
							fVar2 = func_214(Param0);
							bVar21 = true;
						}
						if (fVar2 < Global_2667222.f_2490.f_6[iVar18 /*10*/].f_2)
						{
							Var19.f_4 = { Param0 };
							Var19.f_7 = fParam1;
							Var19 = iVar8;
							Var19.f_1 = fVar0;
							Var19.f_2 = fVar2;
							func_207(Var19, iVar18);
							Global_2667222.f_2490.f_2 = 1;
							return;
						}
					}
					else if (iVar8 > Global_2667222.f_2490.f_6[iVar18 /*10*/] || (iVar8 == Global_2667222.f_2490.f_6[iVar18 /*10*/] && fVar0 > Global_2667222.f_2490.f_6[iVar18 /*10*/].f_1))
					{
						Var19.f_4 = { Param0 };
						Var19.f_7 = fParam1;
						Var19 = iVar8;
						Var19.f_1 = fVar0;
						func_207(Var19, iVar18);
						Global_2667222.f_2490.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar20)
					{
						if (uParam2->f_15)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_206(Param0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_209(Param0, 1, 1, 1, 1, 0);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_205(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_205(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar20 = true;
					}
					if (iVar8 > Global_2667222.f_2490.f_6[iVar18 /*10*/] || (iVar8 == Global_2667222.f_2490.f_6[iVar18 /*10*/] && fVar3 > Global_2667222.f_2490.f_6[iVar18 /*10*/].f_3))
					{
						Var19.f_4 = { Param0 };
						Var19.f_7 = fParam1;
						Var19 = iVar8;
						Var19.f_3 = fVar3;
						func_207(Var19, iVar18);
						Global_2667222.f_2490.f_2 = 1;
						return;
					}
				}
			}
			iVar18++;
		}
	}
}

float func_205(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0.5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_206(struct<3> Param0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	bVar2 = false;
	fVar3 = 1E+13f;
	if (iParam2 && !bParam4)
	{
		if (func_2370(unk_0x9E2D6C50374FCFA9(), 1, 1))
		{
			if (!unk_0xA829C9A2767AC8EF())
			{
				if (unk_0x0318E2EE6FB4563F(Param0, fParam1))
				{
					fVar4 = vdist2(Param0, unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_2370(iVar1, 1, 1))
		{
			if (!func_39(iVar1, 0) && unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x9E2D6C50374FCFA9()))
				{
					if (func_38(iVar1) || !bParam6)
					{
						if (!bParam4)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x0E40F846A70BA3EC(iVar1) != unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()))) || unk_0x0E40F846A70BA3EC(iVar1) == -1)
							{
								if (unk_0x0809D748691DCA79(iVar1, Param0, fParam1))
								{
									fVar4 = vdist2(Param0, unk_0x6B62510F212526DC(unk_0x407E03586628E458(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0x0E40F846A70BA3EC(iVar1) != iParam5 || unk_0x0E40F846A70BA3EC(iVar1) == -1)
						{
							if (unk_0x0809D748691DCA79(iVar1, Param0, fParam1))
							{
								fVar4 = vdist2(Param0, unk_0x6B62510F212526DC(unk_0x407E03586628E458(iVar1), 0));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return sqrt(fVar3);
	}
	return -1f;
}

void func_207(struct<10> Param0, int iParam1)
{
	struct<10> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2667222.f_2490.f_6[iParam1 /*10*/] };
	Global_2667222.f_2490.f_6[iParam1 /*10*/] = { Param0 };
	if (iParam1 < 4)
	{
		func_207(Var0, iParam1 + 1);
	}
}

void func_208(struct<10> Param0)
{
	int iVar0;
	struct<10> Var1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	Var1.f_2 = 1176256410;
	iVar2 = func_203();
	if (Param0 > iVar2)
	{
		iVar2 = Param0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2670163[iVar0 /*10*/] < iVar2)
		{
			Global_2670163[iVar0 /*10*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0 < iVar2)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2670163[iVar0 /*10*/] == 0)
		{
			Global_2670163[iVar0 /*10*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar3 = 9999.9f;
	iVar4 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2670163[iVar0 /*10*/] > 0)
		{
			if (Global_2670163[iVar0 /*10*/].f_1 < fVar3)
			{
				fVar3 = Global_2670163[iVar0 /*10*/].f_1;
				iVar4 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar4 > -1)
	{
		Global_2670163[iVar4 /*10*/] = { Param0 };
	}
}

float func_209(struct<3> Param0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	struct<3> Var5;
	struct<3> Var6;
	int iVar7;
	
	fVar3 = 999999.9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar7 = iVar0;
		if (func_2370(iVar7, 1, 1) || (iParam5 == 1 && func_2370(iVar7, 0, 0)))
		{
			if (!iVar7 == unk_0x9E2D6C50374FCFA9() || iParam3 == 1)
			{
				bVar4 = false;
				if (bParam1)
				{
					if (func_210(iVar7))
					{
						bVar4 = true;
					}
				}
				if (bParam2)
				{
					if (unk_0x0E40F846A70BA3EC(iVar7) == unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()))
					{
						if (!unk_0x0E40F846A70BA3EC(iVar7) == -1 || !func_188(unk_0x9E2D6C50374FCFA9(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), iVar7) || !bParam4)
					{
						if (func_38(iVar7))
						{
							Var5 = { func_43(iVar7) };
							if (!iVar7 == unk_0x9E2D6C50374FCFA9())
							{
								Var6 = { unk_0x5C01EC35A233B127(unk_0x407E03586628E458(iVar7)) };
							}
							else
							{
								Var6 = { Var5 };
							}
							if (!bParam4)
							{
								if (Var5.f_2 < -100f)
								{
									Var5.f_2 = Param0.f_2;
								}
								if (Var6.f_2 < -100f)
								{
									Var6.f_2 = Param0.f_2;
								}
							}
							fVar1 = unk_0x987A5F1E1A67E3C0(Param0, Var5, 1);
							fVar2 = unk_0x987A5F1E1A67E3C0(Param0, Var6, 1);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

int func_210(int iParam0)
{
	if (func_2370(iParam0, 0, 1))
	{
		if (!func_212(iParam0))
		{
			if (unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), iParam0))
			{
				if (!unk_0x0E40F846A70BA3EC(iParam0) == unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()))
				{
					if (func_174(unk_0x9E2D6C50374FCFA9(), 1, 0))
					{
						if (!func_211(unk_0x0E40F846A70BA3EC(iParam0), unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x0E40F846A70BA3EC(iParam0) == -1 && unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) == -1)
				{
					if (!func_174(unk_0x9E2D6C50374FCFA9(), 1, 0))
					{
						if (!func_46(iParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_211(int iParam0, int iParam1, int iParam2)
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
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 0);
				
				case 1:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 1);
				
				case 2:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 2);
				
				case 3:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 4);
				
				case 1:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 5);
				
				case 2:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 6);
				
				case 3:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 8);
				
				case 1:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 9);
				
				case 2:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 10);
				
				case 3:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 12);
				
				case 1:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 13);
				
				case 2:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 14);
				
				case 3:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_212(int iParam0)
{
	if (func_39(iParam0, 0))
	{
		return 1;
	}
	if (func_213())
	{
		if (iParam0 == unk_0x9E2D6C50374FCFA9())
		{
			return 1;
		}
	}
	if (unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_213()
{
	return unk_0xE2D0C323A1AE5D85(Global_2621446, 3);
}

float func_214(struct<3> Param0)
{
	int iVar0;
	
	return func_215(Param0, &(Global_2667222.f_45), &iVar0);
}

float func_215(struct<3> Param0, var uParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = -1;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if ((uParam1[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam1[iVar0 /*12*/])->f_10)
			{
				case 0:
					fVar1 = vdist(*(uParam1[iVar0 /*12*/]), Param0);
					fVar1 = (fVar1 - ((uParam1[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2667222.f_2733) * (uParam1[iVar0 /*12*/])->f_8)));
					break;
				
				case 1:
				case 2:
					if (Param0.x < (*uParam1)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam1)[iVar0 /*12*/] - Param0.x));
					}
					else if (Param0.x > (uParam1[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (Param0.x - (uParam1[iVar0 /*12*/])->f_3));
					}
					if (Param0.f_1 < (uParam1[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_1 - Param0.f_1));
					}
					else if (Param0.f_1 > (uParam1[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (Param0.f_1 - (uParam1[iVar0 /*12*/])->f_3.f_1));
					}
					if (Param0.f_2 < (uParam1[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_2 - Param0.f_2));
					}
					else if (Param0.f_2 > (uParam1[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (Param0.f_2 - (uParam1[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*iParam2 = iVar3;
	return fVar2;
}

float func_216(struct<3> Param0, struct<3> Param1, bool bParam2, bool bParam3, bool bParam4, int iParam5, var uParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	fVar1 = 1f;
	if (iParam5 > 0)
	{
		fVar1 = (to_float(iParam5) / to_float(8));
	}
	if (bParam2)
	{
		fVar0 = func_205(vdist(Param0, Param1), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam6 = 1E+07f;
	fVar4 = func_209(Param0, 1, 0, 0, 1, 0);
	fVar0 = func_205(fVar4, 0f, func_224(), func_222(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_220(Param0);
	fVar0 = func_205(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) == -1 && !func_188(unk_0x9E2D6C50374FCFA9(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_218(Param0, unk_0x9E2D6C50374FCFA9(), 0);
	fVar0 = func_205(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	if (bParam3)
	{
		if (func_217(Param0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_205(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_205(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam4)
	{
		fVar0 = func_205(vdist(Global_2667222.f_511, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_217(struct<3> Param0, var uParam1, var uParam2)
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	uVar1 = unk_0x67A3682C37778785(Param0, 1, &uVar3, &uVar2, 1, 3f, 0f);
	if (unk_0x958AC759881D0B58(uVar1))
	{
		unk_0x1B54427560DFE3C3(uVar1, &Var0);
		*uParam1 = vdist(Param0.x, Param0.f_1, 0f, Var0.x, Var0.f_1, 0f);
		*uParam2 = unk_0x48053974ED6F63CE((Param0.f_2 - Var0.f_2));
		return 1;
	}
	return 0;
}

float func_218(struct<3> Param0, int iParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	if (func_2370(iParam1, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!iParam1 == iVar2 || iParam2 == 1)
			{
				iVar3 = iVar2;
				if (func_2370(iVar3, 0, 1))
				{
					if (unk_0x0E40F846A70BA3EC(iVar3) != unk_0x0E40F846A70BA3EC(iParam1) || (unk_0x0E40F846A70BA3EC(iVar3) == -1 && unk_0x0E40F846A70BA3EC(iParam1) == -1))
					{
						if (!func_219(iVar3, iParam1))
						{
							if (Global_2680195.f_261[iVar2])
							{
								fVar1 = vdist(Global_2680195.f_131[iVar2 /*3*/], Param0);
								if (fVar1 < fVar0)
								{
									fVar0 = fVar1;
								}
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	return fVar0;
}

int func_219(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != func_24() && iParam1 != func_24())
	{
		iVar0 = func_23(iParam0);
		if (iVar0 != func_24())
		{
			return iVar0 == func_23(iParam1);
		}
	}
	return 0;
}

float func_220(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	var uVar4[32];
	int iVar5;
	
	iVar5 = unk_0x46951D3186547C7A(unk_0xE2D3D51028F0428A(), &uVar4, 2);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar5)
	{
		if (unk_0xE5965CDF24F93A9F(uVar4[iVar2]))
		{
			if (!unk_0x55B23FE400FCEA6B(uVar4[iVar2], 0))
			{
				if (func_221(uVar4[iVar2]))
				{
					Var3 = { unk_0x6B62510F212526DC(uVar4[iVar2], 1) };
					fVar1 = unk_0x987A5F1E1A67E3C0(Param0, Var3, 1);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	if (Global_2667222.f_2932)
	{
		if (Global_1058064.f_267 > 0)
		{
			iVar2 = 0;
			while (iVar2 < Global_1058064.f_267)
			{
				if (unk_0xE5965CDF24F93A9F(Global_1058064.f_152[iVar2]))
				{
					if (!unk_0x55B23FE400FCEA6B(Global_1058064.f_152[iVar2], 0))
					{
						if (func_221(Global_1058064.f_152[iVar2]))
						{
							Var3 = { unk_0x6B62510F212526DC(Global_1058064.f_152[iVar2], 1) };
							fVar1 = unk_0x987A5F1E1A67E3C0(Param0, Var3, 1);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return fVar0;
}

int func_221(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x6F8FB52F5D1D0B84(uParam0);
	switch (unk_0x76932AF783B85B6A(iVar0, 1862763509))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (unk_0x5B79688A82EAC2F0(Global_1837147[unk_0x9E2D6C50374FCFA9()]))
	{
		switch (unk_0x76932AF783B85B6A(iVar0, Global_1837147[unk_0x9E2D6C50374FCFA9()]))
		{
			case 3:
			case 5:
				return 1;
				break;
			}
	}
	if (Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/] == 0)
	{
		iVar1 = unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9());
		if (iVar1 > -1 && iVar1 < 4)
		{
			if (unk_0x5B79688A82EAC2F0(Global_1836857[iVar1]))
			{
				switch (unk_0x76932AF783B85B6A(iVar0, Global_1836857[iVar1]))
				{
					case 3:
					case 5:
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

float func_222()
{
	if (func_223())
	{
		if ((unk_0xD6F7D32A98E07F93(Global_2667222.f_45.f_67) || unk_0x4262B4DCEADC2695(Global_2667222.f_45.f_67)) || Global_2667222.f_45.f_67 == joaat("rhino"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_223()
{
	if (Global_2667222.f_45.f_65 && !Global_2667222.f_45.f_303)
	{
		if (!func_212(unk_0x9E2D6C50374FCFA9()))
		{
			return 1;
		}
	}
	return 0;
}

float func_224()
{
	if (func_223())
	{
		if ((unk_0xD6F7D32A98E07F93(Global_2667222.f_45.f_67) || unk_0x4262B4DCEADC2695(Global_2667222.f_45.f_67)) || Global_2667222.f_45.f_67 == joaat("rhino"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_225(struct<3> Param0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5, float fParam6, float fParam7)
{
	float fVar0;
	
	fVar0 = iParam4;
	if (bParam3)
	{
		fVar0 = fParam5;
	}
	if ((((fParam5 > 0f && unk_0x34FAA537D539192C(Param0, fParam5)) || (fVar0 > 0f && unk_0xAC48FF26FAAA8DD0(Param0, fVar0))) || ((iParam2 == 1 && fParam6 > 0f) && unk_0x2D3CDDF3FE35FCA6(Param0, fParam6, 0))) || ((iParam1 == 1 && fParam7 > 0f) && unk_0x2D3CDDF3FE35FCA6(Param0, fParam7, 1)))
	{
		return 1;
	}
	return 0;
}

int func_226(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3)
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_230(*uParam0, uParam0->f_6, Param1, Param2, fParam3))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_229(*uParam0, uParam0->f_3, Param1, Param2, fParam3))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_227(*uParam0, uParam0->f_3, uParam0->f_6, Param1, Param2, fParam3))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_227(struct<3> Param0, struct<3> Param1, float fParam2, struct<3> Param3, struct<3> Param4, float fParam5)
{
	struct<3> Var0[8];
	int iVar1;
	
	func_228(Param0, Param1, fParam2, &Var0);
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!unk_0x5F8653E60ED2288E(Var0[iVar1 /*3*/], Param3, Param4, fParam5, 0, 1))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_228(struct<3> Param0, struct<3> Param1, float fParam2, var uParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	var uVar2;
	var uVar3;
	
	if (Param0.f_2 == Param1.f_2)
	{
		Param1.f_2 = (Param1.f_2 + 0.01f);
	}
	Var0 = { Param0 - Param1 };
	Var1 = { func_151(Var0, Var0.x, Var0.f_1, 0f) };
	Var1 = { Var1 / FtoV(vmag(Var1)) };
	Var1 = { Var1 * FtoV((fParam2 * 0.5f)) };
	if (Param0.f_2 > Param1.f_2)
	{
		uVar2 = Param1.f_2;
		uVar3 = Param0.f_2;
	}
	else
	{
		uVar2 = Param0.f_2;
		uVar3 = Param1.f_2;
	}
	*(uParam3[0 /*3*/]) = { Vector(uVar2, Param0.f_1, Param0.x) + Var1 };
	*(uParam3[1 /*3*/]) = { Vector(uVar2, Param0.f_1, Param0.x) - Var1 };
	*(uParam3[2 /*3*/]) = { Vector(uVar3, Param0.f_1, Param0.x) - Var1 };
	*(uParam3[3 /*3*/]) = { Vector(uVar3, Param0.f_1, Param0.x) + Var1 };
	*(uParam3[4 /*3*/]) = { Vector(uVar2, Param1.f_1, Param1.x) + Var1 };
	*(uParam3[5 /*3*/]) = { Vector(uVar2, Param1.f_1, Param1.x) - Var1 };
	*(uParam3[6 /*3*/]) = { Vector(uVar3, Param1.f_1, Param1.x) - Var1 };
	*(uParam3[7 /*3*/]) = { Vector(uVar3, Param1.f_1, Param1.x) + Var1 };
}

int func_229(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3, float fParam4)
{
	struct<3> Var0[8];
	int iVar1;
	
	Var0[0 /*3*/] = { Param0.x, Param0.f_1, Param0.f_2 };
	Var0[1 /*3*/] = { Param0.x, Param0.f_1, Param1.f_2 };
	Var0[2 /*3*/] = { Param0.x, Param1.f_1, Param1.f_2 };
	Var0[3 /*3*/] = { Param0.x, Param1.f_1, Param0.f_2 };
	Var0[4 /*3*/] = { Param1.x, Param0.f_1, Param0.f_2 };
	Var0[5 /*3*/] = { Param1.x, Param0.f_1, Param1.f_2 };
	Var0[6 /*3*/] = { Param1.x, Param1.f_1, Param1.f_2 };
	Var0[7 /*3*/] = { Param1.x, Param1.f_1, Param0.f_2 };
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!unk_0x5F8653E60ED2288E(Var0[iVar1 /*3*/], Param2, Param3, fParam4, 0, 1))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_230(struct<3> Param0, float fParam1, struct<3> Param2, struct<3> Param3, float fParam4)
{
	struct<3> Var0[4];
	int iVar1;
	
	Var0[0 /*3*/] = { Param0 + Vector(0f, fParam1, 0f) };
	Var0[1 /*3*/] = { Param0 + Vector(0f, (-1f * fParam1), 0f) };
	Var0[2 /*3*/] = { Param0 + Vector(0f, 0f, fParam1) };
	Var0[3 /*3*/] = { Param0 + Vector(0f, 0f, (-1f * fParam1)) };
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (!unk_0x5F8653E60ED2288E(Var0[iVar1 /*3*/], Param2, Param3, fParam4, 0, 1))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_231(struct<3> Param0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	
	Var1 = { Param0 };
	iVar2 = func_164(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2673701[iVar2])
	{
		if (func_163(Var1, &(Global_2672368[iVar2 /*148*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_2672368[iVar2 /*148*/][iVar0 /*7*/] };
			*uParam2 = { Global_2672368[iVar2 /*148*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_2672368[iVar2 /*148*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2673701[8])
	{
		if (func_163(Var1, &(Global_2672368[8 /*148*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_2672368[8 /*148*/][iVar0 /*7*/] };
			*uParam2 = { Global_2672368[8 /*148*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_2672368[8 /*148*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_232(struct<3> Param0)
{
	var uVar0;
	int iVar1;
	
	if (Global_2667222.f_45.f_55)
	{
		if (unk_0xBCC73B466E2B2350(Global_2667222.f_45.f_56))
		{
			if (!unk_0x15616E8442D3D1E8(Param0))
			{
				uVar0 = unk_0xA0F62C1038208492(Param0);
				if (unk_0xBCC73B466E2B2350(uVar0))
				{
					iVar1 = unk_0xA57F6A48F0EB95A0(uVar0);
					if (!iVar1 == Global_2667222.f_45.f_57)
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
	}
	return 1;
}

int func_233(struct<3> Param0)
{
	switch (Global_2667222.f_2486)
	{
		case 0:
			return func_263(Param0, Global_2667222.f_2465, Global_2667222.f_2468, 0, 0);
			break;
		
		case 1:
			return func_192(Param0, Global_2667222.f_2479, Global_2667222.f_2482, 0, 0);
			break;
		
		case 2:
			return unk_0x5F8653E60ED2288E(Param0, Global_2667222.f_2479, Global_2667222.f_2482, Global_2667222.f_2485, 0, 1);
			break;
	}
	return 0;
}

int func_234(struct<3> Param0, var uParam1, var uParam2, float fParam3)
{
	float fVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam1)
	{
		fVar0 = ((uParam1[iVar1 /*4*/])->f_3 + fParam3);
		if (vdist(*(uParam1[iVar1 /*4*/]), Param0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	Var2 = { 0f, 0f, 0f };
	Var3 = { 0f, 0f, 0f };
	fVar4 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam2)
	{
		Var2 = { *(uParam2[iVar1 /*10*/]) };
		Var3 = { (uParam2[iVar1 /*10*/])->f_3 };
		fVar4 = (uParam2[iVar1 /*10*/])->f_6;
		if (unk_0x5F8653E60ED2288E(Param0, Var2, Var3, fVar4, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_235(var uParam0, var uParam1, bool bParam2, float fParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (vdist((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				Var1 = { *uParam0 };
				func_153(&Var1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_236(int iParam0)
{
	switch (func_190())
	{
		case 0:
			if (!func_237(iParam0))
			{
				if (Global_1853128[iParam0 /*888*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_237(int iParam0)
{
	return Global_1853128[iParam0 /*888*/].f_192 != 0;
}

int func_238(int iParam0)
{
	if (func_174(iParam0, 1, 0))
	{
		if (Global_1853128[iParam0 /*888*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_239(struct<3> Param0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (vdist2(Global_2667222.f_2624[iVar0 /*3*/], Param0) < (fParam1 * fParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_240(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar2;
	
	if (func_180(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar2 = unk_0xC4EAB25A108C2429(0.01f, 360f);
			func_153(&Var1, Global_2667222.f_592, Global_2667222.f_595, 1036831949, 0, fVar2);
			if (func_181(Var1, &uVar0) || func_180(Var1))
			{
				Var1 = { *uParam0 };
				func_153(&Var1, Global_2667222.f_592, Global_2667222.f_595, 1036831949, 1, fVar2);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_241(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_243(Param0, fParam1, iParam2, iParam3, 0) || func_242(Param0, iParam2, iParam4))
	{
		return 1;
	}
	return 0;
}

int func_242(struct<3> Param0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam1 == iVar0 || iParam2 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_166(Param0, Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_2370(iVar2, 0, 1) && func_2370(iParam1, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_243(struct<3> Param0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam2 == iVar0 || iParam3 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam4)
			{
				if (func_2370(iVar1, 0, 1) && func_2370(iParam2, 0, 1))
				{
					if (unk_0x0E40F846A70BA3EC(iVar1) == unk_0x0E40F846A70BA3EC(iParam2))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_2370(iVar1, 0, 1) && func_2370(iParam2, 0, 1))
				{
					if (Global_2680195.f_261[iVar0])
					{
						if (vdist(Global_2680195.f_131[iVar0 /*3*/], Param0) < fParam1)
						{
							return 1;
						}
					}
					else if (vdist(func_43(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2680195.f_261[iVar0])
				{
					if (vdist(Global_2680195.f_131[iVar0 /*3*/], Param0) < fParam1)
					{
						return 1;
					}
				}
				else if (func_2370(iVar1, 0, 1))
				{
					if (vdist(func_43(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_244(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, float fParam7, int iParam8, float fParam9, float fParam10, float fParam11, bool bParam12, bool bParam13)
{
	Global_2667222.f_3 = 0;
	if (!func_241(Param0, 0.5f, unk_0x9E2D6C50374FCFA9(), 0, 0))
	{
		Global_2667222.f_3++;
		if (bParam3)
		{
			if (func_36(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_2667222.f_3 = (Global_2667222.f_3 + Global_2667222.f_2);
				if (!func_248(Param0, fParam10))
				{
					Global_2667222.f_3++;
					if (!func_165(Param0, 1056964608))
					{
						Global_2667222.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2667222.f_3 = (Global_2667222.f_3 + Global_2667222.f_2);
			}
		}
		else if (!bParam2)
		{
			if (func_36(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_2667222.f_3 = (Global_2667222.f_3 + Global_2667222.f_2);
				if (!func_248(Param0, fParam10))
				{
					Global_2667222.f_3++;
					if (!func_245(Param0, fParam1, fParam7, iParam8, 1084227584))
					{
						Global_2667222.f_3++;
						if (!func_165(Param0, 1056964608))
						{
							Global_2667222.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2667222.f_3 = (Global_2667222.f_3 + Global_2667222.f_2);
			}
		}
		else if (func_36(Param0, 6f, 5f, 5f, 5f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
		{
			Global_2667222.f_3 = (Global_2667222.f_3 + Global_2667222.f_2);
			if (!func_248(Param0, fParam10))
			{
				Global_2667222.f_3++;
				if (!func_245(Param0, fParam1, fParam7, iParam8, fParam9))
				{
					Global_2667222.f_3++;
					if (!func_165(Param0, 1056964608))
					{
						Global_2667222.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2667222.f_3 = (Global_2667222.f_3 + Global_2667222.f_2);
		}
	}
	return 0;
}

int func_245(struct<3> Param0, float fParam1, float fParam2, var uParam3, float fParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!unk_0x9E2D6C50374FCFA9() == iVar1)
		{
			if ((func_2370(iVar1, 1, 1) && func_38(iVar1)) && unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), iVar1))
			{
				if (!func_247(unk_0x9E2D6C50374FCFA9(), iVar1, -2, 0))
				{
					if (func_246(func_43(iVar1), Param0, fParam1, fParam2, uParam3, fParam4))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_246(struct<3> Param0, struct<3> Param1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	struct<3> Var0;
	struct<3> Var1;
	
	fParam2 = (fParam2 * -1f);
	fParam2 = (fParam2 + 360f);
	Var0.x = sin(fParam2);
	Var0.f_1 = cos(fParam2);
	Var0.f_2 = 0f;
	Var0 = { Var0 / FtoV(vmag(Var0)) };
	Var0 = { Var0 * Vector(fParam3, fParam3, fParam3) };
	Var1 = { Param1 + Var0 };
	Var1.f_2 = Param1.f_2;
	Var1.f_2 = (Var1.f_2 + fParam5);
	Param1.f_2 = (Param1.f_2 + fParam5);
	return unk_0x5F8653E60ED2288E(Param0, Param1, Var1, uParam4, 0, 1);
}

bool func_247(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x0E40F846A70BA3EC(iParam0) == -1 && unk_0x0E40F846A70BA3EC(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x0E40F846A70BA3EC(iParam0) == unk_0x0E40F846A70BA3EC(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x0E40F846A70BA3EC(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x0E40F846A70BA3EC(iParam0) == iParam2;
	}
	return unk_0x0E40F846A70BA3EC(iParam0) == iParam2;
}

int func_248(struct<3> Param0, float fParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_2370(iVar1, 1, 1) && func_38(iVar1)) && unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), iVar1))
		{
			if ((unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) == -1 && unk_0x0E40F846A70BA3EC(iVar1) == -1) && !func_188(unk_0x9E2D6C50374FCFA9(), 1))
			{
				return 0;
			}
			else if ((unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) == -1 && !unk_0x9E2D6C50374FCFA9() == iVar1) || !func_247(unk_0x9E2D6C50374FCFA9(), iVar1, -2, 0))
			{
				if (vdist(Param0, func_43(iVar1)) < fParam1)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_249(int iParam0)
{
	if ((Global_2667222.f_488 == 9 || Global_2667222.f_488 == 9) || (Global_2667222.f_488 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_250(struct<3> Param0, float fParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_2370(iVar1, 1, 1))
			{
				if ((!func_39(iVar1, 0) && unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), iVar1)) && iVar1 != unk_0x9E2D6C50374FCFA9())
				{
					fVar2 = iParam2;
					if (fParam3 > 0f)
					{
						if (!unk_0x0E40F846A70BA3EC(iVar1) == -1)
						{
							if (unk_0x0E40F846A70BA3EC(iVar1) == unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()))
							{
								fVar2 = fParam3;
							}
						}
					}
					if (unk_0x0E40F846A70BA3EC(iVar1) == iVar3)
					{
						if (unk_0x987A5F1E1A67E3C0(func_43(iVar1), Param0, 1) <= (fVar2 + fParam1))
						{
							if (unk_0x0809D748691DCA79(iVar1, Param0, fParam1))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_251(int iParam0)
{
	if (((func_188(iParam0, 1) || func_254(iParam0)) || func_253(iParam0, 0)) || func_252(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_252(int iParam0)
{
	if (!func_2370(iParam0, 0, 1))
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_887, 2);
}

int func_253(int iParam0, int iParam1)
{
	if (Global_1893548[iParam0 /*600*/].f_11.f_33 != -1 || (iParam1 && Global_1893548[iParam0 /*600*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_254(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1893548[iVar0 /*600*/] != -1;
	}
	return 0;
}

void func_255(struct<3> Param0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	struct<8> Var4;
	struct<3> Var5;
	struct<3> Var6;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		*(uParam1[iVar0 /*4*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		*(uParam2[iVar0 /*10*/]) = { Var4 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1573885)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!unk_0xE2D0C323A1AE5D85(Global_2621865[iVar1 /*26*/].f_12, 11))
			{
				if (vmag(*(uParam1[iVar0 /*4*/])) == 0f || vdist(Global_2621865[iVar1 /*26*/].f_3, Param0) < vdist(*(uParam1[iVar0 /*4*/]), Param0))
				{
					Var3 = { Global_2621865[iVar1 /*26*/].f_3 };
					Var3.f_3 = Global_2621865[iVar1 /*26*/].f_6.f_2;
					func_257(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 17)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (vmag(*(uParam1[iVar0 /*4*/])) == 0f || vdist(Global_262145.f_6158[iVar1 /*3*/], Param0) < vdist(*(uParam1[iVar0 /*4*/]), Param0))
			{
				Var3 = { Global_262145.f_6158[iVar1 /*3*/] };
				Var3.f_3 = 3f;
				func_257(&Var3, uParam1, iVar0);
				iVar0 = *uParam1;
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 17)
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar0 = 0;
			while (iVar0 < *uParam1)
			{
				if (vmag(*(uParam1[iVar0 /*4*/])) == 0f || vdist(Global_262145.f_6210[iVar1 /*19*/][iVar2 /*3*/], Param0) < vdist(*(uParam1[iVar0 /*4*/]), Param0))
				{
					Var3 = { Global_262145.f_6210[iVar1 /*19*/][iVar2 /*3*/] };
					Var3.f_3 = 3f;
					func_257(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1573850)
	{
		iVar0 = 0;
		while (iVar0 < *uParam2)
		{
			Var5 = { Global_1573169[iVar1 /*8*/].f_1 + Global_1573169[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			Var6 = { *(uParam2[iVar0 /*10*/]) + (uParam2[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (vmag(*(uParam2[iVar0 /*10*/])) == 0f || vdist(Var5, Param0) < vdist(Var6, Param0))
			{
				Var4 = { Global_1573169[iVar1 /*8*/].f_1 };
				Var4.f_3 = { Global_1573169[iVar1 /*8*/].f_4 };
				Var4.f_6 = Global_1573169[iVar1 /*8*/].f_7;
				Var4.f_7 = { Global_2621541[iVar1 /*3*/] };
				func_256(&Var4, uParam2, iVar0);
				iVar0 = *uParam2;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_256(var uParam0, var uParam1, int iParam2)
{
	Global_2674706 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_256(&Global_2674706, uParam1, iParam2 + 1);
	}
}

void func_257(var uParam0, var uParam1, int iParam2)
{
	Global_2674702 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_257(&Global_2674702, uParam1, iParam2 + 1);
	}
}

void func_258(var uParam0, var uParam1)
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	
	if (Global_2667222.f_2261 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2667222.f_2261)
		{
			if (func_259(Global_2667222.f_2262[iVar0 /*4*/], uParam0))
			{
				fVar2 = Global_2667222.f_2262[iVar0 /*4*/].f_3;
				if (vmag(*uParam1) > 0.01f)
				{
					Var1 = { *uParam1 - Global_2667222.f_2262[iVar0 /*4*/] };
					fVar2 = unk_0xD12EFCAB87804BED(Var1.x, Var1.f_1);
				}
				func_204(Global_2667222.f_2262[iVar0 /*4*/], fVar2, uParam0, uParam1, 0, uParam0->f_28);
				Global_2667222.f_2490++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2667222.f_2887)
	{
		func_198(&(Global_2667222.f_2490.f_6[0 /*10*/]), &(Global_2667222.f_2490.f_6[1 /*10*/]), &(Global_2667222.f_2490.f_6[2 /*10*/]));
	}
}

int func_259(struct<3> Param0, var uParam1)
{
	switch (uParam1->f_7)
	{
		case 0:
			return func_157(Param0, uParam1->f_7, *uParam1, 0f, 0f, 0f, uParam1->f_4);
		
		case 1:
		case 2:
			return func_157(Param0, uParam1->f_7, uParam1->f_8, uParam1->f_11, uParam1->f_14);
		
		default:
	}
	return 0;
}

void func_260(struct<3> Param0, struct<3> Param1, var uParam2, var uParam3, var uParam4)
{
	float fVar0;
	
	func_193(&Param0, &Param1);
	fVar0 = (Param1.x - Param0.x);
	*uParam2 = (Param0.x + (fVar0 * 0.5f));
	uParam2->f_1 = Param0.f_1;
	uParam2->f_2 = Param0.f_2;
	*uParam3 = *uParam2;
	uParam3->f_1 = Param1.f_1;
	uParam3->f_2 = Param1.f_2;
	*uParam4 = (fVar0 * 0.5f);
}

var func_261()
{
	return Global_1573131.f_4;
}

void func_262(var uParam0, var uParam1)
{
	func_299();
	func_292(uParam0, uParam1);
}

bool func_263(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3 && bParam4)
	{
		Param0.f_2 = 0f;
		Param1.f_2 = 0f;
		return vdist(Param0, Param1) < (fParam2 + 0.01f);
	}
	else if (bParam3)
	{
		if (Param0.f_2 > Param1.f_2)
		{
			Param0.f_2 = Param1.f_2;
		}
		return vdist(Param0, Param1) < (fParam2 + 0.01f);
	}
	else if (bParam4)
	{
		if (Param0.f_2 < Param1.f_2)
		{
			Param0.f_2 = Param1.f_2;
		}
		return vdist(Param0, Param1) < (fParam2 + 0.01f);
	}
	return vdist(Param0, Param1) < (fParam2 + 0.01f);
}

void func_264(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2667222.f_1753 > 0)
	{
		iVar0 = 0;
		while (func_286(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_265(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_265(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	struct<3> Var25;
	var uVar26;
	struct<3> Var27;
	var uVar28;
	bool bVar29;
	
	iVar0 = 0;
	if (!vmag(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_177(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (func_285(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar3 = 0;
	iVar8 = 1;
	if (uParam2->f_11)
	{
		iVar3 += 2;
		iVar3++;
		iVar8 = 0;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar3++;
		iVar8 = 0;
	}
	iVar3 += 4;
	fVar11 = 3f;
	fVar12 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar11 = 3f;
			fVar12 = 5f;
			break;
		
		case 1:
			fVar11 = 2.75f;
			fVar12 = 7.5f;
			break;
		
		default:
			fVar11 = 2.5f;
			fVar12 = 10f;
			break;
	}
	iVar13 = 0;
	Global_2674716.f_162 = 0;
	Global_2674716.f_163 = 0;
	Global_2674716.f_164 = -99;
	Global_2674716.f_165 = { 0f, 0f, 0f };
	iVar14 = 0;
	while (iVar14 < 40)
	{
		Global_2674716[iVar14 /*3*/] = { 0f, 0f, 0f };
		Global_2674716.f_121[iVar14] = 0f;
		iVar14++;
	}
	iVar15 = 1;
	if (func_171(uParam2->f_34) != 0)
	{
		iVar15 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar6 = unk_0x67A3682C37778785(*uParam0, (iVar0 * iVar15), &uVar2, &iVar7, iVar3, fVar11, fVar12);
		if (unk_0x958AC759881D0B58(iVar6))
		{
			unk_0x1B54427560DFE3C3(iVar6, &Var1);
			bVar10 = false;
			if (Global_2674716.f_164 == iVar6)
			{
				bVar10 = true;
			}
			Global_2674716.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0x535E2CA2F0DA34D4(iVar6)) || unk_0xA202F3522092063D(iVar6))
			{
				unk_0x4C1EEF24CF4B2752(Var1, &uVar4, &uVar5);
				if (vdist(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_240(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar5 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!func_284(Var1))
									{
										Var1 = { func_280(Var1, &uVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51, uParam2->f_60) };
										if (vmag(Var1) > 0f)
										{
											if (!func_165(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_279(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_285(&Var1, 0)) || uParam2->f_48 == 0)
															{
																bVar16 = true;
																if (!bVar10)
																{
																	if (bVar9)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar16 = false;
																	}
																}
																if (vmag(Var1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && vdist(Var1.x, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_275(Var1, uVar2, uParam2->f_34, unk_0x9E2D6C50374FCFA9(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_177(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar17 = uParam2->f_31;
																					bVar18 = true;
																					iVar19 = 1;
																					fVar20 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						fVar20 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar20 = (fVar20 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar18 = true;
																						iVar19 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar20 = (fVar20 * 0.375f);
																							}
																						}
																					}
																					iVar21 = 0;
																					if (!func_274(Var1, uVar2, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_36(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (func_36(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_272(Var1, uVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar21 = 1;
																						}
																					}
																					if (iVar21 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar23 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar22 = func_271(Var1, uParam2->f_54, &fVar23);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar22 < uParam2->f_53)
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2674716.f_162)
																										{
																											Global_2674716[iVar14 /*3*/] = { 0f, 0f, 0f };
																											Global_2674716.f_121[iVar14] = 0f;
																											iVar14++;
																										}
																										Global_2674716.f_162 = 0;
																										uParam2->f_53 = iVar22;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2674716.f_162 == 0)
																									{
																										Global_2674716[0 /*3*/] = { Var1 };
																										Global_2674716.f_121[0] = uVar2;
																									}
																									else
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2674716.f_162 + 1)
																										{
																											if (iVar14 < 40)
																											{
																												if (vdist2(Var1, uParam2->f_35) < vdist2(Global_2674716[iVar14 /*3*/], uParam2->f_35))
																												{
																													func_270(Var1, uVar2, iVar14);
																													iVar14 = Global_2674716.f_162 + 1;
																												}
																											}
																											iVar14++;
																										}
																									}
																									Global_2674716.f_162++;
																									if (Global_2674716.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2674716.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2674716[Global_2674716.f_162 /*3*/] = { Var1 };
																									Global_2674716.f_121[Global_2674716.f_162] = uVar2;
																									Global_2674716.f_162++;
																									if (func_279(Var1, uParam2))
																									{
																										Global_2674716.f_163++;
																									}
																									if (Global_2674716.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2674716.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { Var1 };
																							*uParam1 = uVar2;
																							return 1;
																						}
																					}
																					else if (bVar16)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { Var1 };
																					*uParam1 = uVar2;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar13++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar13++;
					}
				}
				else
				{
					iVar13++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar13) || iVar0 >= 100)
			{
				if (Global_2674716.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2674716[0 /*3*/] };
						*uParam1 = Global_2674716.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2674716.f_163 > 0 && !Global_2674716.f_163 == Global_2674716.f_162)
						{
							func_268(0, uParam2);
						}
						iVar24 = unk_0x5853B15F78E1A265(0, Global_2674716.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar24 = 0;
						}
						Var25 = { Global_2674716[0 /*3*/] };
						uVar26 = Global_2674716.f_121[0];
						Global_2674716[0 /*3*/] = { Global_2674716[iVar24 /*3*/] };
						Global_2674716.f_121[0] = Global_2674716.f_121[iVar24];
						Global_2674716[iVar24 /*3*/] = { Var25 };
						Global_2674716.f_121[iVar24] = uVar26;
						*uParam0 = { Global_2674716[0 /*3*/] };
						*uParam1 = Global_2674716.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						func_267(iVar13, *uParam0, &iVar0, &Var1, &uVar2, uParam2, iVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
						Var27 = { Var1 };
						uVar28 = uVar2;
						if (!uParam2->f_50)
						{
							bVar29 = true;
						}
						else
						{
							bVar29 = false;
						}
						if (func_177(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || func_285(&Var27, bVar29))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var27 };
								*uParam1 = uVar28;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { Var27 };
								*uParam1 = uVar28;
								return 1;
							}
						}
						else
						{
							*uParam0 = { Var27 };
							*uParam1 = uVar28;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				func_266(&Global_1574205, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2674716.f_164 = iVar6;
	}
	return 0;
}

void func_266(var uParam0, var uParam1, var uParam2, struct<3> Param3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = vdist(*(uParam0[iVar2 /*4*/]), Param3);
		if (fVar1 < fVar0)
		{
			if (!func_241(*(uParam0[iVar2 /*4*/]), 5f, unk_0x9E2D6C50374FCFA9(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

void func_267(int iParam0, struct<3> Param1, int iParam2, var uParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, float fParam9, float fParam10, bool bParam11)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam2 = unk_0x5853B15F78E1A265((1 + iParam0), (40 + iParam0));
		if (unk_0x15CEDAB46D800682(Param1, *iParam2, uParam3, uParam4, &iParam7, iParam8, fParam9, fParam10))
		{
			if (vmag(*uParam3) > 0f)
			{
				*uParam3 = { func_280(*uParam3, uParam4, iParam7, uParam5->f_9, *uParam5, iParam6, uParam5->f_11, uParam5->f_34, &bParam11, 0, 0, uParam5->f_51, uParam5->f_60) };
				if (!func_284(*uParam3))
				{
					iVar0 = 999;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_268(int iParam0, var uParam1)
{
	if (!func_279(Global_2674716[iParam0 /*3*/], uParam1))
	{
		Global_2674716.f_162 = (Global_2674716.f_162 - 1);
		func_269(iParam0);
		if (Global_2674716.f_162 > Global_2674716.f_163)
		{
			func_268(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_268(iParam0 + 1, uParam1);
	}
}

void func_269(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2674716[iParam0 /*3*/] = { Global_2674716[iParam0 + 1 /*3*/] };
			Global_2674716.f_121[iParam0] = Global_2674716.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_270(struct<3> Param0, var uParam1, int iParam2)
{
	struct<3> Var0;
	var uVar1;
	
	Var0 = { Global_2674716[iParam2 /*3*/] };
	uVar1 = Global_2674716.f_121[iParam2];
	Global_2674716[iParam2 /*3*/] = { Param0 };
	Global_2674716.f_121[iParam2] = uParam1;
	if (iParam2 <= Global_2674716.f_162 && iParam2 < 39)
	{
		if (vmag(Var0) > 0f)
		{
			func_270(Var0, uVar1, iParam2 + 1);
		}
	}
}

int func_271(struct<3> Param0, float fParam1, float fParam2)
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	fVar4 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar3 = iVar0;
		if (func_210(iVar3))
		{
			Var1 = { func_43(iVar3) };
			fVar5 = vdist(Param0, Var1);
			if (fVar5 < fParam1)
			{
				if (fVar5 < fVar4)
				{
					fVar4 = fVar5;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
	*fParam2 = fVar4;
	return iVar2;
}

int func_272(struct<3> Param0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	var uVar6;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam7 == 1 && unk_0x9E2D6C50374FCFA9() != iVar1) || iParam7 == 0)
		{
			if (func_2370(iVar1, bParam3, bParam4))
			{
				if (unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), iVar1))
				{
					if (!bParam6 || (!unk_0xF68107C40359970C(unk_0x407E03586628E458(iVar1)) && func_38(iVar1)))
					{
						if ((!bParam5 || (bParam5 == 1 && unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) != unk_0x0E40F846A70BA3EC(iVar1))) || unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) == -1)
						{
							if (((unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) == -1 && iParam8) && bParam5) && func_46(iVar1))
							{
							}
							else if (unk_0xE5965CDF24F93A9F(unk_0x407E03586628E458(iVar1)))
							{
								fVar2 = 0.1f;
								if (unk_0xD5C6B5E3B93A5EDC(unk_0x407E03586628E458(iVar1), 0))
								{
									iVar3 = unk_0xB3FF0049C1FD38EC(unk_0x407E03586628E458(iVar1), 0);
									if (unk_0xE5965CDF24F93A9F(iVar3) && !unk_0x55B23FE400FCEA6B(iVar3, 0))
									{
										iVar4 = unk_0x15CAA6D7B11F1A7C(iVar3);
										Var5 = { unk_0x6B62510F212526DC(iVar3, 0) };
										uVar6 = unk_0x82FE2343F8BDFF0B(iVar3);
										if (func_273(Param0, uParam1, iParam2, Var5, uVar6, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_166(func_43(iVar1), Param0, uParam1, iParam2, fVar2))
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

int func_273(struct<3> Param0, float fParam1, int iParam2, struct<3> Param3, float fParam4, int iParam5, int iParam6)
{
	if (func_166(Param0, Param3, fParam4, iParam5, 1036831949))
	{
		return 1;
	}
	func_167(Param0, fParam1, iParam2, &Global_1977108, &(Global_1977108.f_3), &(Global_1977108.f_6), 1036831949);
	func_167(Param3, fParam4, iParam5, &(Global_1977108.f_7), &(Global_1977108.f_10), &(Global_1977108.f_13), 1036831949);
	if (unk_0xC25227FFC64097FF(Global_1977108, Global_1977108.f_3, Global_1977108.f_6, Global_1977108.f_7, Global_1977108.f_10, Global_1977108.f_13))
	{
		return 1;
	}
	return 0;
}

int func_274(struct<3> Param0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	var uVar4;
	
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = unk_0xFE15FEB341652241(Param0, 30f, 0, iVar0);
	if (unk_0xE5965CDF24F93A9F(iVar1) && !unk_0x55B23FE400FCEA6B(iVar1, 0))
	{
		iVar2 = unk_0x15CAA6D7B11F1A7C(iVar1);
		Var3 = { unk_0x6B62510F212526DC(iVar1, 0) };
		uVar4 = unk_0x82FE2343F8BDFF0B(iVar1);
		if (func_273(Param0, uParam1, iParam2, Var3, uVar4, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = unk_0xFE15FEB341652241(Param0, 30f, 0, iVar0);
	if (unk_0xE5965CDF24F93A9F(iVar1) && !unk_0x55B23FE400FCEA6B(iVar1, 0))
	{
		iVar2 = unk_0x15CAA6D7B11F1A7C(iVar1);
		Var3 = { unk_0x6B62510F212526DC(iVar1, 0) };
		uVar4 = unk_0x82FE2343F8BDFF0B(iVar1);
		if (func_273(Param0, uParam1, iParam2, Var3, uVar4, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_275(struct<3> Param0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (func_278(Param0, uParam1, iParam2, iParam3, iParam4) || func_276(Param0, uParam1, iParam2, iParam3, iParam5))
	{
		return 1;
	}
	return 0;
}

int func_276(struct<3> Param0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_277(Param0, iParam2, Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_273(Param0, uParam1, iParam2, Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_2370(iVar2, 0, 1) && func_2370(iParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_277(struct<3> Param0, int iParam1, struct<3> Param2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_173(iParam1, 1008981770);
	fVar1 = func_173(iParam3, 1008981770);
	fVar2 = vdist(Param0, Param2);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_278(struct<3> Param0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (func_2370(iVar1, 0, 1) && func_2370(iParam3, 0, 1))
			{
				if (Global_2680195.f_261[iVar0])
				{
					if (func_166(Global_2680195.f_131[iVar0 /*3*/], Param0, uParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
				else if (func_166(func_43(iVar1), Param0, uParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2680195.f_261[iVar0])
			{
				if (func_166(Global_2680195.f_131[iVar0 /*3*/], Param0, uParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (func_2370(iVar1, 0, 0))
			{
				if (unk_0xE5965CDF24F93A9F(unk_0x407E03586628E458(iVar1)))
				{
					if (func_166(func_43(iVar1), Param0, uParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_279(struct<3> Param0, var uParam1)
{
	if (uParam1->f_18)
	{
		switch (uParam1->f_26)
		{
			case 0:
				if (func_263(Param0, uParam1->f_19, uParam1->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_192(Param0, uParam1->f_19, uParam1->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0x5F8653E60ED2288E(Param0, uParam1->f_19, uParam1->f_22, uParam1->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_280(struct<3> Param0, var uParam1, int iParam2, bool bParam3, struct<3> Param4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10, bool bParam11, var uParam12)
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	float fVar10;
	struct<3> Var11;
	struct<3> Var12;
	struct<3> Var13;
	
	if (bParam11)
	{
		if (vmag(Param4) > 0f)
		{
			if (!func_283(Param0, *uParam1, Param4))
			{
				*uParam1 = (*uParam1 + 180f);
			}
		}
		return Param0;
	}
	unk_0x4C1EEF24CF4B2752(Param0, &uVar1, &uVar2);
	if (uVar2 & 1024 == 0 && !bParam6)
	{
		unk_0x13FD00A258A58752(Param0, 1f, 1, &uVar3, &uVar3, &iVar4, &iVar5, &fVar6, iParam5);
		if (iVar4 == iVar5)
		{
			*uParam8 = 1;
		}
		if (bParam10)
		{
			if (!uVar2 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar4 + iVar5) != iParam2)
			{
				return 0f, 0f, 0f;
			}
			if (unk_0x4262B4DCEADC2695(iParam7) && func_282(Param0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam9 && *uParam8)
		{
			*uParam1 = (*uParam1 + 180f);
			if (*uParam1 > 360f)
			{
				*uParam1 = (*uParam1 + -360f);
			}
		}
		if (*uParam1 <= 90f || *uParam1 > 270f)
		{
			bVar8 = true;
		}
		else
		{
			bVar8 = false;
		}
		bVar9 = false;
		if (bVar8)
		{
			if (iVar4 == 0)
			{
				if (bParam10)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam2 == iVar4)
			{
				bVar9 = true;
			}
		}
		else if (iVar5 == 0)
		{
			if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam2 == iVar5)
		{
			bVar9 = true;
		}
		if (fVar6 < 0f)
		{
			fVar7 = 0f;
		}
		else
		{
			if (bVar8)
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (to_float(iVar4) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * to_float(iVar4));
				}
				if (bVar9)
				{
					if (iVar4 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar4 - 2)) * 1f));
					}
				}
				else if (iVar4 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar4 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (to_float(iVar5) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * to_float(iVar5));
				}
				if (bVar9)
				{
					if (iVar5 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar5 - 2)) * 1f));
					}
				}
				else if (iVar5 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar5 - 1)) * 1f));
				}
			}
			if (!uVar2 & 64 == 0)
			{
				fVar7 = (fVar7 + (0.95f * fVar6));
			}
			if (!uVar2 & 4 == 0 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -0.5f);
			}
			if ((!uVar2 & 32 == 0 && uVar2 & 4 == 0) && uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -1f);
			}
			if (!bParam3 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + (4.2f * -0.5f));
			}
			if (!iParam7 == 0)
			{
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_281(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_281(iParam7, 1.5f);
				}
				if (fVar10 > 1.8f)
				{
					fVar7 = (fVar7 + ((fVar10 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (vmag(Param4) > 0f)
	{
		if (!func_283(Param0, *uParam1, Param4))
		{
			if ((bParam3 || uParam12) || ((uVar2 & 1024 != 0 || Param0.f_2 == 0f) && bParam6))
			{
				*uParam1 = (*uParam1 + 180f);
			}
			else if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar7 < 0f)
	{
		fVar7 = 0f;
	}
	Var0 = { unk_0x6DB7FBD602C51670(Param0, *uParam1, fVar7, 0f, 0f) };
	if (bParam3)
	{
		if (unk_0x3748F54B0AEC5219(Param0, *uParam1, &Var11))
		{
			Var12 = { Var11 - Param0 };
			if (!iParam7 == 0)
			{
				Var13 = { Var12 / FtoV(vmag(Var12)) };
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_281(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_281(iParam7, 1.5f);
				}
				Var13 = { Var13 * FtoV((fVar10 * 0.5f)) };
				Var12 = { Var12 - Var13 };
				Var11 = { Param0 + Var12 };
			}
			Var13 = { Var0 - Var11 };
			Var0 = { Var11 };
		}
	}
	return Var0;
}

float func_281(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	func_168(iParam0, &fVar0, &fVar1, 1086324736, 1080033280, 1077936128);
	fVar2 = (fVar1 - fVar0);
	if (fVar2 < fParam1)
	{
		return fParam1;
	}
	return fVar2;
}

int func_282(struct<3> Param0)
{
	float fVar0;
	
	if (unk_0x9CD4CBF2BBE10F00(Param0.x, Param0.f_1, (Param0.f_2 + 500f), &fVar0, 0, 0))
	{
		fVar0 = (fVar0 - Param0.f_2);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_283(struct<3> Param0, float fParam1, struct<3> Param2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { 0f, 1f, 0f };
	func_154(&Var0, 0f, 0f, fParam1);
	Var1 = { Param2 - Param0 };
	if (func_150(Var1, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_284(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_164(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2674423[iVar1])
	{
		if (func_163(Param0, &(Global_2673720[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2674423[8])
	{
		if (func_163(Param0, &(Global_2673720[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_285(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2667222.f_26.f_18)
	{
		switch (Global_2667222.f_26.f_17)
		{
			case 0:
				if (func_263(*uParam0, Global_2667222.f_26.f_10, Global_2667222.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_192(*uParam0, Global_2667222.f_26.f_10, Global_2667222.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0x5F8653E60ED2288E(*uParam0, Global_2667222.f_26.f_10, Global_2667222.f_26.f_13, Global_2667222.f_26.f_16, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_155(*uParam0, Global_2667222.f_26.f_10, Global_2667222.f_26.f_13, Global_2667222.f_26.f_16, Global_2667222.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_286(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	var uVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	float fVar9;
	bool bVar10;
	int iVar11;
	float fVar12;
	struct<3> Var13;
	var uVar14;
	
	if (Global_2667222.f_1753 > 0)
	{
		iVar1 = 0;
		iVar2 = 0;
		if (!vmag(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_177(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_285(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2674716.f_162 = 0;
		Global_2674716.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2674716[iVar5 /*3*/] = { 0f, 0f, 0f };
			Global_2674716.f_121[iVar5] = 0f;
			iVar5++;
		}
		if (uParam2->f_30)
		{
			func_289(*uParam0);
		}
		else if (uParam2->f_29)
		{
			func_288();
		}
		else
		{
			func_287();
		}
		iVar1 = 0;
		while (iVar1 < Global_2667222.f_1753)
		{
			iVar2 = Global_2667222.f_2159[iVar1];
			if (iVar2 > -1 && iVar2 < 101)
			{
				Var3 = { Global_2667222.f_1754[iVar2 /*4*/] };
				uVar4 = Global_2667222.f_1754[iVar2 /*4*/].f_3;
				if (vmag(Var3) > 0f)
				{
					if ((uParam2->f_57 && vdist(Var3, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && vdist(Var3.x, Var3.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_275(Var3, uVar4, uParam2->f_34, unk_0x9E2D6C50374FCFA9(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_177(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar6 = uParam2->f_31;
										bVar7 = true;
										iVar8 = 1;
										fVar9 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar6 = 0;
											bVar7 = false;
											iVar8 = 0;
											fVar9 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar6 = 0;
											bVar7 = false;
											iVar8 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar9 = (fVar9 * 0.375f);
											}
										}
										else
										{
											bVar7 = true;
											iVar8 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar9 = (fVar9 * 0.375f);
												}
											}
										}
										bVar10 = false;
										if (!func_274(Var3, uVar4, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_36(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar10 = true;
												}
											}
											else if (func_36(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_272(Var3, uVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar10 = true;
											}
										}
										if (bVar10)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar12 = 0f;
												if (uParam2->f_52)
												{
													iVar11 = func_271(Var3, uParam2->f_54, &fVar12);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar11 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar11 < uParam2->f_53)
														{
															iVar5 = 0;
															while (iVar5 < Global_2674716.f_162)
															{
																Global_2674716[iVar5 /*3*/] = { 0f, 0f, 0f };
																Global_2674716.f_121[iVar5] = 0f;
																iVar5++;
															}
															Global_2674716.f_162 = 0;
															uParam2->f_53 = iVar11;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2674716.f_162 == 0)
														{
															Global_2674716[0 /*3*/] = { Var3 };
															Global_2674716.f_121[0] = uVar4;
														}
														else
														{
															iVar5 = 0;
															while (iVar5 < Global_2674716.f_162 + 1)
															{
																if (iVar5 < 40)
																{
																	if (vdist2(Var3, uParam2->f_35) < vdist2(Global_2674716[iVar5 /*3*/], uParam2->f_35))
																	{
																		func_270(Var3, uVar4, iVar5);
																		iVar5 = Global_2674716.f_162 + 1;
																	}
																}
																iVar5++;
															}
														}
														Global_2674716.f_162++;
														if (Global_2674716.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2667222.f_1753;
															}
															else if (Global_2674716.f_162 == 40)
															{
																iVar1 = Global_2667222.f_1753;
															}
														}
													}
													else
													{
														Global_2674716[Global_2674716.f_162 /*3*/] = { Var3 };
														Global_2674716.f_121[Global_2674716.f_162] = uVar4;
														Global_2674716.f_162++;
														if (Global_2674716.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2667222.f_1753;
															}
															else if (Global_2674716.f_162 == 40)
															{
																iVar1 = Global_2667222.f_1753;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { Var3 };
												*uParam1 = uVar4;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { Var3 };
										*uParam1 = uVar4;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
		if (Global_2674716.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2674716[0 /*3*/] };
				*uParam1 = Global_2674716.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2674716.f_163 > 0 && !Global_2674716.f_163 == Global_2674716.f_162)
				{
					func_268(0, uParam2);
				}
				iVar0 = unk_0x5853B15F78E1A265(0, Global_2674716.f_162);
				Var13 = { Global_2674716[0 /*3*/] };
				uVar14 = Global_2674716.f_121[0];
				Global_2674716[0 /*3*/] = { Global_2674716[iVar0 /*3*/] };
				Global_2674716.f_121[0] = Global_2674716.f_121[iVar0];
				Global_2674716[iVar0 /*3*/] = { Var13 };
				Global_2674716.f_121[iVar0] = uVar14;
				*uParam0 = { Global_2674716[0 /*3*/] };
				*uParam1 = Global_2674716.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else if (uParam2->f_59 && Global_2667222.f_1753 > 0)
			{
				iVar0 = unk_0x5853B15F78E1A265(0, Global_2667222.f_1753);
				*uParam0 = { Global_2667222.f_1754[iVar0 /*4*/] };
				*uParam1 = Global_2667222.f_1754[iVar0 /*4*/].f_3;
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

void func_287()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_2667222.f_1753)
	{
		Global_2667222.f_2159[iVar0] = iVar0;
		iVar0++;
	}
}

void func_288()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = 0;
	while (iVar0 < Global_2667222.f_1753)
	{
		Global_2667222.f_2159[iVar0] = iVar0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2667222.f_1753)
	{
		iVar1 = unk_0x5853B15F78E1A265(0, Global_2667222.f_1753);
		iVar2 = unk_0x5853B15F78E1A265(0, Global_2667222.f_1753);
		uVar3 = Global_2667222.f_2159[iVar1];
		Global_2667222.f_2159[iVar1] = Global_2667222.f_2159[iVar2];
		Global_2667222.f_2159[iVar2] = uVar3;
		iVar0++;
	}
}

void func_289(struct<3> Param0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2667222.f_1753)
	{
		uVar1 = func_290(Param0, fVar0, &fVar0);
		Global_2667222.f_2159[iVar2] = uVar1;
		iVar2++;
	}
}

int func_290(struct<3> Param0, float fParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2667222.f_1753)
	{
		fVar2 = vdist2(Param0, Global_2667222.f_1754[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam1)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam2 = fVar1;
	return iVar0;
}

bool func_291(int iParam0)
{
	return iParam0 == 50;
}

void func_292(var uParam0, var uParam1)
{
	unk_0x862852388AE23818(uParam0, uParam1, 0.1f);
	Global_2667222.f_2473 = unk_0x69CE66B03B2184EB();
	Global_2667222.f_2471 = 1;
	Global_2667222.f_2474 = unk_0x0A89FDFA763DCAED();
}

void func_293()
{
	func_298();
	func_297();
	func_296();
	func_295();
	func_294();
}

void func_294()
{
	struct<10> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 128)
	{
		Global_2670163[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_295()
{
	struct<10> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		Global_2667222.f_2490.f_90[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_296()
{
	struct<4> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 8)
	{
		Global_2667222.f_2490.f_57[iVar1 /*4*/] = { Var0 };
		iVar1++;
	}
}

void func_297()
{
	struct<10> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		Global_2667222.f_2490.f_6[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_298()
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2667222.f_2490 = { Var0 };
}

void func_299()
{
	if (Global_2667222.f_2471)
	{
		if (unk_0x69CE66B03B2184EB() == Global_2667222.f_2473)
		{
			unk_0x0F02061F6FAEB6C1();
		}
		else
		{
			unk_0x0F02061F6FAEB6C1();
		}
		Global_2667222.f_2471 = 0;
	}
}

int func_300(bool bParam0)
{
	if (unk_0xA829C9A2767AC8EF())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_301(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					break;
			}
			break;
	}
	return -1;
}

int func_302(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	float fVar1;
	bool bVar2;
	
	if (!unk_0x90F6E2F6488B98BA(Local_239.f_719[iParam0]))
	{
		if (unk_0x993E56B8150C834F(1))
		{
			if (func_50(iParam1))
			{
				func_305(Local_239.f_703, Local_239.f_704, iParam0, &Var0, &fVar1);
				if (iParam2 || func_36(Var0, 1086324736, 1065353216, 1065353216, 1084227584, 0, 0, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					if (func_82(&(Local_239.f_719[iParam0]), iParam1, Var0, fVar1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						unk_0xAFE1B52F0DE91595(unk_0xA5677134B9672173(Local_239.f_719[iParam0]), 0);
						unk_0x2EABFF5EFCB7E6CF(unk_0xA5677134B9672173(Local_239.f_719[iParam0]), 0, 0);
						unk_0xFF74DEC3F62D3654(unk_0xA5677134B9672173(Local_239.f_719[iParam0]), 1);
						unk_0x083D28D7FA474397(unk_0xA5677134B9672173(Local_239.f_719[iParam0]), 1f);
						unk_0x1B3814E11B085F5E(unk_0xA5677134B9672173(Local_239.f_719[iParam0]), 1);
						unk_0x484CCFB803FCFD80(unk_0xA5677134B9672173(Local_239.f_719[iParam0]), 1);
						unk_0x28C1AA9789AB5554(unk_0xA5677134B9672173(Local_239.f_719[iParam0]), 1);
						unk_0x0CD9B67A70AAD552(unk_0xA5677134B9672173(Local_239.f_719[iParam0]), 1);
						unk_0xD045D56D95A3D704(unk_0xA5677134B9672173(Local_239.f_719[iParam0]), 0);
						if (Local_239.f_703 != 1)
						{
							unk_0x3B2646B62E7BBE11(unk_0xA5677134B9672173(Local_239.f_719[iParam0]), 2);
						}
						if (func_304(iParam0, 4))
						{
							unk_0xCAA02C32EC0C2462(unk_0xA5677134B9672173(Local_239.f_719[iParam0]), 3, 1);
						}
						if (func_304(iParam0, 5))
						{
							unk_0xCAA02C32EC0C2462(unk_0xA5677134B9672173(Local_239.f_719[iParam0]), 2, 1);
						}
						if (func_304(iParam0, 3))
						{
							unk_0x1F68E53A00B640E2(unk_0xA5677134B9672173(Local_239.f_719[iParam0]), 0);
						}
					}
				}
				else if (!func_304(iParam0, 0))
				{
					if (unk_0x34FAA537D539192C(Var0, 6f))
					{
						bVar2 = true;
					}
					else if (unk_0xAC48FF26FAAA8DD0(Var0.x, Var0.f_1, (Var0.f_2 + 1f), 1f) || unk_0xAC48FF26FAAA8DD0(Var0, 1f))
					{
						bVar2 = true;
					}
					if (bVar2)
					{
						unk_0x7A997A0A971D305F(Var0, fLocal_190, 1, 0, 0, 1);
						func_303(iParam0, 0);
					}
				}
			}
		}
	}
	return 0;
}

void func_303(int iParam0, int iParam1)
{
	if (!unk_0xE2D0C323A1AE5D85(Local_239.f_749[iParam0], iParam1))
	{
		unk_0xCED9E32812D6C7C7(&(Local_239.f_749[iParam0]), iParam1);
	}
}

bool func_304(int iParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(Local_239.f_749[iParam0], iParam1);
}

void func_305(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 1073.851f, -1963.803f, 30.014f };
							*uParam4 = 55.398f;
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 200.889f, -1853.863f, 26.202f };
							*uParam4 = 258.799f;
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { -123.38f, -2538.092f, 5f };
							*uParam4 = 54.8f;
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 737.927f, -538.504f, 25.853f };
							*uParam4 = 163f;
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 1695.826f, 3316.644f, 40.399f };
							*uParam4 = 78.6f;
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 1366.566f, -1860.176f, 55.801f };
							*uParam4 = 39.3999f;
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 742.511f, -1844.606f, 28.292f };
							*uParam4 = 210.6f;
							break;
					}
					break;
			}
			break;
	}
}

int func_306(int iParam0, var uParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			return joaat("pounder");
		
		case 1:
			return joaat("valkyrie2");
		
		default:
	}
	return 0;
}

int func_307(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_34(Local_239.f_703, Local_239.f_704, iParam0);
	if (iParam1 > -1)
	{
		if (unk_0x90F6E2F6488B98BA(Local_239.f_712[iParam1]))
		{
			if (!unk_0x90F6E2F6488B98BA(Local_239.f_10[iParam0 /*15*/].f_1))
			{
				if (unk_0xA777DF215CCFCC77(1))
				{
					if (func_50(iVar0))
					{
						if (func_80(&(Local_239.f_10[iParam0 /*15*/].f_1), func_308(iParam1), 22, iVar0, iParam2, 1, 1, 1))
						{
							if (func_30(iParam0, 17))
							{
							}
							func_19(iParam0);
							unk_0xCED9E32812D6C7C7(&(Local_239.f_772), iParam0);
						}
					}
				}
			}
		}
	}
	return 0;
}

var func_308(int iParam0)
{
	return Local_239.f_712[iParam0];
}

int func_309(int iParam0, var uParam1, int iParam2)
{
	switch (iParam0)
	{
		case 1:
			break;
	}
	return -1;
}

int func_310(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	float fVar1;
	struct<31> Var2;
	struct<3> Var3;
	
	if (!func_364(iParam0))
	{
		if (unk_0x993E56B8150C834F(1))
		{
			if (func_50(iParam1))
			{
				if (!func_134(iParam0, 0) && !bParam3)
				{
					func_363(Local_239.f_703, Local_239.f_704, iParam0, &Var0, &fVar1);
					Var2.f_4 = 1125515264;
					Var2.f_5 = 1;
					Var2.f_6 = 1;
					Var2.f_8 = 1082130432;
					Var2.f_9 = 1176255488;
					Var2.f_10 = 1;
					Var2.f_13 = 1;
					Var2.f_15 = 2;
					Var2.f_22 = 2;
					Var2.f_25 = 1;
					Var2.f_26 = 1;
					Var2.f_29 = 1123024896;
					Var2.f_30 = 1;
					Var2 = 0f;
					Var2.f_1 = 0;
					Var2.f_4 = 50f;
					Var2.f_5 = 1;
					Var2.f_6 = 1;
					Var2.f_12 = 1;
					Var2.f_3 = 1;
					Var3 = { func_361(Var0, fVar1, 20f) };
					if (func_312(Var0, Var3, iParam1, 0, &(Local_239.f_559[iParam0 /*5*/]), &(Local_239.f_559[iParam0 /*5*/].f_3), &Var2))
					{
						func_133(iParam0, 0);
					}
				}
				else if (bParam3)
				{
					func_363(Local_239.f_703, Local_239.f_704, iParam0, &Var0, &fVar1);
					Local_239.f_559[iParam0 /*5*/] = { Var0 };
					Local_239.f_559[iParam0 /*5*/].f_3 = fVar1;
				}
				if (func_134(iParam0, 0) || bParam3)
				{
					Var0 = { Local_239.f_559[iParam0 /*5*/] };
					fVar1 = Local_239.f_559[iParam0 /*5*/].f_3;
					if (!unk_0xE2D0C323A1AE5D85(Local_239.f_782, iParam0))
					{
						unk_0xCED9E32812D6C7C7(&(Local_239.f_782), iParam0);
					}
					if (func_82(&(Local_239.f_712[iParam0]), iParam1, Var0, fVar1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						unk_0xD1C117AEB22F08E1(unk_0x8AF984152F749D80(Local_239.f_712[iParam0]), 1);
						func_311(unk_0xA5677134B9672173(Local_239.f_712[iParam0]));
						unk_0xAFE1B52F0DE91595(unk_0xA5677134B9672173(Local_239.f_712[iParam0]), 0);
						unk_0x2EABFF5EFCB7E6CF(unk_0xA5677134B9672173(Local_239.f_712[iParam0]), 0, 0);
						unk_0x484CCFB803FCFD80(unk_0xA5677134B9672173(Local_239.f_712[iParam0]), 1);
						unk_0x28C1AA9789AB5554(unk_0xA5677134B9672173(Local_239.f_712[iParam0]), 1);
						unk_0x0CD9B67A70AAD552(unk_0xA5677134B9672173(Local_239.f_712[iParam0]), 1);
						unk_0xD045D56D95A3D704(unk_0xA5677134B9672173(Local_239.f_712[iParam0]), 0);
						if (func_134(iParam0, 6))
						{
							unk_0x2476BE9932670CAD(unk_0xA5677134B9672173(Local_239.f_712[iParam0]), 3, 0, 1);
							unk_0x3B2646B62E7BBE11(unk_0xA5677134B9672173(Local_239.f_712[iParam0]), 2);
							unk_0x6D60ABBA76DB955A(unk_0xA5677134B9672173(Local_239.f_712[iParam0]), 2, 0);
							unk_0x6D60ABBA76DB955A(unk_0xA5677134B9672173(Local_239.f_712[iParam0]), 3, 0);
						}
						if (func_134(iParam0, 7))
						{
							unk_0x2476BE9932670CAD(unk_0xA5677134B9672173(Local_239.f_712[iParam0]), 2, 0, 1);
						}
						if (func_134(iParam0, 8))
						{
							unk_0x1F68E53A00B640E2(unk_0xA5677134B9672173(Local_239.f_712[iParam0]), 0);
						}
						if (bParam2)
						{
							unk_0xEA390390606DE844(unk_0xA5677134B9672173(Local_239.f_712[iParam0]), 2, 2);
							unk_0xEA390390606DE844(unk_0xA5677134B9672173(Local_239.f_712[iParam0]), 3, 2);
						}
					}
				}
			}
		}
	}
	if (!func_364(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_311(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x15CAA6D7B11F1A7C(iParam0);
	switch (iVar0)
	{
		case joaat("speedo"):
			unk_0xD584204572DF0440(iParam0, 0);
			break;
	}
}

int func_312(struct<3> Param0, struct<3> Param1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<61> Var5;
	struct<61> Var6;
	
	bVar0 = false;
	if (uParam6->f_14)
	{
		if (uParam6->f_25)
		{
			uParam6->f_25 = 0;
		}
	}
	if (!func_358())
	{
		return 0;
	}
	if (func_357() && !Global_2667222.f_679 == unk_0x8142A6539DDC180F())
	{
		if (!Global_2667222.f_675 == 0)
		{
			Global_2667222.f_675 = 0;
			func_356();
			func_355();
		}
	}
	if (!unk_0x69CE66B03B2184EB() == Global_2667222.f_674)
	{
		if (!Global_2667222.f_675 == 0)
		{
			if (unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Global_2667222.f_678) < func_300(0))
			{
				return 0;
			}
			else
			{
				Global_2667222.f_675 = 0;
			}
		}
	}
	else
	{
		if (unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Global_2667222.f_676) > 30000)
		{
			Global_2667222.f_675 = 0;
		}
		if (!Global_2667222.f_675 == 0)
		{
			if (unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Global_2667222.f_678) > func_300(1))
			{
				Global_2667222.f_675 = 0;
			}
		}
	}
	if (uParam6->f_6)
	{
		if (func_184(Param0))
		{
			if (func_354(&Param0, 1))
			{
			}
		}
	}
	if (!Global_2667222.f_675 == 0)
	{
		if (vdist(Global_2667222.f_694, Param0) > 50f)
		{
			return 0;
		}
		if (Global_2667222.f_697 != iParam2)
		{
			return 0;
		}
	}
	unk_0x2EE5FFF3E1E3400D((Param0.x - 100f), (Param0.f_1 - 100f), (Param0.x + 100f), (Param0.f_1 + 100f));
	if (Global_2667222.f_675 == 0)
	{
		Global_2667222.f_681 = 0;
		Global_2667222.f_676 = unk_0xE75390F3CA208D5E();
		Global_2667222.f_674 = unk_0x69CE66B03B2184EB();
		Global_2667222.f_678 = unk_0xE75390F3CA208D5E();
		Global_2667222.f_694 = { Param0 };
		Global_2667222.f_697 = iParam2;
		Global_2667222.f_680 = unk_0xE75390F3CA208D5E();
		func_353();
		func_356();
		if (!uParam6->f_27 || (((((((func_352(Param0, 1, 1133903872) && !uParam6->f_28) && !Global_2810287.f_924) && !Global_2810287.f_913) && !Global_2810287.f_921) && !Global_2810287.f_925) && !Global_2810287.f_933) && !Global_2810287.f_945))
		{
			func_333(Param0, iParam2);
		}
		if (func_320(Param0))
		{
			func_333(Param0, iParam2);
		}
		Global_2667222.f_675 = 2;
	}
	switch (Global_2667222.f_675)
	{
		case 2:
			if (unk_0xF8805443C3DB6256((Param0.x - 100f), (Param0.f_1 - 100f), (Param0.x + 100f), (Param0.f_1 + 100f)))
			{
				Global_2667222.f_682 = { Param0 };
				Global_2667222.f_685 = 0f;
				if (Global_2810287.f_924)
				{
					fVar2 = 10f;
					fVar3 = 5f;
					fVar4 = 5f;
				}
				else
				{
					fVar2 = 4f;
					fVar3 = 1f;
					fVar4 = 1f;
				}
				if (((uParam6->f_3 && func_36(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam6->f_7) && !func_276(Param0, *uParam5, iParam2, unk_0x9E2D6C50374FCFA9(), 0))
				{
					Global_2667222.f_682 = { Param0 };
					Global_2667222.f_685 = *uParam5;
				}
				else
				{
					Var5.f_6 = 1082130432;
					Var5.f_7 = 1176255488;
					Var5.f_8 = 1;
					Var5.f_10 = 1;
					Var5.f_13 = 1;
					Var5.f_15 = 1;
					Var5.f_16 = 1;
					Var5.f_31 = 1;
					Var5.f_34 = joaat("tailgater");
					Var5.f_38 = 2;
					Var5.f_45 = 2;
					Var5.f_49 = 1123024896;
					Var5.f_53 = 999;
					Var5.f_54 = 1176256410;
					Var5.f_55 = 1;
					Var5.f_56 = 1;
					Var5.f_57 = 1;
					Var5.f_9 = iParam3;
					Var5.f_3 = 7f;
					Var5.f_10 = uParam6->f_5;
					Var5.f_4 = *uParam6;
					Var5.f_13 = uParam6->f_1;
					Var5.f_14 = uParam6->f_2;
					Var5.f_5 = uParam6->f_4;
					Var5.f_15 = uParam6->f_6;
					Var5.f_11 = uParam6->f_7;
					Var5.f_6 = uParam6->f_8;
					Var5.f_7 = uParam6->f_9;
					Var5.f_16 = uParam6->f_10;
					Var5.f_17 = uParam6->f_11;
					Var5 = { Param1 };
					Var5.f_12 = 1;
					Var5.f_34 = iParam2;
					Var5.f_31 = uParam6->f_13;
					if (uParam6->f_32 && Global_2667222.f_681 > 0)
					{
						Var5.f_30 = 0;
						Var5.f_29 = 1;
					}
					else
					{
						Var5.f_30 = uParam6->f_30;
						Var5.f_29 = uParam6->f_31;
					}
					Var5.f_48 = uParam6->f_14;
					Var5.f_56 = uParam6->f_25;
					Var5.f_57 = uParam6->f_26;
					Var5.f_49 = uParam6->f_29;
					Var5.f_59 = uParam6->f_33;
					Var5.f_60 = uParam6->f_34;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						Var5.f_38[iVar1 /*3*/] = { uParam6->f_15[iVar1 /*3*/] };
						Var5.f_45[iVar1] = uParam6->f_22[iVar1];
						iVar1++;
					}
					func_264(&(Global_2667222.f_682), &(Global_2667222.f_685), &Var5);
				}
				func_317(Global_2667222.f_682, Global_2667222.f_685, iParam2, &(Global_2667222.f_672));
				Global_2667222.f_670 = 0;
				Global_2667222.f_671 = 0;
				Global_2667222.f_681++;
				Global_2667222.f_677 = unk_0xE75390F3CA208D5E();
				Global_2667222.f_676 = unk_0xE75390F3CA208D5E();
				Global_2667222.f_675 = 3;
			}
			break;
		
		case 3:
			if (Global_2667222.f_670)
			{
				if (Global_2667222.f_672 == Global_2667222.f_673)
				{
					if (Global_2667222.f_671)
					{
						if (uParam6->f_12 && !uParam6->f_11)
						{
							if (func_316(Global_2667222.f_682, Global_2667222.f_685, iParam2, 1, 1036831949))
							{
								Global_2667222.f_675 = 4;
								Global_2667222.f_699 = unk_0xE75390F3CA208D5E();
							}
							else
							{
								bVar0 = true;
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
					{
						func_315(Global_2667222.f_682, 0);
						func_314(-1);
					}
				}
				else
				{
					Global_2667222.f_670 = 0;
					Global_2667222.f_671 = 0;
				}
			}
			else if (unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Global_2667222.f_677) > 3000)
			{
				func_314(-1);
			}
			break;
		
		case 4:
			if (uParam6->f_12 && !uParam6->f_11)
			{
				if (unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Global_2667222.f_699) < 10000)
				{
					if (unk_0xD0C6888814987992(Global_2667222.f_698))
					{
						if (unk_0x1C2607B54DDC8B70(Global_2667222.f_698))
						{
							if (!unk_0x39D52F5CDFC288E7(Global_2667222.f_698))
							{
								if (func_278(Global_2667222.f_682, Global_2667222.f_685, iParam2, unk_0x9E2D6C50374FCFA9(), 0) || func_272(Global_2667222.f_682, Global_2667222.f_685, iParam2, 1, 0, 0, 0, 1, 0))
								{
									func_315(Global_2667222.f_682, 0);
									func_314(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_315(Global_2667222.f_682, 0);
								func_314(-1);
							}
						}
					}
					else
					{
						func_314(-1);
					}
				}
				else
				{
					func_314(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		
		case 5:
			Global_2667222.f_682 = { Param0 };
			Global_2667222.f_685 = 0f;
			Var6.f_6 = 1082130432;
			Var6.f_7 = 1176255488;
			Var6.f_8 = 1;
			Var6.f_10 = 1;
			Var6.f_13 = 1;
			Var6.f_15 = 1;
			Var6.f_16 = 1;
			Var6.f_31 = 1;
			Var6.f_34 = joaat("tailgater");
			Var6.f_38 = 2;
			Var6.f_45 = 2;
			Var6.f_49 = 1123024896;
			Var6.f_53 = 999;
			Var6.f_54 = 1176256410;
			Var6.f_55 = 1;
			Var6.f_56 = 1;
			Var6.f_57 = 1;
			Var6.f_9 = iParam3;
			Var6.f_3 = 3.5f;
			Var6.f_10 = uParam6->f_5;
			Var6.f_4 = *uParam6;
			Var6.f_12 = 1;
			Var6.f_13 = 0;
			Var6.f_15 = uParam6->f_6;
			Var6.f_11 = uParam6->f_7;
			Var6.f_6 = uParam6->f_8;
			Var6.f_7 = uParam6->f_9;
			Var6 = { Param1 };
			Var6.f_34 = iParam2;
			Var6.f_31 = uParam6->f_13;
			Var6.f_30 = 1;
			Var6.f_48 = uParam6->f_14;
			Var6.f_56 = uParam6->f_25;
			Var6.f_57 = uParam6->f_26;
			Var6.f_30 = uParam6->f_30;
			Var6.f_29 = uParam6->f_31;
			Var6.f_59 = uParam6->f_33;
			Var6.f_60 = uParam6->f_34;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				Var6.f_38[iVar1 /*3*/] = { uParam6->f_15[iVar1 /*3*/] };
				Var6.f_45[iVar1] = uParam6->f_22[iVar1];
				iVar1++;
			}
			Var6.f_49 = uParam6->f_29;
			func_264(&(Global_2667222.f_682), &(Global_2667222.f_685), &Var6);
			Global_2667222.f_675 = 6;
			break;
		
		case 6:
			bVar0 = true;
			break;
	}
	Global_2667222.f_694 = { Param0 };
	Global_2667222.f_697 = iParam2;
	Global_2667222.f_678 = unk_0xE75390F3CA208D5E();
	if (bVar0)
	{
		Global_2667222.f_515 = 0;
		*uParam4 = { Global_2667222.f_682 };
		*uParam5 = Global_2667222.f_685;
		func_313(1);
		return 1;
	}
	return 0;
}

void func_313(bool bParam0)
{
	Global_2667222.f_675 = 0;
	func_353();
	func_356();
	if (bParam0)
	{
		func_355();
	}
}

void func_314(int iParam0)
{
	if (Global_2667222.f_681 < 20 && unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Global_2667222.f_680) < 30000)
	{
		if (iParam0 == -1 || (iParam0 > -1 && Global_2667222.f_681 < iParam0))
		{
			Global_2667222.f_675 = 2;
		}
		else
		{
			Global_2667222.f_675 = 5;
		}
	}
	else
	{
		Global_2667222.f_675 = 5;
	}
}

void func_315(struct<3> Param0, int iParam1)
{
	struct<3> Var0;
	
	if (iParam1 == 0 && func_178(Param0, 0.01f))
	{
		return;
	}
	if (iParam1 < 30 && vmag(Param0) > 0f)
	{
		Var0 = { Global_2667222.f_2735[iParam1 /*3*/] };
		Global_2667222.f_2735[iParam1 /*3*/] = { Param0 };
		func_315(Var0, iParam1 + 1);
	}
}

int func_316(struct<3> Param0, var uParam1, int iParam2, bool bParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	float fVar4;
	
	if (!unk_0x54E30A65F4FA4962())
	{
		return 0;
	}
	else
	{
		func_356();
		iVar3 = 0;
		while (iVar3 < 3)
		{
			if (Global_2667222.f_686[iVar3] == -1 && unk_0x54E30A65F4FA4962())
			{
				func_167(Param0, uParam1, iParam2, &Var0, &Var1, &uVar2, fParam4);
				if (bParam3)
				{
					fVar4 = unk_0x48053974ED6F63CE((Var0.f_2 - Var1.f_2));
					Var0.f_2 = (Var0.f_2 + ((fVar4 * 0.5f) - 2f));
					Var1.f_2 = (Var1.f_2 + (fVar4 * 0.5f));
				}
				Global_2667222.f_686[iVar3] = unk_0x47DDB3F2BD4CB6FA(Var0, Var1, fParam4);
				Global_2667222.f_690[iVar3] = unk_0x69CE66B03B2184EB();
				Global_2667222.f_698 = Global_2667222.f_686[iVar3];
				return 1;
			}
			iVar3++;
		}
	}
	return 0;
}

void func_317(struct<3> Param0, var uParam1, int iParam2, var uParam3)
{
	struct<8> Var0;
	
	*uParam3 = func_319(&Param0, &uParam1, &iParam2);
	Var0 = 2112408256;
	Var0.f_1 = unk_0x9E2D6C50374FCFA9();
	Var0.f_2 = { Param0 };
	Var0.f_5 = uParam1;
	Var0.f_6 = iParam2;
	Var0.f_7 = *uParam3;
	unk_0x2700C00F82C16BF0(1, &Var0, 8, func_318(1, 1));
}

var func_318(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xA1087A6350CD9244(iVar1);
		if (func_2370(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x9E2D6C50374FCFA9() || iParam0)
			{
				if (bParam1)
				{
					unk_0xCED9E32812D6C7C7(&uVar0, iVar1);
				}
				else if (!func_39(iVar2, 0))
				{
					unk_0xCED9E32812D6C7C7(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_319(var uParam0, var uParam1, var uParam2)
{
	char cVar0[64];
	int iVar1;
	
	StringCopy(&cVar0, "", 64);
	StringIntConCat(&cVar0, round(*uParam0), 64);
	StringIntConCat(&cVar0, round(uParam0->f_1), 64);
	StringIntConCat(&cVar0, round(uParam0->f_2), 64);
	StringIntConCat(&cVar0, round(*uParam1), 64);
	StringIntConCat(&cVar0, *uParam2, 64);
	iVar1 = unk_0x2E87280918B16506(&cVar0);
	return iVar1;
}

int func_320(struct<3> Param0)
{
	int iVar0;
	
	if (Global_2810287.f_924 && func_321(Param0, &iVar0))
	{
		return 1;
	}
	return 0;
}

int func_321(struct<3> Param0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	*iParam1 = -1;
	iVar2 = func_332(Param0, 0);
	if (!iVar2 == -1)
	{
		iVar0 = 83;
		while (iVar0 <= 87)
		{
			iVar1 = iVar0;
			if (func_322(iVar1))
			{
				if (func_332(Global_1946934.f_532[iVar0 /*3*/], 0) == iVar2)
				{
					*iParam1 = iVar0 + 1000;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_322(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_331(iParam0);
	if (Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_274 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11;
	if (iVar1 != func_24())
	{
		if (Global_1853128[iVar1 /*888*/].f_267.f_274 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_319.f_6 == iParam0)
	{
		return 1;
	}
	if (func_158(unk_0x9E2D6C50374FCFA9(), 0) || (func_328(unk_0x9E2D6C50374FCFA9()) && func_159(func_327(unk_0x9E2D6C50374FCFA9())) == 12))
	{
		return 1;
	}
	if (func_326(unk_0x9E2D6C50374FCFA9()) || (func_328(unk_0x9E2D6C50374FCFA9()) && func_159(func_327(unk_0x9E2D6C50374FCFA9())) == 8))
	{
		return 1;
	}
	if (func_325(unk_0x9E2D6C50374FCFA9()) || (func_328(unk_0x9E2D6C50374FCFA9()) && func_159(func_327(unk_0x9E2D6C50374FCFA9())) == 5))
	{
		return 1;
	}
	if (func_324(unk_0x9E2D6C50374FCFA9()) || (func_328(unk_0x9E2D6C50374FCFA9()) && func_159(func_327(unk_0x9E2D6C50374FCFA9())) == 10))
	{
		return 1;
	}
	if (func_323(unk_0x9E2D6C50374FCFA9()) || (func_328(unk_0x9E2D6C50374FCFA9()) && func_159(func_327(unk_0x9E2D6C50374FCFA9())) == 6))
	{
		return 1;
	}
	return 0;
}

int func_323(int iParam0)
{
	if (iParam0 != func_24())
	{
		if (func_2370(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_159(Global_2689156[iParam0 /*453*/].f_319.f_6) == 6;
			}
		}
	}
	return 0;
}

int func_324(int iParam0)
{
	if (iParam0 != func_24())
	{
		if (func_2370(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_159(Global_2689156[iParam0 /*453*/].f_319.f_6) == 10;
			}
		}
	}
	return 0;
}

int func_325(int iParam0)
{
	if (iParam0 != func_24())
	{
		if (func_2370(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1 && Global_2689156[iParam0 /*453*/].f_319.f_9 != func_24())
			{
				return func_159(Global_2689156[iParam0 /*453*/].f_319.f_6) == 5;
			}
		}
	}
	return 0;
}

int func_326(int iParam0)
{
	if (iParam0 != func_24())
	{
		if (func_2370(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1 && Global_2689156[iParam0 /*453*/].f_319.f_9 != func_24())
			{
				return func_159(Global_2689156[iParam0 /*453*/].f_319.f_6) == 8;
			}
		}
	}
	return 0;
}

int func_327(int iParam0)
{
	if (iParam0 != func_24() && func_2370(iParam0, 1, 1))
	{
		return Global_2689156[iParam0 /*453*/].f_319.f_16;
	}
	return -1;
}

int func_328(int iParam0)
{
	if (iParam0 != func_24() && func_2370(iParam0, 1, 1))
	{
		if (func_330(iParam0) && !func_329(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_329(int iParam0)
{
	if (iParam0 != func_24() && func_2370(iParam0, 1, 1))
	{
		return unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_319, 4);
	}
	return 0;
}

int func_330(int iParam0)
{
	if (iParam0 != func_24() && func_2370(iParam0, 1, 1))
	{
		return unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_319, 3);
	}
	return 0;
}

int func_331(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			return 1;
			break;
		
		case 84:
			return 2;
			break;
		
		case 85:
			return 3;
			break;
		
		case 86:
			return 4;
			break;
		
		case 87:
			return 5;
			break;
	}
	return 0;
}

int func_332(struct<3> Param0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2672163[iVar0 /*17*/].f_9 == 1 || iParam1 == 0)
		{
			if (func_156(Param0, &(Global_2672163[iVar0 /*17*/]), 0.1f, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_333(struct<3> Param0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2[3];
	int iVar3[3];
	
	if (Global_2667222.f_45.f_318)
	{
		return;
	}
	if (!func_351())
	{
		if (iParam1 == 0)
		{
		}
		iVar1 = func_350(Param0);
		if (iVar1 > -1)
		{
			func_355();
			switch (iVar1)
			{
				case 0:
					func_349(-1139.678f, -2694.165f, 12.949f, 283.4298f);
					func_349(-1137.455f, -2690.167f, 12.9448f, 283.0835f);
					func_349(-1135.02f, -2685.912f, 12.9412f, 283.8219f);
					func_349(-1099.898f, -2688.611f, 12.9473f, 295.3925f);
					func_349(-1110.51f, -2693.236f, 12.9595f, 298.84f);
					func_349(-1081.807f, -2690.015f, 12.7567f, 219.1729f);
					func_349(-1075.586f, -2697.09f, 12.7567f, 224.8977f);
					func_349(-1095.133f, -2659.995f, 12.7567f, 190.9326f);
					func_349(-1096.511f, -2649.483f, 12.6066f, 182.7913f);
					break;
				
				case 1:
					func_349(-1411.731f, -533.6462f, 30.2703f, 215.116f);
					func_349(-1416.407f, -527.0309f, 30.6453f, 215.2683f);
					func_349(-1432.146f, -580.9922f, 29.5263f, 118.3858f);
					func_349(-1438.8f, -584.4678f, 29.595f, 118.1207f);
					break;
				
				case 2:
					func_349(-780.5905f, 292.8159f, 84.673f, 97.2697f);
					func_349(-788.6147f, 291.8073f, 84.72f, 97.7348f);
					func_349(-765.572f, 294.4459f, 84.5182f, 93.9327f);
					func_349(-756.9962f, 294.8176f, 84.4061f, 93.9545f);
					break;
				
				case 3:
					func_349(-647.9388f, 40.9257f, 38.9494f, 356.4108f);
					func_349(-647.239f, 49.2068f, 40.7135f, 355.9723f);
					func_349(-620.1517f, 3.6633f, 40.5904f, 98.3813f);
					func_349(-610.5603f, 5.1258f, 41.2404f, 98.696f);
					break;
				
				case 4:
					func_349(-943.2437f, -487.8443f, 35.7504f, 208.6441f);
					func_349(-949.2938f, -476.3759f, 36.0878f, 208.1432f);
					func_349(-955.3208f, -465.3984f, 36.3328f, 206.9198f);
					func_349(-959.5925f, -457.0372f, 36.5226f, 207.7534f);
					break;
				
				case 5:
					func_349(-966.1365f, -401.5364f, 36.6824f, 27.6587f);
					func_349(-934.9108f, -413.4091f, 36.5161f, 118.0149f);
					func_349(-920.2501f, -405.6656f, 36.5869f, 117.2407f);
					func_349(-971.7031f, -390.5213f, 36.7118f, 26.8016f);
					break;
				
				case 6:
					func_349(-58.1347f, -573.486f, 36.5789f, 341.8442f);
					func_349(-64.227f, -590.2214f, 35.1654f, 338.972f);
					func_349(-67.0332f, -599.2827f, 35.1787f, 341.5854f);
					func_349(-71.8651f, -612.8891f, 35.1574f, 339.8537f);
					break;
				
				case 7:
					func_349(-232.1917f, -978.1431f, 28.166f, 160.2115f);
					func_349(-229.6225f, -970.9731f, 28.1636f, 160.2397f);
					func_349(-251.993f, -998.3963f, 28.3747f, 249.3297f);
					func_349(-262.222f, -994.5226f, 29.23f, 249.4673f);
					break;
				
				case 8:
					func_349(151.624f, -1309.343f, 28.2023f, 243.201f);
					func_349(152.7886f, -1305.608f, 28.2023f, 243.9973f);
					func_349(145.8017f, -1287.19f, 28.312f, 120.6275f);
					func_349(142.8935f, -1282.286f, 28.3156f, 120.3024f);
					break;
				
				case 9:
					func_349(-2333.575f, 272.6518f, 168.4671f, 23.0287f);
					func_349(-2322.187f, 277.638f, 168.4671f, 23.4249f);
					func_349(-2316.222f, 279.9105f, 168.4671f, 23.0175f);
					func_349(-2314.396f, 290.9f, 168.4671f, 114.3983f);
					func_349(-2316.81f, 296.424f, 168.4671f, 113.6228f);
					func_349(-2318.572f, 299.2423f, 168.4671f, 293.83f);
					func_349(-2327.902f, 291.6653f, 168.4671f, 294.1158f);
					func_349(-2330.711f, 274.0757f, 168.4671f, 205.2184f);
					func_349(-2345.082f, 277.3852f, 168.4671f, 113.4219f);
					func_349(-2347.777f, 282.6038f, 168.4671f, 292.7772f);
					func_349(-2339.33f, 293.4399f, 168.4671f, 114.2739f);
					func_349(-2352.681f, 294.4205f, 168.4671f, 115.5597f);
					break;
				
				case 10:
					func_347(78);
					break;
				
				case 11:
					func_347(79);
					break;
				
				case 12:
					func_347(82);
					break;
				
				case 13:
					func_347(81);
					break;
				
				case 14:
					func_347(73);
					break;
				
				case 15:
					func_349(382.9244f, 443.8122f, 142.9934f, 78.3408f);
					func_349(391.2023f, 442.4812f, 142.5089f, 82.2125f);
					func_349(400.1477f, 441.0816f, 142.0776f, 83.4259f);
					func_349(414.2964f, 439.2628f, 141.5056f, 80.8689f);
					break;
				
				case 16:
					func_347(75);
					break;
				
				case 17:
					func_347(76);
					break;
				
				case 18:
					func_347(77);
					break;
				
				case 19:
					func_349(-921.9734f, 704.0754f, 150.8142f, 96.5139f);
					func_349(-904.7881f, 708.9782f, 149.8261f, 108.2109f);
					func_349(-931.6637f, 703.693f, 151.369f, 87.7447f);
					func_349(-943.8763f, 704.2332f, 152.0993f, 87.6764f);
					break;
				
				case 20:
					func_347(80);
					break;
				
				case 21:
				case 25:
					func_347(87);
					break;
				
				case 22:
				case 26:
					func_347(88);
					break;
				
				case 23:
				case 27:
					func_347(89);
					break;
				
				case 24:
				case 28:
					func_347(90);
					break;
				
				case 29:
				case 30:
					if (func_346(iParam1))
					{
						func_347(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_30);
					}
					break;
				
				case 31:
					func_349(-352.53f, -1836.742f, 21.924f, 274.8f);
					func_349(-336.412f, -1837.341f, 22.497f, 264.6f);
					func_349(-320.707f, -1840.342f, 23.195f, 257.4f);
					func_349(-304.646f, -1843.295f, 24.219f, 261.599f);
					func_349(-288.991f, -1844.123f, 25.228f, 269.599f);
					func_349(-273.031f, -1842.69f, 26.27f, 278.199f);
					func_349(-361.271f, -1814.526f, 21.63f, 96.399f);
					func_349(-343.939f, -1813.331f, 22.368f, 87.999f);
					func_349(-326.881f, -1814.914f, 23.106f, 78.799f);
					func_349(-310.941f, -1818.223f, 23.957f, 78.799f);
					func_349(-294.16f, -1820.207f, 25.092f, 89.199f);
					func_349(-277.392f, -1819.237f, 26.283f, 100.199f);
					func_349(-257.213f, -1838.977f, 27.318f, 285.799f);
					func_349(-261.286f, -1815.615f, 27.439f, 110.399f);
					func_349(-246.086f, -1808.691f, 28.576f, 117.398f);
					func_349(-231.901f, -1800.767f, 28.619f, 119.398f);
					func_349(-199.77f, -1989.34f, 26.62f, 180.997f);
					func_349(-201.159f, -1971.41f, 26.62f, 190.798f);
					func_349(-205.571f, -1954.537f, 26.62f, 199.998f);
					func_349(-197.879f, -1940.822f, 26.62f, 114.998f);
					func_349(-141.311f, -1967.41f, 21.805f, 91.997f);
					func_349(-141.145f, -1977.861f, 21.813f, 91.997f);
					func_349(-140.565f, -1988.289f, 21.815f, 91.997f);
					func_349(-145.045f, -2032.168f, 21.956f, 73.597f);
					func_349(-147.923f, -2041.781f, 21.956f, 73.597f);
					func_349(-185.791f, -1948.005f, 26.62f, 18.596f);
					func_349(-181.155f, -1965.422f, 26.62f, 8.196f);
					func_349(-179.172f, -1984.332f, 26.62f, 1.396f);
					func_349(-225.88f, -1824.637f, 28.897f, 299.596f);
					func_349(-211.722f, -1816.401f, 28.859f, 300.796f);
					func_349(-217.99f, -1792.624f, 28.649f, 119.196f);
					func_349(-203.828f, -1784.264f, 28.678f, 119.996f);
					func_349(-194.254f, -2018.756f, 26.62f, 75f);
					func_349(-186.956f, -2031.369f, 26.62f, 338f);
					func_349(-194.916f, -2047.94f, 26.62f, 329.8f);
					func_349(-205.565f, -2064.553f, 26.62f, 320.2f);
					func_349(-218.606f, -2077.97f, 26.62f, 311.2f);
					func_349(-233.372f, -2089.601f, 26.62f, 304f);
					func_349(-207.822f, -2002.11f, 26.62f, 173.799f);
					func_349(-207.567f, -2027.579f, 26.62f, 158.599f);
					func_349(-215.235f, -2042.272f, 26.62f, 148.999f);
					func_349(-227.643f, -2058.498f, 26.62f, 138.799f);
					func_349(-242.977f, -2071.452f, 26.62f, 125.798f);
					func_349(-256.624f, -2087.982f, 26.62f, 204.198f);
					func_349(-249.549f, -2098.767f, 26.62f, 294.198f);
					func_349(-228.998f, -2048.889f, 26.62f, 141.198f);
					func_349(-176.963f, -2009.239f, 24.519f, 261.597f);
					func_349(-195.128f, -1806.447f, 28.814f, 299.997f);
					func_349(-180.02f, -1797.414f, 28.797f, 299.997f);
					func_349(-165.796f, -1787.672f, 28.788f, 304.597f);
					func_349(-188.124f, -1774.765f, 28.711f, 123.197f);
					func_349(-417.428f, -1836.374f, 19.238f, 121.797f);
					func_349(-430.967f, -1844.844f, 18.468f, 121.797f);
					func_349(-444.94f, -1853.739f, 17.786f, 121.797f);
					break;
			}
		}
		else if (func_343(Param0, &iVar2, &iVar3) || (func_321(Param0, &(iVar2[0])) && (unk_0xD6F7D32A98E07F93(iParam1) || unk_0x4262B4DCEADC2695(iParam1))))
		{
			func_355();
			iVar0 = 0;
			while (iVar0 < iVar2)
			{
				if (iVar2[iVar0] > 1000)
				{
					iVar2[iVar0] = (iVar2[iVar0] - 1000);
					iVar3[iVar0] = 1;
				}
				if (iVar2[iVar0] >= 83 && iVar2[iVar0] <= 87)
				{
					Global_2667222.f_515 = 1;
				}
				if (!iVar3[iVar0] && func_342(iVar2[iVar0], -1))
				{
					if (func_346(iParam1))
					{
						func_347(iVar2[iVar0]);
					}
				}
				else if (iVar3[iVar0])
				{
					if (((func_341(unk_0xE2D3D51028F0428A()) || func_340(unk_0xE2D3D51028F0428A())) && unk_0xD6F7D32A98E07F93(iParam1)) || unk_0x4262B4DCEADC2695(iParam1))
					{
						if (func_339(iParam1))
						{
							func_338(iVar2[iVar0]);
						}
						else if (func_337(iParam1))
						{
							func_336(iVar2[iVar0]);
							func_338(iVar2[iVar0]);
						}
						else
						{
							func_336(iVar2[iVar0]);
							func_338(iVar2[iVar0]);
						}
					}
					else
					{
						func_334(iVar2[iVar0], iParam1);
					}
				}
				else
				{
					func_347(iVar2[iVar0]);
				}
				iVar0++;
			}
		}
	}
}

void func_334(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 23:
			func_349(434.1898f, 6535.824f, 27.0084f, 66.9998f);
			func_349(434.9146f, 6539.661f, 26.9691f, 66.9998f);
			func_349(435.1928f, 6543.298f, 26.889f, 66.9998f);
			func_349(429.8495f, 6506.581f, 27.1807f, 59.7997f);
			func_349(429.8463f, 6511.11f, 27.0717f, 60.9997f);
			func_349(434.2748f, 6581.816f, 26.1303f, 85.1993f);
			func_349(443.1016f, 6580.717f, 26.0739f, 85.1993f);
			func_349(451.9748f, 6579.937f, 26.0319f, 85.1993f);
			break;
		
		case 26:
			func_349(-148.9694f, 6325.552f, 30.4564f, 224.1983f);
			func_349(-154.9585f, 6331.287f, 30.5809f, 225.7983f);
			func_349(-136.8806f, 6347.622f, 30.4906f, 43.9982f);
			func_349(-142.1459f, 6342.532f, 30.49f, 44.7982f);
			func_349(-136.6504f, 6357.062f, 30.4907f, 43.9982f);
			func_349(-151.1909f, 6358.461f, 30.4907f, 223.398f);
			func_349(-141.4154f, 6365.831f, 30.4907f, 43.3979f);
			func_349(-147.8279f, 6378.042f, 30.5012f, 312.7973f);
			break;
		
		case 24:
			func_349(60.7522f, 6465.807f, 30.3941f, 213.3973f);
			func_349(57.4131f, 6462.55f, 30.3663f, 213.3973f);
			func_349(48.0438f, 6452.668f, 30.3245f, 213.3973f);
			func_349(40.6765f, 6445.235f, 30.3475f, 213.3973f);
			func_349(37.8298f, 6442.521f, 30.3489f, 213.3973f);
			func_349(35.0212f, 6439.866f, 30.3332f, 213.3973f);
			func_349(32.1837f, 6437.21f, 30.2991f, 213.3973f);
			func_349(29.4732f, 6434.526f, 30.3702f, 213.3973f);
			break;
		
		case 25:
			func_349(-377.1927f, 6142.805f, 30.3409f, 315.3965f);
			func_349(-383.3481f, 6136.154f, 30.3752f, 315.3965f);
			func_349(-395.8286f, 6123.635f, 30.2987f, 46.3965f);
			func_349(-389.1636f, 6117.241f, 30.3641f, 46.3965f);
			func_349(-370.6174f, 6129.779f, 30.4414f, 45.7965f);
			func_349(-360.983f, 6130.575f, 30.4401f, 45.7965f);
			func_349(-416.8689f, 6103.411f, 30.3852f, 325.7964f);
			func_349(-420.9229f, 6095.657f, 30.3155f, 334.7964f);
			break;
		
		case 22:
			func_349(45.2181f, 6341.107f, 30.2296f, 14.3964f);
			func_349(41.6057f, 6339.476f, 30.2306f, 14.3964f);
			func_349(39.2508f, 6359.469f, 30.2398f, 207.3965f);
			func_349(36.3203f, 6356.893f, 30.2398f, 207.3965f);
			func_349(51.6043f, 6365.022f, 30.2399f, 33.5965f);
			func_349(65.6465f, 6380.626f, 30.2398f, 212.9964f);
			func_349(24.8587f, 6366.36f, 30.2286f, 32.7965f);
			func_349(19.6254f, 6360.736f, 30.2305f, 32.7965f);
			break;
		
		case 28:
			func_349(94.0245f, 181.2181f, 103.5566f, 160.3953f);
			func_349(91.0039f, 182.2811f, 103.6179f, 160.3953f);
			func_349(68.365f, 148.2105f, 103.5812f, 339.9951f);
			func_349(62.2104f, 150.5185f, 103.6101f, 339.9951f);
			func_349(69.5198f, 186.4278f, 103.9415f, 69.7949f);
			func_349(62.59f, 189.0833f, 103.9981f, 69.7949f);
			func_349(55.6095f, 191.8089f, 104.2827f, 69.7949f);
			func_349(154.7309f, 182.1333f, 104.6903f, 160.1945f);
			break;
		
		case 31:
			func_349(322.4916f, -714.5293f, 28.1574f, 158.5941f);
			func_349(329.5591f, -694.4284f, 28.1656f, 158.5941f);
			func_349(324.565f, -684.3934f, 28.3133f, 247.194f);
			func_349(326.4054f, -679.9403f, 28.3192f, 247.194f);
			func_349(297.1177f, -804.3891f, 28.4859f, 160.594f);
			func_349(288.5461f, -814.6994f, 28.1563f, 163.194f);
			func_349(286.0127f, -821.7357f, 28.3093f, 163.194f);
			func_349(283.6725f, -828.9533f, 28.1247f, 158.994f);
			break;
		
		case 29:
			func_349(-1448.551f, -355.0512f, 43.3715f, 313.3925f);
			func_349(-1454.819f, -359.998f, 42.7885f, 311.3925f);
			func_349(-1462.675f, -360.1352f, 42.9255f, 223.392f);
			func_349(-1447.965f, -368.3028f, 42.5412f, 5.9918f);
			func_349(-1468.678f, -353.4619f, 43.2024f, 217.7916f);
			func_349(-1473.219f, -346.7773f, 43.5318f, 213.9913f);
			func_349(-1490.742f, -420.1957f, 35.9291f, 229.1911f);
			func_349(-1496.003f, -395.7657f, 38.1394f, 45.7909f);
			break;
		
		case 30:
			func_349(-1174.491f, -1381.01f, 3.9253f, 116.5903f);
			func_349(-1183.148f, -1392.559f, 3.6319f, 304.9901f);
			func_349(-1160.964f, -1417.759f, 3.7043f, 65.7899f);
			func_349(-1151.611f, -1411.377f, 3.9411f, 63.5895f);
			func_349(-1167.187f, -1424.07f, 3.4884f, 123.5897f);
			func_349(-1148.22f, -1409.164f, 4.0217f, 63.5895f);
			func_349(-1137.11f, -1372.818f, 3.8993f, 27.5895f);
			func_349(-1140.608f, -1365.747f, 4.0573f, 27.5895f);
			break;
		
		case 27:
			func_349(1414.237f, -1656.344f, 60.2449f, 332.7893f);
			func_349(1416.668f, -1659.933f, 60.6982f, 332.7893f);
			func_349(1419.327f, -1663.972f, 61.2382f, 332.7893f);
			func_349(1421.557f, -1667.367f, 61.7479f, 332.7893f);
			func_349(1423.744f, -1670.853f, 62.3125f, 332.7893f);
			func_349(1412.157f, -1652.746f, 59.9105f, 332.7893f);
			func_349(1426.201f, -1673.598f, 62.7133f, 330.1893f);
			func_349(1435.804f, -1694.73f, 65.0743f, 352.5892f);
			break;
		
		case 33:
			func_349(2810.787f, 4435.92f, 47.5295f, 20.7996f);
			func_349(2808.413f, 4443.922f, 47.3732f, 14.7995f);
			func_349(2806.298f, 4451.786f, 47.1865f, 15.3995f);
			func_349(2803.925f, 4459.858f, 46.9823f, 15.3995f);
			func_349(2801.756f, 4467.755f, 46.8147f, 15.3995f);
			func_349(2893.563f, 4430.258f, 47.338f, 105.9994f);
			func_349(2903.725f, 4425.854f, 47.3523f, 23.1992f);
			func_349(2907.076f, 4418.059f, 47.6301f, 23.1992f);
			break;
		
		case 36:
			func_349(1680.448f, 4821.131f, 41.0599f, 186.399f);
			func_349(1679.76f, 4829.447f, 40.9167f, 186.399f);
			func_349(1678.668f, 4838.03f, 41.0221f, 187.7989f);
			func_349(1677.612f, 4846.028f, 41.0452f, 187.7989f);
			func_349(1675.851f, 4860.434f, 41.0901f, 187.7989f);
			func_349(1674.843f, 4868.343f, 41.0684f, 187.7989f);
			func_349(1673.543f, 4875.752f, 41.0684f, 186.7986f);
			func_349(1672.525f, 4884.972f, 41.0478f, 186.7986f);
			break;
		
		case 34:
			func_349(422.863f, 3583.901f, 32.2386f, 313.5986f);
			func_349(426.6211f, 3583.208f, 32.2386f, 313.5986f);
			func_349(430.466f, 3582.042f, 32.2386f, 313.5986f);
			func_349(434.2751f, 3580.881f, 32.2386f, 313.5986f);
			func_349(438.1525f, 3579.911f, 32.2386f, 313.5986f);
			func_349(442.0173f, 3578.948f, 32.2386f, 313.5986f);
			func_349(420.2694f, 3572.995f, 32.2385f, 353.7984f);
			func_349(424.4825f, 3572.1f, 32.2386f, 348.1984f);
			break;
		
		case 35:
			func_349(627.005f, 2726.019f, 40.7692f, 4.3984f);
			func_349(620.9771f, 2725.759f, 40.7897f, 4.3984f);
			func_349(614.8536f, 2725.355f, 40.8321f, 4.3984f);
			func_349(611.1158f, 2737.387f, 40.9734f, 185.3984f);
			func_349(598.9713f, 2736.261f, 41.0602f, 186.5986f);
			func_349(592.6151f, 2735.886f, 41.0602f, 186.5986f);
			func_349(586.0421f, 2735.9f, 41.0535f, 186.5986f);
			func_349(627.4468f, 2742.742f, 40.8963f, 183.5979f);
			break;
		
		case 32:
			func_349(214.3318f, 2492.26f, 53.9736f, 312.7978f);
			func_349(213.9953f, 2496.666f, 53.8128f, 312.7978f);
			func_349(213.7524f, 2501.251f, 53.5958f, 312.7978f);
			func_349(213.6645f, 2505.908f, 53.3477f, 312.7978f);
			func_349(213.4478f, 2510.734f, 53.1055f, 312.7978f);
			func_349(212.9148f, 2515.268f, 52.9376f, 312.7978f);
			func_349(211.5983f, 2519.216f, 52.6753f, 312.7978f);
			func_349(210.1288f, 2523.187f, 52.3493f, 312.7978f);
			break;
		
		case 38:
			func_349(153.6785f, -2476.192f, 4.9877f, 178.4004f);
			func_349(150.9209f, -2516.979f, 4.9909f, 179.9999f);
			func_349(150.9499f, -2524.965f, 4.9905f, 179.9999f);
			func_349(153.866f, -2467.242f, 4.9877f, 178.4004f);
			func_349(150.8115f, -2533.139f, 4.9895f, 180.0004f);
			func_349(153.8647f, -2433.386f, 5.2336f, 170.2002f);
			func_349(142.7427f, -2536.147f, 5f, 205.0002f);
			func_349(138.8267f, -2535.865f, 5f, 205.0002f);
			break;
		
		case 41:
			func_349(-341.4255f, -2734.451f, 5.0413f, 314.8f);
			func_349(-334.0134f, -2741.43f, 5.0269f, 314.8f);
			func_349(-329.7832f, -2745.604f, 5.0196f, 314.8f);
			func_349(-336.4781f, -2716.139f, 5.0028f, 134.1994f);
			func_349(-334.2752f, -2718.888f, 5.0048f, 135.1992f);
			func_349(-327.6603f, -2725.645f, 5.0103f, 135.1992f);
			func_349(-323.1619f, -2730.345f, 5.0099f, 135.1992f);
			func_349(-316.3481f, -2737.087f, 5.0033f, 135.1992f);
			break;
		
		case 39:
			func_349(1143.73f, -3105.091f, 4.8989f, 146.1979f);
			func_349(1140.009f, -3104.954f, 4.8985f, 146.1979f);
			func_349(1136.267f, -3104.69f, 4.8969f, 146.1979f);
			func_349(1132.732f, -3104.277f, 4.8944f, 146.1979f);
			func_349(1128.724f, -3104.54f, 4.896f, 146.1979f);
			func_349(1125.106f, -3104.057f, 4.8942f, 146.1979f);
			func_349(1117.8f, -3103.674f, 4.8922f, 146.1979f);
			func_349(1114.015f, -3103.448f, 4.8931f, 146.1979f);
			break;
		
		case 40:
			func_349(653.1188f, -2700.255f, 5.2101f, 24.7971f);
			func_349(656.1305f, -2707.245f, 5.214f, 24.7971f);
			func_349(659.3307f, -2714.378f, 5.2188f, 22.7968f);
			func_349(662.2627f, -2722.228f, 5.2188f, 19.1968f);
			func_349(649.2115f, -2728.359f, 5.1124f, 20.5967f);
			func_349(646.2606f, -2720.833f, 5.1103f, 21.3967f);
			func_349(643.4582f, -2713.846f, 5.1099f, 21.3967f);
			func_349(640.3513f, -2706.571f, 5.108f, 21.3967f);
			break;
		
		case 37:
			func_349(-260.5913f, -2615.255f, 5.0502f, 274.5953f);
			func_349(-253.2161f, -2614.896f, 5.0502f, 271.5953f);
			func_349(-245.6569f, -2614.862f, 5.0502f, 271.5953f);
			func_349(-238.214f, -2614.847f, 5.0502f, 271.5953f);
			func_349(-238.013f, -2630.961f, 5.0331f, 271.3949f);
			func_349(-260.9724f, -2631.418f, 5.0355f, 276.9951f);
			func_349(-253.401f, -2631.108f, 5.0319f, 272.195f);
			func_349(-245.5563f, -2631.06f, 5.0323f, 272.195f);
			break;
		
		case 83:
			func_349(-1190.795f, -3371.393f, 12.945f, 348.399f);
			func_349(-1185.634f, -3373.893f, 12.945f, 348.399f);
			func_349(-1114.818f, -3414.185f, 12.945f, 314.199f);
			func_349(-1110.976f, -3416.37f, 12.945f, 314.199f);
			func_349(-1098.621f, -3460.792f, 12.9453f, 329.799f);
			func_349(-1093.31f, -3463.464f, 12.9453f, 329.799f);
			func_349(-1089.433f, -3443.234f, 12.945f, 329.799f);
			func_349(-1084.271f, -3446.31f, 12.945f, 329.799f);
			func_349(-1093.808f, -3452.407f, 12.9451f, 329.799f);
			func_349(-1088.383f, -3455.466f, 12.9451f, 329.799f);
			func_349(-1118.474f, -3411.385f, 12.9451f, 313.199f);
			func_349(-1181.003f, -3375.658f, 12.945f, 346.799f);
			func_349(-1212.071f, -3382.283f, 12.9451f, 328.999f);
			func_349(-1217.708f, -3378.623f, 12.9451f, 328.999f);
			func_349(-1216.986f, -3390.396f, 12.9452f, 328.999f);
			func_349(-1222.566f, -3386.707f, 12.9452f, 328.999f);
			func_349(-1222.06f, -3398.882f, 12.9452f, 328.999f);
			func_349(-1227.698f, -3394.946f, 12.9451f, 328.999f);
			func_349(-1097.517f, -3472.086f, 12.9453f, 328.999f);
			func_349(-1102.951f, -3468.619f, 12.9452f, 328.999f);
			func_349(-1227.253f, -3407.38f, 12.9452f, 328.999f);
			func_349(-1232.836f, -3403.572f, 12.9452f, 328.999f);
			break;
		
		case 84:
			func_349(-1364.879f, -3285.201f, 12.945f, 330.2f);
			func_349(-1359.229f, -3288.52f, 12.945f, 330.2f);
			func_349(-1369.636f, -3293.617f, 12.945f, 330.2f);
			func_349(-1363.881f, -3296.796f, 12.945f, 330.2f);
			func_349(-1432.898f, -3247.702f, 12.945f, 330.2f);
			func_349(-1437.282f, -3255.429f, 12.945f, 330.2f);
			func_349(-1441.623f, -3262.969f, 12.945f, 330.2f);
			func_349(-1443.954f, -3251.006f, 12.945f, 330.2f);
			func_349(-1374.159f, -3301.61f, 12.945f, 330.2f);
			func_349(-1368.508f, -3304.924f, 12.945f, 330.2f);
			func_349(-1359.905f, -3276.118f, 12.9448f, 330.4f);
			func_349(-1354.228f, -3279.63f, 12.9448f, 330.4f);
			func_349(-1406.493f, -3246.223f, 12.9449f, 344.5997f);
			func_349(-1411.058f, -3243.62f, 12.9449f, 344.5997f);
			func_349(-1415.326f, -3241.014f, 12.9449f, 344.5997f);
			func_349(-1419.899f, -3238.116f, 12.9449f, 344.5997f);
			func_349(-1370.986f, -3268.945f, 12.9449f, 322.3996f);
			func_349(-1365.735f, -3272.363f, 12.9449f, 322.3996f);
			func_349(-1373.341f, -3313.206f, 12.9448f, 329.5996f);
			func_349(-1379.091f, -3310.004f, 12.9448f, 330.7996f);
			func_349(-1436.989f, -3228.515f, 12.9449f, 343.9996f);
			func_349(-1444.064f, -3273.751f, 12.945f, 330.7996f);
			break;
		
		case 85:
			func_349(-2060.105f, 3186.159f, 31.81f, 329.599f);
			func_349(-2065.521f, 3189.007f, 31.81f, 150.199f);
			func_349(-2055.006f, 3194.989f, 31.81f, 329.599f);
			func_349(-2060.471f, 3197.816f, 31.81f, 150.199f);
			func_349(-2049.611f, 3204.032f, 31.81f, 329.599f);
			func_349(-2055.048f, 3206.958f, 31.81f, 150.199f);
			func_349(-2049.627f, 3216.253f, 31.81f, 150.199f);
			func_349(-2039.024f, 3222.121f, 31.81f, 329.599f);
			func_349(-2044.17f, 3213.208f, 31.81f, 329.599f);
			func_349(-2044.672f, 3224.638f, 31.81f, 150.199f);
			func_349(-2060.486f, 3165.928f, 31.8103f, 133.9988f);
			func_349(-2055.707f, 3163.053f, 31.8103f, 133.9988f);
			func_349(-2050.911f, 3160.092f, 31.8103f, 133.9988f);
			func_349(-1974.635f, 3137.847f, 31.8103f, 149.5986f);
			func_349(-1970.354f, 3145.22f, 31.8103f, 149.5986f);
			func_349(-1965.709f, 3153.221f, 31.8103f, 149.5986f);
			func_349(-1960.991f, 3161.346f, 31.8103f, 149.5986f);
			func_349(-1983.17f, 3131.33f, 31.8103f, 149.5986f);
			func_349(-1976.614f, 3127.627f, 31.8103f, 149.5986f);
			func_349(-1991.582f, 3127.264f, 31.8103f, 167.7985f);
			func_349(-1995.584f, 3129.369f, 31.8103f, 167.7985f);
			func_349(-1999.335f, 3131.182f, 31.8103f, 167.7985f);
			break;
		
		case 86:
			func_349(-1843.828f, 3085.094f, 31.81f, 165.8f);
			func_349(-1828.571f, 3084.114f, 31.841f, 329.2f);
			func_349(-1823.414f, 3092.762f, 31.843f, 330f);
			func_349(-1819.045f, 3100.435f, 31.845f, 330f);
			func_349(-1833.313f, 3075.722f, 31.838f, 330f);
			func_349(-1847.648f, 3076.8f, 31.835f, 165.8f);
			func_349(-1838.479f, 3078.576f, 31.863f, 150.599f);
			func_349(-1833.605f, 3086.784f, 31.863f, 150.599f);
			func_349(-1828.424f, 3095.617f, 31.863f, 150.599f);
			func_349(-1823.95f, 3102.821f, 31.862f, 150.599f);
			func_349(-1819.284f, 3110.67f, 31.8615f, 150.2f);
			func_349(-1814.545f, 3108.229f, 31.8476f, 330.6f);
			func_349(-1853.939f, 3076.271f, 31.8105f, 176.7996f);
			func_349(-1857.726f, 3078.668f, 31.8105f, 176.7996f);
			func_349(-1861.626f, 3080.777f, 31.8105f, 176.7996f);
			func_349(-1865.584f, 3083.136f, 31.8103f, 176.7996f);
			func_349(-1869.255f, 3085.565f, 31.8103f, 176.7996f);
			func_349(-1913.263f, 3125.342f, 31.8103f, 150.7988f);
			func_349(-1917.546f, 3127.678f, 31.8103f, 150.7988f);
			func_349(-1922.74f, 3130.555f, 31.8103f, 150.7988f);
			func_349(-1927.676f, 3133.413f, 31.8103f, 150.7988f);
			func_349(-1932.418f, 3136.273f, 31.8103f, 150.7988f);
			break;
		
		case 87:
			func_349(-2538.561f, 3303.172f, 31.814f, 296.999f);
			func_349(-2530.309f, 3307.445f, 31.816f, 296.999f);
			func_349(-2521.733f, 3311.833f, 31.817f, 296.999f);
			func_349(-2512.881f, 3316.428f, 31.819f, 296.999f);
			func_349(-2502.952f, 3321.518f, 31.821f, 296.999f);
			func_349(-2542.613f, 3310.728f, 31.814f, 296.999f);
			func_349(-2534.195f, 3314.753f, 31.815f, 296.999f);
			func_349(-2525.635f, 3318.97f, 31.817f, 296.999f);
			func_349(-2516.674f, 3323.545f, 31.819f, 296.999f);
			func_349(-2507.153f, 3328.454f, 31.82f, 296.999f);
			func_349(-2547.689f, 3298.791f, 31.812f, 296.999f);
			func_349(-2551.261f, 3306.304f, 31.8123f, 296.999f);
			func_349(-2497.446f, 3333.296f, 31.821f, 296.999f);
			func_349(-2494.089f, 3326.065f, 31.8218f, 296.999f);
			func_349(-2453.405f, 3255.388f, 31.8276f, 167.1986f);
			func_349(-2449.37f, 3253.417f, 31.8276f, 167.1986f);
			func_349(-2445.49f, 3251.138f, 31.8276f, 167.1986f);
			func_349(-2441.575f, 3248.888f, 31.8276f, 167.1986f);
			func_349(-2437.319f, 3246.554f, 31.8277f, 167.1986f);
			func_349(-2432.723f, 3244.232f, 31.8277f, 167.1986f);
			func_349(-2485.273f, 3330.891f, 31.8239f, 298.1979f);
			func_349(-2488.82f, 3338.365f, 31.8226f, 298.1979f);
			break;
		
		case 89:
			if (Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_59 == 0)
			{
				func_349(1284.416f, 2890.299f, 45.0276f, 336.3999f);
				func_349(1273.248f, 2901.428f, 45.0426f, 338.3999f);
				func_349(1262.945f, 2911.535f, 43.2959f, 341.9999f);
				func_349(1272.094f, 2873.387f, 45.3443f, 328.5991f);
				func_349(1259.785f, 2892.217f, 45.1126f, 339.9999f);
				func_349(1231.279f, 2910.881f, 43.3085f, 12f);
				func_349(1306.515f, 2839.475f, 46.8947f, 132.3996f);
				func_349(1307.453f, 2825.276f, 45.1566f, 127.1998f);
				func_349(1257.029f, 2872.157f, 45.9766f, 338.5992f);
				func_349(1225.764f, 2930.095f, 41.6173f, 14.7999f);
			}
			else
			{
				func_349(1265.123f, 2836.949f, 47.1021f, 119.9996f);
				func_349(1258.145f, 2831.643f, 46.4503f, 135.7993f);
				func_349(1240.847f, 2828.721f, 46.4388f, 39.5992f);
				func_349(1236.877f, 2835.49f, 46.3491f, 22.9991f);
				func_349(1235.697f, 2843.403f, 46.0231f, 2.7991f);
				func_349(1237.686f, 2850.607f, 45.5261f, 335.5991f);
				func_349(1241.126f, 2858.816f, 45.0176f, 339.7991f);
				func_349(1249.715f, 2810.588f, 47.2648f, 255.1992f);
				func_349(1257.696f, 2808.609f, 47.014f, 266.1992f);
				func_349(1265.577f, 2808.353f, 46.7598f, 277.199f);
				func_349(1273.808f, 2808.484f, 46.3872f, 263.999f);
				func_349(1282.535f, 2807.134f, 45.9705f, 250.7989f);
				func_349(1290.168f, 2803.745f, 45.8005f, 238.7988f);
				func_349(1296.445f, 2798.777f, 46.0903f, 228.9988f);
				func_349(1302.041f, 2792.33f, 45.957f, 221.7987f);
				func_349(1251.389f, 2825.818f, 45.9856f, 119.1982f);
				func_349(1285.48f, 2819.238f, 45.044f, 228.3993f);
				func_349(1293.023f, 2814.164f, 44.8859f, 233.399f);
				func_349(1242.18f, 2814.153f, 47.7108f, 227.3991f);
				func_349(1236.362f, 2819.623f, 47.6845f, 224.399f);
				func_349(1231.532f, 2825.855f, 47.4649f, 210.5992f);
				func_349(1228.177f, 2833.423f, 47.3171f, 197.5993f);
				func_349(1243.095f, 2866.749f, 44.6219f, 353.7992f);
				func_349(1307.346f, 2785.787f, 46.1136f, 219.9997f);
				func_349(1300.752f, 2808.224f, 44.5688f, 228.9997f);
				func_349(1306.571f, 2802.468f, 44.6275f, 224.1992f);
				func_349(1244.465f, 2875.697f, 44.5839f, 353.7992f);
				func_349(1312.441f, 2795.427f, 45.2701f, 218.5991f);
			}
			break;
		
		case 90:
			if (Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_59 == 0)
			{
				func_349(14.4916f, 2660.726f, 79.0178f, 310.1999f);
				func_349(3.855f, 2672.388f, 78.437f, 319.2f);
				func_349(-7.057f, 2682.247f, 77.472f, 319.2f);
				func_349(-14.041f, 2663.43f, 77.4221f, 319.2f);
				func_349(41.8086f, 2597.059f, 81.3524f, 301.9997f);
				func_349(60.2273f, 2609.745f, 79.5672f, 305.9998f);
				func_349(34.0188f, 2659.723f, 78.9894f, 314.2f);
				func_349(29.4879f, 2675.34f, 76.0202f, 314.2f);
				func_349(19.0088f, 2686.16f, 75.6897f, 314.2f);
				func_349(7.6101f, 2697.113f, 76.2923f, 314.2f);
			}
			else
			{
				func_349(50.6405f, 2633.902f, 79.4503f, 305.1998f);
				func_349(46.2894f, 2639.951f, 79.9122f, 305.1998f);
				func_349(55.3668f, 2627.773f, 79.6363f, 305.1998f);
				func_349(59.9522f, 2620.408f, 80.0499f, 305.1998f);
				func_349(42.1486f, 2646.073f, 80.108f, 305.1998f);
				func_349(68.1481f, 2630.07f, 77.0725f, 305.1998f);
				func_349(62.6048f, 2637.014f, 76.1722f, 305.1998f);
				func_349(57.3543f, 2643.56f, 75.5301f, 305.1998f);
				func_349(52.611f, 2649.698f, 76.1354f, 305.1998f);
				func_349(74.5845f, 2640.475f, 72.602f, 305.1998f);
				func_349(68.5462f, 2646.784f, 71.6298f, 305.1998f);
				func_349(62.426f, 2652.977f, 71.7029f, 305.1998f);
				func_349(79.5597f, 2650.835f, 68.668f, 305.1998f);
				func_349(72.6035f, 2656.857f, 67.3294f, 305.1998f);
				func_349(83.4156f, 2660.237f, 64.3198f, 305.1998f);
				func_349(102.851f, 2688.009f, 51.732f, 224f);
				func_349(109.815f, 2681.012f, 51.112f, 224f);
				func_349(116.355f, 2674.26f, 50.529f, 224f);
				func_349(125.138f, 2665.98f, 49.8f, 224f);
				func_349(132.228f, 2659.865f, 49.26f, 228.4f);
				func_349(139.354f, 2653.536f, 48.737f, 228.4f);
				func_349(88.512f, 2702.995f, 53.042f, 224.199f);
				func_349(81.565f, 2710.357f, 53.67f, 224.199f);
				func_349(75.156f, 2716.981f, 54.223f, 224.199f);
				func_349(68.442f, 2723.806f, 54.775f, 226.199f);
				func_349(61.449f, 2730.606f, 55.308f, 226.199f);
				func_349(53.702f, 2738.167f, 55.855f, 226.199f);
				func_349(91.2443f, 2667.262f, 59.9931f, 314.599f);
			}
			break;
		
		case 91:
			if (Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_59 == 0)
			{
				func_349(2772.011f, 3889.062f, 42.94f, 145.4f);
				func_349(2785.592f, 3880.409f, 43.695f, 146.199f);
				func_349(2788.387f, 3898.107f, 45.364f, 140.999f);
				func_349(2801.558f, 3912.485f, 44.931f, 131.999f);
				func_349(2805.531f, 3892.253f, 47.01f, 106.399f);
				func_349(2824.791f, 3894.787f, 47.4293f, 105.3989f);
				func_349(2761.739f, 3945.948f, 44.59f, 135.398f);
				func_349(2814.589f, 3930.404f, 44.816f, 134.9978f);
				func_349(2747.627f, 3930.92f, 43.8497f, 138.3978f);
				func_349(2796.312f, 3928.316f, 42.6106f, 134.5979f);
			}
			else
			{
				func_349(2730.174f, 3890.294f, 42.435f, 54.6f);
				func_349(2714.633f, 3918.283f, 42.938f, 16f);
				func_349(2716.533f, 3910.15f, 42.699f, 19.6f);
				func_349(2757.499f, 3874.045f, 42.724f, 64.8f);
				func_349(2747.99f, 3878.676f, 42.561f, 62.8f);
				func_349(2738.337f, 3884.314f, 42.614f, 57.2f);
				func_349(2711.836f, 3926.255f, 42.931f, 21.6f);
				func_349(2707.586f, 3934.558f, 42.984f, 27.6f);
				func_349(2702.361f, 3943.039f, 42.951f, 30.6f);
				func_349(2696.696f, 3951.317f, 43.012f, 34.8f);
				func_349(2766.778f, 3868.911f, 42.822f, 59.8f);
				func_349(2775.397f, 3863.697f, 43.204f, 54.2f);
				func_349(2738.841f, 3869.927f, 42.492f, 242.799f);
				func_349(2746.49f, 3865.861f, 42.808f, 239.599f);
				func_349(2754.829f, 3861.039f, 42.906f, 240.799f);
				func_349(2762.616f, 3856.316f, 42.895f, 240.799f);
				func_349(2770.463f, 3851.383f, 43.216f, 233.199f);
				func_349(2778.129f, 3844.914f, 43.26f, 229.199f);
				func_349(2785.341f, 3837.918f, 43.141f, 224.999f);
				func_349(2730.65f, 3875.186f, 42.437f, 231.999f);
				func_349(2724.14f, 3880.885f, 42.469f, 224.599f);
				func_349(2718.541f, 3887.508f, 42.614f, 217.399f);
				func_349(2783.246f, 3857.409f, 43.175f, 45.199f);
				func_349(2790.716f, 3850.631f, 43.125f, 45.199f);
				func_349(2690.655f, 3959.246f, 43.255f, 40.199f);
				func_349(2797.912f, 3842.523f, 43.166f, 40.199f);
				func_349(2791.836f, 3830.845f, 43.14f, 221.999f);
				func_349(2712.952f, 3894.566f, 42.484f, 14.799f);
			}
			break;
		
		case 92:
			if (Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_59 == 0)
			{
				func_349(3374.661f, 5559.709f, 12.3726f, 138.7999f);
				func_349(3366.365f, 5569.449f, 13.9704f, 112.8f);
				func_349(3358.493f, 5581.463f, 16.1783f, 112.8f);
				func_349(3356.705f, 5595.363f, 15.4029f, 112.8f);
				func_349(3336.662f, 5552.357f, 19.491f, 249.6f);
				func_349(3336.791f, 5567.825f, 20.432f, 249.6f);
				func_349(3335.259f, 5599.046f, 22.4606f, 249.6f);
				func_349(3336.811f, 5613.029f, 22.2159f, 249.6f);
				func_349(3354.696f, 5609.699f, 15.9453f, 111.3999f);
				func_349(3354.006f, 5624.206f, 16.018f, 111.3999f);
			}
			else
			{
				func_349(3372.053f, 5506.134f, 20.8174f, 99.5999f);
				func_349(3374.923f, 5520.177f, 20.3207f, 86f);
				func_349(3350.643f, 5490.432f, 18.8423f, 139.9997f);
				func_349(3364.189f, 5502.98f, 19.648f, 125.7999f);
				func_349(3354.101f, 5484.773f, 19.619f, 116.399f);
				func_349(3365.919f, 5519.949f, 18.8008f, 102.9988f);
				func_349(3341.889f, 5506.809f, 19.584f, 161.199f);
				func_349(3338.581f, 5497.709f, 19.376f, 161.199f);
				func_349(3335.674f, 5489.348f, 19.542f, 161.199f);
				func_349(3332.019f, 5479.563f, 19.738f, 150.998f);
				func_349(3327.404f, 5470.857f, 19.302f, 159.398f);
				func_349(3323.903f, 5461.49f, 18.492f, 156.398f);
				func_349(3320.016f, 5452.957f, 17.834f, 153.198f);
				func_349(3315.782f, 5444.61f, 17.115f, 150.798f);
				func_349(3335.451f, 5455.723f, 18.2323f, 162.1979f);
				func_349(3338.788f, 5464.803f, 18.8631f, 163.7977f);
				func_349(3362.476f, 5488.211f, 20.4432f, 108.5979f);
				func_349(3371.259f, 5491.274f, 21.5286f, 104.9989f);
				func_349(3342.201f, 5517.014f, 19.642f, 170.199f);
				func_349(3343.267f, 5526.085f, 18.902f, 175.598f);
				func_349(3343.531f, 5536.075f, 18.217f, 178.598f);
				func_349(3357.257f, 5496.71f, 18.9729f, 132.5977f);
				func_349(3342.346f, 5473.345f, 19.1235f, 159.3987f);
				func_349(3347.236f, 5480.447f, 19.4672f, 131.199f);
				func_349(3357.623f, 5516.9f, 16.9016f, 118.7991f);
				func_349(3361.366f, 5545.886f, 15.5532f, 118.7991f);
				func_349(3352.612f, 5541.013f, 16.3238f, 131.999f);
				func_349(3343.349f, 5546.494f, 17.8738f, 173.9988f);
			}
			break;
		
		case 93:
			if (Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_59 == 0)
			{
				func_349(43.848f, 6845.657f, 13.379f, 247.2f);
				func_349(50.379f, 6861.146f, 15.105f, 247.2f);
				func_349(32.501f, 6871.777f, 13.3283f, 247.2f);
				func_349(38.437f, 6885.796f, 13.3627f, 247.2f);
				func_349(55.806f, 6875.081f, 14.824f, 247.2f);
				func_349(11.616f, 6877.079f, 11.466f, 247.2f);
				func_349(18.954f, 6891.633f, 11.37f, 247.2f);
				func_349(26.68f, 6907.587f, 11.869f, 247.2f);
				func_349(7.479f, 6907.895f, 12.024f, 247.2f);
				func_349(44.9981f, 6901.352f, 11.9426f, 247.2f);
			}
			else
			{
				func_349(35.591f, 6836.608f, 13.288f, 274.4f);
				func_349(36.028f, 6830.135f, 13.801f, 270.8f);
				func_349(35.114f, 6823.884f, 14.527f, 260.8f);
				func_349(48.779f, 6838.693f, 14.337f, 273.6f);
				func_349(56.738f, 6821.8f, 15.244f, 244.8f);
				func_349(48.377f, 6825.895f, 14.656f, 249.8f);
				func_349(49.11f, 6831.439f, 13.991f, 274.8f);
				func_349(53.544f, 6818.275f, 16.342f, 243f);
				func_349(46.162f, 6821.945f, 15.483f, 249.8f);
				func_349(60.129f, 6836.8f, 15.605f, 269.6f);
				func_349(40.88f, 6802.952f, 20.113f, 242.6f);
				func_349(48.203f, 6799.134f, 20.897f, 244.4f);
				func_349(70.449f, 6809.271f, 16.846f, 243f);
				func_349(61.436f, 6814.266f, 16.71f, 244.2f);
				func_349(56.142f, 6793.458f, 19.806f, 242.6f);
				func_349(65.759f, 6791.12f, 18.433f, 276.4f);
				func_349(77.305f, 6805.391f, 18.558f, 245.6f);
				func_349(85.893f, 6800.243f, 18.535f, 249.8f);
				func_349(56.85f, 6780.582f, 18.822f, 297.999f);
				func_349(65.636f, 6784.669f, 18.789f, 293.799f);
				func_349(74.121f, 6788.498f, 18.739f, 293.799f);
				func_349(97.779f, 6796.32f, 19.02f, 276.799f);
				func_349(106.76f, 6796.983f, 18.914f, 272.599f);
				func_349(112.387f, 6802.858f, 18.994f, 210.599f);
				func_349(117.58f, 6802.644f, 18.663f, 209.399f);
				func_349(122.481f, 6802.693f, 18.468f, 209.399f);
				func_349(127.182f, 6802.686f, 18.218f, 209.399f);
				func_349(132.429f, 6801.882f, 17.949f, 209.399f);
			}
			break;
		
		case 94:
			if (Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_59 == 0)
			{
				func_349(-2213.552f, 2283.726f, 31.7464f, 293.7993f);
				func_349(-2196.71f, 2290.824f, 32.0819f, 293.7993f);
				func_349(-2232.397f, 2274.252f, 31.602f, 296.7993f);
				func_349(-2180.471f, 2296.206f, 32.9612f, 287.5992f);
				func_349(-2180.87f, 2419.649f, 0.2324f, 147.7987f);
				func_349(-2180.166f, 2436.91f, 0.2325f, 144.5987f);
				func_349(-2185.271f, 2457.022f, 0.2062f, 160.1985f);
				func_349(-2329.465f, 2393.603f, 2.5699f, 289.7982f);
				func_349(-2328.978f, 2380.406f, 2.7911f, 289.7982f);
				func_349(-2333.665f, 2366.641f, 3.4939f, 289.7982f);
			}
			else
			{
				func_349(-2239.671f, 2390.292f, 10.756f, 189.2002f);
				func_349(-2217.413f, 2392.471f, 12.2202f, 189.2002f);
				func_349(-2238.863f, 2381.56f, 13.1388f, 185.2003f);
				func_349(-2215.695f, 2383.035f, 14.9809f, 189.4004f);
				func_349(-2238.044f, 2372.67f, 15.07f, 187.4004f);
				func_349(-2215.96f, 2374.251f, 17.0939f, 187.4004f);
				func_349(-2237.494f, 2364.467f, 15.3155f, 186.2004f);
				func_349(-2216.857f, 2365.651f, 18.9029f, 173.0005f);
				func_349(-2218.526f, 2357.065f, 20.7893f, 179.0004f);
				func_349(-2237.625f, 2348.108f, 20.9097f, 179.0004f);
				func_349(-2218.447f, 2348.733f, 22.9621f, 179.0004f);
				func_349(-2238.18f, 2339.141f, 22.5602f, 174.8003f);
				func_349(-2218.771f, 2340.131f, 25.5237f, 177.2002f);
				func_349(-2238.998f, 2330.958f, 25.7263f, 175.8005f);
				func_349(-2219.221f, 2331.934f, 28.5604f, 177.8006f);
				func_349(-2219.077f, 2324.066f, 30.9043f, 198.8006f);
				func_349(-2239.413f, 2322.913f, 28.0647f, 177.8008f);
				func_349(-2240.014f, 2313.951f, 29.5314f, 170.6008f);
				func_349(-2241.543f, 2305.819f, 30.7136f, 163.4006f);
				func_349(-2244.904f, 2298.388f, 31.4166f, 148.2005f);
				func_349(-2249.31f, 2290.892f, 31.5742f, 139.2004f);
				func_349(-2211.896f, 2319.581f, 31.7538f, 259.4002f);
				func_349(-2203.961f, 2320.016f, 31.9895f, 271.4001f);
				func_349(-2255.106f, 2285.415f, 31.617f, 130.3999f);
				func_349(-2196.17f, 2320.341f, 32.2704f, 270.6003f);
				func_349(-2261.335f, 2280.203f, 31.6562f, 130.0002f);
				func_349(-2268.447f, 2275.528f, 31.7095f, 124.4001f);
				func_349(-2188.258f, 2319.985f, 32.5649f, 267.3998f);
			}
			break;
		
		case 95:
			if (Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_59 == 0)
			{
				func_349(4.0332f, 3378.618f, 41.0822f, 247.1989f);
				func_349(38.819f, 3321.2f, 37.0283f, 203.999f);
				func_349(26.877f, 3309.062f, 37.93f, 191.9991f);
				func_349(15.6727f, 3297.846f, 39.0535f, 191.9991f);
				func_349(-24.2865f, 3367.527f, 41.4783f, 264.399f);
				func_349(-23.1279f, 3352.254f, 40.52f, 280.399f);
				func_349(-25.5802f, 3337.243f, 40.7142f, 320.1988f);
				func_349(97.4844f, 3335.385f, 34.6164f, 7.9981f);
				func_349(20.409f, 3370.839f, 38.8393f, 235.799f);
				func_349(48.457f, 3336.586f, 35.8912f, 270.3979f);
			}
			else
			{
				func_349(25.9869f, 3349.706f, 36.0366f, 273.9994f);
				func_349(25.0176f, 3356.915f, 36.4258f, 276.9998f);
				func_349(36.2443f, 3351.358f, 36.2386f, 272.5997f);
				func_349(35.9352f, 3358.816f, 37.0033f, 276.7998f);
				func_349(25.9651f, 3342.673f, 36.2157f, 270.7997f);
				func_349(30.027f, 3292.351f, 38.604f, 140.199f);
				func_349(49.1614f, 3358.589f, 35.9759f, 263.5988f);
				func_349(48.288f, 3352.494f, 35.5841f, 261.1988f);
				func_349(23.897f, 3283.152f, 39.381f, 145.399f);
				func_349(60.9182f, 3356.21f, 35.8814f, 255.3988f);
				func_349(18.723f, 3274.025f, 40.054f, 155.799f);
				func_349(59.0177f, 3350.004f, 35.3204f, 255.7989f);
				func_349(36.958f, 3298.847f, 38.001f, 127.799f);
				func_349(54.165f, 3311.582f, 36.517f, 303.799f);
				func_349(61.607f, 3317.105f, 35.916f, 306.999f);
				func_349(68.994f, 3323.129f, 35.364f, 308.199f);
				func_349(76.266f, 3329.467f, 34.805f, 311.399f);
				func_349(82.757f, 3335.915f, 34.344f, 316.598f);
				func_349(46.5977f, 3306.196f, 37.1628f, 304.9976f);
				func_349(14.664f, 3263.688f, 40.931f, 160.398f);
				func_349(50.8234f, 3324.118f, 36.2129f, 305.1976f);
				func_349(11.7852f, 3256.101f, 41.7031f, 159.198f);
				func_349(89.575f, 3343.311f, 33.932f, 318.398f);
				func_349(58.4154f, 3329.423f, 35.6197f, 305.5979f);
				func_349(65.3201f, 3334.253f, 35.1903f, 306.5977f);
				func_349(72.1063f, 3339.793f, 34.8449f, 308.5977f);
				func_349(95.6614f, 3349.917f, 33.696f, 316.1977f);
				func_349(85.4387f, 3353.183f, 33.8047f, 317.9978f);
			}
			break;
		
		case 96:
			if (Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_59 == 0)
			{
				func_349(2135.708f, 1757.503f, 102.073f, 40.999f);
				func_349(2148.674f, 1764.557f, 102.75f, 40.999f);
				func_349(2160.511f, 1771.173f, 104.149f, 40.999f);
				func_349(2172.842f, 1777.391f, 105.369f, 40.999f);
				func_349(2127.938f, 1736.353f, 100.835f, 222.199f);
				func_349(2141.682f, 1739.865f, 99.833f, 222.199f);
				func_349(2152.786f, 1747.776f, 99.785f, 222.199f);
				func_349(2166.356f, 1754.682f, 100.07f, 220.399f);
				func_349(2090.66f, 1701.805f, 101.681f, 243.199f);
				func_349(2066.149f, 1716.735f, 102.112f, 228.2f);
			}
			else
			{
				func_349(2073.044f, 1725.935f, 102.5096f, 225.2f);
				func_349(2077.24f, 1730.299f, 102.5247f, 225.2f);
				func_349(2081.68f, 1734.742f, 102.5588f, 225.2f);
				func_349(2086.052f, 1739.045f, 102.6618f, 225.2f);
				func_349(2090.55f, 1743.53f, 102.6058f, 225.2f);
				func_349(2095.295f, 1748.274f, 102.3022f, 225.2f);
				func_349(2101.779f, 1721.807f, 101.927f, 225.2f);
				func_349(2107.08f, 1727.001f, 101.932f, 225.2f);
				func_349(2095.867f, 1716.475f, 101.925f, 225.2f);
				func_349(2112.387f, 1732.492f, 101.849f, 225.2f);
				func_349(2089.718f, 1710.779f, 101.978f, 225.2f);
				func_349(2111.639f, 1717.132f, 100.855f, 225.2f);
				func_349(2117.297f, 1722.655f, 100.704f, 225.2f);
				func_349(2105.821f, 1711.672f, 101.065f, 225.2f);
				func_349(2098.759f, 1704.866f, 101.209f, 225.2f);
				func_349(2121.208f, 1713.145f, 99.65f, 225.2f);
				func_349(2115.34f, 1707.542f, 99.829f, 225.2f);
				func_349(2109.211f, 1702.247f, 100.079f, 225.2f);
				func_349(2124.167f, 1704.036f, 98.584f, 225.2f);
				func_349(2118.181f, 1698.253f, 98.645f, 225.2f);
				func_349(2127.253f, 1694.878f, 97.078f, 225.2f);
				func_349(2117.786f, 1738.219f, 101.839f, 225.2f);
				func_349(2122.34f, 1728.011f, 100.627f, 225.2f);
				func_349(2126.288f, 1718.542f, 99.501f, 225.2f);
				func_349(2129.762f, 1709.847f, 98.352f, 225.2f);
				func_349(2132.765f, 1700.777f, 96.999f, 225.2f);
				func_349(2120.399f, 1689.165f, 97.388f, 225.2f);
				func_349(2098.994f, 1747.929f, 102.2403f, 225.2f);
			}
			break;
		
		case 97:
			if (Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_59 == 0)
			{
				func_349(1871.691f, 358.5369f, 162.1067f, 153.1979f);
				func_349(1858.966f, 351.2935f, 161.7614f, 166.598f);
				func_349(1873.611f, 342.6637f, 161.6936f, 142.998f);
				func_349(1887.645f, 343.1557f, 162.1659f, 138.5979f);
				func_349(1888.644f, 328.0839f, 161.7489f, 139.398f);
				func_349(1898.596f, 315.2232f, 161.4418f, 173.7979f);
				func_349(1896.729f, 266.5388f, 161.1619f, 113.5978f);
				func_349(1900.167f, 281.3884f, 161.7807f, 115.197f);
				func_349(1856.286f, 294.624f, 161.442f, 167.9966f);
				func_349(1868.622f, 309.7907f, 162.6084f, 155.1968f);
			}
			else
			{
				func_349(1856.378f, 255.9146f, 162.7158f, 147.6202f);
				func_349(1837.279f, 227.3696f, 165.2592f, 164.3995f);
				func_349(1835.192f, 219.3931f, 167.5468f, 169.9994f);
				func_349(1833.557f, 211.859f, 169.864f, 169.9994f);
				func_349(1839.534f, 194.4053f, 171.3841f, 172.9989f);
				func_349(1838.289f, 185.8157f, 171.2585f, 174.1989f);
				func_349(1837.478f, 177.0607f, 170.7063f, 174.1989f);
				func_349(1840.463f, 202.6959f, 170.8702f, 174.1989f);
				func_349(1836.296f, 168.7307f, 170.5786f, 174.1989f);
				func_349(1835.412f, 159.3162f, 170.4163f, 171.1989f);
				func_349(1826.91f, 214.9648f, 172.2502f, 18.7986f);
				func_349(1823.805f, 223.0288f, 172.0794f, 21.7986f);
				func_349(1820.599f, 231.144f, 172.2987f, 21.7986f);
				func_349(1817.245f, 239.1232f, 172.0878f, 21.7986f);
				func_349(1814.089f, 247.0423f, 171.7386f, 24.9986f);
				func_349(1810.879f, 255.6553f, 171.7517f, 19.3986f);
				func_349(1807.729f, 265.4899f, 172.2307f, 15.1986f);
				func_349(1823.147f, 197.3122f, 172.235f, 192.3984f);
				func_349(1824.641f, 184.4241f, 171.5948f, 183.3985f);
				func_349(1825.019f, 171.2314f, 170.5843f, 183.3985f);
				func_349(1824.748f, 162.8998f, 170.4961f, 173.1985f);
				func_349(1817.345f, 214.6964f, 172.5223f, 203.9982f);
				func_349(1813.466f, 222.3717f, 172.3316f, 200.9982f);
				func_349(1809.114f, 230.8225f, 172.346f, 205.1983f);
				func_349(1805.594f, 239.3896f, 172.0033f, 197.9984f);
				func_349(1802.515f, 247.4269f, 171.8964f, 197.9984f);
				func_349(1833.982f, 150.4025f, 170.411f, 163.7985f);
				func_349(1823.079f, 154.5105f, 170.8194f, 163.7985f);
			}
			break;
		
		case 123:
		case 124:
		case 125:
			func_335(896.357f, -3.23695f, 77.7645f, 147.3987f, iParam1, 0);
			func_335(899.759f, -5.54885f, 77.7645f, 147.3987f, iParam1, 0);
			func_335(903.021f, -7.62495f, 77.7645f, 147.3987f, iParam1, 0);
			func_335(906.474f, -9.70314f, 77.7645f, 147.3987f, iParam1, 0);
			func_335(909.884f, -11.888f, 77.7645f, 147.3987f, iParam1, 0);
			func_335(913.209f, -14.0965f, 77.7645f, 147.3987f, iParam1, 0);
			func_335(879.578f, 7.26725f, 77.7646f, 147.3987f, iParam1, 0);
			func_335(876.642f, 9.05555f, 77.7646f, 147.3987f, iParam1, 0);
			func_335(873.534f, 10.8622f, 77.7646f, 147.3987f, iParam1, 0);
			func_335(869.685f, -7.55887f, 77.7646f, 237.3985f, iParam1, 0);
			func_335(867.866f, -10.464f, 77.7646f, 237.3985f, iParam1, 0);
			func_335(866.077f, -13.4579f, 77.7646f, 237.3985f, iParam1, 0);
			func_335(864.322f, -16.4335f, 77.7646f, 237.3985f, iParam1, 0);
			func_335(862.534f, -19.2652f, 77.7644f, 237.3985f, iParam1, 0);
			func_335(887.524f, -18.7251f, 77.7647f, 237.3985f, iParam1, 0);
			func_335(885.594f, -21.7041f, 77.7647f, 237.3985f, iParam1, 0);
			func_335(883.691f, -24.7685f, 77.7647f, 237.3985f, iParam1, 0);
			func_335(881.827f, -27.7084f, 77.7644f, 237.3985f, iParam1, 0);
			func_335(880.013f, -30.5612f, 77.7644f, 237.3985f, iParam1, 0);
			func_335(884.931f, -17.2169f, 77.7646f, 57.5983f, iParam1, 0);
			func_335(883.043f, -20.1063f, 77.7646f, 57.5983f, iParam1, 0);
			func_335(881.118f, -22.9962f, 77.7644f, 57.5983f, iParam1, 0);
			func_335(879.345f, -25.9389f, 77.7644f, 57.5983f, iParam1, 0);
			func_335(877.631f, -28.8543f, 77.7644f, 57.5983f, iParam1, 0);
			func_335(903.231f, -28.6965f, 77.7647f, 57.5983f, iParam1, 0);
			func_335(901.368f, -31.6316f, 77.7647f, 57.5983f, iParam1, 0);
			func_335(899.552f, -34.4844f, 77.7647f, 57.5983f, iParam1, 0);
			func_335(897.669f, -37.4419f, 77.7647f, 57.5983f, iParam1, 0);
			func_335(895.831f, -40.3309f, 77.7647f, 57.5983f, iParam1, 0);
			func_335(932.842f, -25.6631f, 77.7647f, 147.798f, iParam1, 0);
			func_335(935.693f, -27.516f, 77.7647f, 147.798f, iParam1, 0);
			func_335(938.593f, -29.5809f, 77.7647f, 147.798f, iParam1, 0);
			break;
		
		default:
			break;
	}
}

void func_335(struct<3> Param0, float fParam1, int iParam2, bool bParam3)
{
	struct<2> Var0;
	struct<2> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	
	if (!iParam2 == 0)
	{
		func_168(iParam2, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
		fVar2 = (Var1.f_1 - Var0.f_1);
		if (bParam3)
		{
			fVar2 = (fVar2 * -1f);
		}
		fVar2 = (fVar2 * 0.5f);
		Var3 = { 0f, fVar2, 0f };
		Var4 = { unk_0x6DB7FBD602C51670(Param0, fParam1, Var3) };
		func_349(Var4, fParam1);
	}
	else
	{
		func_349(Param0, fParam1);
	}
}

void func_336(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			func_349(-1133.454f, -3371.672f, 12.945f, 329.799f);
			func_349(-1119.748f, -3379.991f, 12.945f, 329.799f);
			func_349(-1147.602f, -3363.505f, 12.945f, 329.799f);
			func_349(-1161.988f, -3354.852f, 12.945f, 329.799f);
			func_349(-1116.563f, -3358.99f, 12.945f, 329.799f);
			func_349(-1131.23f, -3350.104f, 12.945f, 329.799f);
			func_349(-1145.252f, -3341.608f, 12.945f, 329.799f);
			func_349(-1115.202f, -3339.265f, 12.945f, 329.799f);
			func_349(-1129.559f, -3330.697f, 12.945f, 329.799f);
			func_349(-1114.664f, -3320.954f, 12.945f, 329.799f);
			func_349(-1199.923f, -3369.502f, 12.945f, 350.399f);
			func_349(-1212.069f, -3363.568f, 12.945f, 350.399f);
			func_349(-1223.637f, -3356.694f, 12.945f, 350.399f);
			func_349(-1102.284f, -3420.613f, 12.945f, 354.599f);
			func_349(-1091.131f, -3427.396f, 12.945f, 354.599f);
			func_349(-1079.372f, -3434.306f, 12.945f, 354.599f);
			func_349(-1067.498f, -3441.878f, 13.114f, 354.599f);
			func_349(-1055.714f, -3448.819f, 12.977f, 354.599f);
			func_349(-1043.37f, -3455.796f, 13.146f, 354.599f);
			func_349(-1017.023f, -3382.777f, 12.8401f, 330.6f);
			func_349(-1010.608f, -3386.103f, 12.8401f, 330.6f);
			func_349(-1004.658f, -3389.823f, 12.8401f, 330.6f);
			func_349(-998.3798f, -3393.644f, 12.8401f, 330.6f);
			func_349(-991.5242f, -3397.297f, 12.8401f, 330.6f);
			func_349(-985.0826f, -3401.247f, 12.8401f, 330.6f);
			func_349(-978.2733f, -3405.031f, 12.8401f, 330.6f);
			func_349(-971.724f, -3409.109f, 12.8401f, 330.6f);
			func_349(-964.4719f, -3413.202f, 13.1463f, 330.6f);
			func_349(-1022.94f, -3392.372f, 12.8401f, 330.6f);
			func_349(-1016.219f, -3395.82f, 12.8401f, 330.6f);
			func_349(-1009.873f, -3399.143f, 12.8401f, 330.6f);
			func_349(-1003.436f, -3402.982f, 12.8401f, 330.6f);
			func_349(-997.0872f, -3406.928f, 12.8401f, 330.6f);
			func_349(-990.2305f, -3410.548f, 12.8401f, 330.6f);
			func_349(-983.4429f, -3414.093f, 12.8401f, 330.6f);
			func_349(-976.8809f, -3417.846f, 12.8401f, 330.6f);
			func_349(-969.4039f, -3421.727f, 13.1463f, 330.6f);
			func_349(-1028.251f, -3401.834f, 12.8401f, 330.6f);
			func_349(-1021.631f, -3405.433f, 12.8401f, 330.6f);
			func_349(-1015.209f, -3408.563f, 12.8401f, 330.6f);
			func_349(-1008.81f, -3412.484f, 12.8401f, 330.6f);
			func_349(-1002.277f, -3415.987f, 12.8401f, 330.6f);
			func_349(-995.7023f, -3419.97f, 12.8401f, 330.6f);
			func_349(-989.1453f, -3423.988f, 12.8401f, 330.6f);
			func_349(-982.6298f, -3427.981f, 12.8401f, 330.6f);
			func_349(-974.9305f, -3431.833f, 13.1463f, 330.6f);
			break;
		
		case 84:
			func_349(-1356.991f, -3242.228f, 12.945f, 330f);
			func_349(-1369.313f, -3234.758f, 12.945f, 330f);
			func_349(-1381.751f, -3227.408f, 12.945f, 330f);
			func_349(-1394.302f, -3220.021f, 12.945f, 330f);
			func_349(-1354.339f, -3223.129f, 12.945f, 330f);
			func_349(-1366.302f, -3215.809f, 12.945f, 330f);
			func_349(-1378.492f, -3208.645f, 12.945f, 330f);
			func_349(-1350.322f, -3203.405f, 12.945f, 330f);
			func_349(-1362.684f, -3196.451f, 12.945f, 330f);
			func_349(-1347.089f, -3182.69f, 12.945f, 330f);
			func_349(-1452.642f, -3222.367f, 12.945f, 347.799f);
			func_349(-1464.229f, -3215.108f, 12.945f, 347.799f);
			func_349(-1476.133f, -3207.652f, 12.945f, 347.799f);
			func_349(-1488.295f, -3200.033f, 12.945f, 347.799f);
			func_349(-1336.877f, -3272.344f, 12.945f, 8.199f);
			func_349(-1323.381f, -3279.614f, 12.945f, 8.199f);
			func_349(-1309.671f, -3287.749f, 12.945f, 8.199f);
			func_349(-1296.963f, -3294.511f, 12.945f, 8.199f);
			func_349(-1501.978f, -3193.849f, 12.945f, 350.599f);
			func_349(-1344.716f, -3288.333f, 12.9445f, 331.2f);
			func_349(-1338.141f, -3290.335f, 12.9445f, 331.2f);
			func_349(-1331.473f, -3294.178f, 12.9445f, 331.2f);
			func_349(-1324.921f, -3297.998f, 12.9445f, 331.2f);
			func_349(-1318.129f, -3301.957f, 12.9445f, 331.2f);
			func_349(-1350.466f, -3294.226f, 12.9445f, 331.2f);
			func_349(-1343.482f, -3297.576f, 12.9445f, 331.2f);
			func_349(-1336.398f, -3302.456f, 12.9445f, 331.2f);
			func_349(-1329.82f, -3306.82f, 12.945f, 331.2f);
			func_349(-1322.761f, -3310.353f, 12.945f, 331.2f);
			func_349(-1316.587f, -3314.556f, 12.945f, 331.2f);
			func_349(-1326.538f, -3318.499f, 12.945f, 331.2f);
			func_349(-1335.74f, -3313.678f, 12.945f, 331.2f);
			func_349(-1350.848f, -3302.619f, 12.9446f, 331.2f);
			func_349(-1357.961f, -3306.886f, 12.945f, 331.2f);
			func_349(-1335.202f, -3322.428f, 12.9452f, 331.2f);
			func_349(-1351.401f, -3311.566f, 12.9452f, 331.2f);
			func_349(-1344.255f, -3305.965f, 12.9451f, 331.2f);
			func_349(-1299.832f, -3305.573f, 12.945f, 331.2f);
			func_349(-1293.414f, -3309.413f, 12.945f, 331.2f);
			func_349(-1286.835f, -3313.157f, 12.945f, 331.2f);
			func_349(-1303.988f, -3313.1f, 12.945f, 331.2f);
			func_349(-1297.402f, -3316.699f, 12.945f, 331.2f);
			func_349(-1290.969f, -3320.519f, 12.945f, 331.2f);
			func_349(-1308.27f, -3320.612f, 12.945f, 331.2f);
			func_349(-1301.968f, -3324.714f, 12.945f, 331.2f);
			func_349(-1295.483f, -3328.422f, 12.945f, 331.2f);
			break;
		
		case 85:
			func_349(-2039.992f, 3132.191f, 31.81f, 149.399f);
			func_349(-2025.075f, 3128.63f, 31.81f, 197.599f);
			func_349(-2049.589f, 3142.464f, 31.81f, 109.199f);
			func_349(-2088.648f, 3081.327f, 31.81f, 150.599f);
			func_349(-2070.669f, 3111.575f, 31.81f, 123.399f);
			func_349(-2053.385f, 3109.703f, 31.81f, 150.599f);
			func_349(-2044.448f, 3094.012f, 31.81f, 181.799f);
			func_349(-2071.825f, 3093.477f, 31.81f, 150.599f);
			func_349(-2060.579f, 3085.924f, 31.81f, 150.599f);
			func_349(-2062.712f, 3066.073f, 31.81f, 150.599f);
			func_349(-2094.385f, 3190.445f, 31.81f, 117.799f);
			func_349(-2083.056f, 3182.885f, 31.81f, 117.799f);
			func_349(-2071.578f, 3175.554f, 31.81f, 117.799f);
			func_349(-2120.249f, 3173.97f, 31.81f, 25.199f);
			func_349(-2067.547f, 3146.325f, 31.81f, 14.998f);
			func_349(-2080.506f, 3154.591f, 31.81f, 15.798f);
			func_349(-2093.278f, 3159.793f, 31.81f, 14.798f);
			func_349(-2106.614f, 3167.605f, 31.81f, 21.198f);
			func_349(-2106.347f, 3196.902f, 31.81f, 117.799f);
			func_349(-2024.425f, 3102.707f, 31.8103f, 150.7997f);
			func_349(-2018.074f, 3099.056f, 31.8103f, 150.7997f);
			func_349(-2009.032f, 3094.171f, 31.8103f, 150.7997f);
			func_349(-2002.923f, 3090.669f, 31.8103f, 150.7997f);
			func_349(-1996.542f, 3087.201f, 31.8103f, 150.7997f);
			func_349(-1990.232f, 3083.534f, 31.8103f, 150.7997f);
			func_349(-1983.518f, 3080.033f, 31.8103f, 150.7997f);
			func_349(-2029.16f, 3094.357f, 31.8103f, 150.7997f);
			func_349(-2022.431f, 3090.703f, 31.8103f, 150.7997f);
			func_349(-2013.702f, 3086.015f, 31.8103f, 150.7997f);
			func_349(-2007.67f, 3082.42f, 31.8103f, 150.7997f);
			func_349(-2001.211f, 3078.569f, 31.8103f, 150.7997f);
			func_349(-1994.644f, 3074.654f, 31.8103f, 150.7997f);
			func_349(-1987.934f, 3070.654f, 31.8103f, 150.7997f);
			func_349(-2033.776f, 3086.031f, 31.8103f, 150.7997f);
			func_349(-2026.929f, 3082.094f, 31.8103f, 150.7997f);
			func_349(-2018.663f, 3077.341f, 31.8103f, 150.7997f);
			func_349(-2012.345f, 3073.707f, 31.8103f, 150.7997f);
			func_349(-2006.052f, 3070.089f, 31.8103f, 150.7997f);
			func_349(-1999.169f, 3066.132f, 31.8103f, 150.7997f);
			func_349(-1992.542f, 3062.257f, 31.8103f, 150.7997f);
			func_349(-2038.545f, 3077.344f, 31.8103f, 150.7997f);
			func_349(-2031.587f, 3073.344f, 31.8103f, 150.7997f);
			func_349(-2021.909f, 3067.715f, 31.8103f, 150.7997f);
			func_349(-2012.886f, 3063.219f, 31.8103f, 150.7997f);
			func_349(-2003.481f, 3057.141f, 31.8103f, 150.7997f);
			func_349(-1996.618f, 3053.195f, 31.8103f, 150.7997f);
			break;
		
		case 86:
			func_349(-1885.187f, 3095.344f, 31.81f, 150.2f);
			func_349(-1898.637f, 3072.816f, 31.811f, 150.2f);
			func_349(-1886.469f, 3065.78f, 31.811f, 150.2f);
			func_349(-1874.621f, 3058.437f, 31.81f, 150.2f);
			func_349(-1862.818f, 3051.244f, 31.81f, 150.2f);
			func_349(-1915.317f, 3041.652f, 31.811f, 150.2f);
			func_349(-1896.724f, 2997.848f, 31.81f, 150.2f);
			func_349(-1932.975f, 3011.781f, 31.81f, 150.2f);
			func_349(-1875.668f, 3034.438f, 31.811f, 150.2f);
			func_349(-1886.144f, 3016.285f, 31.81f, 150.2f);
			func_349(-1913.706f, 3104.196f, 31.81f, 118.599f);
			func_349(-1925.44f, 3112.236f, 31.81f, 118.599f);
			func_349(-1938.08f, 3119.383f, 31.81f, 118.599f);
			func_349(-1927.822f, 3072.679f, 31.81f, 13.399f);
			func_349(-1940.575f, 3079.031f, 31.81f, 13.399f);
			func_349(-1953.344f, 3084.888f, 31.81f, 13.399f);
			func_349(-1965.91f, 3091.929f, 31.81f, 13.399f);
			func_349(-1978.86f, 3100.029f, 31.81f, 13.399f);
			func_349(-1950.928f, 3126.457f, 31.81f, 118.999f);
			func_349(-1975.282f, 3083.046f, 31.8103f, 150.1997f);
			func_349(-1969.362f, 3079.909f, 31.8103f, 150.1997f);
			func_349(-1963.673f, 3076.887f, 31.8103f, 150.1997f);
			func_349(-1958.524f, 3073.899f, 31.8103f, 150.1997f);
			func_349(-1979.828f, 3074.704f, 31.8103f, 150.1997f);
			func_349(-1973.901f, 3071.418f, 31.8103f, 150.1997f);
			func_349(-1967.917f, 3068.089f, 31.8103f, 150.1997f);
			func_349(-1949.916f, 3068.72f, 31.8103f, 150.1997f);
			func_349(-1961.934f, 3064.6f, 31.8103f, 150.1997f);
			func_349(-1984.332f, 3067.03f, 31.8103f, 150.1997f);
			func_349(-1978.182f, 3063.286f, 31.8103f, 150.1997f);
			func_349(-1972.061f, 3060.191f, 31.8103f, 150.1997f);
			func_349(-1952.61f, 3059.551f, 31.8103f, 150.1997f);
			func_349(-1956.958f, 3051.589f, 31.8103f, 150.1997f);
			func_349(-1988.778f, 3059.135f, 31.8103f, 150.1997f);
			func_349(-1982.174f, 3055.591f, 31.8103f, 150.1997f);
			func_349(-1975.579f, 3051.898f, 31.8103f, 150.1997f);
			func_349(-1969.139f, 3048.28f, 31.8103f, 150.1997f);
			func_349(-1962.25f, 3044.256f, 31.8103f, 150.1997f);
			func_349(-1989.48f, 3050.467f, 31.8103f, 150.1997f);
			func_349(-1977.325f, 3043.786f, 31.8103f, 150.1997f);
			func_349(-1971.07f, 3040.306f, 31.8103f, 150.1997f);
			func_349(-1964.409f, 3037.118f, 31.8103f, 150.1997f);
			func_349(-1998.375f, 3042.349f, 31.8103f, 150.1997f);
			func_349(-1991.769f, 3038.47f, 31.8103f, 150.1997f);
			func_349(-1978.718f, 3035.164f, 31.8103f, 150.1997f);
			func_349(-1971.483f, 3031.316f, 31.8103f, 150.1997f);
			break;
		
		case 87:
			func_349(-2484.323f, 3249.294f, 31.828f, 151f);
			func_349(-2495.313f, 3255.746f, 31.828f, 151f);
			func_349(-2472.644f, 3242.684f, 31.828f, 151f);
			func_349(-2506.313f, 3262.27f, 31.823f, 151f);
			func_349(-2461.494f, 3235.93f, 31.828f, 151f);
			func_349(-2505.602f, 3238.049f, 31.828f, 151f);
			func_349(-2481.937f, 3224.8f, 31.828f, 151f);
			func_349(-2516.813f, 3244.266f, 31.823f, 151f);
			func_349(-2470.03f, 3217.899f, 31.828f, 151f);
			func_349(-2493.933f, 3231.308f, 31.828f, 151f);
			func_349(-2443.467f, 3227.753f, 31.828f, 175.8f);
			func_349(-2431.365f, 3220.9f, 31.828f, 175.8f);
			func_349(-2419.883f, 3214.708f, 31.828f, 175.8f);
			func_349(-2501.903f, 3272.865f, 31.822f, 123.999f);
			func_349(-2513.555f, 3280.176f, 31.817f, 123.999f);
			func_349(-2524.776f, 3287.276f, 31.973f, 123.999f);
			func_349(-2407.718f, 3208.055f, 31.827f, 176.199f);
			func_349(-2395.689f, 3201.125f, 31.827f, 176.199f);
			func_349(-2383.498f, 3194.211f, 31.833f, 176.199f);
			func_349(-2426.219f, 3238.211f, 31.8616f, 150.5996f);
			func_349(-2419.052f, 3233.866f, 31.8726f, 150.5996f);
			func_349(-2412.069f, 3229.854f, 31.8859f, 150.5996f);
			func_349(-2405.282f, 3225.809f, 31.8841f, 150.5996f);
			func_349(-2398.624f, 3222.135f, 31.9249f, 150.5996f);
			func_349(-2391.729f, 3218.229f, 31.9354f, 150.5996f);
			func_349(-2384.727f, 3214.524f, 31.9585f, 150.5996f);
			func_349(-2377.55f, 3210.461f, 31.9192f, 150.5996f);
			func_349(-2369.96f, 3205.835f, 31.8267f, 150.5996f);
			func_349(-2404.498f, 3235.728f, 31.8959f, 150.5996f);
			func_349(-2397.481f, 3232.375f, 31.9879f, 150.5996f);
			func_349(-2390.524f, 3228.125f, 31.9758f, 150.5996f);
			func_349(-2383.986f, 3223.995f, 31.986f, 150.5996f);
			func_349(-2377.176f, 3219.695f, 31.9615f, 150.5996f);
			func_349(-2370.524f, 3215.946f, 32.002f, 150.5996f);
			func_349(-2400.23f, 3243.846f, 31.8311f, 150.5996f);
			func_349(-2393.28f, 3240.281f, 32.0164f, 150.5996f);
			func_349(-2386.355f, 3236.819f, 32.0616f, 150.5996f);
			func_349(-2379.382f, 3232.74f, 32.0318f, 150.5996f);
			func_349(-2372.314f, 3229.196f, 32.0177f, 150.5996f);
			func_349(-2365.153f, 3225.732f, 32.0145f, 150.5996f);
			func_349(-2395.04f, 3252.644f, 31.8557f, 150.5996f);
			func_349(-2388.684f, 3249.092f, 32.0198f, 150.5996f);
			func_349(-2382.127f, 3245.045f, 32.0086f, 150.5996f);
			func_349(-2374.905f, 3240.938f, 32.0085f, 150.5996f);
			func_349(-2368.14f, 3237.328f, 32.0177f, 150.5996f);
			func_349(-2361.068f, 3233.396f, 31.9573f, 150.5996f);
			break;
		
		default:
			break;
	}
}

int func_337(int iParam0)
{
	switch (iParam0)
	{
		case joaat("microlight"):
		case joaat("havok"):
		case joaat("seabreeze"):
		case joaat("rogue"):
		case joaat("pyro"):
		case joaat("buzzard"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("volatus"):
		case joaat("cuban800"):
		case joaat("besra"):
		case joaat("duster"):
		case joaat("stunt"):
		case joaat("velum"):
		case joaat("velum2"):
		case joaat("vestra"):
		case joaat("lazer"):
		case joaat("alphaz1"):
		case joaat("howard"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("starling"):
			return 1;
		
		default:
	}
	return 0;
}

void func_338(int iParam0)
{
	switch (iParam0)
	{
		case 83:
		case 84:
			func_349(-947.712f, -3367.704f, 12.944f, 60f);
			func_349(-904.692f, -3293.072f, 12.944f, 60f);
			func_349(-863.71f, -3221.978f, 12.944f, 60f);
			func_349(-966.418f, -3162.773f, 12.944f, 60f);
			func_349(-1007.435f, -3233.93f, 12.944f, 60f);
			func_349(-1050.455f, -3308.559f, 12.944f, 60f);
			func_349(-1145.673f, -3253.456f, 12.944f, 60f);
			func_349(-1098.386f, -3181.428f, 12.944f, 60f);
			func_349(-1060.474f, -3108.903f, 12.944f, 60f);
			func_349(-1155.391f, -3053.632f, 12.944f, 60f);
			func_349(-1196.114f, -3125.146f, 12.948f, 60f);
			func_349(-1235.552f, -3201.86f, 12.944f, 60f);
			func_349(-1344.446f, -3139.177f, 12.944f, 60f);
			func_349(-1301.308f, -3064.341f, 12.944f, 60f);
			func_349(-1260.135f, -2992.912f, 12.944f, 60f);
			func_349(-1364.244f, -2932.9f, 12.98f, 60f);
			func_349(-1405.284f, -3004.108f, 12.96f, 60f);
			func_349(-1448.29f, -3078.72f, 12.95f, 60f);
			func_349(-1535.732f, -3028.318f, 12.945f, 60f);
			func_349(-1492.639f, -2953.558f, 12.945f, 60f);
			func_349(-1451.506f, -2882.2f, 12.944f, 60f);
			func_349(-1553.927f, -2823.12f, 13.002f, 60f);
			func_349(-1595.097f, -2894.571f, 12.944f, 60f);
			func_349(-1637.836f, -2968.714f, 12.945f, 60f);
			func_349(-1740.971f, -2911.484f, 12.944f, 330f);
			func_349(-1696.293f, -2833.978f, 12.944f, 330f);
			func_349(-1651.502f, -2756.273f, 12.945f, 330f);
			func_349(-1588.258f, -2647.575f, 12.944f, 330f);
			func_349(-1536.862f, -2681.378f, 12.945f, 330f);
			func_349(-1529.025f, -2544.485f, 12.944f, 330f);
			break;
		
		case 85:
		case 86:
		case 87:
			func_349(-1970.422f, 2825.696f, 31.81f, 60.4f);
			func_349(-2033.307f, 2855.526f, 31.83f, 60.4f);
			func_349(-2091.018f, 2888.691f, 31.81f, 60.4f);
			func_349(-2206.717f, 2955.363f, 31.81f, 60.4f);
			func_349(-2268.817f, 2990.846f, 31.81f, 60.4f);
			func_349(-2324.039f, 3023.154f, 31.811f, 60.4f);
			func_349(-2435.806f, 3087.705f, 31.824f, 60.4f);
			func_349(-2543.753f, 3149.909f, 31.821f, 60.4f);
			func_349(-1944.848f, 2898.798f, 31.81f, 125.398f);
			func_349(-1978.705f, 2924.367f, 31.846f, 151.999f);
			func_349(-2064.849f, 2955.153f, 31.867f, 151.199f);
			func_349(-2106.165f, 2980.687f, 31.81f, 104.599f);
			func_349(-2302.367f, 3088.676f, 31.814f, 150.598f);
			func_349(-2152.113f, 2924.162f, 31.81f, 60.198f);
			func_349(-2488.232f, 3118.146f, 31.822f, 59.798f);
			func_349(-2277.922f, 3133.756f, 31.811f, 120.598f);
			func_349(-2604.776f, 3185.186f, 31.812f, 59.998f);
			func_349(-2608.107f, 3305.049f, 31.812f, 60.198f);
			func_349(-2718.936f, 3323.203f, 31.81f, 201.198f);
			func_349(-2658.718f, 3216.499f, 31.812f, 59.998f);
			func_349(-2380.372f, 3055.341f, 31.826f, 60.4f);
			func_349(-2790.616f, 3286.24f, 31.812f, 240.397f);
			func_349(-2770.946f, 3322.605f, 31.812f, 240.397f);
			func_349(-2678.805f, 3339.186f, 31.812f, 199.597f);
			func_349(-2743.882f, 3224.094f, 31.81f, 303.397f);
			func_349(-2701.354f, 3203.092f, 31.994f, 328.397f);
			func_349(-2249.816f, 2944.609f, 31.937f, 330.196f);
			func_349(-2586.579f, 3137.286f, 31.935f, 330.196f);
			func_349(-2134.76f, 2878.728f, 31.81f, 330.196f);
			func_349(-1949.075f, 2861.21f, 31.811f, 58.798f);
			break;
		
		default:
			break;
	}
}

int func_339(int iParam0)
{
	switch (iParam0)
	{
		case joaat("hydra"):
		case joaat("dodo"):
		case joaat("mammatus"):
		case joaat("annihilator"):
		case joaat("tula"):
		case joaat("hunter"):
		case joaat("mogul"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("shamal"):
		case joaat("savage"):
		case joaat("luxor"):
		case joaat("luxor2"):
		case joaat("nimbus"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("valkyrie"):
		case joaat("titan"):
		case joaat("skylift"):
		case joaat("miljet"):
		case joaat("bombushka"):
		case joaat("volatol"):
		case joaat("alkonost"):
			return 1;
		
		default:
	}
	return 0;
}

int func_340(int iParam0)
{
	if (!unk_0xE5965CDF24F93A9F(iParam0))
	{
		return 0;
	}
	if (vdist(unk_0x6B62510F212526DC(iParam0, 1), -1308.118f, -2934.27f, 13.7545f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_341(int iParam0)
{
	if (!unk_0xE5965CDF24F93A9F(iParam0))
	{
		return 0;
	}
	if (vdist(unk_0x6B62510F212526DC(iParam0, 1), -2270.245f, 3127.913f, 31.8118f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_342(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_343(struct<2> Param0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	iVar2 = 0;
	fVar3 = 50f;
	iVar0 = 1;
	while (iVar0 <= 128)
	{
		if (iVar2 < *uParam2)
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (vdist(Param0, Param0.f_1, 0f, Global_1312124[iVar0 /*1951*/].f_3[iVar1 /*3*/], Global_1312124[iVar0 /*1951*/].f_3[iVar1 /*3*/].f_1, 0f) < fVar3)
				{
					(*uParam2)[iVar2] = iVar0;
					(*uParam3)[iVar2] = 0;
					iVar2++;
					iVar1 = 99;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 159)
	{
		fVar3 = 50f;
		if (iVar0 >= 83 && iVar0 <= 87)
		{
			if (func_322(iVar0))
			{
				fVar3 = 300f;
			}
			else
			{
				fVar3 = 0f;
			}
		}
		if (iVar0 >= 89 && iVar0 <= 97)
		{
			if (func_344(iVar0))
			{
				fVar3 = 75f;
			}
			else
			{
				fVar3 = 0f;
			}
		}
		if (iVar0 >= 123 && iVar0 <= 125)
		{
			fVar3 = 150f;
		}
		if (iVar2 < *uParam2)
		{
			fVar4 = vdist(Param0, Param0.f_1, 0f, Global_1946934.f_532[iVar0 /*3*/], Global_1946934.f_532[iVar0 /*3*/].f_1, 0f);
			if (fVar4 < fVar3)
			{
				(*uParam2)[iVar2] = iVar0;
				(*uParam3)[iVar2] = 1;
				iVar2++;
			}
		}
		iVar0++;
	}
	if (iVar2 > 0)
	{
		return 1;
	}
	return 0;
}

int func_344(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_345(iParam0);
	if (Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_281 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11;
	if (iVar1 != func_24())
	{
		if (Global_1853128[iVar1 /*888*/].f_267.f_281 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_319.f_6 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_345(int iParam0)
{
	switch (iParam0)
	{
		case 89:
			return 1;
			break;
		
		case 90:
			return 2;
			break;
		
		case 91:
			return 3;
			break;
		
		case 92:
			return 4;
			break;
		
		case 93:
			return 5;
			break;
		
		case 94:
			return 6;
			break;
		
		case 95:
			return 7;
			break;
		
		case 96:
			return 8;
			break;
		
		case 97:
			return 9;
			break;
	}
	return 0;
}

int func_346(int iParam0)
{
	if ((unk_0x6F0299ED3CEB4E5D(iParam0) || unk_0xCD8C08FA7D84C27E(iParam0)) || unk_0x532C99FAF70C652B(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_347(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			func_349(-602.6942f, 690.0488f, 148.1567f, 75.0245f);
			func_349(-612.8933f, 692.116f, 148.7577f, 79.1005f);
			func_349(-626.1633f, 694.6517f, 149.6835f, 75.1121f);
			func_349(-639.3558f, 696.9992f, 150.5134f, 77.481f);
			break;
		
		case joaat("mpsv_lp0_31"):
			func_349(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_349(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_349(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_349(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 82:
			func_349(382.9244f, 443.8122f, 142.9934f, 78.3408f);
			func_349(391.2023f, 442.4812f, 142.5089f, 82.2125f);
			func_349(400.1477f, 441.0816f, 142.0776f, 83.4259f);
			func_349(414.2964f, 439.2628f, 141.5056f, 80.8689f);
			break;
		
		case 81:
			func_349(-1294.64f, 468.1975f, 96.4245f, 141.8551f);
			func_349(-1300.508f, 468.0167f, 96.8298f, 139.6287f);
			func_349(-1283.894f, 467.2136f, 95.4036f, 95.058f);
			func_349(-1273.584f, 454.4406f, 94.2269f, 30.8724f);
			break;
		
		case 73:
			func_349(-209.2598f, 509.0326f, 130.7979f, 97.2043f);
			func_349(-221.7214f, 507.2553f, 128.5651f, 92.2773f);
			func_349(-237.2848f, 506.8763f, 125.8112f, 85.9315f);
			func_349(-255.5678f, 507.9559f, 122.3364f, 85.1752f);
			break;
		
		case 75:
			func_349(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_349(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_349(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_349(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 76:
			func_349(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			func_349(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_349(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_349(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			break;
		
		case 77:
			func_349(128.4334f, 578.7522f, 182.2934f, 106.5458f);
			func_349(97.7791f, 576.8907f, 181.5599f, 91.3539f);
			func_349(83.5896f, 576.4791f, 181.0832f, 89.7262f);
			func_349(69.9599f, 575.9902f, 180.5019f, 91.4926f);
			break;
		
		case 80:
			func_349(-872.1293f, 698.7591f, 148.5084f, 339.673f);
			func_349(-916.5449f, 695.5253f, 150.5625f, 272.7097f);
			func_349(-907.3458f, 695.8158f, 150.396f, 270.6491f);
			func_349(-923.6974f, 691.4489f, 150.9506f, 357.4356f);
			break;
		
		case 87:
			if (func_348())
			{
				func_349(-1608.297f, -556.875f, 33.406f, 310f);
				func_349(-1616.095f, -563.402f, 33.049f, 309.4f);
				func_349(-1560.29f, -531.69f, 34.576f, 35.3994f);
				func_349(-1555.303f, -538.781f, 34.044f, 35.3994f);
			}
			else
			{
				func_349(-1605.148f, -552.5016f, 33.4606f, 309.4211f);
				func_349(-1616.306f, -561.6959f, 32.9867f, 309.4369f);
				func_349(-1582.681f, -534.1682f, 34.4171f, 307.8589f);
				func_349(-1619.657f, -531.5862f, 33.4254f, 128.9132f);
				func_349(-1560.257f, -532.3268f, 34.5436f, 216.0882f);
				func_349(-1553.698f, -541.3412f, 33.8662f, 215.8465f);
				func_349(-1611.769f, -601.588f, 31.2908f, 50.7362f);
				func_349(-1600.63f, -610.1141f, 30.5087f, 51.7297f);
			}
			break;
		
		case 88:
			if (func_348())
			{
				func_349(-1402.362f, -511.396f, 30.888f, 35.4f);
				func_349(-1356.617f, -531.0343f, 29.7588f, 124.9982f);
				func_349(-1407.634f, -503.839f, 31.35f, 35.4f);
				func_349(-1346.007f, -523.3546f, 30.6339f, 125.9976f);
			}
			else
			{
				func_349(-1390.604f, -528.6405f, 29.8387f, 35.4572f);
				func_349(-1357.085f, -531.4611f, 29.7218f, 125.0906f);
				func_349(-1346.236f, -523.9114f, 30.6f, 124.7302f);
				func_349(-1337.852f, -518.1096f, 31.2329f, 124.6998f);
				func_349(-1336.39f, -556.0637f, 29.7514f, 33.8088f);
				func_349(-1340.214f, -508.9828f, 31.4089f, 98.7714f);
				func_349(-1348.607f, -510.3536f, 30.9263f, 99.2425f);
				func_349(-1380.764f, -536.3867f, 29.3128f, 63.6203f);
			}
			break;
		
		case 89:
			if (func_348())
			{
				func_349(-102.737f, -597.379f, 35.053f, 160.999f);
				func_349(-97.793f, -589.568f, 35.082f, 134.799f);
				func_349(-110.357f, -619.402f, 35.055f, 160.599f);
				func_349(-112.561f, -627.723f, 35.046f, 165.399f);
			}
			else
			{
				func_349(-108.2604f, -613.6386f, 35.055f, 160.8063f);
				func_349(-103.0375f, -598.4797f, 35.0538f, 161.1968f);
				func_349(-112.84f, -629.6357f, 35.0662f, 174.9843f);
				func_349(-98.7403f, -590.3209f, 35.075f, 139.7632f);
				func_349(-98.3748f, -612.642f, 35.137f, 161.1124f);
				func_349(-92.595f, -595.4065f, 35.1888f, 161.3083f);
				func_349(-104.4742f, -630.1472f, 35.1396f, 161.184f);
				func_349(-74.1068f, -619.9417f, 35.1488f, 340.9123f);
			}
			break;
		
		case 90:
			if (func_348())
			{
				func_349(-59.349f, -779.238f, 43.134f, 228.398f);
				func_349(-41.6311f, -789.1425f, 43.1323f, 255.5993f);
				func_349(-65.212f, -772.66f, 43.151f, 219.398f);
				func_349(-33.0648f, -789.3544f, 43.1287f, 279.5989f);
			}
			else
			{
				func_349(-59.684f, -779.4568f, 43.114f, 228.7591f);
				func_349(-52.7425f, -784.7151f, 43.1134f, 237.7756f);
				func_349(-45.2736f, -788.4313f, 43.1133f, 250.2438f);
				func_349(-35.9308f, -789.8549f, 43.1167f, 271.1923f);
				func_349(-64.6911f, -762.4548f, 43.1316f, 35.6897f);
				func_349(-24.9853f, -786.8022f, 43.1163f, 297.8276f);
				func_349(-86.2083f, -739.3044f, 43.0546f, 204.9405f);
				func_349(-9.239f, -773.0505f, 43.0788f, 318.0367f);
			}
			break;
		
		case 91:
			func_349(246.5035f, -1798.749f, 26.1131f, 212.5996f);
			func_349(247.8968f, -1797.017f, 26.1131f, 212.5996f);
			func_349(249.3848f, -1795.374f, 26.1131f, 212.5996f);
			func_349(250.8498f, -1793.695f, 26.1131f, 212.5996f);
			func_349(262.9285f, -1784.205f, 26.1131f, 164.5991f);
			func_349(266.8129f, -1787.476f, 26.1131f, 164.5991f);
			func_349(264.814f, -1785.801f, 26.1131f, 164.5991f);
			func_349(269.0069f, -1789.16f, 26.1131f, 164.5991f);
			break;
		
		case 92:
			func_349(-1464.5f, -927.9f, 9f, 296.7991f);
			func_349(-1466f, -926.1f, 9f, 296.7991f);
			func_349(-1467.9f, -924.7f, 9f, 296.7991f);
			func_349(-1469.7f, -923.7f, 9f, 296.7991f);
			func_349(-1462.481f, -931.2933f, 9.1294f, 296.5982f);
			func_349(-1460.639f, -932.9284f, 9.1315f, 296.5982f);
			func_349(-1454.923f, -931.1019f, 9.0872f, 237.1973f);
			func_349(-1450.848f, -934.5874f, 8.4514f, 237.1973f);
			break;
		
		case 93:
			func_349(30.0784f, -1024.16f, 28.4469f, 234.5994f);
			func_349(29.1695f, -1026.719f, 28.4453f, 234.5994f);
			func_349(28.2538f, -1029.296f, 28.4421f, 234.5994f);
			func_349(27.3737f, -1031.767f, 28.3937f, 234.5994f);
			func_349(32.6932f, -1017.063f, 28.4531f, 234.5994f);
			func_349(33.672f, -1014.399f, 28.4552f, 234.5994f);
			func_349(37.488f, -1014.344f, 28.4781f, 175.5986f);
			func_349(39.4909f, -1015.097f, 28.484f, 175.5986f);
			break;
		
		case 94:
			func_349(45.0033f, 2784.392f, 56.8782f, 103.5999f);
			func_349(43.316f, 2785.903f, 56.8782f, 103.5999f);
			func_349(41.6126f, 2787.36f, 56.8782f, 103.5999f);
			func_349(39.9584f, 2788.773f, 56.8782f, 103.5999f);
			func_349(35.2347f, 2792.135f, 56.8781f, 208.7997f);
			func_349(33.7771f, 2790.379f, 56.8781f, 208.7997f);
			func_349(30.7578f, 2786.8f, 56.8781f, 208.7997f);
			func_349(29.3121f, 2785.045f, 56.8745f, 208.7997f);
			break;
		
		case 95:
			func_349(-332.5679f, 6069.145f, 30.2175f, 152.9999f);
			func_349(-334.2811f, 6070.787f, 30.2212f, 152.9999f);
			func_349(-335.9948f, 6072.454f, 30.2455f, 152.9999f);
			func_349(-337.675f, 6074.252f, 30.2727f, 152.9999f);
			func_349(-339.3682f, 6075.904f, 30.3074f, 152.9999f);
			func_349(-341.0913f, 6077.729f, 30.3114f, 152.9999f);
			func_349(-342.9239f, 6079.522f, 30.3122f, 152.9999f);
			func_349(-344.6985f, 6081.302f, 30.3097f, 152.9999f);
			break;
		
		case 96:
			func_349(1738.422f, 3716.779f, 33.0787f, 6.9999f);
			func_349(1736.207f, 3715.989f, 33.094f, 6.9999f);
			func_349(1748.442f, 3714.17f, 33.0889f, 39.399f);
			func_349(1750.475f, 3715.007f, 33.1067f, 39.399f);
			func_349(1747.18f, 3721.102f, 33.007f, 95.199f);
			func_349(1746.413f, 3723.255f, 32.9738f, 95.199f);
			func_349(1740.67f, 3717.613f, 33.0616f, 8.199f);
			func_349(1733.937f, 3715.08f, 33.1236f, 8.199f);
			break;
		
		case 97:
			func_349(947.9371f, -1452.737f, 30.143f, 331.5991f);
			func_349(950.2141f, -1452.826f, 30.1364f, 331.5991f);
			func_349(952.4588f, -1452.882f, 30.129f, 331.5991f);
			func_349(954.6608f, -1452.869f, 30.1303f, 331.5991f);
			func_349(935.1006f, -1452.701f, 30.1907f, 316.999f);
			func_349(932.5459f, -1452.579f, 30.2194f, 316.999f);
			func_349(929.9319f, -1452.567f, 30.2647f, 316.999f);
			func_349(927.4857f, -1452.446f, 30.3167f, 316.999f);
			break;
		
		case 98:
			func_349(186.6051f, 306.8702f, 104.389f, 162.3999f);
			func_349(184.3881f, 306.7666f, 104.3845f, 162.3999f);
			func_349(182.1681f, 306.6823f, 104.375f, 162.3999f);
			func_349(183.3219f, 296.2871f, 104.3707f, 350.7995f);
			func_349(180.9933f, 296.3411f, 104.3704f, 350.7995f);
			func_349(178.6569f, 296.4709f, 104.3701f, 350.7995f);
			func_349(195.1475f, 304.4284f, 104.4644f, 77.3989f);
			func_349(195.0814f, 301.8218f, 104.5287f, 77.3989f);
			break;
		
		case 99:
			func_349(-31.2801f, -200.3394f, 51.3551f, 5.3995f);
			func_349(-33.3895f, -199.7716f, 51.355f, 5.3995f);
			func_349(-35.4307f, -199.1125f, 51.3549f, 5.3995f);
			func_349(-37.5545f, -198.5244f, 51.3549f, 5.3995f);
			func_349(-17.9628f, -206.2525f, 51.3702f, 29.399f);
			func_349(-14.8043f, -207.5648f, 51.4707f, 29.399f);
			func_349(-11.8482f, -208.6405f, 51.5633f, 29.399f);
			func_349(-9.1304f, -209.4894f, 51.6472f, 29.399f);
			break;
		
		case 100:
			func_349(2478.52f, 4082.137f, 36.8208f, 227.5999f);
			func_349(2477.557f, 4079.946f, 36.8014f, 227.5999f);
			func_349(2465.123f, 4081.35f, 37.0655f, 167.4f);
			func_349(2463.017f, 4082.271f, 37.0653f, 167.4f);
			func_349(2467.7f, 4080.332f, 37.0649f, 167.4f);
			func_349(2469.587f, 4079.538f, 37.061f, 167.4f);
			func_349(2481.354f, 4088.553f, 36.9131f, 209.4f);
			func_349(2482.442f, 4091.023f, 36.9472f, 209.4f);
			break;
		
		case 101:
			func_349(-32.1085f, 6407.398f, 30.4903f, 291.1999f);
			func_349(-29.4917f, 6404.578f, 30.4903f, 291.1999f);
			func_349(-26.4319f, 6401.523f, 30.4903f, 291.1999f);
			func_349(-23.3427f, 6398.638f, 30.4903f, 291.1999f);
			func_349(-20.7035f, 6395.76f, 30.4885f, 291.1999f);
			func_349(-23.7283f, 6412.838f, 30.4904f, 176.5999f);
			func_349(-20.5405f, 6409.805f, 30.4905f, 176.5999f);
			func_349(-17.3045f, 6406.66f, 30.4904f, 176.5999f);
			break;
		
		case 102:
			func_349(-1138.057f, -1572.18f, 3.4157f, 125.9996f);
			func_349(-1142.03f, -1574.983f, 3.4133f, 125.9996f);
			func_349(-1145.05f, -1592.81f, 3.3855f, 306.5991f);
			func_349(-1139.933f, -1589.211f, 3.3978f, 306.5991f);
			func_349(-1124.295f, -1578.776f, 3.3854f, 306.5991f);
			func_349(-1119.954f, -1575.551f, 3.3852f, 306.5991f);
			func_349(-1124.942f, -1562.985f, 3.2916f, 168.9988f);
			func_349(-1127.039f, -1564.395f, 3.292f, 168.9988f);
			break;
		
		default:
			break;
	}
}

bool func_348()
{
	return Global_2714627.f_17;
}

void func_349(struct<3> Param0, float fParam1)
{
	if (Global_2667222.f_1753 < 101)
	{
		if (vmag(Param0) <= 0.01f)
		{
			return;
		}
		Global_2667222.f_1754[Global_2667222.f_1753 /*4*/] = { Param0 };
		Global_2667222.f_1754[Global_2667222.f_1753 /*4*/].f_3 = fParam1;
		Global_2667222.f_1753++;
	}
}

int func_350(struct<3> Param0)
{
	int iVar0;
	
	if (vdist(Global_2667222.f_2902, Param0) < Global_2667222.f_2910)
	{
		return Global_2667222.f_2905;
	}
	Global_2667222.f_2902 = { Param0 };
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Param0.f_2 <= 0f)
		{
			Param0.f_2 = ((Global_2674477[iVar0 /*7*/].f_2 + Global_2674477[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_163(Param0, &(Global_2674477[iVar0 /*7*/])))
		{
			Global_2667222.f_2905 = iVar0;
			return iVar0;
		}
		iVar0++;
	}
	Global_2667222.f_2905 = -1;
	return -1;
}

int func_351()
{
	if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_13, 0) && !Global_2715542.f_6395)
	{
		return 0;
	}
	return 0;
}

int func_352(struct<2> Param0, var uParam1, bool bParam2, float fParam3)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = 0;
	iVar0 = 83;
	while (iVar0 <= 84 + 1)
	{
		if (bParam2)
		{
			if (func_322(iVar0))
			{
				fVar1 = fParam3;
			}
			else
			{
				fVar1 = 0f;
			}
		}
		else
		{
			fVar1 = fParam3;
		}
		fVar2 = vdist(Param0, Param0.f_1, 0f, Global_1946934.f_532[iVar0 /*3*/], Global_1946934.f_532[iVar0 /*3*/].f_1, 0f);
		if (fVar2 < fVar1)
		{
			iVar3++;
		}
		iVar0++;
	}
	if (iVar3 > 0)
	{
		return 1;
	}
	return 0;
}

void func_353()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Global_2667222.f_2735[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
}

int func_354(var uParam0, bool bParam1)
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { *uParam0 };
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Var1.f_2 <= 0f)
		{
			Var1.f_2 = ((Global_2674433[iVar0 /*7*/].f_2 + Global_2674433[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_163(Var1, &(Global_2674433[iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_149(&Var1, Global_2674433[iVar0 /*7*/], Global_2674433[iVar0 /*7*/].f_3, Global_2674433[iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_355()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 101)
	{
		Global_2667222.f_1754[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2667222.f_1753 = 0;
}

void func_356()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x87C0DA419F19FF57(Global_2667222.f_690[iVar0]))
		{
			if (unk_0x69CE66B03B2184EB() == Global_2667222.f_690[iVar0])
			{
				if (!Global_2667222.f_686[iVar0] == -1)
				{
					if (unk_0xD0C6888814987992(Global_2667222.f_686[iVar0]))
					{
						unk_0x6E248B3E8CD8823C(Global_2667222.f_686[iVar0]);
						Global_2667222.f_686[iVar0] = -1;
					}
					else
					{
						Global_2667222.f_686[iVar0] = -1;
					}
				}
			}
		}
		else if (!Global_2667222.f_686[iVar0] == -1)
		{
			Global_2667222.f_686[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_357()
{
	if (!Global_2667222.f_605 == 0 && unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Global_2667222.f_610) < func_300(0))
	{
		return 1;
	}
	return 0;
}

int func_358()
{
	if (unk_0x04458B4E5D9E466A())
	{
		if (!unk_0xEEFB36B938654045() > 7 && !unk_0xEEFB36B938654045() == 5)
		{
			return 0;
		}
	}
	if (Global_2667222.f_516 == unk_0x8142A6539DDC180F())
	{
		return 0;
	}
	if (!func_360(unk_0x9E2D6C50374FCFA9()) && !func_359())
	{
		return 0;
	}
	return 1;
}

bool func_359()
{
	return Global_1575022;
}

int func_360(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xE2D0C323A1AE5D85(Global_2703656.f_1, iParam0);
	}
	return 1;
}

Vector3 func_361(struct<3> Param0, float fParam1, float fParam2)
{
	struct<3> Var0;
	
	Var0 = { 0f, 1f, 0f };
	func_362(Var0, fParam1);
	Var0.x = (Var0.x * fParam2);
	Var0.f_1 = (Var0.f_1 * fParam2);
	Var0.f_2 = (Var0.f_2 * fParam2);
	Var0 = { Var0 + Param0 };
	return Var0;
}

Vector3 func_362(struct<3> Param0, float fParam1)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	
	fVar1 = sin(fParam1);
	fVar2 = cos(fParam1);
	Var0.x = ((Param0.x * fVar2) - (Param0.f_1 * fVar1));
	Var0.f_1 = ((Param0.x * fVar1) + (Param0.f_1 * fVar2));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

void func_363(int iParam0, int iParam1, int iParam2, var uParam3, float fParam4)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 1052.457f, -1963.543f, 30.014f };
							*fParam4 = 16.2f;
							break;
						
						case 1:
							*uParam3 = { 1074.009f, -1949.668f, 30.014f };
							*fParam4 = 302.399f;
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 203.082f, -1865.3f, 25.791f };
							*fParam4 = 34f;
							break;
						
						case 1:
							*uParam3 = { 192.393f, -1846.078f, 26.204f };
							*fParam4 = 319.598f;
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { -108.495f, -2527.645f, 5f };
							*fParam4 = 160.191f;
							break;
						
						case 1:
							*uParam3 = { -117.082f, -2529.25f, 5f };
							*fParam4 = 89.597f;
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 732.267f, -557.419f, 25.691f };
							*fParam4 = 302.798f;
							break;
						
						case 1:
							*uParam3 = { 727.438f, -549.421f, 25.569f };
							*fParam4 = 347.998f;
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 1701.729f, 3306.301f, 40.172f };
							*fParam4 = 219.8f;
							break;
						
						case 1:
							*uParam3 = { 1692.215f, 3305.702f, 40.146f };
							*fParam4 = 198f;
							break;
						
						case 2:
							*uParam3 = { 1685.169f, 3300.173f, 40.115f };
							*fParam4 = 167.3998f;
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 1356.085f, -1853.611f, 55.978f };
							*fParam4 = 168.999f;
							break;
						
						case 1:
							*uParam3 = { 1359.795f, -1863.801f, 55.602f };
							*fParam4 = 323.798f;
							break;
						
						case 2:
							*uParam3 = { 1348.903f, -1848.603f, 56.153f };
							*fParam4 = 316.599f;
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 748.99f, -1856.458f, 28.292f };
							*fParam4 = 254.6f;
							break;
						
						case 1:
							*uParam3 = { 739.004f, -1854.37f, 28.292f };
							*fParam4 = 149f;
							break;
						
						case 2:
							*uParam3 = { 744.5185f, -1825.647f, 28.2916f };
							*fParam4 = 20.5976f;
							break;
					}
					break;
			}
			break;
	}
}

bool func_364(int iParam0)
{
	return unk_0x90F6E2F6488B98BA(Local_239.f_712[iParam0]);
}

int func_365(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return joaat("speedo");
						
						case 1:
							return joaat("speedo");
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return joaat("speedo");
						
						case 1:
							return joaat("speedo");
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return joaat("speedo");
						
						case 1:
							return joaat("speedo");
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return joaat("speedo");
						
						case 1:
							return joaat("speedo");
						
						default:
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return joaat("mesa3");
						
						case 1:
							return joaat("insurgent");
						
						case 2:
							return joaat("mule3");
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return joaat("mesa3");
						
						case 1:
							return joaat("insurgent");
						
						case 2:
							return joaat("mule3");
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return joaat("mesa3");
						
						case 1:
							return joaat("insurgent");
						
						case 2:
							return joaat("mule3");
						
						default:
					}
					break;
			}
			break;
	}
	return 0;
}

int func_366(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

int func_367(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2;
				
				case 1:
					return 2;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 3;
				
				case 1:
					return 3;
				
				case 2:
					return 3;
				
				default:
			}
			break;
	}
	return 0;
}

void func_368()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (Local_239.f_10[iVar0 /*15*/].f_14 == 0)
		{
			Local_239.f_10[iVar0 /*15*/].f_14 = unk_0x5853B15F78E1A265(0, 1000);
		}
		iVar0++;
	}
}

void func_369()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!unk_0x54E30A65F4FA4962())
	{
		return;
	}
	iVar1 = func_373(Local_239.f_703, Local_239.f_704);
	iVar2 = Local_239.f_703;
	iVar3 = Local_239.f_704;
	if (Local_239.f_779 != 0)
	{
		return;
	}
	if (!func_105(&(Local_239.f_800)))
	{
		func_104(&(Local_239.f_800), 0, 0);
	}
	iVar0 = 0;
	if (!func_103(&(Local_239.f_800), 15000, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar5 = 0;
			if (!unk_0x90F6E2F6488B98BA(Local_239.f_721[iVar0]))
			{
				if (unk_0x853FFA3D0A54864F(1))
				{
					iVar4 = func_372(iVar2, iVar3, iVar0);
					if (func_50(iVar4))
					{
						if (!func_33(Local_239.f_590[iVar0 /*5*/], 0f, 0f, 0f, 0))
						{
							if (func_36(Local_239.f_590[iVar0 /*5*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0) || (iVar0 > 0 && unk_0x90F6E2F6488B98BA(Local_239.f_721[(iVar0 - 1)])))
							{
								if (!unk_0xE2D0C323A1AE5D85(Local_239.f_783, iVar0))
								{
									if (iVar4 != joaat("imp_prop_adv_hdsec"))
									{
									}
									unk_0xCED9E32812D6C7C7(&(Local_239.f_783), iVar0);
								}
								if (func_371(&(Local_239.f_721[iVar0]), iVar4, Local_239.f_590[iVar0 /*5*/], 1, 1, 0, 1, 0, 0, 0))
								{
									unk_0x8CE3D365F064F69E(unk_0xE8BBC6CC2C60F24A(Local_239.f_721[iVar0]), 0f, 0f, Local_239.f_590[iVar0 /*5*/].f_3, 2, 1);
									if (func_370(iVar0, 0))
									{
										if (!unk_0x90F6E2F6488B98BA(Local_239.f_721[iVar0]))
										{
											unk_0x5C65DDDC219B3AA5(unk_0xE8BBC6CC2C60F24A(Local_239.f_721[iVar0]), true);
											unk_0x7A93DEA53EFC3CF2(unk_0xE8BBC6CC2C60F24A(Local_239.f_721[iVar0]), 100);
											unk_0x1C2ED929474DC6FE(unk_0xE8BBC6CC2C60F24A(Local_239.f_721[iVar0]), true, 0);
											unk_0x9210F85E9CD785F1(unk_0xE8BBC6CC2C60F24A(Local_239.f_721[iVar0]), 1);
											unk_0xBED097BB6359F09C(unk_0xE8BBC6CC2C60F24A(Local_239.f_721[iVar0]), 1, 1, 1, 1, 1, 1, 1, 1);
										}
									}
									if (unk_0x15CAA6D7B11F1A7C(unk_0xE8BBC6CC2C60F24A(Local_239.f_721[iVar0])) == joaat("prop_generator_03b"))
									{
										unk_0x5C65DDDC219B3AA5(unk_0xE8BBC6CC2C60F24A(Local_239.f_721[iVar0]), true);
									}
									if (func_370(iVar0, 1))
									{
										unk_0x1C2ED929474DC6FE(unk_0xE8BBC6CC2C60F24A(Local_239.f_721[iVar0]), false, 0);
									}
								}
							}
							else
							{
								if (unk_0x34FAA537D539192C(Local_239.f_590[iVar0 /*5*/], 6f))
								{
									iVar5 = 1;
								}
								else if (unk_0xAC48FF26FAAA8DD0(Local_239.f_590[iVar0 /*5*/], Local_239.f_590[iVar0 /*5*/].f_1, (Local_239.f_590[iVar0 /*5*/].f_2 + 1f), 1f) || unk_0xAC48FF26FAAA8DD0(Local_239.f_590[iVar0 /*5*/], 1f))
								{
									iVar5 = 1;
								}
								if (iVar5 == 1)
								{
									if (!unk_0xE2D0C323A1AE5D85(Local_239.f_783, iVar0))
									{
										unk_0xCED9E32812D6C7C7(&(Local_239.f_783), iVar0);
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
}

bool func_370(int iParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(Local_239.f_751[iParam0], iParam1);
}

int func_371(var uParam0, int iParam1, struct<3> Param2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!unk_0x853FFA3D0A54864F(1))
	{
		return 0;
	}
	if (bParam7)
	{
		*uParam0 = unk_0x2D0F5291E9305922(unk_0x0A7322C6D0E1A985(iParam1, Param2, iParam4, bParam3, iParam5));
	}
	else
	{
		*uParam0 = unk_0x2D0F5291E9305922(unk_0x0E536D72AB30F4C8(iParam1, Param2, iParam4, bParam3, iParam5));
	}
	if (unk_0xCCDCD6672DAE6835(*uParam0))
	{
		unk_0x398C962F550CF3B4(unk_0xE8BBC6CC2C60F24A(*uParam0), iParam6);
		if (bParam8)
		{
			unk_0x229DD509EDB2FBD4(unk_0xE8BBC6CC2C60F24A(*uParam0), 1);
		}
		if (bParam9)
		{
			unk_0x1C2ED929474DC6FE(unk_0xE8BBC6CC2C60F24A(*uParam0), false, 0);
		}
		if (unk_0xD64C90C3F536F963(unk_0xE8BBC6CC2C60F24A(*uParam0)))
		{
			if (bParam3)
			{
				unk_0x4C6E9D70687FCDCE(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_372(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return joaat("prop_box_wood04a");
						
						case 1:
							return joaat("prop_box_wood04a");
						
						case 2:
							return joaat("prop_box_wood04a");
						
						case 3:
							return joaat("prop_generator_03b");
						
						case 4:
							return joaat("prop_generator_03b");
						
						case 5:
							return joaat("prop_generator_03b");
						
						case 6:
							return joaat("imp_prop_adv_hdsec");
						
						case 7:
							return joaat("imp_prop_adv_hdsec");
						
						case 8:
							return joaat("imp_prop_adv_hdsec");
						
						case 9:
							return joaat("gr_prop_gr_hdsec_deactive");
						
						case 10:
							return joaat("gr_prop_gr_hdsec_deactive");
						
						case 11:
							return joaat("gr_prop_gr_hdsec_deactive");
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return joaat("prop_box_wood04a");
						
						case 1:
							return joaat("prop_box_wood04a");
						
						case 2:
							return joaat("prop_box_wood04a");
						
						case 3:
							return joaat("prop_generator_03b");
						
						case 4:
							return joaat("prop_generator_03b");
						
						case 5:
							return joaat("prop_generator_03b");
						
						case 6:
							return joaat("imp_prop_adv_hdsec");
						
						case 7:
							return joaat("imp_prop_adv_hdsec");
						
						case 8:
							return joaat("imp_prop_adv_hdsec");
						
						case 9:
							return joaat("gr_prop_gr_hdsec_deactive");
						
						case 10:
							return joaat("gr_prop_gr_hdsec_deactive");
						
						case 11:
							return joaat("gr_prop_gr_hdsec_deactive");
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return joaat("prop_box_wood04a");
						
						case 1:
							return joaat("prop_box_wood04a");
						
						case 2:
							return joaat("prop_box_wood04a");
						
						case 3:
							return joaat("prop_generator_03b");
						
						case 4:
							return joaat("prop_generator_03b");
						
						case 5:
							return joaat("prop_generator_03b");
						
						case 6:
							return joaat("imp_prop_adv_hdsec");
						
						case 7:
							return joaat("imp_prop_adv_hdsec");
						
						case 8:
							return joaat("imp_prop_adv_hdsec");
						
						case 9:
							return joaat("gr_prop_gr_hdsec_deactive");
						
						case 10:
							return joaat("gr_prop_gr_hdsec_deactive");
						
						case 11:
							return joaat("gr_prop_gr_hdsec_deactive");
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return joaat("prop_box_wood04a");
						
						case 1:
							return joaat("prop_box_wood04a");
						
						case 2:
							return joaat("prop_box_wood04a");
						
						case 3:
							return joaat("prop_generator_03b");
						
						case 4:
							return joaat("prop_generator_03b");
						
						case 5:
							return joaat("prop_generator_03b");
						
						case 6:
							return joaat("imp_prop_adv_hdsec");
						
						case 7:
							return joaat("imp_prop_adv_hdsec");
						
						case 8:
							return joaat("imp_prop_adv_hdsec");
						
						case 9:
							return joaat("gr_prop_gr_hdsec_deactive");
						
						case 10:
							return joaat("gr_prop_gr_hdsec_deactive");
						
						case 11:
							return joaat("gr_prop_gr_hdsec_deactive");
						
						default:
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return joaat("prop_box_wood04a");
						
						case 1:
							return joaat("prop_box_wood04a");
						
						case 2:
							return joaat("prop_box_wood04a");
						
						case 3:
							return joaat("prop_flare_01");
						
						case 4:
							return joaat("prop_generator_03b");
						
						case 5:
							return joaat("prop_generator_03b");
						
						case 6:
							return joaat("prop_generator_03b");
						
						case 7:
							return joaat("prop_mb_crate_01a_set");
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return joaat("prop_box_wood04a");
						
						case 1:
							return joaat("prop_box_wood04a");
						
						case 2:
							return joaat("prop_box_wood04a");
						
						case 3:
							return joaat("prop_generator_03b");
						
						case 4:
							return joaat("prop_generator_03b");
						
						case 5:
							return joaat("prop_generator_03b");
						
						case 6:
							return joaat("prop_flare_01");
						
						case 7:
							return joaat("prop_mb_crate_01a_set");
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return joaat("prop_generator_03b");
						
						case 1:
							return joaat("prop_generator_03b");
						
						case 2:
							return joaat("prop_generator_03b");
						
						case 3:
							return joaat("prop_box_wood04a");
						
						case 4:
							return joaat("prop_box_wood04a");
						
						case 5:
							return joaat("prop_flare_01");
						
						case 6:
							return joaat("prop_box_wood04a");
						
						case 7:
							return joaat("prop_mb_crate_01a_set");
						
						default:
					}
					break;
			}
			break;
	}
	return 0;
}

int func_373(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 12;
				
				case 3:
					return 12;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 8;
				
				case 1:
					return 8;
				
				case 2:
					return 8;
				
				default:
			}
			break;
	}
	return 0;
}

void func_374()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!unk_0x54E30A65F4FA4962())
	{
		return;
	}
	iVar1 = func_375(Local_239.f_703, Local_239.f_704);
	if (Local_239.f_779 != 0)
	{
		return;
	}
	if (!func_105(&(Local_239.f_800)))
	{
		func_104(&(Local_239.f_800), 0, 0);
	}
	iVar2 = func_2234();
	iVar3 = Local_239.f_704;
	iVar0 = 0;
	if (!func_103(&(Local_239.f_800), 15000, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar5 = 0;
			if (!unk_0x90F6E2F6488B98BA(Local_239.f_707[iVar0]))
			{
				if (unk_0x993E56B8150C834F(1))
				{
					iVar4 = func_365(iVar2, iVar3, iVar0);
					if (func_50(iVar4))
					{
						if (!func_33(Local_239.f_538[iVar0 /*5*/], 0f, 0f, 0f, 0))
						{
							if (func_36(Local_239.f_538[iVar0 /*5*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0) || (iVar0 > 0 && unk_0x90F6E2F6488B98BA(Local_239.f_707[(iVar0 - 1)])))
							{
								if (!unk_0xE2D0C323A1AE5D85(Local_239.f_782, iVar0))
								{
									unk_0xCED9E32812D6C7C7(&(Local_239.f_782), iVar0);
								}
								if (func_82(&(Local_239.f_707[iVar0]), iVar4, Local_239.f_538[iVar0 /*5*/], Local_239.f_538[iVar0 /*5*/].f_3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
								{
									if (Local_239.f_703 == 0)
									{
										unk_0x58DAFDEB2F46A5EA(unk_0xA5677134B9672173(Local_239.f_707[iVar0]), 0, 0);
									}
									unk_0x2706C6FAA25AB1B7(unk_0xA5677134B9672173(Local_239.f_707[iVar0]), 1);
									unk_0xD045D56D95A3D704(unk_0xA5677134B9672173(Local_239.f_707[iVar0]), 0);
								}
							}
							else
							{
								if (unk_0x34FAA537D539192C(Local_239.f_538[iVar0 /*5*/], 6f))
								{
									iVar5 = 1;
								}
								else if (unk_0xAC48FF26FAAA8DD0(Local_239.f_538[iVar0 /*5*/], Local_239.f_538[iVar0 /*5*/].f_1, (Local_239.f_538[iVar0 /*5*/].f_2 + 1f), 1f) || unk_0xAC48FF26FAAA8DD0(Local_239.f_538[iVar0 /*5*/], 1f))
								{
									iVar5 = 1;
								}
								if (iVar5 == 1)
								{
									if (!unk_0xE2D0C323A1AE5D85(Local_239.f_782, iVar0))
									{
										unk_0xCED9E32812D6C7C7(&(Local_239.f_782), iVar0);
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
}

int func_375(int iParam0, var uParam1)
{
	return 0;
}

void func_376()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	
	if (func_3(12))
	{
		return;
	}
	if (!unk_0x54E30A65F4FA4962())
	{
		return;
	}
	iVar0 = func_378(Local_239.f_703, Local_239.f_704);
	if (iVar0 > 0)
	{
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			func_377(Local_239.f_703, Local_239.f_704, iVar1, &Var2, &Var3);
			if (!func_33(Var2, 0f, 0f, 0f, 0))
			{
				Local_239.f_875[iVar1] = unk_0x2915D98110F23A29(Var2, Var3, 1, 1, 1, 1);
			}
			iVar1++;
		}
	}
	func_106(12);
}

void func_377(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { Vector(73.38181f, 3488.139f, 2982.944f) - Vector(3f, 30.875f, 18.4375f) };
							uParam3->f_2 = (uParam3->f_2 - 2f);
							*uParam4 = { Vector(73.38181f, 3488.139f, 2982.944f) + Vector(3f, 30.875f, 18.4375f) };
							uParam3->f_2 = (uParam3->f_2 + 2f);
							break;
					}
					break;
			}
			break;
	}
}

int func_378(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					break;
				
				default:
					return 1;
			}
			break;
	}
	return 0;
}

void func_379()
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if (Local_239.f_794 == 0)
	{
		Var0 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0) };
		Var1 = { func_380() };
		fVar2 = unk_0x987A5F1E1A67E3C0(Var0, Var1, 0);
		if (fVar2 > 2500f)
		{
			Local_239.f_794 = Global_262145.f_16400;
		}
		else if (fVar2 > 2000f)
		{
			Local_239.f_794 = Global_262145.f_16401;
		}
		else if (fVar2 > 1500f)
		{
			Local_239.f_794 = Global_262145.f_16402;
		}
		else if (fVar2 > 1000f)
		{
			Local_239.f_794 = Global_262145.f_16403;
		}
		else
		{
			Local_239.f_794 = Global_262145.f_16404;
		}
	}
}

Vector3 func_380()
{
	switch (Local_239.f_704)
	{
		case 0:
			return func_381();
		
		default:
	}
	return func_381();
}

Vector3 func_381()
{
	int iVar0;
	int iVar1;
	
	switch (Local_239.f_703)
	{
		case 1:
			iVar0 = func_384(func_120());
			return func_382(iVar0);
		
		case 0:
			iVar1 = func_384(func_120());
			return func_382(iVar1);
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_382(int iParam0)
{
	return Global_1946934.f_532[func_383(iParam0) /*3*/];
}

int func_383(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 22;
			break;
		
		case 2:
			return 23;
			break;
		
		case 3:
			return 24;
			break;
		
		case 4:
			return 25;
			break;
		
		case 5:
			return 26;
			break;
		
		case 6:
			return 27;
			break;
		
		case 7:
			return 28;
			break;
		
		case 8:
			return 29;
			break;
		
		case 9:
			return 30;
			break;
		
		case 10:
			return 31;
			break;
		
		case 11:
			return 32;
			break;
		
		case 12:
			return 33;
			break;
		
		case 13:
			return 34;
			break;
		
		case 14:
			return 35;
			break;
		
		case 15:
			return 36;
			break;
		
		case 16:
			return 37;
			break;
		
		case 17:
			return 38;
			break;
		
		case 18:
			return 39;
			break;
		
		case 19:
			return 40;
			break;
		
		case 20:
			return 41;
			break;
		
		case 21:
			return 70;
			break;
		
		case 22:
			return 71;
			break;
		
		case 23:
			return 72;
			break;
		
		case 24:
			return 73;
			break;
		
		case 25:
			return 74;
			break;
		
		case 26:
			return 75;
			break;
		
		case 27:
			return 76;
			break;
		
		case 28:
			return 77;
			break;
		
		case 29:
			return 78;
			break;
		
		case 30:
			return 79;
			break;
		
		case 31:
			return 80;
			break;
	}
	return -1;
}

int func_384(int iParam0)
{
	if (iParam0 == func_24())
	{
		return 0;
	}
	return Global_1853128[iParam0 /*888*/].f_267.f_187[5 /*13*/];
}

void func_385()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (!func_33(Local_239.f_462[0 /*5*/], 0f, 0f, 0f, 0))
	{
		return;
	}
	func_390();
	iVar0 = func_2234();
	iVar1 = Local_239.f_704;
	iVar2 = func_54(iVar0, iVar1);
	iVar3 = func_375(iVar0, iVar1);
	iVar4 = func_373(iVar0, iVar1);
	iVar5 = Local_239.f_931;
	iVar6 = 0;
	while (iVar6 < iVar2)
	{
		func_389(iVar0, iVar1, iVar6, &(Local_239.f_10[iVar6 /*15*/].f_5), &(Local_239.f_10[iVar6 /*15*/].f_8));
		iVar6++;
	}
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 < iVar3)
	{
		func_388(iVar0, iVar1, iVar6, &(Local_239.f_538[iVar6 /*5*/]), &(Local_239.f_538[iVar6 /*5*/].f_3));
		iVar6++;
	}
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 < iVar4)
	{
		func_387(iVar0, iVar1, iVar6, &(Local_239.f_590[iVar6 /*5*/]), &(Local_239.f_590[iVar6 /*5*/].f_3));
		iVar6++;
	}
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 < iVar5)
	{
		Local_239.f_691[iVar6 /*5*/] = { func_386(iVar0, iVar1, iVar6) };
		iVar6++;
	}
}

Vector3 func_386(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_387(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 1072.265f, -1955.24f, 30.017f };
							*uParam4 = 270.6f;
							break;
						
						case 1:
							*uParam3 = { 1067.778f, -1965.812f, 30.017f };
							*uParam4 = 216.2f;
							break;
						
						case 2:
							*uParam3 = { 1059.324f, -1955.879f, 30.017f };
							*uParam4 = 359.399f;
							break;
						
						case 3:
							*uParam3 = { 1045.348f, -1965.24f, 30.074f };
							*uParam4 = 292.993f;
							break;
						
						case 4:
							*uParam3 = { 1067.391f, -1974.432f, 30.074f };
							*uParam4 = 337.194f;
							break;
						
						case 5:
							*uParam3 = { 1073.066f, -1944.134f, 30.076f };
							*uParam4 = 181.994f;
							break;
						
						case 6:
							*uParam3 = { 1073.066f, -1944.134f, 30.076f };
							*uParam4 = 181.994f;
							break;
						
						case 7:
							*uParam3 = { 1073.066f, -1944.134f, 30.076f };
							*uParam4 = 181.994f;
							break;
						
						case 8:
							*uParam3 = { 1073.066f, -1944.134f, 30.076f };
							*uParam4 = 181.994f;
							break;
						
						case 9:
							*uParam3 = { 1073.066f, -1944.134f, 30.076f };
							*uParam4 = 181.994f;
							break;
						
						case 10:
							*uParam3 = { 1073.066f, -1944.134f, 30.076f };
							*uParam4 = 181.994f;
							break;
						
						case 11:
							*uParam3 = { 1073.066f, -1944.134f, 30.076f };
							*uParam4 = 181.994f;
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 186.252f, -1847.778f, 26.257f };
							*uParam4 = 71.795f;
							break;
						
						case 1:
							*uParam3 = { 194.125f, -1860.507f, 26.02f };
							*uParam4 = 80.199f;
							break;
						
						case 2:
							*uParam3 = { 205.934f, -1859.605f, 26.173f };
							*uParam4 = 229.399f;
							break;
						
						case 3:
							*uParam3 = { 187.761f, -1855.247f, 26.176f };
							*uParam4 = 258.799f;
							break;
						
						case 4:
							*uParam3 = { 211.824f, -1860.622f, 26.191f };
							*uParam4 = 48.795f;
							break;
						
						case 5:
							*uParam3 = { 198.362f, -1864.078f, 25.954f };
							*uParam4 = 344.595f;
							break;
						
						case 6:
							*uParam3 = { 198.362f, -1864.078f, 25.954f };
							*uParam4 = 344.595f;
							break;
						
						case 7:
							*uParam3 = { 198.362f, -1864.078f, 25.954f };
							*uParam4 = 344.595f;
							break;
						
						case 8:
							*uParam3 = { 198.362f, -1864.078f, 25.954f };
							*uParam4 = 344.595f;
							break;
						
						case 9:
							*uParam3 = { 198.362f, -1864.078f, 25.954f };
							*uParam4 = 344.595f;
							break;
						
						case 10:
							*uParam3 = { 198.362f, -1864.078f, 25.954f };
							*uParam4 = 344.595f;
							break;
						
						case 11:
							*uParam3 = { 198.362f, -1864.078f, 25.954f };
							*uParam4 = 344.595f;
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { -112.035f, -2523.366f, 5.003f };
							*uParam4 = 294.394f;
							break;
						
						case 1:
							*uParam3 = { -109.948f, -2533.822f, 5.003f };
							*uParam4 = 128.19f;
							break;
						
						case 2:
							*uParam3 = { -117.595f, -2534.532f, 5.003f };
							*uParam4 = 250.994f;
							break;
						
						case 3:
							*uParam3 = { -131.088f, -2540.13f, 5.059f };
							*uParam4 = 277.4f;
							break;
						
						case 4:
							*uParam3 = { -109.153f, -2517.608f, 5.059f };
							*uParam4 = 146.999f;
							break;
						
						case 5:
							*uParam3 = { -94.751f, -2531.634f, 5.064f };
							*uParam4 = 88.199f;
							break;
						
						case 6:
							*uParam3 = { -94.751f, -2531.634f, 5.064f };
							*uParam4 = 88.199f;
							break;
						
						case 7:
							*uParam3 = { -94.751f, -2531.634f, 5.064f };
							*uParam4 = 88.199f;
							break;
						
						case 8:
							*uParam3 = { -94.751f, -2531.634f, 5.064f };
							*uParam4 = 88.199f;
							break;
						
						case 9:
							*uParam3 = { -94.751f, -2531.634f, 5.064f };
							*uParam4 = 88.199f;
							break;
						
						case 10:
							*uParam3 = { -94.751f, -2531.634f, 5.064f };
							*uParam4 = 88.199f;
							break;
						
						case 11:
							*uParam3 = { -94.751f, -2531.634f, 5.064f };
							*uParam4 = 88.199f;
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 719.36f, -570.159f, 25.214f };
							*uParam4 = 356.196f;
							break;
						
						case 1:
							*uParam3 = { 733.97f, -552.694f, 25.709f };
							*uParam4 = 301.598f;
							break;
						
						case 2:
							*uParam3 = { 722.023f, -557.694f, 25.37f };
							*uParam4 = 185.597f;
							break;
						
						case 3:
							*uParam3 = { 743.87f, -529.841f, 26.131f };
							*uParam4 = 170.2f;
							break;
						
						case 4:
							*uParam3 = { 718.559f, -560.7f, 25.349f };
							*uParam4 = 287.399f;
							break;
						
						case 5:
							*uParam3 = { 727.243f, -572.277f, 25.905f };
							*uParam4 = 5.799f;
							break;
						
						case 6:
							*uParam3 = { 727.243f, -572.277f, 25.905f };
							*uParam4 = 5.799f;
							break;
						
						case 7:
							*uParam3 = { 727.243f, -572.277f, 25.905f };
							*uParam4 = 5.799f;
							break;
						
						case 8:
							*uParam3 = { 727.243f, -572.277f, 25.905f };
							*uParam4 = 5.799f;
							break;
						
						case 9:
							*uParam3 = { 727.243f, -572.277f, 25.905f };
							*uParam4 = 5.799f;
							break;
						
						case 10:
							*uParam3 = { 727.243f, -572.277f, 25.905f };
							*uParam4 = 5.799f;
							break;
						
						case 11:
							*uParam3 = { 727.243f, -572.277f, 25.905f };
							*uParam4 = 5.799f;
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 1692.823f, 3313.184f, 40.149f };
							*uParam4 = 213.6f;
							break;
						
						case 1:
							*uParam3 = { 1698.061f, 3307.424f, 40.163f };
							*uParam4 = 163f;
							break;
						
						case 2:
							*uParam3 = { 1704.891f, 3297.136f, 40.151f };
							*uParam4 = 31.6f;
							break;
						
						case 3:
							*uParam3 = { 1705.365f, 3321.828f, 40.249f };
							*uParam4 = 178.196f;
							break;
						
						case 4:
							*uParam3 = { 1703.038f, 3323.708f, 40.237f };
							*uParam4 = 145.4f;
							break;
						
						case 5:
							*uParam3 = { 1698.681f, 3295.485f, 40.207f };
							*uParam4 = 4.8f;
							break;
						
						case 6:
							*uParam3 = { 1679.907f, 3314.884f, 40.396f };
							*uParam4 = 250.199f;
							break;
						
						case 7:
							*uParam3 = { 1686.462f, 3313.07f, 40.4114f };
							*uParam4 = 250.199f;
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 1354.042f, -1860.635f, 55.521f };
							*uParam4 = 159.996f;
							break;
						
						case 1:
							*uParam3 = { 1363.032f, -1850.031f, 56.198f };
							*uParam4 = 189.599f;
							break;
						
						case 2:
							*uParam3 = { 1364.434f, -1869.575f, 55.701f };
							*uParam4 = 199.598f;
							break;
						
						case 3:
							*uParam3 = { 1362.243f, -1876.987f, 56.052f };
							*uParam4 = 349.395f;
							break;
						
						case 4:
							*uParam3 = { 1365.821f, -1844.801f, 56.337f };
							*uParam4 = 172.395f;
							break;
						
						case 5:
							*uParam3 = { 1344.211f, -1854.122f, 56.166f };
							*uParam4 = 249.795f;
							break;
						
						case 6:
							*uParam3 = { 1371.221f, -1856.408f, 56.2579f };
							*uParam4 = 0f;
							break;
						
						case 7:
							*uParam3 = { 1694.413f, 3316.959f, 42.024f };
							*uParam4 = 250.199f;
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 732.074f, -1846.578f, 28.351f };
							*uParam4 = 259.396f;
							break;
						
						case 1:
							*uParam3 = { 733.516f, -1864.994f, 28.351f };
							*uParam4 = 304.797f;
							break;
						
						case 2:
							*uParam3 = { 747.31f, -1862.022f, 28.352f };
							*uParam4 = 22.997f;
							break;
						
						case 3:
							*uParam3 = { 746.89f, -1853.286f, 28.294f };
							*uParam4 = 180.4f;
							break;
						
						case 4:
							*uParam3 = { 738.586f, -1846.772f, 28.294f };
							*uParam4 = 120.399f;
							break;
						
						case 5:
							*uParam3 = { 747.651f, -1838.457f, 28.395f };
							*uParam4 = 0f;
							break;
						
						case 6:
							*uParam3 = { 752.33f, -1870.699f, 28.294f };
							*uParam4 = 282f;
							break;
						
						case 7:
							*uParam3 = { 743.2522f, -1845.878f, 30.2916f };
							*uParam4 = 250.199f;
							break;
					}
					break;
			}
			break;
	}
}

void func_388(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
}

void func_389(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 1082.481f, -1949.4f, 30.014f };
							*uParam4 = 53.799f;
							break;
						
						case 1:
							*uParam3 = { 1076.669f, -1963.329f, 30.014f };
							*uParam4 = 148.798f;
							break;
						
						case 2:
							*uParam3 = { 1071.155f, -1967.709f, 30.015f };
							*uParam4 = 107.996f;
							break;
						
						case 3:
							*uParam3 = { 1069.892f, -1968.247f, 30.015f };
							*uParam4 = 287.996f;
							break;
						
						case 4:
							*uParam3 = { 1050.168f, -1968.881f, 30.015f };
							*uParam4 = 46.794f;
							break;
						
						case 5:
							*uParam3 = { 1050.747f, -1957.233f, 30.042f };
							*uParam4 = 182.597f;
							break;
						
						case 6:
							*uParam3 = { 1056.63f, -1961.666f, 30.014f };
							*uParam4 = 143.996f;
							break;
						
						case 7:
							*uParam3 = { 1056.002f, -1963.114f, 30.015f };
							*uParam4 = 330.595f;
							break;
						
						case 8:
							*uParam3 = { 1059.455f, -1957.077f, 30.014f };
							*uParam4 = 355.795f;
							break;
						
						case 9:
							*uParam3 = { 1074.588f, -1954.362f, 30.014f };
							*uParam4 = 180.399f;
							break;
						
						case 10:
							*uParam3 = { 1074.844f, -1955.782f, 30.014f };
							*uParam4 = 9.599f;
							break;
						
						case 11:
							*uParam3 = { 1081.098f, -1959.065f, 31.821f };
							*uParam4 = 59.394f;
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 196.759f, -1854.889f, 26.19f };
							*uParam4 = 352.598f;
							break;
						
						case 1:
							*uParam3 = { 210.822f, -1852.92f, 30.227f };
							*uParam4 = 147.198f;
							break;
						
						case 2:
							*uParam3 = { 213.542f, -1863.377f, 29.868f };
							*uParam4 = 73.798f;
							break;
						
						case 3:
							*uParam3 = { 187.418f, -1848.222f, 26.214f };
							*uParam4 = 70.395f;
							break;
						
						case 4:
							*uParam3 = { 198.461f, -1850.026f, 26.203f };
							*uParam4 = 25.199f;
							break;
						
						case 5:
							*uParam3 = { 197.197f, -1849.019f, 26.202f };
							*uParam4 = 230.998f;
							break;
						
						case 6:
							*uParam3 = { 203.577f, -1857.985f, 26.199f };
							*uParam4 = 276.997f;
							break;
						
						case 7:
							*uParam3 = { 204.92f, -1857.507f, 26.202f };
							*uParam4 = 100.997f;
							break;
						
						case 8:
							*uParam3 = { 201.003f, -1846.909f, 26.782f };
							*uParam4 = 135.797f;
							break;
						
						case 9:
							*uParam3 = { 195.867f, -1861.333f, 25.992f };
							*uParam4 = 211.796f;
							break;
						
						case 10:
							*uParam3 = { 196.682f, -1862.451f, 25.956f };
							*uParam4 = 22.795f;
							break;
						
						case 11:
							*uParam3 = { 196.906f, -1861.31f, 25.986f };
							*uParam4 = 115.795f;
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { -121.205f, -2524.039f, 10.163f };
							*uParam4 = 244.394f;
							break;
						
						case 1:
							*uParam3 = { -126.719f, -2530.64f, 5.101f };
							*uParam4 = 238.794f;
							break;
						
						case 2:
							*uParam3 = { -124.113f, -2539.853f, 5f };
							*uParam4 = 320.393f;
							break;
						
						case 3:
							*uParam3 = { -120.04f, -2534.844f, 5f };
							*uParam4 = 349.393f;
							break;
						
						case 4:
							*uParam3 = { -119.924f, -2533.226f, 5f };
							*uParam4 = 177.792f;
							break;
						
						case 5:
							*uParam3 = { -111.366f, -2535.092f, 5f };
							*uParam4 = 98.392f;
							break;
						
						case 6:
							*uParam3 = { -112.818f, -2535.893f, 5f };
							*uParam4 = 299.791f;
							break;
						
						case 7:
							*uParam3 = { -112.55f, -2534.624f, 5f };
							*uParam4 = 229.591f;
							break;
						
						case 8:
							*uParam3 = { -113.497f, -2525.293f, 5f };
							*uParam4 = 64.991f;
							break;
						
						case 9:
							*uParam3 = { -114.768f, -2524.708f, 5f };
							*uParam4 = 244.391f;
							break;
						
						case 10:
							*uParam3 = { -116.469f, -2516.152f, 5.101f };
							*uParam4 = 236.191f;
							break;
						
						case 11:
							*uParam3 = { -107.198f, -2524.363f, 5f };
							*uParam4 = 146.989f;
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 735.631f, -550.341f, 25.78f };
							*uParam4 = 189.398f;
							break;
						
						case 1:
							*uParam3 = { 736.114f, -551.628f, 25.829f };
							*uParam4 = 14.598f;
							break;
						
						case 2:
							*uParam3 = { 736.386f, -543.442f, 25.76f };
							*uParam4 = 345.998f;
							break;
						
						case 3:
							*uParam3 = { 744.721f, -538.123f, 26.769f };
							*uParam4 = 70.995f;
							break;
						
						case 4:
							*uParam3 = { 743.887f, -540.01f, 26.767f };
							*uParam4 = 70.995f;
							break;
						
						case 5:
							*uParam3 = { 719.41f, -568.908f, 25.187f };
							*uParam4 = 189.795f;
							break;
						
						case 6:
							*uParam3 = { 733.716f, -536.957f, 25.875f };
							*uParam4 = 320.799f;
							break;
						
						case 7:
							*uParam3 = { 734.63f, -536.041f, 25.899f };
							*uParam4 = 138.999f;
							break;
						
						case 8:
							*uParam3 = { 724.107f, -554.27f, 25.452f };
							*uParam4 = 65.797f;
							break;
						
						case 9:
							*uParam3 = { 723.424f, -553.453f, 25.467f };
							*uParam4 = 209.797f;
							break;
						
						case 10:
							*uParam3 = { 722.935f, -554.544f, 25.441f };
							*uParam4 = 292.597f;
							break;
						
						case 11:
							*uParam3 = { 729.489f, -559.353f, 25.528f };
							*uParam4 = 302.798f;
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 1699.765f, 3308.678f, 40.165f };
							*uParam4 = 224.199f;
							break;
						
						case 1:
							*uParam3 = { 1691.739f, 3314.095f, 40.289f };
							*uParam4 = 211f;
							break;
						
						case 2:
							*uParam3 = { 1704.327f, 3298.056f, 40.148f };
							*uParam4 = 218.599f;
							break;
						
						case 3:
							*uParam3 = { 1700.27f, 3286.583f, 47.9222f };
							*uParam4 = 213.5996f;
							break;
						
						case 4:
							*uParam3 = { 1683.003f, 3298.337f, 40.0738f };
							*uParam4 = 87.5995f;
							break;
						
						case 5:
							*uParam3 = { 1699.669f, 3295.85f, 47.9142f };
							*uParam4 = 35.399f;
							break;
						
						case 6:
							*uParam3 = { 1691.079f, 3308.635f, 40.146f };
							*uParam4 = 196.398f;
							break;
						
						case 7:
							*uParam3 = { 1696.84f, 3300.881f, 40.1483f };
							*uParam4 = 333.9979f;
							break;
						
						case 8:
							*uParam3 = { 1697.442f, 3302.246f, 40.1493f };
							*uParam4 = 150.3984f;
							break;
						
						case 9:
							*uParam3 = { 1697.56f, 3317.821f, 40.3237f };
							*uParam4 = 152.5993f;
							break;
						
						case 10:
							*uParam3 = { 1710.475f, 3304.439f, 40.17f };
							*uParam4 = 234.599f;
							break;
						
						case 11:
							*uParam3 = { 1711.603f, 3303.708f, 40.177f };
							*uParam4 = 62.399f;
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 1352.366f, -1858.514f, 55.6553f };
							*uParam4 = 286.7989f;
							break;
						
						case 1:
							*uParam3 = { 1354.217f, -1858.099f, 55.658f };
							*uParam4 = 101.5978f;
							break;
						
						case 2:
							*uParam3 = { 1369.075f, -1860.761f, 55.851f };
							*uParam4 = 139.598f;
							break;
						
						case 3:
							*uParam3 = { 1366.48f, -1864.806f, 55.6665f };
							*uParam4 = 137.798f;
							break;
						
						case 4:
							*uParam3 = { 1365.218f, -1866.121f, 55.6698f };
							*uParam4 = 317.197f;
							break;
						
						case 5:
							*uParam3 = { 1357.806f, -1866.451f, 55.608f };
							*uParam4 = 323.796f;
							break;
						
						case 6:
							*uParam3 = { 1349.725f, -1845.469f, 56.11f };
							*uParam4 = 33.7966f;
							break;
						
						case 7:
							*uParam3 = { 1363.495f, -1851.674f, 56.108f };
							*uParam4 = 22.599f;
							break;
						
						case 8:
							*uParam3 = { 1369.954f, -1875.707f, 55.966f };
							*uParam4 = 44.996f;
							break;
						
						case 9:
							*uParam3 = { 1370.728f, -1847.641f, 58.528f };
							*uParam4 = 96.996f;
							break;
						
						case 10:
							*uParam3 = { 1373.99f, -1860.58f, 56.282f };
							*uParam4 = 181.996f;
							break;
						
						case 11:
							*uParam3 = { 1374.041f, -1861.811f, 56.28f };
							*uParam4 = 10.795f;
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 747.367f, -1851.607f, 28.292f };
							*uParam4 = 174.999f;
							break;
						
						case 1:
							*uParam3 = { 755.7421f, -1842.626f, 28.2916f };
							*uParam4 = 82.3999f;
							break;
						
						case 2:
							*uParam3 = { 737.1559f, -1851.976f, 28.2916f };
							*uParam4 = 58.3986f;
							break;
						
						case 3:
							*uParam3 = { 746.2255f, -1858.017f, 28.2916f };
							*uParam4 = 211.5981f;
							break;
						
						case 4:
							*uParam3 = { 753.713f, -1852.042f, 28.2916f };
							*uParam4 = 195.3977f;
							break;
						
						case 5:
							*uParam3 = { 735.6103f, -1851.14f, 28.2916f };
							*uParam4 = 232.398f;
							break;
						
						case 6:
							*uParam3 = { 730.2368f, -1873.99f, 28.2915f };
							*uParam4 = 1.3979f;
							break;
						
						case 7:
							*uParam3 = { 750.533f, -1870.497f, 28.292f };
							*uParam4 = 246.399f;
							break;
						
						case 8:
							*uParam3 = { 750.863f, -1874.042f, 28.292f };
							*uParam4 = 267.998f;
							break;
						
						case 9:
							*uParam3 = { 740.428f, -1843.7f, 28.292f };
							*uParam4 = 282.599f;
							break;
						
						case 10:
							*uParam3 = { 747.7684f, -1830.837f, 28.2916f };
							*uParam4 = 267.598f;
							break;
						
						case 11:
							*uParam3 = { 747.1207f, -1859.341f, 28.2918f };
							*uParam4 = 39.3984f;
							break;
					}
					break;
			}
			break;
	}
}

var func_390()
{
	if (Local_239.f_702 != -1)
	{
		return Local_239.f_702;
	}
	Local_239.f_702 = unk_0x5853B15F78E1A265(0, 3);
	return Local_239.f_702;
}

void func_391()
{
	int iVar0;
	struct<8> Var1;
	
	if (Local_239.f_703 == 1)
	{
		iVar0 = func_140(1, Local_239.f_704);
	}
	if (Local_239.f_703 == 1)
	{
		if (Local_239.f_878.f_44.f_1 != iVar0)
		{
			Local_239.f_878.f_44.f_1 = iVar0;
		}
		if (!unk_0xE2D0C323A1AE5D85(Local_239.f_878.f_20, 2))
		{
			if (!unk_0x90F6E2F6488B98BA(Local_239.f_878[0]))
			{
				if (func_33(Local_239.f_691[0 /*5*/], 0f, 0f, 0f, 0))
				{
					if (unk_0x90F6E2F6488B98BA(Local_239.f_719[0]))
					{
						if (!func_136(Local_239.f_719[0]))
						{
							Local_239.f_931 = 1;
							Local_239.f_691[0 /*5*/] = { unk_0x6B62510F212526DC(unk_0xA5677134B9672173(Local_239.f_719[0]), 1) };
							Local_239.f_691[0 /*5*/].f_2 = (Local_239.f_691[0 /*5*/].f_2 + 1f);
						}
					}
				}
				if (!func_33(Local_239.f_691[0 /*5*/], 0f, 0f, 0f, 0))
				{
					unk_0x8FB472886552D737("P_cargo_chute_S");
					if (func_395(&(Local_239.f_878), Local_239.f_691[0 /*5*/], 0))
					{
						unk_0xCED9E32812D6C7C7(&(Local_239.f_878.f_20), 2);
						if (!func_3(13))
						{
							func_106(13);
						}
					}
				}
			}
		}
		if (Local_239.f_931 > 0)
		{
			Var1 = Local_239.f_931;
			Var1.f_2 = 556;
			Var1.f_5 = { func_381() };
			Var1.f_4 = 2;
			Var1.f_3 = 1;
			func_393(&(Local_239.f_878), Var1);
			if (!func_3(17))
			{
				if (unk_0xE2D0C323A1AE5D85(Local_239.f_878.f_20, 2))
				{
					if (func_392(&(Local_239.f_878)))
					{
						func_106(17);
					}
				}
			}
		}
	}
}

bool func_392(var uParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	iVar0 = uParam0->f_44;
	if (iVar0 == 0)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_126(uParam0, iVar1, &uVar2))
		{
			iVar3++;
		}
		iVar1++;
	}
	return iVar3 == iVar0;
}

void func_393(var uParam0, struct<6> Param1, var uParam2, var uParam3)
{
	func_394(uParam0);
	if (uParam0->f_44 != Param1)
	{
		uParam0->f_44 = Param1;
	}
	if (uParam0->f_44.f_1 != Param1.f_1)
	{
		uParam0->f_44.f_1 = Param1.f_1;
	}
	if (uParam0->f_44.f_2 != Param1.f_2)
	{
		uParam0->f_44.f_2 = Param1.f_2;
	}
	if (uParam0->f_44.f_4 != Param1.f_4)
	{
		uParam0->f_44.f_4 = Param1.f_4;
	}
	if (!func_33(uParam0->f_44.f_5, Param1.f_5, 0))
	{
		if (!func_33(Param1.f_5, 0f, 0f, 0f, 0))
		{
			uParam0->f_44.f_5 = { Param1.f_5 };
		}
	}
	if (Param1.f_3 == 1)
	{
		if (!unk_0xE2D0C323A1AE5D85(uParam0->f_20, 3))
		{
			unk_0xCED9E32812D6C7C7(&(uParam0->f_20), 3);
		}
	}
}

void func_394(var uParam0)
{
	int iVar0;
	
	if (!unk_0xE2D0C323A1AE5D85(uParam0->f_20, 1))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			uParam0->f_5[iVar0] = -1;
			uParam0->f_10[iVar0] = -1;
			uParam0->f_15[iVar0] = -1;
			iVar0++;
		}
		unk_0xCED9E32812D6C7C7(&(uParam0->f_20), 1);
	}
}

int func_395(var uParam0, struct<3> Param1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0->f_44.f_1;
	iVar1 = joaat("p_cargo_chute_s");
	if (!unk_0xCCDCD6672DAE6835((*uParam0)[iParam2]))
	{
		if (iVar0 != 0)
		{
			unk_0xD69A0C3662175E68(iVar0);
			unk_0xD69A0C3662175E68(iVar1);
			if (unk_0x0152AA00FA3130F1(iVar0))
			{
				if (unk_0x853FFA3D0A54864F(2))
				{
					(*uParam0)[iParam2] = unk_0x2D0F5291E9305922(unk_0x9431D28BFC30340B(joaat("pickup_portable_crate_unfixed_incar"), Param1, 0, iVar0));
					unk_0x4C6E9D70687FCDCE((*uParam0)[iParam2], 1);
					unk_0x9210F85E9CD785F1(unk_0xE8BBC6CC2C60F24A((*uParam0)[iParam2]), 1);
					unk_0xF160248D9083ED0C(unk_0xE8BBC6CC2C60F24A((*uParam0)[iParam2]), 50, 0);
					unk_0x0321BBB2A2B3B1ED(unk_0xE8BBC6CC2C60F24A((*uParam0)[iParam2]), 1);
					unk_0xE987EFB3B3FAB187(unk_0xE8BBC6CC2C60F24A((*uParam0)[iParam2]), 1);
					unk_0x398C962F550CF3B4(unk_0xE8BBC6CC2C60F24A((*uParam0)[iParam2]), 1);
					unk_0xAA8C46C452582702(unk_0xE8BBC6CC2C60F24A((*uParam0)[iParam2]));
					unk_0xB96633932C330B51(unk_0xE8BBC6CC2C60F24A((*uParam0)[iParam2]), 0f, 0f, -0.2f);
					unk_0x8175B06ED630A82A(unk_0xE8BBC6CC2C60F24A((*uParam0)[iParam2]), 1, 0);
					unk_0xBED097BB6359F09C(unk_0xE8BBC6CC2C60F24A((*uParam0)[iParam2]), 1, 1, 0, 1, 1, 1, 1, 0);
					unk_0x7A93DEA53EFC3CF2(unk_0xE8BBC6CC2C60F24A((*uParam0)[iParam2]), 1200);
					unk_0x6DA15DE1822B4027(unk_0xF2D8DACFAEBD9629((*uParam0)[iParam2]), 1);
					unk_0x006574E87E6F1942(unk_0xF2D8DACFAEBD9629((*uParam0)[iParam2]), 1, 1);
				}
			}
		}
	}
	if (unk_0xCCDCD6672DAE6835((*uParam0)[iParam2]))
	{
		if (!unk_0xCCDCD6672DAE6835(uParam0->f_30[iParam2]))
		{
			if (unk_0x0152AA00FA3130F1(iVar1))
			{
				if (unk_0x6F940C2636C076AD("P_cargo_chute_S"))
				{
					if (func_371(&(uParam0->f_30[iParam2]), iVar1, unk_0x6B62510F212526DC(unk_0xE8BBC6CC2C60F24A((*uParam0)[iParam2]), 1) + Vector(1f, 0f, 0f), 1, 1, 0, 1, 0, 0, 0))
					{
						unk_0x9A97DC6DBC7B223D(unk_0xE8BBC6CC2C60F24A(uParam0->f_30[iParam2]), unk_0xE8BBC6CC2C60F24A((*uParam0)[iParam2]), 0, 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						unk_0xE987EFB3B3FAB187(unk_0xE8BBC6CC2C60F24A(uParam0->f_30[iParam2]), 1);
						unk_0x398C962F550CF3B4(unk_0xE8BBC6CC2C60F24A(uParam0->f_30[iParam2]), 0);
						unk_0xF07805FFBF204ED8(unk_0xE8BBC6CC2C60F24A(uParam0->f_30[iParam2]), "P_cargo_chute_S_deploy", "P_cargo_chute_S", 1000f, 0, 0, 0, 0, 0);
						unk_0xEC5CB2A3F2052039(unk_0xE8BBC6CC2C60F24A(uParam0->f_30[iParam2]));
						unk_0x7A93DEA53EFC3CF2(unk_0xE8BBC6CC2C60F24A(uParam0->f_30[iParam2]), 1200);
						func_71(&(uParam0->f_21[iParam2 /*2*/]));
					}
				}
			}
		}
	}
	if (unk_0xCCDCD6672DAE6835((*uParam0)[iParam2]) && unk_0xCCDCD6672DAE6835(uParam0->f_30[iParam2]))
	{
		return 1;
	}
	return 0;
}

int func_396(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_397(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x54E30A65F4FA4962())
		{
			func_104(uParam0, 0, 0);
		}
	}
}

void func_398()
{
	func_411();
	if (unk_0xE2D0C323A1AE5D85(iLocal_331, 9))
	{
		return;
	}
	if (!unk_0xE2D0C323A1AE5D85(iLocal_331, 0))
	{
		unk_0x6CE6C3A402C3E20C("DisableFlightMusic", 1);
		unk_0x6CE6C3A402C3E20C("WantedMusicDisabled", 1);
		unk_0xCED9E32812D6C7C7(&iLocal_331, 0);
	}
	switch (Local_239.f_703)
	{
		case 1:
			func_410();
			break;
	}
	if (func_105(&(Local_239.f_804)))
	{
		func_399((func_12() - func_131(&(Local_239.f_804), 0, 0)), func_10(), &uLocal_369, -1);
	}
}

void func_399(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 == -1)
	{
		if (!func_408(unk_0x9E2D6C50374FCFA9()))
		{
			return;
		}
	}
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		func_407(uParam2);
		return;
	}
	iVar1 = func_406(unk_0x9E2D6C50374FCFA9());
	if (iParam3 != -1)
	{
		iVar1 = iParam3;
	}
	if (unk_0x3C57C2F07FEE34D2(func_405(iVar1), "IE_PRE_COUNTDOWN_STOP"))
	{
		iVar0 = 35000;
	}
	else
	{
		iVar0 = 40000;
	}
	if (uParam2->f_1 > -1)
	{
		iVar0 = uParam2->f_1;
	}
	if (!unk_0xE2D0C323A1AE5D85(*uParam2, 0))
	{
		if (iParam0 <= iVar0)
		{
			if (unk_0x1CF3F44FC2EB9F99(func_405(iVar1)))
			{
				unk_0xCED9E32812D6C7C7(uParam2, 0);
				unk_0xCED9E32812D6C7C7(uParam2, 1);
			}
		}
	}
	if (unk_0xE2D0C323A1AE5D85(*uParam2, 1))
	{
		if (iParam0 <= 30000)
		{
			if (!unk_0xE2D0C323A1AE5D85(*uParam2, 2))
			{
				if (unk_0x63B063064DC08617(func_404(iVar1)))
				{
					unk_0x6CE6C3A402C3E20C("AllowScoreAndRadio", 1);
					unk_0xB68BD12B3A8C52FD(0);
					unk_0xCED9E32812D6C7C7(uParam2, 2);
				}
			}
			if (!unk_0xE2D0C323A1AE5D85(*uParam2, 3))
			{
				if (unk_0x1CF3F44FC2EB9F99(func_403(iVar1)))
				{
					unk_0xCED9E32812D6C7C7(uParam2, 3);
				}
			}
			if (unk_0xE2D0C323A1AE5D85(*uParam2, 3))
			{
				if (iParam0 <= 27000)
				{
					if (!unk_0xE2D0C323A1AE5D85(*uParam2, 4))
					{
						unk_0xB68BD12B3A8C52FD(1);
						unk_0x6CE6C3A402C3E20C("AllowScoreAndRadio", 0);
						unk_0xCED9E32812D6C7C7(uParam2, 4);
					}
					if (iParam0 <= 5000 && func_402(iVar1))
					{
						if (!unk_0xE2D0C323A1AE5D85(*uParam2, 8))
						{
							unk_0x91DFC8F68F6D9B05(-1, "5s", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
							unk_0xCED9E32812D6C7C7(uParam2, 8);
						}
					}
					if (iParam0 <= 500)
					{
						if (unk_0x1CF3F44FC2EB9F99(func_400(iVar1)))
						{
							unk_0x0709E99F1DDFFF26(func_404(iVar1));
							unk_0xB0550BC91B0159D6(uParam2, 1);
						}
					}
				}
			}
		}
	}
}

char* func_400(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
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
		case 236:
		case 243:
		case 150:
		case 158:
		case 256:
		case 258:
			return "IE_FADE_IN_RADIO";
		
		default:
	}
	if (func_401(iParam0) != -1)
	{
		return "IE_FADE_IN_RADIO";
	}
	return "FM_COUNTDOWN_30S_FIRA";
}

int func_401(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 1;
		
		case 24:
			return 2;
		
		case 26:
			return 2;
		
		case 256:
			return 0;
		
		case 258:
			return 0;
		
		case 259:
			return 2;
		
		case 271:
			return 0;
		
		case 273:
			return 2;
		
		case 276:
			return 0;
		
		case 277:
			return 0;
		
		case 262:
			return 0;
		
		case 263:
			return 0;
		
		case 264:
			return 0;
		
		case 268:
			return 2;
		
		case 269:
			return 2;
		
		case 270:
			return 2;
		
		case 275:
			return 2;
		
		default:
	}
	return -1;
}

int func_402(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 1;
		
		default:
	}
	return 0;
}

char* func_403(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
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
		case 236:
		case 150:
		case 243:
		case 158:
		case 256:
		case 258:
			return "IE_COUNTDOWN_30S";
		
		default:
	}
	if (func_401(iParam0) != -1)
	{
		return "IE_COUNTDOWN_30S";
	}
	return "FM_COUNTDOWN_30S";
}

char* func_404(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
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
		case 236:
		case 150:
		case 243:
		case 158:
		case 256:
		case 258:
			return "IE_COUNTDOWN_30S_KILL";
		
		default:
	}
	if (func_401(iParam0) != -1)
	{
		return "IE_COUNTDOWN_30S_KILL";
	}
	return "FM_COUNTDOWN_30S_KILL";
}

char* func_405(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
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
		case 236:
		case 150:
		case 243:
		case 158:
		case 256:
		case 258:
			return "IE_PRE_COUNTDOWN_STOP";
		
		default:
	}
	if (func_401(iParam0) != -1)
	{
		return "IE_PRE_COUNTDOWN_STOP";
	}
	return "FM_PRE_COUNTDOWN_30S";
}

int func_406(int iParam0)
{
	if (func_253(iParam0, 0))
	{
		return Global_1893548[iParam0 /*600*/].f_11.f_33;
	}
	return -1;
}

void func_407(var uParam0)
{
	int iVar0;
	
	iVar0 = func_406(unk_0x9E2D6C50374FCFA9());
	if (unk_0xE2D0C323A1AE5D85(*uParam0, 1))
	{
		if (!unk_0xE2D0C323A1AE5D85(*uParam0, 5))
		{
			if (unk_0xE2D0C323A1AE5D85(*uParam0, 2))
			{
				if (!unk_0xE2D0C323A1AE5D85(*uParam0, 4))
				{
					unk_0xB68BD12B3A8C52FD(1);
					unk_0x6CE6C3A402C3E20C("AllowScoreAndRadio", 0);
				}
			}
			if (!unk_0xE2D0C323A1AE5D85(*uParam0, 6))
			{
				if (unk_0x1CF3F44FC2EB9F99(func_404(iVar0)))
				{
					unk_0xCED9E32812D6C7C7(uParam0, 6);
				}
			}
			if (unk_0xE2D0C323A1AE5D85(*uParam0, 6))
			{
				if (!unk_0xE2D0C323A1AE5D85(*uParam0, 7))
				{
					if (unk_0x1CF3F44FC2EB9F99(func_400(iVar0)))
					{
						unk_0xCED9E32812D6C7C7(uParam0, 7);
					}
				}
				if (unk_0xE2D0C323A1AE5D85(*uParam0, 7))
				{
					unk_0xCED9E32812D6C7C7(uParam0, 5);
				}
			}
		}
	}
}

bool func_408(int iParam0)
{
	return func_409(iParam0, 20);
}

bool func_409(int iParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_11.f_4, iParam1);
}

void func_410()
{
}

void func_411()
{
	if (unk_0xE2D0C323A1AE5D85(iLocal_331, 8))
	{
		if (unk_0xE2D0C323A1AE5D85(iLocal_331, 9))
		{
			if (!unk_0xE2D0C323A1AE5D85(iLocal_331, 10))
			{
				if (unk_0xE2D0C323A1AE5D85(iLocal_331, 11))
				{
					if (!unk_0xE2D0C323A1AE5D85(iLocal_331, 12))
					{
						unk_0xB68BD12B3A8C52FD(1);
						unk_0x6CE6C3A402C3E20C("AllowScoreAndRadio", 0);
					}
				}
				if (!unk_0xE2D0C323A1AE5D85(iLocal_331, 15))
				{
					if (unk_0x1CF3F44FC2EB9F99("APT_COUNTDOWN_30S_KILL"))
					{
						unk_0xCED9E32812D6C7C7(&iLocal_331, 15);
					}
				}
				if (unk_0xE2D0C323A1AE5D85(iLocal_331, 15))
				{
					if (!unk_0xE2D0C323A1AE5D85(iLocal_331, 13))
					{
						if (unk_0x1CF3F44FC2EB9F99("APT_FADE_IN_RADIO"))
						{
							unk_0xCED9E32812D6C7C7(&iLocal_331, 13);
						}
					}
					if (unk_0xE2D0C323A1AE5D85(iLocal_331, 13))
					{
						unk_0xCED9E32812D6C7C7(&iLocal_331, 10);
					}
				}
			}
		}
	}
}

void func_412()
{
	if (!func_2246())
	{
		return;
	}
	if (!unk_0xE2D0C323A1AE5D85(iLocal_329, 18))
	{
		unk_0xC0F70A3CDEC87ECE(0);
		unk_0xCED9E32812D6C7C7(&iLocal_329, 18);
	}
	if (unk_0xE2D0C323A1AE5D85(iLocal_328, 15))
	{
		unk_0xC0F70A3CDEC87ECE(3);
		unk_0xBCD99B4EDAE55BE6(unk_0x9E2D6C50374FCFA9(), 3, 0);
		unk_0xB0550BC91B0159D6(&iLocal_328, 15);
	}
}

void func_413(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
{
	int iVar0;
	int iVar1[32];
	bool bVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	struct<4> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
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
	struct<2> Var22;
	
	if (func_562(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = -1;
	iVar12 = -1;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_36 = 0;
	if (func_560() || iParam2 == 28)
	{
		if (func_504(uParam1, iParam2, uParam3, Global_1836353, 0, func_558(), sParam7))
		{
			func_503(1);
			if ((!func_501() && !func_499()) || unk_0xE2D0C323A1AE5D85(Global_2810287.f_4656, 1))
			{
				if (func_498())
				{
					func_493();
				}
				else
				{
					unk_0xA5AAB00FA8C570A4(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_492(1);
						Global_1836353 = 0;
						iVar19 = -1;
						if (Global_1836576 != 1)
						{
							func_491(uParam1, 0, 0);
							if (unk_0xE2D0C323A1AE5D85(uParam3->f_33, 7))
							{
								unk_0xB0550BC91B0159D6(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 28)
						{
							iVar17 = 0;
							while (iVar17 < 32)
							{
								iVar1[iVar17] = -1;
								iVar17++;
							}
							iVar17 = 0;
							while (iVar17 < 32)
							{
								if (func_2370(unk_0xA1087A6350CD9244(iVar17), 0, 1))
								{
									iVar3 = unk_0xA1087A6350CD9244(iVar17);
									if (!func_39(iVar3, 0))
									{
										if ((func_487(iVar3) || Global_2689156[iVar3 /*453*/].f_245 != -1) || func_237(iVar3))
										{
											iVar9 = iVar3;
											if (func_486(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_483(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_480(unk_0x9E2D6C50374FCFA9(), 0) && func_406(unk_0x9E2D6C50374FCFA9()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_479())
							{
								if (func_2370(unk_0xA1087A6350CD9244(iVar17), 0, 1))
								{
									iVar3 = unk_0xA1087A6350CD9244(iVar17);
								}
								else
								{
									iVar3 = func_24();
								}
							}
							else
							{
								iVar3 = (uParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_478(iVar3) && func_473(iVar3, iParam2)) && func_2370(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_1853128[iVar9 /*888*/].f_205.f_6;
								Var6 = { func_468(iVar3) };
								if (iVar3 == unk_0x9E2D6C50374FCFA9())
								{
									uParam3->f_35 = iVar18;
								}
								StringCopy(&(uParam3->f_1), unk_0x61042CA2A97BBB69(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_48(iVar3) };
								iVar5 = func_462(iVar3);
								sVar4 = "";
								if (iVar5 != 0)
								{
									sVar4 = unk_0xE1AFE5E1E834BBF0(iVar5);
								}
								Global_1836353++;
								if ((uParam0[iVar17 /*42*/])->f_22 != -1f)
								{
									fVar10 = (uParam0[iVar17 /*42*/])->f_22;
								}
								if ((uParam0[iVar17 /*42*/])->f_31 != -1)
								{
									iVar11 = (uParam0[iVar17 /*42*/])->f_31;
								}
								if ((uParam0[iVar17 /*42*/])->f_41 != -1)
								{
									iVar12 = (uParam0[iVar17 /*42*/])->f_41;
								}
								iVar8 = (uParam0[iVar17 /*42*/])->f_9;
								if (((uParam0[iVar17 /*42*/])->f_9 != -1 || (uParam0[iVar17 /*42*/])->f_22 != -1f) || (uParam0[iVar17 /*42*/])->f_31 != -1)
								{
									if (!func_479())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_457(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_456(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar13 = (uParam0[iVar17 /*42*/])->f_2 + 1;
									if (iVar19 != iVar13)
									{
										iVar19 = iVar13;
									}
									else
									{
										iVar13 = -2;
									}
								}
								iVar16 = func_451(iVar3, 0);
								if (bVar2)
								{
									if (func_450(iVar3, 1) && iVar1[iVar9] != -1)
									{
										iVar18 = iVar1[iVar9];
									}
									else
									{
										iVar18 = (iVar0 + iVar21);
										iVar21++;
									}
								}
								uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
								if ((uParam0[iVar17 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var22, "UW_TM", 16);
									StringIntConCat(&Var22, (uParam0[iVar17 /*42*/])->f_39, 16);
								}
								if (func_449(iParam5))
								{
									func_448(iVar3, uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								else
								{
									func_448(iVar3, uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								unk_0xCED9E32812D6C7C7(&iVar14, iVar3);
								iVar18++;
							}
							iVar17++;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							iVar3 = unk_0xA1087A6350CD9244(iVar17);
							if (func_2370(iVar3, 0, 1) && !unk_0xE2D0C323A1AE5D85(iVar14, iVar3))
							{
								iVar3 = unk_0xA1087A6350CD9244(iVar17);
							}
							else
							{
								iVar3 = func_24();
							}
							if (func_478(iVar3))
							{
								if (func_2370(unk_0xA1087A6350CD9244(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_1853128[iVar9 /*888*/].f_205.f_6;
									Var6 = { func_468(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_48(iVar3) };
									iVar5 = func_462(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = unk_0xE1AFE5E1E834BBF0(iVar5);
									}
									Global_1836353++;
									iVar16 = func_451(iVar3, 1);
									if (bVar2)
									{
										if (func_450(iVar3, 1))
										{
											iVar18 = iVar1[iVar17];
										}
										else
										{
											iVar18 = (iVar0 + iVar21);
											iVar21++;
										}
									}
									uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
									func_426(iVar3, unk_0x61042CA2A97BBB69(iVar3), uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (unk_0xE2D0C323A1AE5D85(uParam3->f_33, 11))
						{
							func_423(uParam3, uParam1, iParam2);
						}
						func_71(&(uParam3->f_21));
						func_422();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xE2D0C323A1AE5D85(uParam3->f_33, 7))
						{
							func_421(uParam3, uParam1);
							func_420(uParam1, 0, 1);
							unk_0xCED9E32812D6C7C7(&(uParam3->f_33), 7);
						}
						func_421(uParam3, uParam1);
						if (!unk_0xE2D0C323A1AE5D85(uParam3->f_33, 11))
						{
							unk_0xCED9E32812D6C7C7(&(uParam3->f_33), 11);
						}
						if (func_416(uParam3))
						{
							Global_1836576 = 1;
						}
						func_414(uParam3);
						if (Global_1836576 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1836576 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x0347CCBD719C8ADC(*uParam1))
					{
						unk_0x2E04B7B46A3670E5(7);
						unk_0x694170BB080C08FF(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x2E04B7B46A3670E5(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_422();
			func_492(0);
			if (unk_0xE2D0C323A1AE5D85(uParam3->f_33, 7))
			{
				unk_0xB0550BC91B0159D6(&(uParam3->f_33), 7);
			}
			if (unk_0xE2D0C323A1AE5D85(uParam3->f_33, 10))
			{
				unk_0xB0550BC91B0159D6(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0xB5A50A903B9AB61B();
}

void func_414(var uParam0)
{
	if (!func_105(&(uParam0->f_21)))
	{
		func_104(&(uParam0->f_21), 0, 0);
	}
	else if (func_103(&(uParam0->f_21), 250, 0))
	{
		func_71(&(uParam0->f_21));
		func_415(0);
	}
}

void func_415(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1836576 != 2)
		{
			Global_1836576 = 2;
		}
	}
	else
	{
		switch (Global_1836576)
		{
			case 0:
				Global_1836576 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_416(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_37;
	iVar3 = unk_0xA1087A6350CD9244(uParam0->f_37);
	if (iVar3 != func_24() && func_2370(iVar3, 0, 1))
	{
		Var2 = { func_48(iVar3) };
		iVar1 = func_419(uParam0, uParam0->f_37);
		if (func_418(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x5B54656F67F47385(&Var2))
					{
						if (unk_0x073CB74794BA9B10(&Var2))
						{
							iVar4 = 1;
							func_417(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x5AC8E3AF6B0E9458(&Var2))
					{
						iVar4 = 1;
						func_417(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x5B54656F67F47385(&Var2))
					{
						if (!unk_0x073CB74794BA9B10(&Var2))
						{
							iVar4 = 1;
							func_417(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_417(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x5B54656F67F47385(&Var2))
					{
						if (!unk_0x5AC8E3AF6B0E9458(&Var2))
						{
							iVar4 = 1;
							func_417(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x5AC8E3AF6B0E9458(&Var2))
					{
						iVar4 = 1;
						func_417(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar4;
}

void func_417(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_418(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x66237ABAFDF8615A(&uParam0, 13);
}

var func_419(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_420(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xEA5DEA46C3EE64D3(*uParam0, "COLLAPSE"))
	{
		unk_0xD7D6BA6E36AEC182(iParam1);
		unk_0x6F06CF0E9AB02847();
	}
	if (iParam2 == 1)
	{
		if (unk_0xEA5DEA46C3EE64D3(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0x6F06CF0E9AB02847();
		}
	}
}

void func_421(var uParam0, var uParam1)
{
	if (!unk_0xE2D0C323A1AE5D85(uParam0->f_33, 10))
	{
		unk_0xEA5DEA46C3EE64D3(*uParam1, "SET_HIGHLIGHT");
		unk_0x4F47E317C74C543B(uParam0->f_35);
		unk_0x6F06CF0E9AB02847();
		unk_0xCED9E32812D6C7C7(&(uParam0->f_33), 10);
	}
}

void func_422()
{
	if (Global_1836576 != 0)
	{
		Global_1836576 = 0;
	}
}

void func_423(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0xA1087A6350CD9244(iVar0);
		if (iVar2 != func_24())
		{
			if (func_2370(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_425(uParam0->f_38[iVar0 /*2*/], 0, iParam2);
					func_424(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1853128[iVar0 /*888*/].f_205.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_424(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x0347CCBD719C8ADC(*uParam0))
	{
		if (unk_0xEA5DEA46C3EE64D3(*uParam0, "SET_ICON"))
		{
			unk_0x4F47E317C74C543B(iParam1);
			unk_0x4F47E317C74C543B(iParam2);
			if (iParam2 == 65)
			{
				unk_0x4F47E317C74C543B(iParam3);
			}
			unk_0x6F06CF0E9AB02847();
		}
	}
}

int func_425(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 65;
	switch (iParam2)
	{
		case 21:
			iVar0 = 0;
			break;
	}
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_426(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_447() && iParam4 < func_446())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1836355)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1836576 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xEA5DEA46C3EE64D3(*uParam2, sVar1))
		{
			unk_0x4F47E317C74C543B(iParam4);
			if (unk_0xE2D0C323A1AE5D85(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_445("");
			}
			else
			{
				unk_0x4F47E317C74C543B(iParam10);
			}
			func_445(sParam1);
			unk_0x4F47E317C74C543B(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_445("");
			}
			else
			{
				unk_0x4F47E317C74C543B(65);
			}
			unk_0x4F47E317C74C543B(-1);
			func_445("");
			if (uParam3->f_108 == 6)
			{
				func_445("");
			}
			else
			{
				func_445(&sParam5);
			}
			func_431(uParam3, iParam0);
			unk_0x35395E05C7DB18D0(sParam9);
			unk_0x35395E05C7DB18D0(sParam9);
			if (func_430(uParam3))
			{
				func_429("DPAD_FRIEND");
			}
			else if (func_428(uParam3))
			{
				func_429("DPAD_FRIEND");
			}
			else if (func_427(uParam3))
			{
				func_429("DPAD_CREW");
			}
			else
			{
				func_429("");
			}
			unk_0x6F06CF0E9AB02847();
		}
	}
}

bool func_427(var uParam0)
{
	return unk_0xE2D0C323A1AE5D85(uParam0->f_33, 6);
}

bool func_428(var uParam0)
{
	return unk_0xE2D0C323A1AE5D85(uParam0->f_33, 5);
}

void func_429(char* sParam0)
{
	unk_0x4ADC8B166E139423(sParam0);
	unk_0xD1D4F8D5470AFA4C();
}

int func_430(var uParam0)
{
	if (func_428(uParam0) && func_427(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_431(var uParam0, int iParam1)
{
	if (func_444(iParam1))
	{
		unk_0x4F47E317C74C543B(121);
	}
	else if (func_435(iParam1))
	{
		unk_0x4F47E317C74C543B(122);
	}
	else if (((unk_0xE2D0C323A1AE5D85(Global_4718592.f_27, 15) && iParam1 > -1) && iParam1 < 32) && unk_0xE2D0C323A1AE5D85(Global_2689156[iParam1 /*453*/].f_426, 0))
	{
		unk_0x4F47E317C74C543B(123);
	}
	else
	{
		if (func_432())
		{
			uParam0->f_36 = 0;
		}
		unk_0xD7D6BA6E36AEC182(uParam0->f_36);
	}
}

int func_432()
{
	if (unk_0x44859561F653DD4E())
	{
		if (func_433() || func_348())
		{
			return 1;
		}
	}
	return 0;
}

bool func_433()
{
	if (unk_0x44859561F653DD4E())
	{
		return func_348();
	}
	return func_434(Global_4718592.f_86750);
}

int func_434(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4993[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_435(int iParam0)
{
	if ((func_2370(iParam0, 0, 1) && func_439()) && func_436(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_436(int iParam0, bool bParam1)
{
	return func_437(iParam0, bParam1, 1);
}

int func_437(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_24())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_438(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1893548[iParam0 /*600*/].f_11;
	if (iVar0 != func_24() && Global_1893548[iVar0 /*600*/].f_11.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_438(int iParam0, int iParam1)
{
	if (iParam0 != func_24())
	{
		if (Global_1893548[iParam0 /*600*/].f_11 != func_24())
		{
			if (Global_1893548[iParam0 /*600*/].f_11 == iParam0 && Global_1893548[iParam0 /*600*/].f_11.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_439()
{
	if (func_254(unk_0x9E2D6C50374FCFA9()) || func_443())
	{
		if (!func_440(unk_0x9E2D6C50374FCFA9()))
		{
			return 0;
		}
	}
	return 1;
}

int func_440(int iParam0)
{
	if (func_442(iParam0) == 236 || func_442(iParam0) == 150)
	{
		return func_441(iParam0);
	}
	return 0;
}

int func_441(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xE2D0C323A1AE5D85(Global_1893548[iVar0 /*600*/].f_1, 7);
	}
	return 0;
}

int func_442(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1893548[iVar0 /*600*/];
	}
	return -1;
}

int func_443()
{
	switch (func_406(unk_0x9E2D6C50374FCFA9()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_444(int iParam0)
{
	if (func_432())
	{
		if (func_2370(iParam0, 0, 1))
		{
			return func_486(iParam0);
		}
	}
	if ((func_2370(iParam0, 0, 1) && func_439()) && func_438(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_445(char* sParam0)
{
	unk_0x341872E4D54CD053(sParam0);
}

int func_446()
{
	int iVar0;
	
	if (Global_1836355)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_447()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1836355)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_448(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_447() && iParam3 < func_446())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1836355)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1836576 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x0347CCBD719C8ADC(*uParam1))
		{
			if (unk_0xEA5DEA46C3EE64D3(*uParam1, sVar1))
			{
				unk_0x4F47E317C74C543B(iParam3);
				if (unk_0xE2D0C323A1AE5D85(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_445("");
				}
				else
				{
					unk_0x4F47E317C74C543B(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0xACC32B78196FBC2A(sParam16))
				{
					func_429(sParam16);
				}
				else
				{
					func_445(&(uParam2->f_1));
				}
				unk_0x4F47E317C74C543B(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_445("");
				}
				else
				{
					unk_0x4F47E317C74C543B(65);
				}
				if (iParam12 == 1)
				{
					unk_0x4F47E317C74C543B(iVar0);
				}
				else
				{
					unk_0x4F47E317C74C543B(-1);
				}
				if (func_479())
				{
					func_445("");
				}
				else if (uParam2->f_108 == 6 && !unk_0xACC32B78196FBC2A(sParam16))
				{
					unk_0x4ADC8B166E139423("FM_AE_ONE_INT");
					unk_0x26C23BE14F66F202(sParam16);
					unk_0x2AE954BA77A66307(iParam17);
					unk_0xD1D4F8D5470AFA4C();
				}
				else if (uParam2->f_108 == 5 && !unk_0xACC32B78196FBC2A(sParam16))
				{
					unk_0x4ADC8B166E139423("FM_AE_ONE_INT");
					unk_0x26C23BE14F66F202(sParam16);
					unk_0x2AE954BA77A66307(iParam17);
					unk_0xD1D4F8D5470AFA4C();
				}
				else if (uParam2->f_108 == 7 && !unk_0xACC32B78196FBC2A(sParam16))
				{
					unk_0x4ADC8B166E139423("FM_AE_TWO_INT");
					unk_0x26C23BE14F66F202(sParam16);
					unk_0x2AE954BA77A66307(iParam17);
					unk_0xD1D4F8D5470AFA4C();
				}
				else if (uParam2->f_108 == 8 && !unk_0xACC32B78196FBC2A(&(uParam2->f_104)))
				{
					unk_0x4ADC8B166E139423("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x957E514A6E999374(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0x2AE954BA77A66307(iParam10);
					}
					unk_0x26C23BE14F66F202(&(uParam2->f_104));
					unk_0xD1D4F8D5470AFA4C();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0x4ADC8B166E139423("FM_AE_CASH");
					unk_0x3788872A07BA04B3(iParam10, 1);
					unk_0xD1D4F8D5470AFA4C();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0x4ADC8B166E139423("FM_AE_CASH");
						unk_0x3788872A07BA04B3(iParam10, 1);
						unk_0xD1D4F8D5470AFA4C();
					}
					else
					{
						unk_0x4ADC8B166E139423("FM_NG_CASH");
						unk_0x3788872A07BA04B3(iParam10, 1);
						unk_0xD1D4F8D5470AFA4C();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0xACC32B78196FBC2A(&(uParam2->f_104)))
					{
						func_429(&(uParam2->f_104));
					}
					else
					{
						func_445("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x4ADC8B166E139423("STRING");
					unk_0x28594D0D61DB1278(iParam14, 6);
					unk_0xD1D4F8D5470AFA4C();
				}
				else if (fParam13 != -1f)
				{
					unk_0x4ADC8B166E139423("NUMBER");
					unk_0x957E514A6E999374(fParam13, 1);
					unk_0xD1D4F8D5470AFA4C();
				}
				else if (iParam10 != -1)
				{
					unk_0x4F47E317C74C543B(iParam10);
				}
				else
				{
					func_445("");
				}
				if (uParam2->f_108 == 6)
				{
					func_445("");
				}
				else
				{
					func_445(&sParam4);
				}
				func_431(uParam2, iParam0);
				if (iParam12 == 1 || unk_0xACC32B78196FBC2A(sParam8))
				{
					func_445("");
					func_445("");
				}
				else
				{
					unk_0x35395E05C7DB18D0(sParam8);
					unk_0x35395E05C7DB18D0(sParam8);
				}
				if (func_430(uParam2))
				{
					func_429("DPAD_FRIEND");
				}
				else if (func_428(uParam2))
				{
					func_429("DPAD_FRIEND");
				}
				else if (func_427(uParam2))
				{
					func_429("DPAD_CREW");
				}
				else
				{
					func_429("");
				}
				unk_0x6F06CF0E9AB02847();
			}
		}
	}
}

int func_449(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

bool func_450(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_486(iParam0))
		{
			return 0;
		}
	}
	return Global_1893548[iParam0 /*600*/].f_11 != func_24();
}

int func_451(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_254(iParam0)) && !func_408(iParam0))
	{
		iVar0 = func_455();
	}
	iVar1 = func_454(iParam0);
	if (!iVar1 == -1)
	{
		return func_452(iVar1);
	}
	return iVar0;
}

int func_452(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_453(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_453(int iParam0)
{
	return Global_2680195.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_454(int iParam0)
{
	if (!iParam0 == func_24())
	{
		if (func_450(iParam0, 1))
		{
			return Global_2680195.f_818.f_11[func_23(iParam0)];
		}
	}
	return -1;
}

int func_455()
{
	return 21;
}

char* func_456(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x70350E94345B6F7B())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (unk_0x70350E94345B6F7B())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_457(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_461(iParam3))
	{
		*fParam1 = (func_458(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_449(iParam3))
	{
		*fParam1 = (func_458(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_458(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x70350E94345B6F7B())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_460(to_float(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x70350E94345B6F7B())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_459(to_float(iParam1));
			}
			break;
	}
	return to_float(iParam1);
}

float func_459(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_460(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_461(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_462(int iParam0)
{
	int iVar0;
	
	iVar0 = func_465(iParam0);
	if (iVar0 == -1)
	{
		func_463(iParam0, 1);
		return 0;
	}
	Global_1656652[iVar0 /*5*/].f_4 = 1;
	return Global_1656652[iVar0 /*5*/].f_2;
}

void func_463(int iParam0, bool bParam1)
{
	if (!func_2370(iParam0, 0, 1))
	{
		return;
	}
	if (func_465(iParam0) != -1)
	{
		return;
	}
	if (Global_1656815)
	{
		if (iParam0 == Global_1656815.f_1)
		{
			return;
		}
	}
	if (func_464(iParam0))
	{
		return;
	}
	if (Global_1656853 >= 32)
	{
		return;
	}
	Global_1656820[Global_1656853] = iParam0;
	Global_1656853++;
	if (bParam1)
	{
	}
}

int func_464(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1656853)
	{
		if (Global_1656820[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_465(int iParam0)
{
	int iVar0;
	
	if (!func_2370(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1656813 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1656813)
	{
		if (Global_1656652[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x87AF9112820EEC25(Global_1656652[iVar0 /*5*/].f_2) && unk_0x1B28B340344BA310(Global_1656652[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_466(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_466(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1656813)
	{
		return;
	}
	if (unk_0x87AF9112820EEC25(Global_1656652[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1656652[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, unk_0xE1AFE5E1E834BBF0(Global_1656652[iParam0 /*5*/].f_2), 64);
			unk_0x8BC4D76163FA9E13(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0x326ED9DD64134D76(Global_1656652[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1656813)
	{
		Global_1656652[iVar2 /*5*/] = { Global_1656652[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_467(&(Global_1656652[iVar2 /*5*/]));
	Global_1656813 = (Global_1656813 - 1);
}

void func_467(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_24();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x9315DBF7D972F07A())
	{
		uParam0->f_3 = unk_0x0A89FDFA763DCAED();
	}
}

struct<4> func_468(int iParam0)
{
	struct<4> Var0;
	
	if (func_2370(iParam0, 0, 1))
	{
		Global_2783300 = { func_48(iParam0) };
		if (unk_0x3EBD3AF4E5D7A08C())
		{
			if (func_418(Global_2783300))
			{
				if (!unk_0x3984FBEFE07835D4(&Global_2783300))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0x818F829545200020(0))
		{
			return Var0;
		}
		if (func_472(&Global_2783300))
		{
			Global_2783230 = { func_470(iParam0) };
			func_469(&Global_2783230, &Var0);
		}
	}
	return Var0;
}

void func_469(var uParam0, var uParam1)
{
	unk_0xAF42AF0C81B996D0(uParam0, 35, uParam1);
}

struct<35> func_470(int iParam0)
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_471(iParam0))
	{
		return Global_1575078[unk_0x9E2D6C50374FCFA9() /*35*/];
	}
	Var0 = { func_48(iParam0) };
	unk_0x4FFBF2C0D8249E45(&Var1, 35, &Var0);
	return Var1;
}

int func_471(int iParam0)
{
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		return 1;
	}
	return 0;
}

int func_472(var uParam0)
{
	if (unk_0xC65B603E7942D0DB())
	{
		if (unk_0xF453DE81BDFDAE6F() && unk_0x8C992447292D600F(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_473(int iParam0, int iParam1)
{
	if (iParam1 == 27)
	{
		if ((func_477(iParam0) || func_476(iParam0)) || func_475(iParam0))
		{
			return 0;
		}
	}
	if (!func_474(iParam0))
	{
		return 0;
	}
	if ((!func_487(iParam0) && Global_2689156[iParam0 /*453*/].f_245 == -1) && !func_237(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_474(int iParam0)
{
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_139, 22);
}

bool func_475(int iParam0)
{
	if (func_477(iParam0))
	{
		return 1;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_1, 8);
}

int func_476(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_1, 10) || unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_1, 9));
	}
	return 0;
}

bool func_477(int iParam0)
{
	return unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_1, 2);
}

int func_478(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_24())
	{
		return 0;
	}
	if (func_39(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xE2D0C323A1AE5D85(Global_1853128[iVar0 /*888*/].f_139, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_479()
{
	switch (func_406(unk_0x9E2D6C50374FCFA9()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_442(unk_0x9E2D6C50374FCFA9()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_408(unk_0x9E2D6C50374FCFA9()))
	{
		switch (func_406(unk_0x9E2D6C50374FCFA9()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (func_440(unk_0x9E2D6C50374FCFA9()))
	{
		return 1;
	}
	return 0;
}

int func_480(int iParam0, int iParam1)
{
	if (Global_1893548[iParam0 /*600*/].f_11.f_33 != -1 && func_481(Global_1893548[iParam0 /*600*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1893548[iParam0 /*600*/].f_11.f_32 != -1)
	{
		if (func_481(Global_1893548[iParam0 /*600*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_481(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_482(iParam0, 0);
	return 0;
}

int func_482(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

void func_483(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_2370(unk_0xA1087A6350CD9244(iVar0), 0, 1))
		{
			iVar1 = unk_0xA1087A6350CD9244(iVar0);
			if (!func_39(iVar1, 0))
			{
				if ((func_487(iVar1) || Global_2689156[iVar1 /*453*/].f_245 != -1) || func_237(iVar1))
				{
					if (func_484(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_484(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_24())
	{
		if (!bParam2)
		{
			if (func_485(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1893548[iParam0 /*600*/].f_11 != func_24())
		{
			return iParam1 == Global_1893548[iParam0 /*600*/].f_11;
		}
	}
	return 0;
}

int func_485(int iParam0, int iParam1)
{
	if (iParam1 != func_24())
	{
		if (iParam0 != func_24())
		{
			if (Global_1893548[iParam0 /*600*/].f_11 != func_24())
			{
				if (Global_1893548[iParam0 /*600*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_486(int iParam0)
{
	if (iParam0 != func_24())
	{
		if (Global_1893548[iParam0 /*600*/].f_11 != func_24())
		{
			return Global_1893548[iParam0 /*600*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_487(int iParam0)
{
	if (!func_2370(iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_2370(unk_0x9E2D6C50374FCFA9(), 0, 1))
	{
		return 0;
	}
	if (!func_488(iParam0))
	{
		return 0;
	}
	if ((unk_0xA9E699D3DC7C0B15(iParam0, unk_0x9E2D6C50374FCFA9()) || func_406(iParam0) == 233) || func_406(iParam0) == 271)
	{
		return 1;
	}
	return 0;
}

int func_488(int iParam0)
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = func_489(unk_0x9E2D6C50374FCFA9());
	bVar1 = func_489(iParam0);
	if ((bVar0 && !bVar1) || (!bVar0 && bVar1))
	{
		return 0;
	}
	return 1;
}

bool func_489(int iParam0)
{
	return func_490(&(Global_2689156[iParam0 /*453*/].f_435), 0);
}

bool func_490(var uParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(*uParam0, iParam1);
}

void func_491(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x0347CCBD719C8ADC(*uParam0))
	{
		unk_0xEA5DEA46C3EE64D3(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x4F47E317C74C543B(iParam1);
		unk_0x4F47E317C74C543B(iParam2);
		unk_0x6F06CF0E9AB02847();
	}
}

void func_492(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1644206.f_2 == 0)
		{
			Global_1644206.f_2 = 1;
		}
	}
	else if (Global_1644206.f_2 == 1)
	{
		Global_1644206.f_2 = 0;
	}
}

void func_493()
{
	if (unk_0xE2D0C323A1AE5D85(Global_2810287.f_4656, 1))
	{
		if (func_497())
		{
			func_494();
		}
	}
}

void func_494()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2703656.f_2414[iVar0 /*80*/].f_2 != 0)
		{
			Global_2703656.f_2414[iVar0 /*80*/].f_2 = 5;
			func_495(&(Global_2703656.f_2414[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_495(var uParam0, int iParam1)
{
	func_496(uParam0, iParam1);
}

void func_496(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_497()
{
	return Global_2703656.f_2414[0 /*80*/].f_1 != 0;
}

int func_498()
{
	if (unk_0xE2D0C323A1AE5D85(Global_2810287.f_4656, 0) && func_497())
	{
		return 1;
	}
	if (unk_0xE2D0C323A1AE5D85(Global_2810287.f_4656, 1) && func_497())
	{
		return 1;
	}
	return 0;
}

int func_499()
{
	if (func_497())
	{
		if (func_500(Global_2703656.f_2414[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_500(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

int func_501()
{
	if (func_497())
	{
		if (func_502(Global_2703656.f_2414[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_502(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
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
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_503(int iParam0)
{
	if (Global_1644206.f_1 != Global_1644206)
	{
		Global_1644206.f_1 = Global_1644206;
	}
	if (Global_1644206 != iParam0)
	{
		Global_1644206 = iParam0;
	}
}

int func_504(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	char* sVar6;
	
	StringCopy(&Var0, "", 16);
	bVar2 = iParam1 == 20;
	bVar3 = func_557(iParam1);
	fVar4 = func_556();
	iVar5 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_555())
		{
			if (func_554() > 0 && Global_1836355)
			{
				unk_0xF43060DF31ACEA55();
				unk_0x7ED668FC4CB0F4C4(fVar4);
				unk_0xAC765EF46E85A446(18);
				if (unk_0xF847447D4467709D())
				{
					unk_0x19DD1C202B338DF3();
				}
				unk_0xAC765EF46E85A446(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_539())
		{
			func_538(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xE2D0C323A1AE5D85(Global_2810287.f_4659, 26))
	{
		func_538(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_105(&(uParam2->f_19)))
	{
		if (func_554() == 1)
		{
			func_537(bVar3, uParam0, 0);
			func_104(&(uParam2->f_19), 0, 0);
			func_538(uParam0, uParam2, 0);
			unk_0xCED9E32812D6C7C7(&(Global_2810287.f_4660), 5);
		}
	}
	if (func_105(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0xF847447D4467709D())
		{
			unk_0x19DD1C202B338DF3();
		}
		unk_0xAC765EF46E85A446(10);
		if (func_103(&(uParam2->f_19), 10000, 0) || (func_554() == 0 && !bParam5))
		{
			func_538(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_536();
				if (iParam1 == 27 || iParam1 == 28)
				{
					unk_0xF43060DF31ACEA55();
				}
				unk_0xAC765EF46E85A446(18);
			}
			if (!unk_0xE2D0C323A1AE5D85(uParam2->f_33, 0))
			{
				if (bVar2 == 0)
				{
					func_536();
					if (iParam1 == 27 || iParam1 == 28)
					{
						unk_0xF43060DF31ACEA55();
					}
					unk_0xAC765EF46E85A446(18);
				}
				unk_0x7ED668FC4CB0F4C4(fVar4);
				if (func_537(bVar3, uParam0, 0))
				{
					func_491(uParam0, 0, 0);
					sVar1 = func_534(iParam1, &(Global_4718592.f_86757), bParam4);
					Var0 = { func_532(iParam1) };
					if (bParam4)
					{
						func_529(uParam0, sVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						func_522(uParam0, func_526(uParam2), func_523(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						sVar6 = func_515(uParam2);
						if (!unk_0xACC32B78196FBC2A(sParam6))
						{
							sVar6 = sParam6;
						}
						func_513(uParam0, sVar6, func_514(), -1);
					}
					else if (func_432())
					{
						uParam2->f_34 = Global_1836354;
						func_529(uParam0, sVar1, &Var0, 1, -1, Global_1836354, 1);
					}
					else if (bVar2)
					{
						iVar5 = func_506(iParam1);
						uParam2->f_34 = Global_1836354;
						func_529(uParam0, sVar1, "", 0, iVar5, func_505(), 1);
					}
					else
					{
						iVar5 = func_506(iParam1);
						func_529(uParam0, sVar1, &Var0, 1, iVar5, -1, 1);
					}
					unk_0xCED9E32812D6C7C7(&(uParam2->f_33), 0);
				}
			}
			if (unk_0xE2D0C323A1AE5D85(uParam2->f_33, 0))
			{
				Global_1836353 = uParam3;
				Global_1836352 = 1;
				unk_0x7ED668FC4CB0F4C4(fVar4);
				if (bVar2)
				{
					if (uParam2->f_34 != Global_1836354)
					{
						unk_0xB0550BC91B0159D6(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_505()
{
	return Global_1836354;
}

int func_506(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_512())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 40:
			iVar0 = 22;
			break;
		
		case 0:
		case 31:
		case 30:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 41:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 26:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_511(unk_0x9E2D6C50374FCFA9()))
			{
				iVar0 = 20;
			}
			if (func_510(unk_0x9E2D6C50374FCFA9()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_509(unk_0x9E2D6C50374FCFA9()))
	{
		iVar0 = 2;
	}
	if (func_507())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_507()
{
	if (unk_0x44859561F653DD4E())
	{
		return func_44();
	}
	return func_508(Global_4718592.f_86750);
}

int func_508(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5011[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_509(int iParam0)
{
	return Global_2689156[iParam0 /*453*/].f_119 == 4;
}

bool func_510(int iParam0)
{
	return Global_2689156[iParam0 /*453*/].f_119 == 7;
}

bool func_511(int iParam0)
{
	return Global_2689156[iParam0 /*453*/].f_119 == 2;
}

bool func_512()
{
	return Global_4718592.f_1 == 0;
}

void func_513(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x0347CCBD719C8ADC(*uParam0))
	{
		unk_0xEA5DEA46C3EE64D3(*uParam0, "SET_TITLE");
		if (unk_0xACC32B78196FBC2A(sParam2))
		{
			func_429(sParam1);
		}
		else
		{
			unk_0x4ADC8B166E139423("FM_AE_BRACKT");
			unk_0x26C23BE14F66F202(sParam1);
			unk_0x26C23BE14F66F202(sParam2);
			unk_0xD1D4F8D5470AFA4C();
		}
		func_429("");
		if (iParam3 != -1)
		{
			unk_0x4F47E317C74C543B(iParam3);
		}
		unk_0x6F06CF0E9AB02847();
	}
}

char* func_514()
{
	switch (func_406(unk_0x9E2D6C50374FCFA9()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_515(var uParam0)
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_406(unk_0x9E2D6C50374FCFA9()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_518())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_517(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_517(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_516(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_182))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_516(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_517(bool bParam0)
{
	return func_436(unk_0x9E2D6C50374FCFA9(), bParam0);
}

bool func_518()
{
	return (func_521() && func_519(func_520()));
}

bool func_519(int iParam0)
{
	return func_438(iParam0, 1);
}

int func_520()
{
	return Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_35;
}

bool func_521()
{
	return Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/] == 148;
}

void func_522(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x0347CCBD719C8ADC(*uParam0))
	{
		unk_0xEA5DEA46C3EE64D3(*uParam0, "SET_TITLE");
		if (unk_0xACC32B78196FBC2A(sParam2))
		{
			func_429(sParam1);
		}
		else if (func_442(unk_0x9E2D6C50374FCFA9()) == 133)
		{
			unk_0x4ADC8B166E139423("FM_AE_BRACKT_C");
			unk_0x26C23BE14F66F202(sParam1);
			unk_0x26C23BE14F66F202(sParam2);
			unk_0xD1D4F8D5470AFA4C();
		}
		else
		{
			unk_0x4ADC8B166E139423("FM_AE_BRACKT");
			unk_0x26C23BE14F66F202(sParam1);
			unk_0x26C23BE14F66F202(sParam2);
			unk_0xD1D4F8D5470AFA4C();
		}
		func_429("");
		if (iParam3 != -1)
		{
			unk_0x4F47E317C74C543B(iParam3);
		}
		unk_0x6F06CF0E9AB02847();
	}
}

char* func_523(var uParam0)
{
	int iVar0;
	
	iVar0 = func_442(unk_0x9E2D6C50374FCFA9());
	if (func_525())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_524())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_524()
{
	if (func_442(unk_0x9E2D6C50374FCFA9()) == 133)
	{
		return Global_2810287.f_5114;
	}
	return -1;
}

bool func_525()
{
	return Global_1853001;
}

char* func_526(var uParam0)
{
	int iVar0;
	
	iVar0 = func_442(unk_0x9E2D6C50374FCFA9());
	if (func_525())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_528() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_528() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_524())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_527() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_527()
{
	return Global_2810287.f_5117;
}

int func_528()
{
	if (func_442(unk_0x9E2D6C50374FCFA9()) == 132)
	{
		return Global_2810287.f_5112;
	}
	return -1;
}

void func_529(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x0347CCBD719C8ADC(*uParam0))
	{
		unk_0xEA5DEA46C3EE64D3(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_445(sParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x4ADC8B166E139423(sParam1);
			unk_0x2AE954BA77A66307(iParam5);
			unk_0xD1D4F8D5470AFA4C();
		}
		else
		{
			func_429(sParam1);
		}
		if (func_555() && iParam6)
		{
			if (func_531())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x4ADC8B166E139423("LBD_DPD_CNT");
			unk_0x2AE954BA77A66307(iVar0);
			unk_0x2AE954BA77A66307(iVar1);
			unk_0xD1D4F8D5470AFA4C();
		}
		else
		{
			func_429(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x4F47E317C74C543B(iParam4);
			if (func_530(unk_0x9E2D6C50374FCFA9()))
			{
				unk_0x4F47E317C74C543B(166);
			}
			else if (func_44())
			{
				unk_0x4F47E317C74C543B(166);
			}
		}
		unk_0x6F06CF0E9AB02847();
	}
}

int func_530(int iParam0)
{
	if (func_511(iParam0) || func_510(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_531()
{
	return Global_1836355;
}

struct<4> func_532(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_533(unk_0x9E2D6C50374FCFA9()) || func_509(unk_0x9E2D6C50374FCFA9()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4718592.f_527, 16);
			break;
	}
	if (func_432() && unk_0x44859561F653DD4E())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4718592.f_527, 16);
	}
	return Var0;
}

bool func_533(int iParam0)
{
	return Global_2689156[iParam0 /*453*/].f_119 == 5;
}

char* func_534(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_432() || unk_0xACC32B78196FBC2A(sParam1)))
	{
		uVar0 = func_535();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 25)
	{
		if (Global_1836595 == 0)
		{
			Global_1836595 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0xACC32B78196FBC2A(sParam1))
	{
		if (Global_1836595 == 1)
		{
			Global_1836595 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1836595 == 0)
		{
			Global_1836595 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 31:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 26:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 22:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_535()
{
	if (unk_0x475BC8E76EB32BCF())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x71BE58F878F44990())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x759D0DAF85D68E42())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0xAE3D31B16CA16E36())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_536()
{
	Global_43528 = 1;
}

bool func_537(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x528279F3F1EEF869("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x528279F3F1EEF869("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x528279F3F1EEF869("mp_matchmaking_card");
	}
	return unk_0x0347CCBD719C8ADC(*uParam1);
}

void func_538(var uParam0, var uParam1, bool bParam2)
{
	unk_0xB0550BC91B0159D6(&(uParam1->f_33), 7);
	Global_1836353 = 0;
	func_422();
	Global_1836352 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_105(&(uParam1->f_19)))
		{
			func_71(&(uParam1->f_19));
			unk_0xB0550BC91B0159D6(&(Global_2810287.f_4660), 5);
		}
	}
	if (unk_0x0347CCBD719C8ADC(*uParam0))
	{
		unk_0x705B098546DEB18A(uParam0);
	}
	if (unk_0xE2D0C323A1AE5D85(uParam1->f_33, 0))
	{
		unk_0xB0550BC91B0159D6(&(uParam1->f_33), 0);
	}
	unk_0x7ED668FC4CB0F4C4(0f);
}

int func_539()
{
	if (func_553())
	{
		return 0;
	}
	if (func_552())
	{
		return 0;
	}
	if (!func_550())
	{
		return 0;
	}
	if (!func_548())
	{
		return 0;
	}
	if (func_547(8, -1))
	{
		return 0;
	}
	if (func_554() == 2)
	{
		return 0;
	}
	if (Global_2810287.f_4611)
	{
		return 0;
	}
	if (func_546())
	{
		return 0;
	}
	else if (!func_174(unk_0x9E2D6C50374FCFA9(), 1, 0) && Global_1573860[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_545(1) || func_543(1)) || Global_22691.f_124) || Global_22691)
	{
		return 0;
	}
	if (unk_0xF1EC2C71FD1371B8())
	{
		return 0;
	}
	if (func_542() && Global_1965714 == 2)
	{
		return 0;
	}
	if (func_212(unk_0x9E2D6C50374FCFA9()) && !func_542())
	{
		return 0;
	}
	if (Global_1932192)
	{
		return 0;
	}
	if (Global_1932197)
	{
		return 0;
	}
	if (func_541(0))
	{
		return 0;
	}
	if (unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_28, 4))
	{
		return 0;
	}
	if (Global_1637027)
	{
		return 0;
	}
	if ((Global_1959929.f_718.f_5 || Global_1962755.f_718.f_5) || Global_1958957.f_718.f_5)
	{
		return 0;
	}
	if ((Global_1966718.f_724.f_5 || Global_1966718.f_744.f_724.f_5) || Global_1966718.f_1497.f_724.f_5)
	{
		return 0;
	}
	if (Global_1973496.f_726.f_5)
	{
		return 0;
	}
	if (func_540(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if ((Global_1637063 || Global_1637064) || Global_1637065)
	{
		return 0;
	}
	return 1;
}

bool func_540(int iParam0)
{
	if (iParam0 == func_24())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_319.f_4, 6);
}

bool func_541(int iParam0)
{
	return unk_0xE2D0C323A1AE5D85(Global_2810287.f_5193.f_47, iParam0);
}

bool func_542()
{
	return (unk_0xE2D0C323A1AE5D85(Global_4718592.f_30, 12) && unk_0xE2D0C323A1AE5D85(Global_1965715, 0));
}

int func_543(bool bParam0)
{
	if (unk_0x78711A80544B2439())
	{
		if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			if (func_544(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x4C1B8C5717647539(0, 25) || unk_0x4C1B8C5717647539(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_22691.f_130)
	{
		return 0;
	}
	if (unk_0x4C1B8C5717647539(0, 19) || (!bParam0 && unk_0x0DBA73788F6E3C5F(0, 19)))
	{
		return 1;
	}
	if (unk_0x8FE9914D4872D601())
	{
		if (((unk_0x4C1B8C5717647539(0, 166) || unk_0x4C1B8C5717647539(0, 167)) || unk_0x4C1B8C5717647539(0, 168)) || unk_0x4C1B8C5717647539(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x0DBA73788F6E3C5F(0, 166) || unk_0x0DBA73788F6E3C5F(0, 167)) || unk_0x0DBA73788F6E3C5F(0, 168)) || unk_0x0DBA73788F6E3C5F(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_544(int iParam0)
{
	int iVar0;
	
	if (unk_0x28FF2C2261B6CBA1())
	{
		if (!unk_0xF68107C40359970C(iParam0))
		{
			unk_0xA7E29842FA438ED6(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_545(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22691.f_4 && Global_22691.f_104 == 4);
	}
	return Global_22691.f_4;
}

bool func_546()
{
	return Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_192 != 0;
}

bool func_547(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1644209.f_203[iParam1];
			}
			break;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1644209.f_1048, iParam0);
}

int func_548()
{
	if (func_549() == 0)
	{
		return 1;
	}
	return 0;
}

int func_549()
{
	return Global_1574629.f_18;
}

int func_550()
{
	if (func_551())
	{
		return 1;
	}
	if (unk_0xA829C9A2767AC8EF())
	{
		return 0;
	}
	if (unk_0xCB1EF1E7B77ADF4C() || unk_0xECD40FEF3CF43BDB())
	{
		return 0;
	}
	if (unk_0x6304243969F5A11A())
	{
		return 0;
	}
	return 1;
}

bool func_551()
{
	return Global_1574602;
}

bool func_552()
{
	return Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/] == 5;
}

bool func_553()
{
	return unk_0x320D1840B6DAA1CC() <= Global_22830.f_6135 + 100;
}

int func_554()
{
	return Global_1644209.f_68;
}

int func_555()
{
	if (Global_1836354 > 16)
	{
		return 1;
	}
	return 0;
}

float func_556()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x36E90400DA266164()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_557(int iParam0)
{
	switch (iParam0)
	{
		case 20:
		case 21:
		case 27:
		case 28:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

int func_558()
{
	if (func_559(unk_0x9E2D6C50374FCFA9()))
	{
		return Global_1581327;
	}
	return 0;
}

int func_559(int iParam0)
{
	if (unk_0x9315DBF7D972F07A())
	{
		if (func_39(iParam0, 0))
		{
			return unk_0x62360EE837E523DC(iParam0);
		}
	}
	return 0;
}

int func_560()
{
	if (func_558())
	{
		return 1;
	}
	if (func_475(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (func_525())
	{
		return 1;
	}
	if (func_254(unk_0x9E2D6C50374FCFA9()))
	{
		switch (func_442(unk_0x9E2D6C50374FCFA9()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_561(unk_0x9E2D6C50374FCFA9()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_561(unk_0x9E2D6C50374FCFA9()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_561(unk_0x9E2D6C50374FCFA9()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_561(int iParam0)
{
	return unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_1, 4);
}

int func_562(int iParam0)
{
	if (iParam0 == 28)
	{
		if ((func_254(unk_0x9E2D6C50374FCFA9()) && !func_408(unk_0x9E2D6C50374FCFA9())) && !func_440(unk_0x9E2D6C50374FCFA9()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (func_253(unk_0x9E2D6C50374FCFA9(), 0) && func_408(unk_0x9E2D6C50374FCFA9()))
		{
			return 1;
		}
		if (func_563(unk_0x9E2D6C50374FCFA9()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_563(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_254(iParam0) && !func_477(iParam0)) && !unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_1, 8));
	bVar2 = func_408(iParam0);
	uVar3 = func_576();
	uVar4 = func_567();
	if ((bVar1 && (func_441(iParam0) || func_566(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_565(iParam0)) && !func_564(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2810287.f_5193.f_220 != iVar0)
	{
		Global_2810287.f_5193.f_220 = iVar0;
	}
	return iVar0;
}

bool func_564(int iParam0)
{
	return func_409(iParam0, 19);
}

int func_565(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_409(iParam0, 9);
	}
	return 0;
}

int func_566(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xE2D0C323A1AE5D85(Global_1893548[iVar0 /*600*/].f_1, 0);
	}
	return 0;
}

int func_567()
{
	if ((func_409(unk_0x9E2D6C50374FCFA9(), 21) || func_409(unk_0x9E2D6C50374FCFA9(), 22)) || func_573())
	{
		return 1;
	}
	if (func_569())
	{
		func_568(22);
		return 1;
	}
	return 0;
}

void func_568(int iParam0)
{
	unk_0xCED9E32812D6C7C7(&(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_4), iParam0);
}

int func_569()
{
	if (func_253(unk_0x9E2D6C50374FCFA9(), 0))
	{
		if (((func_576() && !func_572()) || func_571(unk_0x9E2D6C50374FCFA9(), 21)) || func_571(unk_0x9E2D6C50374FCFA9(), 25))
		{
			return 1;
		}
		else
		{
			func_570(27);
		}
	}
	return 0;
}

void func_570(int iParam0)
{
	unk_0xB0550BC91B0159D6(&(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_4), iParam0);
}

bool func_571(int iParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_217, iParam1);
}

bool func_572()
{
	return Global_1574580.f_1;
}

bool func_573()
{
	return func_574(424, -1);
}

int func_574(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2860375[iParam0 /*3*/][func_575(iParam1)];
	if (unk_0x1BB27397611554CE(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_575(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_41();
		if (iVar1 > -1)
		{
			Global_2821607 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2821607 = 1;
		}
	}
	return iVar0;
}

bool func_576()
{
	return Global_1574580;
}

void func_577()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	
	Var3.f_2.f_1 = -1;
	iVar0 = 0;
	while (iVar0 < unk_0x9418088815C89D59(1))
	{
		iVar1 = unk_0xB1D84E0EF6979085(1, iVar0);
		switch (iVar1)
		{
			case 185:
				func_578(iVar0);
				break;
			
			case 174:
				unk_0x92039F20B184AB4D(1, iVar0, &iVar2, 2);
				switch (iVar2)
				{
					case -1733705761:
						if (unk_0x92039F20B184AB4D(1, iVar0, &Var3, 4))
						{
							unk_0xCED9E32812D6C7C7(&(Local_327[unk_0xF1354995C6159A78() /*26*/].f_1), 19);
						}
						break;
				}
				break;
		}
		iVar0++;
	}
}

void func_578(int iParam0)
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0x92039F20B184AB4D(1, iParam0, &Var0, 13))
	{
		iVar4 = 0;
		while (iVar4 < 6)
		{
			if (unk_0xE5965CDF24F93A9F(Var0))
			{
				if (unk_0x04D9F44466CBF3CA(Var0))
				{
					if (!unk_0xE2D0C323A1AE5D85(Local_239.f_774, iVar4))
					{
						if (!unk_0xE2D0C323A1AE5D85(Local_327[unk_0xF1354995C6159A78() /*26*/].f_5, iVar4))
						{
							if (func_364(iVar4))
							{
								if (unk_0xE5965CDF24F93A9F(func_583(iVar4)))
								{
									if (unk_0x31EB55FAEEE9C0F5(Var0) == func_583(iVar4))
									{
										if (unk_0xE5965CDF24F93A9F(Var0.f_1))
										{
											if (unk_0x9044EDB8A7BF67B4(Var0.f_1))
											{
												if (unk_0x28AA31872A651BC7(Var0.f_1) == unk_0xE2D3D51028F0428A())
												{
													if (func_2247() == Local_239.f_789)
													{
														unk_0xCED9E32812D6C7C7(&(Local_327[unk_0xF1354995C6159A78() /*26*/].f_5), iVar4);
													}
												}
												else if (unk_0x65FAB09725E2FE75(unk_0x28AA31872A651BC7(Var0.f_1)))
												{
													iVar5 = unk_0xFF65CDB0EB7ACE71(unk_0x28AA31872A651BC7(Var0.f_1));
													if (!unk_0x976D40337FCB1481(iVar5))
													{
														unk_0xCED9E32812D6C7C7(&(Local_327[unk_0xF1354995C6159A78() /*26*/].f_5), iVar4);
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			iVar4++;
		}
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 < 30)
		{
			if (!unk_0xE2D0C323A1AE5D85(Local_239.f_779, iVar4))
			{
				if (!unk_0xE2D0C323A1AE5D85(Local_327[unk_0xF1354995C6159A78() /*26*/].f_7, iVar4))
				{
					if (unk_0xE5965CDF24F93A9F(Var0))
					{
						if (unk_0x9044EDB8A7BF67B4(Var0))
						{
							iVar2 = unk_0x28AA31872A651BC7(Var0);
							if (unk_0x90F6E2F6488B98BA(Local_239.f_10[iVar4 /*15*/].f_1))
							{
								if (iVar2 == unk_0x8AF984152F749D80(Local_239.f_10[iVar4 /*15*/].f_1))
								{
									if (unk_0xE5965CDF24F93A9F(Var0.f_1))
									{
										if (unk_0x9044EDB8A7BF67B4(Var0.f_1))
										{
											iVar1 = unk_0x28AA31872A651BC7(Var0.f_1);
											if (unk_0x65FAB09725E2FE75(iVar1))
											{
												iVar3 = unk_0xFF65CDB0EB7ACE71(iVar1);
												if (unk_0x976D40337FCB1481(iVar3))
												{
													if (Var0.f_5)
													{
														if (iVar3 == unk_0x9E2D6C50374FCFA9())
														{
															unk_0xCED9E32812D6C7C7(&(Local_327[unk_0xF1354995C6159A78() /*26*/].f_7), iVar4);
														}
													}
													else
													{
														unk_0xCED9E32812D6C7C7(&(Local_327[unk_0xF1354995C6159A78() /*26*/].f_13), iVar4);
													}
												}
												else if (!unk_0xE2D0C323A1AE5D85(Local_327[unk_0xF1354995C6159A78() /*26*/].f_9, iVar4))
												{
													if (Var0.f_5)
													{
														unk_0xCED9E32812D6C7C7(&(Local_327[unk_0xF1354995C6159A78() /*26*/].f_9), iVar4);
													}
												}
											}
											else if (!unk_0xE2D0C323A1AE5D85(Local_327[unk_0xF1354995C6159A78() /*26*/].f_10, iVar4))
											{
												if (Var0.f_5)
												{
													unk_0xCED9E32812D6C7C7(&(Local_327[unk_0xF1354995C6159A78() /*26*/].f_10), iVar4);
												}
											}
										}
										else if (!unk_0xE2D0C323A1AE5D85(Local_327[unk_0xF1354995C6159A78() /*26*/].f_10, iVar4))
										{
											if (Var0.f_5)
											{
												unk_0xCED9E32812D6C7C7(&(Local_327[unk_0xF1354995C6159A78() /*26*/].f_10), iVar4);
											}
										}
									}
								}
							}
						}
					}
				}
			}
			iVar4++;
		}
		if (!unk_0xE2D0C323A1AE5D85(iLocal_328, 15))
		{
			if (unk_0xE5965CDF24F93A9F(Var0))
			{
				if (unk_0x9044EDB8A7BF67B4(Var0))
				{
					iVar2 = unk_0x28AA31872A651BC7(Var0);
					if (func_582(unk_0x15CAA6D7B11F1A7C(iVar2)))
					{
						unk_0xCED9E32812D6C7C7(&iLocal_328, 15);
					}
				}
				else if (unk_0x04D9F44466CBF3CA(Var0))
				{
					if (func_581(unk_0x15CAA6D7B11F1A7C(Var0)))
					{
						if (!func_580(unk_0xE2D3D51028F0428A(), unk_0x31EB55FAEEE9C0F5(Var0), 0))
						{
							if (!func_579(unk_0x31EB55FAEEE9C0F5(Var0), 0, 1))
							{
								unk_0xCED9E32812D6C7C7(&iLocal_328, 15);
							}
						}
					}
				}
			}
		}
	}
}

int func_579(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0xADD893BD545BE5FC(iParam0) + 1;
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!unk_0x7158135695FAE89D(iParam0, (iVar0 - 1), 0))
			{
				iVar2 = unk_0xAB793EA186AB8DAA(iParam0, (iVar0 - 1), 0);
				if (bParam1)
				{
					if (unk_0xE5965CDF24F93A9F(iVar2))
					{
						if (unk_0x65FAB09725E2FE75(iVar2))
						{
							if (!bParam2 && func_47(unk_0xFF65CDB0EB7ACE71(iVar2), unk_0x9E2D6C50374FCFA9()))
							{
							}
							else
							{
								return 1;
							}
						}
					}
				}
				else if (!unk_0xF68107C40359970C(iVar2))
				{
					if (unk_0x65FAB09725E2FE75(iVar2))
					{
						if (!bParam2 && func_47(unk_0xFF65CDB0EB7ACE71(iVar2), unk_0x9E2D6C50374FCFA9()))
						{
						}
						else
						{
							return 1;
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_580(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xE5965CDF24F93A9F(iParam0) && !unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		if (unk_0xE5965CDF24F93A9F(iParam1) && !unk_0x55B23FE400FCEA6B(iParam1, 0))
		{
			if (unk_0xF6F5D18EF8EAB859(iParam0, iParam1, iParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_581(int iParam0)
{
	switch (iParam0)
	{
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("polmav"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold2"):
		case joaat("policeold1"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
			return 1;
			break;
	}
	return 0;
}

int func_582(int iParam0)
{
	switch (iParam0)
	{
		case joaat("s_m_y_cop_01"):
		case joaat("s_f_y_cop_01"):
		case joaat("s_m_y_swat_01"):
		case joaat("s_m_m_fiboffice_01"):
		case joaat("s_m_y_sheriff_01"):
		case joaat("s_f_y_sheriff_01"):
		case joaat("s_m_y_ranger_01"):
		case joaat("s_f_y_ranger_01"):
		case joaat("s_m_m_armoured_01"):
		case joaat("s_m_y_pilot_01"):
		case joaat("s_m_m_fibsec_01"):
			return 1;
			break;
	}
	return 0;
}

int func_583(int iParam0)
{
	return unk_0xA5677134B9672173(func_308(iParam0));
}

void func_584()
{
	if (func_39(unk_0x9E2D6C50374FCFA9(), 0))
	{
		return;
	}
	switch (Local_327[unk_0xF1354995C6159A78() /*26*/].f_17)
	{
		case 0:
			if (Local_239.f_703 == 1)
			{
				Local_242 = 3;
				Local_242.f_2 = 1;
				Local_242.f_3 = 1;
				Local_242.f_29 = joaat("buzzard");
				Local_242.f_31 = joaat("s_m_y_blackops_02");
				Local_242.f_6 = { func_381() };
				Local_242.f_4 = 40;
			}
			else if (Local_239.f_703 == 0)
			{
				Local_242 = 4;
				Local_242.f_2 = 2;
				Local_242.f_3 = 2;
				Local_242.f_31 = joaat("mp_g_m_pros_01");
				Local_242.f_29 = joaat("fugitive");
				Local_242.f_6 = { func_381() };
				func_2185();
			}
			func_2184(&Local_242, 1);
			func_2163(&uLocal_206, &(Local_239.f_942));
			func_2144();
			func_1176();
			func_1173();
			func_1172();
			func_585();
			if (Local_239.f_786 == 2)
			{
				Local_327[unk_0xF1354995C6159A78() /*26*/].f_17 = 2;
			}
			else if (Local_239.f_786 == 3)
			{
				Local_327[unk_0xF1354995C6159A78() /*26*/].f_17 = 3;
			}
			break;
		
		case 2:
			func_585();
			if (Local_239.f_786 == 3)
			{
				Local_327[unk_0xF1354995C6159A78() /*26*/].f_17 = 3;
			}
			break;
		
		case 3:
			func_2259();
			break;
	}
}

void func_585()
{
	struct<20> Var0;
	int iVar1;
	int iVar2;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	iVar1 = unk_0xF1354995C6159A78();
	iVar2 = unk_0x9E2D6C50374FCFA9();
	if (func_39(unk_0x9E2D6C50374FCFA9(), 0))
	{
		iVar1 = func_1171();
		iVar2 = Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_769;
	}
	if (!unk_0xE2D0C323A1AE5D85(Local_327[iVar1 /*26*/].f_1, 3))
	{
		if (!unk_0xE2D0C323A1AE5D85(iLocal_328, 3))
		{
			if (func_3(19))
			{
			}
			else if (func_3(17))
			{
				if (func_563(iVar2) >= 2)
				{
					func_1143(-1, 1, 1, 1);
					func_1140();
				}
				if (iVar2 == unk_0x9E2D6C50374FCFA9())
				{
					if (!unk_0xE2D0C323A1AE5D85(iLocal_328, 6))
					{
						func_927(227, 1, &Var0, 0);
						func_926();
						func_785(1, 1, Local_239.f_704, 0, -1, -1, -1, -1, -1, 0, -1);
						unk_0xCED9E32812D6C7C7(&iLocal_328, 6);
					}
					unk_0xBA5D7196EACB9282(unk_0x9E2D6C50374FCFA9());
				}
				unk_0xCED9E32812D6C7C7(&iLocal_328, 3);
			}
			else if (func_3(4))
			{
				if (func_563(iVar2) >= 2)
				{
					func_1140();
					func_1143(-1, 1, 0, 1);
				}
				if (iVar2 == unk_0x9E2D6C50374FCFA9())
				{
					if (!unk_0xE2D0C323A1AE5D85(iLocal_328, 6))
					{
						func_927(227, 1, &Var0, 0);
						func_926();
						func_785(1, 1, Local_239.f_704, 0, -1, -1, -1, -1, -1, 0, -1);
						unk_0xCED9E32812D6C7C7(&iLocal_328, 6);
					}
					unk_0xBA5D7196EACB9282(unk_0x9E2D6C50374FCFA9());
				}
				unk_0xCED9E32812D6C7C7(&iLocal_328, 3);
			}
			else if (func_3(3))
			{
				if (unk_0xF1354995C6159A78() == Local_239.f_789 || func_2247() == Local_239.f_789)
				{
					if (func_563(iVar2) >= 2)
					{
						func_1140();
						func_1143(-1, 0, 0, 1);
					}
					if (iVar2 == unk_0x9E2D6C50374FCFA9())
					{
						if (!unk_0xE2D0C323A1AE5D85(iLocal_328, 6))
						{
							func_927(227, 0, &Var0, 0);
							func_926();
							func_785(0, 2, Local_239.f_704, 0, -1, -1, -1, -1, -1, 0, -1);
							unk_0xCED9E32812D6C7C7(&iLocal_328, 6);
						}
					}
				}
				unk_0xCED9E32812D6C7C7(&iLocal_328, 3);
			}
			else if (func_3(9))
			{
				if (func_734())
				{
					func_1140();
					func_1143(-1, 0, 0, 1);
				}
				if (iVar2 == unk_0x9E2D6C50374FCFA9())
				{
					if (!unk_0xE2D0C323A1AE5D85(iLocal_328, 6))
					{
						func_927(227, 0, &Var0, 0);
						func_926();
						func_785(0, 2, Local_239.f_704, 0, -1, -1, -1, -1, -1, 0, -1);
						unk_0xCED9E32812D6C7C7(&iLocal_328, 6);
					}
				}
				unk_0xCED9E32812D6C7C7(&iLocal_328, 3);
			}
			else if (func_3(8))
			{
				if (func_734())
				{
					if (func_563(iVar2) >= 2)
					{
						func_1140();
						func_1143(-1, 0, 0, 1);
					}
				}
				if (iVar2 == unk_0x9E2D6C50374FCFA9())
				{
					if (!unk_0xE2D0C323A1AE5D85(iLocal_328, 6))
					{
						func_927(227, 0, &Var0, 0);
						func_926();
						func_785(0, 2, Local_239.f_704, 0, -1, -1, -1, -1, -1, 0, -1);
						unk_0xCED9E32812D6C7C7(&iLocal_328, 6);
					}
				}
				unk_0xCED9E32812D6C7C7(&iLocal_328, 3);
			}
			else if (func_3(15))
			{
				if (func_734())
				{
					if (func_563(iVar2) >= 2)
					{
						func_1140();
						func_1143(-1, 0, 0, 1);
						func_733(26);
					}
				}
				if (iVar2 == unk_0x9E2D6C50374FCFA9())
				{
					if (!unk_0xE2D0C323A1AE5D85(iLocal_328, 6))
					{
						func_927(227, 0, &Var0, 0);
						func_926();
						func_785(0, 2, Local_239.f_704, 0, -1, -1, -1, -1, -1, 0, -1);
						unk_0xCED9E32812D6C7C7(&iLocal_328, 6);
					}
				}
				unk_0xCED9E32812D6C7C7(&iLocal_328, 3);
			}
			else if (func_3(5))
			{
				if (func_734())
				{
					if (func_2246())
					{
						if (func_563(iVar2) >= 2)
						{
						}
					}
					else if (func_563(iVar2) >= 2)
					{
						func_692(88, "GB_WORK_OVER", "BIGM_HUNTRBQ", 1, -1, 2, 1, 0);
					}
				}
				if (iVar2 == unk_0x9E2D6C50374FCFA9())
				{
					if (!unk_0xE2D0C323A1AE5D85(iLocal_328, 6))
					{
						func_927(227, 0, &Var0, 0);
						func_926();
						func_785(0, 8, Local_239.f_704, 0, -1, -1, -1, -1, -1, 0, -1);
						unk_0xCED9E32812D6C7C7(&iLocal_328, 6);
					}
				}
				unk_0xCED9E32812D6C7C7(&iLocal_328, 3);
			}
		}
		if (unk_0xE2D0C323A1AE5D85(iLocal_328, 3))
		{
			func_685();
			func_684();
			if (unk_0xF1354995C6159A78() == Local_239.f_789)
			{
				if (func_683() > -1f)
				{
					if (!func_3(16) && !unk_0xE2D0C323A1AE5D85(Local_327[unk_0xF1354995C6159A78() /*26*/].f_1, 10))
					{
						if ((((((func_3(15) || func_3(3)) || func_3(8)) || func_3(9)) || func_105(&(Local_239.f_798))) || func_3(5)) || func_3(17))
						{
							func_643();
						}
						else
						{
							unk_0xCED9E32812D6C7C7(&(Local_327[unk_0xF1354995C6159A78() /*26*/].f_1), 10);
						}
						if (iLocal_353 == 2)
						{
							unk_0xCED9E32812D6C7C7(&(Local_327[unk_0xF1354995C6159A78() /*26*/].f_1), 10);
						}
						if (iLocal_353 == 3)
						{
							unk_0xCED9E32812D6C7C7(&(Local_327[unk_0xF1354995C6159A78() /*26*/].f_1), 10);
						}
					}
				}
			}
			if (!unk_0xE2D0C323A1AE5D85(iLocal_331, 8))
			{
				func_627();
				func_626();
				func_616(&Local_337, &(Local_239.f_878), func_10());
				func_614();
				unk_0xCED9E32812D6C7C7(&iLocal_331, 8);
			}
			if (!unk_0xE2D0C323A1AE5D85(iLocal_328, 7))
			{
				if (Local_239.f_790 != -1)
				{
					if (unk_0xE2D0C323A1AE5D85(iLocal_328, 5))
					{
						if (unk_0x0D01086B38EC256F(unk_0xA1087A6350CD9244(Local_239.f_790)))
						{
							func_612(unk_0xA1087A6350CD9244(Local_239.f_790), 432, 0, 0);
							func_611(unk_0xA1087A6350CD9244(Local_239.f_790), 1, 0, 0);
							func_610(unk_0xA1087A6350CD9244(Local_239.f_790), 0, 0, 0);
							func_609(unk_0xA1087A6350CD9244(Local_239.f_790), 0);
							func_604(unk_0xA1087A6350CD9244(Local_239.f_790), Global_262145.f_12619, 0, 0);
							unk_0xCED9E32812D6C7C7(&iLocal_328, 7);
						}
					}
				}
			}
			if (func_586(&uLocal_354, 0, 0) && (func_3(16) || func_3(5)))
			{
				if (iVar1 == unk_0xF1354995C6159A78())
				{
					unk_0xCED9E32812D6C7C7(&(Local_327[unk_0xF1354995C6159A78() /*26*/].f_1), 3);
				}
			}
		}
	}
}

int func_586(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_568(29);
	if ((*uParam0 > 0 && !func_497()) && func_563(unk_0x9E2D6C50374FCFA9()) != 0)
	{
		if (!func_602())
		{
			func_601();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_105(&(uParam0->f_3)))
			{
				func_104(&(uParam0->f_3), 0, 0);
			}
			else if (func_103(&(uParam0->f_3), 1000, 0))
			{
				unk_0xCED9E32812D6C7C7(&(Global_1944611.f_3), 2);
				if (bParam1)
				{
					unk_0xCED9E32812D6C7C7(&(Global_2810287.f_4656), 0);
					func_104(&(uParam0->f_5), 0, 0);
				}
				func_104(&(uParam0->f_1), 0, 0);
				func_600(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_105(&(uParam0->f_5)))
			{
				if (func_103(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_593(iParam2);
				func_600(uParam0, 2);
			}
			break;
		
		case 2:
			func_593(0);
			if (func_103(&(uParam0->f_1), 15000, 0))
			{
				if (func_587(func_588(0)))
				{
					unk_0x3410421C60BF7143(1);
				}
				func_600(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_103(&(uParam0->f_1), 23500, 0))
			{
				unk_0xB0550BC91B0159D6(&(Global_2810287.f_4656), 1);
				unk_0xB0550BC91B0159D6(&(Global_1944611.f_3), 2);
				func_600(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0xB0550BC91B0159D6(&(Global_2810287.f_4656), 1);
			unk_0xB0550BC91B0159D6(&(Global_1944611.f_3), 2);
			return 1;
	}
	return 0;
}

bool func_587(char* sParam0)
{
	unk_0xB65782D82090BB33(sParam0);
	return unk_0x73CB3406A86A3A02(0);
}

char* func_588(int iParam0)
{
	if (((func_591(unk_0x9E2D6C50374FCFA9()) || func_590(unk_0x9E2D6C50374FCFA9())) || func_518()) || iParam0)
	{
		if (func_590(unk_0x9E2D6C50374FCFA9()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_481(func_589()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_589()
{
	return Global_1921036;
}

bool func_590(int iParam0)
{
	return func_482(func_406(iParam0), 0);
}

bool func_591(int iParam0)
{
	return func_592(func_406(iParam0));
}

int func_592(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/] == 148 && func_438(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_35, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
	}
	return 0;
}

void func_593(int iParam0)
{
	if (unk_0xE2D0C323A1AE5D85(Global_2810287.f_4656, 0))
	{
		if (((((((((((!unk_0xB7B9FCC926422B4B() && !unk_0xE2D0C323A1AE5D85(Global_2810287.f_836, 2)) && func_2370(unk_0x9E2D6C50374FCFA9(), 1, 1)) && !Global_75021) && !Global_59871) && !unk_0xA829C9A2767AC8EF()) && !func_409(unk_0x9E2D6C50374FCFA9(), 22)) && func_563(unk_0x9E2D6C50374FCFA9()) != 0) && !func_598(func_599())) && !func_591(unk_0x9E2D6C50374FCFA9())) && !func_597(func_406(unk_0x9E2D6C50374FCFA9()))) && !func_596(func_406(unk_0x9E2D6C50374FCFA9())))
		{
			unk_0xCED9E32812D6C7C7(&(Global_2810287.f_4656), 1);
			func_595(func_588(iParam0), -1);
			func_594(1);
			unk_0xB0550BC91B0159D6(&(Global_2810287.f_4656), 0);
		}
	}
}

void func_594(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_517(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_497())
	{
		unk_0x91DFC8F68F6D9B05(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

void func_595(char* sParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x89B545A74F93B1DD(0, 0, 0, iParam1);
}

int func_596(int iParam0)
{
	switch (iParam0)
	{
		case 150:
		case 236:
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
			return 1;
		
		default:
	}
	return 0;
}

int func_597(int iParam0)
{
	switch (iParam0)
	{
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 188:
		case 178:
			return 1;
		
		default:
	}
	return 0;
}

int func_598(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_599()
{
	var uVar0;
	
	uVar0 = unk_0x05CBA41180F5D521();
	if (unk_0x3C57C2F07FEE34D2(uVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	return 0;
}

void func_600(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_601()
{
	Global_2726776 = 1;
}

int func_602()
{
	if (((((((func_406(unk_0x9E2D6C50374FCFA9()) == 170 || func_406(unk_0x9E2D6C50374FCFA9()) == 219) || func_406(unk_0x9E2D6C50374FCFA9()) == 221) || func_406(unk_0x9E2D6C50374FCFA9()) == 220) || func_406(unk_0x9E2D6C50374FCFA9()) == 216) || func_406(unk_0x9E2D6C50374FCFA9()) == 215) || func_406(unk_0x9E2D6C50374FCFA9()) == 214) || func_406(unk_0x9E2D6C50374FCFA9()) == 218)
	{
		return 1;
	}
	if (func_603(unk_0x9E2D6C50374FCFA9()))
	{
		return 1;
	}
	return 0;
}

int func_603(int iParam0)
{
	if (iParam0 != func_24())
	{
		if (func_2370(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_159(Global_2689156[iParam0 /*453*/].f_319.f_6) == 2;
			}
		}
	}
	return 0;
}

void func_604(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_606(iParam0))
	{
		return;
	}
	if (func_605(&(Global_2678323.f_756[iParam0]), &(Global_2678323.f_1119[iParam0]), &(Global_2678323.f_392), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2678323.f_558[iParam0] = fParam1;
		}
	}
}

int func_605(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
{
	if (bParam5)
	{
		if (!unk_0x87C0DA419F19FF57(*uParam1) || *uParam1 == unk_0x69CE66B03B2184EB())
		{
			*uParam1 = unk_0x69CE66B03B2184EB();
			*uParam0 = unk_0x69CE66B03B2184EB();
		}
	}
	if (!unk_0x87C0DA419F19FF57(*uParam0) || *uParam0 == unk_0x69CE66B03B2184EB())
	{
		if (bParam3)
		{
			if (!unk_0xE2D0C323A1AE5D85(*uParam2, iParam4))
			{
				*uParam6 = 1;
				unk_0xCED9E32812D6C7C7(uParam2, iParam4);
			}
			*uParam0 = unk_0x69CE66B03B2184EB();
		}
		else
		{
			if (unk_0xE2D0C323A1AE5D85(*uParam2, iParam4))
			{
				*uParam6 = 1;
				unk_0xB0550BC91B0159D6(uParam2, iParam4);
			}
			if (*uParam1 == unk_0x69CE66B03B2184EB())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return 1;
	}
	else if (unk_0x87C0DA419F19FF57(*uParam1) && !*uParam1 == unk_0x69CE66B03B2184EB())
	{
	}
	return 0;
}

int func_606(int iParam0)
{
	if (iParam0 == func_24())
	{
		return 1;
	}
	if (unk_0x2E87280918B16506(unk_0x05CBA41180F5D521()) == func_607())
	{
		return 1;
	}
	return 0;
}

int func_607()
{
	switch (func_190())
	{
		case 0:
			return func_608();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_608()
{
	switch (Global_2727578)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

void func_609(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xCED9E32812D6C7C7(&(Global_2678323.f_368), iParam0);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_2678323.f_368), iParam0);
	}
	if (unk_0x12DD4A0B247D9B4D(Global_2678323[iParam0]))
	{
		if (bParam1)
		{
			unk_0xA241A7085A493F20(Global_2678323[iParam0], 0);
		}
		else
		{
			unk_0xA241A7085A493F20(Global_2678323[iParam0], 1);
		}
	}
}

void func_610(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_606(iParam0))
	{
		return;
	}
	if (func_605(&(Global_2678323.f_822[iParam0]), &(Global_2678323.f_1185[iParam0]), &(Global_2678323.f_367), bParam1, iParam0, bParam3, &uVar0))
	{
		func_609(iParam0, bParam2);
	}
}

void func_611(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_606(iParam0))
	{
		return;
	}
	if (func_605(&(Global_2678323.f_624[iParam0]), &(Global_2678323.f_987[iParam0]), &(Global_2678323.f_389), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2678323.f_459[iParam0] = iParam1;
		}
	}
}

void func_612(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	
	if (func_606(iParam0))
	{
		return;
	}
	if (func_605(&(Global_2678323.f_591[iParam0]), &(Global_2678323.f_954[iParam0]), &(Global_2678323.f_388), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2678323.f_426[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_613();
		}
	}
}

void func_613()
{
	Global_2678323.f_1651 = 1;
}

void func_614()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xE2D0C323A1AE5D85(iLocal_328, 18))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = unk_0xA1087A6350CD9244(iVar0);
			if (unk_0x0D01086B38EC256F(iVar1))
			{
				if (iVar1 != unk_0x9E2D6C50374FCFA9())
				{
					func_612(iVar1, func_615(0), 0, 0);
					func_609(iVar1, 0);
					func_610(iVar1, 0, 0, 0);
					func_611(iVar1, 3, 0, 0);
				}
			}
			iVar0++;
		}
		unk_0xCED9E32812D6C7C7(&iLocal_328, 18);
	}
}

int func_615(int iParam0)
{
	return 556;
}

void func_616(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = unk_0x9E2D6C50374FCFA9();
	if (iVar0 > -1)
	{
		Global_1893548[iVar0 /*600*/].f_11.f_456 = 0;
		Global_1893548[iVar0 /*600*/].f_11.f_456.f_1 = 0;
		Global_1893548[iVar0 /*600*/].f_11.f_456.f_2 = 0;
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (unk_0x12DD4A0B247D9B4D(uParam0->f_33[iVar1]))
			{
				unk_0xFFD8EB5462B07B59(&(uParam0->f_33[iVar1]));
			}
			if (func_625(uParam1, iVar1))
			{
				if (unk_0x07B2F8356DC13CF4(func_624(uParam1, iVar1)))
				{
					if (unk_0x099CAD293190F449(func_623(uParam1, iVar1), unk_0xE2D3D51028F0428A()))
					{
						unk_0x1C9488EC3F23B199(func_623(uParam1, iVar1));
					}
					unk_0x8175B06ED630A82A(func_623(uParam1, iVar1), 1, 1);
					if (bParam2)
					{
						unk_0xD649C4FD90F64861(func_623(uParam1, iVar1), 1);
						uVar2 = func_624(uParam1, iVar1);
						if (!unk_0x07B2F8356DC13CF4(uVar2))
						{
							func_108(&iVar2);
						}
						else
						{
							func_6(&iVar2);
						}
					}
					unk_0xB0550BC91B0159D6(&(uParam0->f_10), iVar1);
				}
			}
			iVar1++;
		}
		func_619(0);
		func_617(uParam0, uParam1);
	}
}

void func_617(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0xE2D0C323A1AE5D85(uParam0->f_11, 0))
	{
		unk_0xCED9E32812D6C7C7(&(uParam0->f_11), 0);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar2 = unk_0xA1087A6350CD9244(iVar0);
			if (unk_0x0D01086B38EC256F(iVar2))
			{
				if (iVar2 != unk_0x9E2D6C50374FCFA9())
				{
					iVar1 = func_618(uParam1);
					if (iVar1 != -1)
					{
						func_612(iVar2, iVar1, 0, 0);
					}
					func_609(iVar2, 0);
					func_610(iVar2, 0, 0, 0);
					if (uParam1->f_44.f_4 == 0)
					{
						func_604(iVar2, Global_262145.f_12619, 0, 0);
					}
					func_611(iVar2, 1, 0, 0);
				}
			}
			iVar0++;
		}
	}
}

int func_618(var uParam0)
{
	return uParam0->f_44.f_2;
}

void func_619(bool bParam0)
{
	if (bParam0)
	{
		if (!func_622(unk_0x9E2D6C50374FCFA9(), 14))
		{
			func_621(14);
		}
	}
	else if (func_622(unk_0x9E2D6C50374FCFA9(), 14))
	{
		func_620(14);
	}
}

void func_620(int iParam0)
{
	unk_0xB0550BC91B0159D6(&(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_5), iParam0);
}

void func_621(int iParam0)
{
	unk_0xCED9E32812D6C7C7(&(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_5), iParam0);
}

bool func_622(int iParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_11.f_5, iParam1);
}

var func_623(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0x90F6E2F6488B98BA(func_624(uParam0, iParam1)))
	{
		return unk_0xE8BBC6CC2C60F24A(func_624(uParam0, iParam1));
	}
	return uVar0;
}

var func_624(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1];
}

bool func_625(var uParam0, int iParam1)
{
	return unk_0x90F6E2F6488B98BA(func_624(uParam0, iParam1));
}

void func_626()
{
	int iVar0;
	
	iVar0 = 9;
	while (iVar0 <= 11)
	{
		if (unk_0x90F6E2F6488B98BA(Local_239.f_721[iVar0]))
		{
			if (unk_0x07B2F8356DC13CF4(Local_239.f_721[iVar0]))
			{
				func_6(&(Local_239.f_721[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_627()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (unk_0x12DD4A0B247D9B4D(uLocal_362[iVar0]))
		{
			unk_0xFFD8EB5462B07B59(&(uLocal_362[iVar0]));
		}
		iVar0++;
	}
	if (unk_0x12DD4A0B247D9B4D(uLocal_367[0]))
	{
		unk_0xFFD8EB5462B07B59(&(uLocal_367[0]));
	}
	if (unk_0x12DD4A0B247D9B4D(uLocal_364))
	{
		unk_0xFFD8EB5462B07B59(&uLocal_364);
	}
	if (unk_0x12DD4A0B247D9B4D(uLocal_363))
	{
		unk_0xFFD8EB5462B07B59(&uLocal_363);
	}
	if (unk_0x12DD4A0B247D9B4D(uLocal_365))
	{
		unk_0xFFD8EB5462B07B59(&uLocal_365);
	}
	if (unk_0x12DD4A0B247D9B4D(uLocal_366))
	{
		unk_0xFFD8EB5462B07B59(&uLocal_366);
	}
	if (unk_0xE2D0C323A1AE5D85(iLocal_328, 12))
	{
		unk_0xF889BDFCC181BA9F(iLocal_352);
		unk_0xE24865B69D79521B("ALARM_BELL_02");
		unk_0xB0550BC91B0159D6(&iLocal_328, 12);
	}
	if (((func_587("DCONTRA_HLP1") || func_587("DCONTRA_HLP2")) || func_587("DCONTRA_HLPVCR")) || func_587("DCONTRA_HLPCR"))
	{
		unk_0x3410421C60BF7143(1);
	}
	func_628();
}

void func_628()
{
	if (unk_0xE2D0C323A1AE5D85(iLocal_328, 14))
	{
		func_641();
		func_629(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
		unk_0xB0550BC91B0159D6(&iLocal_328, 14);
	}
}

void func_629(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_640())
		{
			func_639();
		}
		Global_2667222.f_713.f_518 = unk_0x69CE66B03B2184EB();
		Global_2667222.f_713.f_504 = iParam1;
		Global_2667222.f_713.f_505 = iParam2;
		Global_2667222.f_713.f_506 = iParam10;
		func_641();
		func_633(8, 0, 0, 0, 0);
		Global_2667222.f_713.f_507 = iParam11;
		Global_2667222.f_713.f_512 = iParam3;
		Global_2667222.f_713.f_513 = iParam4;
		Global_2667222.f_713.f_510 = iParam5;
		Global_2667222.f_713.f_511 = iParam6;
		Global_2667222.f_713.f_514 = iParam7;
		Global_2667222.f_713.f_515 = iParam8;
		Global_2667222.f_713.f_516 = iParam9;
		Global_2667222.f_713.f_517 = iParam14;
		Global_2667222.f_713.f_508 = iParam12;
		Global_2667222.f_713.f_509 = iParam13;
		Global_2667222.f_1752 = 1;
	}
	else
	{
		func_630();
	}
}

void func_630()
{
	if (func_640() && !func_632())
	{
		func_639();
	}
	if (func_632())
	{
		func_631();
	}
	else
	{
		func_641();
		func_633(0, 0, 0, 0, 0);
		Global_2667222.f_1752 = 0;
		Global_2667222.f_1751 = 0;
	}
}

void func_631()
{
	unk_0x049557638ADE4DF8(&(Global_2667222.f_713), &(Global_2667222.f_1232), 519);
	Global_2667222.f_489 = { Global_2667222.f_495 };
	if (unk_0x69CE66B03B2184EB() == Global_2667222.f_713.f_518)
	{
		Global_2667222.f_1751 = 0;
	}
}

int func_632()
{
	if ((Global_2667222.f_1751 && !unk_0x69CE66B03B2184EB() == Global_2667222.f_1232.f_518) && unk_0x87C0DA419F19FF57(Global_2667222.f_1232.f_518))
	{
		return 1;
	}
	return 0;
}

void func_633(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2703656.f_1585.f_703.f_16 != func_24())
	{
		if (unk_0xE2D0C323A1AE5D85(Global_2689156[Global_2703656.f_1585.f_703.f_16 /*453*/].f_417, 0) && func_634())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2674884 = 0;
	}
	Global_2667222.f_489 = iParam0;
	Global_2667222.f_489.f_1 = unk_0x69CE66B03B2184EB();
	Global_2667222.f_489.f_2 = iParam1;
	Global_2667222.f_489.f_3 = iParam2;
	Global_2667222.f_489.f_4 = iParam3;
	Global_2667222.f_489.f_5 = iParam4;
}

int func_634()
{
	if ((((((func_406(unk_0x9E2D6C50374FCFA9()) == 229 || func_406(unk_0x9E2D6C50374FCFA9()) == 191) || func_638()) || func_637()) || func_636(unk_0x9E2D6C50374FCFA9())) || Global_2783990.f_227 == 1) || (Global_2667222.f_1752 && func_635(unk_0x9E2D6C50374FCFA9())))
	{
		return 0;
	}
	return 1;
}

int func_635(int iParam0)
{
	if (func_441(iParam0))
	{
		return 1;
	}
	if (func_408(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_636(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (!unk_0x9315DBF7D972F07A())
	{
		return 0;
	}
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		return Global_2783989;
	}
	else
	{
		uVar0 = unk_0x407E03586628E458(iParam0);
		if (unk_0xE5965CDF24F93A9F(uVar0))
		{
			iVar1 = unk_0x15CAA6D7B11F1A7C(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

var func_637()
{
	return Global_1836575;
}

int func_638()
{
	if (Global_4718592 == 6)
	{
		return 1;
	}
	return 0;
}

void func_639()
{
	if (func_632())
	{
		if (Global_2667222.f_713.f_518 == Global_2667222.f_1232.f_518)
		{
			return;
		}
	}
	if (!unk_0x69CE66B03B2184EB() == Global_2667222.f_713.f_518)
	{
		unk_0x049557638ADE4DF8(&(Global_2667222.f_1232), &(Global_2667222.f_713), 519);
		Global_2667222.f_495 = { Global_2667222.f_489 };
		Global_2667222.f_1751 = 1;
	}
}

int func_640()
{
	if ((Global_2667222.f_1752 && !unk_0x69CE66B03B2184EB() == Global_2667222.f_713.f_518) && unk_0x87C0DA419F19FF57(Global_2667222.f_713.f_518))
	{
		return 1;
	}
	return 0;
}

void func_641()
{
	if (func_640() && !func_632())
	{
		func_639();
	}
	func_642();
	Global_2667222.f_713 = 0;
}

void func_642()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2667222.f_713.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_643()
{
	float fVar0;
	
	fVar0 = func_683();
	fVar0 = (fVar0 * Global_262145.f_18843);
	func_644(fVar0);
}

void func_644(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_384(unk_0x9E2D6C50374FCFA9());
	iVar1 = func_682(unk_0x9E2D6C50374FCFA9(), iVar0);
	if (iVar1 > 0)
	{
		iVar2 = round((to_float(iVar1) * fParam0));
		func_645(iVar0, iVar2, 0, 0, 0, &iLocal_353);
	}
	else
	{
		unk_0xCED9E32812D6C7C7(&(Local_327[unk_0xF1354995C6159A78() /*26*/].f_1), 10);
	}
}

void func_645(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, var uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam1 <= 0)
	{
		*uParam5 = 3;
		return;
	}
	iVar0 = func_682(unk_0x9E2D6C50374FCFA9(), iParam0);
	iVar1 = func_681(iParam0);
	if (!func_680())
	{
		if (iVar1 >= 0 && iVar0 >= iParam1)
		{
			iVar2 = (iVar0 - iParam1);
			func_678(func_679(iVar1), iVar2, -1, 1, 0);
			Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_187[iVar1 /*13*/].f_1 = iVar2;
			Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_187[iVar1 /*13*/].f_11 = func_674(unk_0x9E2D6C50374FCFA9(), iParam0, iVar2);
			if (bParam3)
			{
				func_670(func_673(iParam0));
			}
			Global_2725173 = 1;
			*uParam5 = 2;
		}
		else
		{
			*uParam5 = 3;
		}
	}
	else if (iVar1 >= 0 && iVar0 >= iParam1)
	{
		if (!bParam3)
		{
			iParam2 = 0;
		}
		if (func_649(iVar1, iParam1, iParam2, iParam4, uParam5, Global_2810287.f_5193.f_387))
		{
			if (*uParam5 == 2)
			{
				iVar3 = (iVar0 - iParam1);
				func_678(func_679(iVar1), iVar3, -1, 1, 0);
				Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_187[iVar1 /*13*/].f_1 = iVar3;
				Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_187[iVar1 /*13*/].f_11 = func_674(unk_0x9E2D6C50374FCFA9(), iParam0, iVar3);
				if (bParam3)
				{
					func_670(func_673(iParam0));
				}
				Global_2725173 = 1;
			}
		}
		else if (*uParam5 == 1 && func_646() == -1)
		{
			*uParam5 = 3;
		}
	}
}

int func_646()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_648(iVar0) != 2147483647)
		{
			if (func_647(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_647(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4528329[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

int func_648(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4528329[iParam0 /*85*/].f_66;
	}
	return -1;
}

bool func_649(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (*uParam4 != 0 && *uParam4 != 1)
	{
		*uParam4 = 0;
	}
	switch (*uParam4)
	{
		case 0:
			if (func_646() != -1)
			{
				return 0;
			}
			iVar2 = func_669(iParam0);
			iVar3 = func_668();
			iVar4 = func_667(iParam0, 0);
			switch (iParam3)
			{
				case 0:
					iVar5 = -1003644442;
					break;
				
				case 1:
					iVar5 = 402112378;
					break;
				
				case 2:
					iVar5 = 1283718111;
					break;
				
				case 3:
					iVar5 = -1818214114;
					break;
			}
			if (iParam3 == 0 || func_663(78225582, -1799524201, iVar3, -788753717, 1, 0, 1, 4, iVar2, 3))
			{
				if (func_663(78225582, 69656641, iVar4, -788753717, iParam1, 0, 1, 4, 0, 3))
				{
					if (func_663(78225582, -739932302, iVar5, -788753717, 1, iParam2, 0, 4, iVar4, 3))
					{
						*uParam4 = 1;
					}
					else
					{
						*uParam4 = 3;
					}
				}
				else
				{
					*uParam4 = 3;
				}
			}
			else
			{
				*uParam4 = 3;
			}
			if (*uParam4 == 1 && func_658())
			{
			}
			else
			{
				*uParam4 = 3;
				func_655(func_646());
			}
			break;
		
		case 1:
			if (func_654(func_646()))
			{
				if (func_653(func_646()) == 2)
				{
					if (iParam2 > 0)
					{
						unk_0xCDE1C8CEF9603C08(func_648(func_646()));
						iVar0 = func_651(unk_0x9E2D6C50374FCFA9(), iParam0);
						iVar1 = func_673(iVar0);
						unk_0xCC091D3A89AF23C8(iParam2, unk_0x2E87280918B16506(func_650(iVar0)), iVar1, uParam5);
					}
					*uParam4 = 2;
					func_655(func_646());
				}
				else
				{
					*uParam4 = 3;
					func_655(func_646());
				}
			}
			break;
	}
	return *uParam4 != 1;
}

char* func_650(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

int func_651(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_24())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_652(Global_1853128[iParam0 /*888*/].f_267.f_187[iParam1 /*13*/]))
	{
		uVar0 = Global_1853128[iParam0 /*888*/].f_267.f_187[iParam1 /*13*/];
	}
	return uVar0;
}

int func_652(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_653(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4528329[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_654(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4528329[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

void func_655(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_680())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_647(iParam0))
		{
			if (!bVar0)
			{
				unk_0x349E25EA131C0E2A();
			}
		}
		else if (!bVar0)
		{
			unk_0x5ACE3DE15EF4A616(Global_4528329[iParam0 /*85*/].f_66);
		}
		func_656(&(Global_4528329[iParam0 /*85*/]));
	}
}

void func_656(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_657(&(uParam0->f_14));
	func_657(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_657(var uParam0)
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

int func_658()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_680())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_646();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0xD487B8E9C523DEFD(func_41()) || unk_0xBA5B5030B7954DAA())
		{
			if (func_662(Global_4528329[iVar2 /*85*/].f_66.f_6, Global_4528329[iVar2 /*85*/].f_66.f_4, Global_4528329[iVar2 /*85*/].f_66.f_1) == 1)
			{
				Global_4529831 = 1;
			}
			return 0;
		}
		if (Global_2726388)
		{
			if (Global_4528329[iVar2 /*85*/].f_66.f_6 == 1067618600 || Global_4528329[iVar2 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4529832 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_648(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || unk_0xE894C3F21E583743(iVar3))
		{
			Global_4528329[iVar2 /*85*/].f_66.f_13 = 1;
			Global_4528329[iVar2 /*85*/].f_66.f_12 = 0;
			Global_4528329[iVar2 /*85*/].f_66.f_14 = unk_0x8142A6539DDC180F();
			if (bVar0)
			{
				Global_4528329[iVar2 /*85*/].f_66.f_8 = 1;
				Global_4528329[iVar2 /*85*/].f_66.f_12 = 1;
			}
			Global_4528329[iVar2 /*85*/].f_66.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_659(Global_4528329[iVar2 /*85*/], iVar2);
			}
			Global_4529816 = 1;
			return 1;
		}
	}
	return 0;
}

void func_659(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	struct<3> Var0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.x = -1141953949;
	Var0.f_1 = unk_0x9E2D6C50374FCFA9();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam19;
	iVar1 = func_661(Var0.f_1);
	if ((Global_262145.f_23844 && !Global_262145.f_23845) && !Global_262145.f_23846)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_660();
		unk_0x2700C00F82C16BF0(1, &Var0, 36, iVar1);
	}
}

void func_660()
{
	unk_0xAF76A37C80EFD1D8("AM_ARENA_SHP");
}

var func_661(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0xCED9E32812D6C7C7(&uVar0, iParam0);
	}
	return uVar0;
}

int func_662(int iParam0, int iParam1, int iParam2)
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
			case 1668610896:
			case -2032529561:
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
		switch (iParam1)
		{
			case -319306689:
			case -466527264:
			case 1925965142:
			case 592152676:
			case 2035612943:
			case 1568659720:
			case -1224479447:
			case 1220095570:
			case 2050320631:
			case 592672421:
			case -842062976:
			case 14658715:
			case -604793592:
			case -823426392:
			case -1401862980:
			case -173354274:
			case 409533976:
			case -1472522337:
			case 542574408:
			case -1261799063:
			case 784631574:
			case -2027479156:
			case -837690641:
			case -1029672338:
			case -1503749970:
			case -1843409092:
			case 1669058563:
			case 2102747615:
			case 2030771998:
			case 1708747007:
			case 645293860:
			case -818859193:
			case 300796227:
			case -1999832346:
			case 1058055395:
			case -321151125:
			case 2078731875:
			case 1280785534:
			case -1878824774:
			case 247992227:
			case -229237358:
			case -1123183389:
			case 1814197076:
			case 713955548:
			case -2026544524:
			case -719580138:
			case -163417439:
			case -550417574:
				return 1;
				break;
			
			case 1775876058:
			case -518651910:
				return 2;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_663(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_680())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xD487B8E9C523DEFD(func_41()) || unk_0xBA5B5030B7954DAA())
		{
			Global_4529831 = 1;
			return 0;
		}
		if (Global_2726388)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4529832 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_646();
	if (iVar1 == -1)
	{
		if (!func_665(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_664(iParam1))
		{
			Var2 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_4528329[iVar1 /*85*/].f_66.f_1 = Var2.f_2;
		Global_4528329[iVar1 /*85*/].f_66.f_15 = Var2;
		Global_4528329[iVar1 /*85*/].f_66.f_16 = Var2.f_1;
		if (bVar0 || unk_0x598E220BD27F56CA(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_664(int iParam0)
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

int func_665(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_680())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xD487B8E9C523DEFD(func_41()) || unk_0xBA5B5030B7954DAA())
		{
			Global_4529831 = 1;
			return 0;
		}
		if (Global_2726388)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4529832 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		if (Global_4528329[iVar1 /*85*/].f_66.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4528329[iVar1 /*85*/].f_66.f_5 == 1)
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
		if (unk_0x3F5B892C35F3FF91())
		{
			unk_0x349E25EA131C0E2A();
		}
	}
	if (bVar0 || unk_0x76503DCD0BB2D833(&iVar3, iParam2, uParam3, uParam4))
	{
		*iParam0 = func_666(iVar3, iParam1, -2085313189, uParam3, iParam2, 0, 1, uParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_666(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, var uParam7, var uParam8, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4528329[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_680())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4528329[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4528329[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4528329[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4528329[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4528329[iVar0 /*85*/].f_66.f_7 = uParam3;
			Global_4528329[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4528329[iVar0 /*85*/].f_66 = iParam0;
			Global_4528329[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4528329[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4528329[iVar0 /*85*/].f_66.f_10 = uParam7;
			Global_4528329[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4528329[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4528329[iVar0 /*85*/].f_66.f_14 = unk_0x8142A6539DDC180F();
			Global_4528329[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4529816 = 0;
			if (bParam6)
			{
				Global_4528329[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && bParam10)
			{
				func_659(Global_4528329[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_667(int iParam0, bool bParam1)
{
	char cVar0[64];
	
	if (bParam1)
	{
		if (iParam0 == 5)
		{
			StringCopy(&cVar0, "MP_STAT_RESTOTALFORFACTORY5_v0", 64);
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				StringCopy(&cVar0, "MP_STAT_PRODTOTALFORFACTORY0_v0", 64);
				break;
			
			case 1:
				StringCopy(&cVar0, "MP_STAT_PRODTOTALFORFACTORY1_v0", 64);
				break;
			
			case 2:
				StringCopy(&cVar0, "MP_STAT_PRODTOTALFORFACTORY2_v0", 64);
				break;
			
			case 3:
				StringCopy(&cVar0, "MP_STAT_PRODTOTALFORFACTORY3_v0", 64);
				break;
			
			case 4:
				StringCopy(&cVar0, "MP_STAT_PRODTOTALFORFACTORY4_v0", 64);
				break;
			
			case 5:
				StringCopy(&cVar0, "MP_STAT_PRODTOTALFORFACTORY5_v0", 64);
				break;
			}
	}
	if (unk_0xACC32B78196FBC2A(&cVar0))
	{
		return -1;
	}
	return unk_0x2E87280918B16506(&cVar0);
}

var func_668()
{
	return Global_4529820;
}

int func_669(int iParam0)
{
	char cVar0[64];
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY0_v0", 64);
			break;
		
		case 1:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY1_v0", 64);
			break;
		
		case 2:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY2_v0", 64);
			break;
		
		case 3:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY3_v0", 64);
			break;
		
		case 4:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY4_v0", 64);
			break;
		
		case 5:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY5_v0", 64);
			break;
	}
	if (unk_0xACC32B78196FBC2A(&cVar0))
	{
		return -1;
	}
	return unk_0x2E87280918B16506(&cVar0);
}

void func_670(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_672(9403, -1))
			{
				if (!func_672(9404, -1))
				{
					func_671(9404, 1, -1);
				}
				else
				{
					func_671(9405, 1, -1);
				}
			}
			break;
		
		case 1:
			if (func_672(9400, -1))
			{
				if (!func_672(9401, -1))
				{
					func_671(9401, 1, -1);
				}
				else
				{
					func_671(9402, 1, -1);
				}
			}
			break;
		
		case 2:
			if (func_672(9412, -1))
			{
				if (!func_672(9413, -1))
				{
					func_671(9413, 1, -1);
				}
				else
				{
					func_671(9414, 1, -1);
				}
			}
			break;
		
		case 3:
			if (func_672(9409, -1))
			{
				if (!func_672(9410, -1))
				{
					func_671(9410, 1, -1);
				}
				else
				{
					func_671(9411, 1, -1);
				}
			}
			break;
		
		case 4:
			if (func_672(9406, -1))
			{
				if (!func_672(9407, -1))
				{
					func_671(9407, 1, -1);
				}
				else
				{
					func_671(9408, 1, -1);
				}
			}
			break;
	}
}

void func_671(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_41();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, iParam1, iParam2);
}

bool func_672(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_41();
	}
	return unk_0xDA7EBFC49AE3F1B0(iParam0, iParam1);
}

int func_673(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return -1;
}

int func_674(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_673(iParam1);
	if (func_652(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_17226;
				if (func_675(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17231);
				}
				if (func_675(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17236);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_17225;
				if (func_675(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17230);
				}
				if (func_675(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17235);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_17224;
				if (func_675(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17229);
				}
				if (func_675(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17234);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_17222;
				if (func_675(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17227);
				}
				if (func_675(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17232);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_17223;
				if (func_675(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17228);
				}
				if (func_675(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17233);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_21328;
				if (func_675(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_21330);
				}
				if (func_675(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_21329);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_675(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_677(iParam0, iParam1))
	{
		iVar0 = func_676(iParam0, iParam1);
		return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/].f_5, iParam2);
	}
	return 0;
}

int func_676(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_652(iParam1) && iParam0 != func_24())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1853128[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_677(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_652(iParam1) && iParam0 != func_24())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1853128[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_678(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2821895[iParam0 /*3*/][func_575(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, iParam1, iParam3);
	}
}

int func_679(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3844;
		
		case 1:
			return 3845;
		
		case 2:
			return 3846;
		
		case 3:
			return 3847;
		
		case 4:
			return 3848;
		
		case 5:
			return 5443;
		
		default:
	}
	return 3844;
}

int func_680()
{
	if (unk_0x8FE9914D4872D601())
	{
		return unk_0xA50CED7FB6E38751();
	}
	return 0;
}

int func_681(int iParam0)
{
	int iVar0;
	
	if (func_652(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_187[iVar0 /*13*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_682(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_24())
	{
		return 0;
	}
	if (func_652(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1853128[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/] == iParam1)
			{
				return Global_1853128[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

float func_683()
{
	return Local_239.f_936;
}

void func_684()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x12DD4A0B247D9B4D(uLocal_368[iVar0]))
		{
			unk_0xFFD8EB5462B07B59(&(uLocal_368[iVar0]));
		}
		iVar0++;
	}
}

void func_685()
{
	if (!func_691())
	{
		return;
	}
	if (!unk_0x2E87280918B16506(unk_0x05CBA41180F5D521()) == Global_1574747.f_9)
	{
		return;
	}
	func_686();
}

void func_686()
{
	func_688();
	func_687(0);
}

void func_687(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x9315DBF7D972F07A();
	Global_1574747 = 20;
	StringCopy(&(Global_1574747.f_1), "", 32);
	Global_1574747.f_9 = 0;
	if (bVar0)
	{
		Global_1574747.f_10 = unk_0x0A89FDFA763DCAED();
		Global_1574747.f_11 = unk_0x0A89FDFA763DCAED();
	}
	StringCopy(&(Global_1574747.f_12), "", 16);
	StringCopy(&(Global_1574747.f_16), "", 64);
	StringCopy(&(Global_1574747.f_32), "", 64);
	Global_1574747.f_52 = 0;
	Global_1574747.f_53 = 0;
	Global_1574747.f_54 = 0;
	Global_1574747.f_55 = -1;
	Global_1574747.f_56 = 0;
	Global_1574747.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_688()
{
	if (!func_690())
	{
	}
	if (func_691())
	{
		unk_0x1419D7B938CBFF2E(&(Global_1574747.f_12));
		func_689();
		unk_0xF4666BA5B36DBCB2();
	}
}

void func_689()
{
	switch (Global_1574747)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x2AE954BA77A66307(Global_1574747.f_52);
			return;
		
		case 2:
			unk_0x2AE954BA77A66307(Global_1574747.f_52);
			unk_0x2AE954BA77A66307(Global_1574747.f_53);
			return;
		
		case 3:
			unk_0x26C23BE14F66F202(&(Global_1574747.f_16));
			return;
		
		case 4:
			unk_0x26C23BE14F66F202(&(Global_1574747.f_16));
			unk_0x26C23BE14F66F202(&(Global_1574747.f_32));
			return;
		
		case 5:
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_16));
			return;
		
		case 6:
			unk_0x138506D6C7564EF1(Global_1574747.f_56);
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_16));
			return;
		
		case 7:
			unk_0x26C23BE14F66F202(&(Global_1574747.f_16));
			return;
		
		case 8:
			unk_0x138506D6C7564EF1(Global_1574747.f_56);
			unk_0x26C23BE14F66F202(&(Global_1574747.f_16));
			return;
		
		case 9:
			unk_0x702B349761F63A9E(&(Global_1574747.f_16));
			return;
		
		case 10:
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_16));
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_32));
			return;
		
		case 12:
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_16));
			unk_0x26C23BE14F66F202(&(Global_1574747.f_32));
			return;
		
		case 13:
			unk_0x138506D6C7564EF1(Global_1574747.f_56);
			unk_0x26C23BE14F66F202(&(Global_1574747.f_16));
			unk_0x138506D6C7564EF1(Global_1574747.f_57);
			unk_0x26C23BE14F66F202(&(Global_1574747.f_32));
			return;
		
		case 11:
			unk_0x702B349761F63A9E(&(Global_1574747.f_16));
			return;
		
		case 14:
			unk_0x138506D6C7564EF1(Global_1574747.f_56);
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_16));
			unk_0x138506D6C7564EF1(Global_1574747.f_56);
			unk_0x26C23BE14F66F202(&(Global_1574747.f_32));
			return;
		
		case 15:
			unk_0x138506D6C7564EF1(Global_1574747.f_56);
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_16));
			unk_0x138506D6C7564EF1(Global_1574747.f_57);
			unk_0x26C23BE14F66F202(&(Global_1574747.f_32));
			return;
		
		case 17:
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_16));
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_32));
			unk_0x138506D6C7564EF1(Global_1574747.f_56);
			unk_0x26C23BE14F66F202(&(Global_1574747.f_48));
			return;
		
		case 16:
			unk_0x138506D6C7564EF1(Global_1574747.f_56);
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_16));
			return;
		
		case 19:
			unk_0x138506D6C7564EF1(Global_1574747.f_56);
			unk_0x26C23BE14F66F202(&(Global_1574747.f_16));
			return;
		
		case 18:
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_16));
			unk_0x138506D6C7564EF1(Global_1574747.f_56);
			unk_0x26C23BE14F66F202(&(Global_1574747.f_48));
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_32));
			return;
		
		default:
	}
}

int func_690()
{
	if (!func_691())
	{
		return 0;
	}
	unk_0x09684FD679B0E474(&(Global_1574747.f_12));
	func_689();
	return unk_0xD7AA4C82B5D00977();
}

int func_691()
{
	if (Global_1574747 == 20)
	{
		return 0;
	}
	return 1;
}

int func_692(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_732(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_495(&(Var0.f_69), iParam7);
	}
	return func_693(&Var0);
}

int func_693(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2703656.f_2736)
		{
			return 0;
		}
	}
	func_704(uParam0, uParam0->f_17);
	func_703(uParam0);
	if (func_44())
	{
		func_703(uParam0);
	}
	if (func_702(uParam0->f_1))
	{
		func_695();
		if (Global_2703656.f_2414[0 /*80*/].f_2 == 0)
		{
			Global_2703656.f_2414[0 /*80*/] = { *uParam0 };
			if (func_694(uParam0->f_69, 8192))
			{
				Global_1932198 = 1;
			}
			return 1;
		}
		if (((Global_2703656.f_2414[0 /*80*/].f_1 == 13 || Global_2703656.f_2414[0 /*80*/].f_1 == 53) || Global_2703656.f_2414[0 /*80*/].f_1 == 54) || Global_2703656.f_2414[0 /*80*/].f_1 == 58)
		{
			Global_2703656.f_2414[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2703656.f_2414[iVar0 + 1 /*80*/] = { Global_2703656.f_2414[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2703656.f_2414[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2703656.f_2414[iVar0 /*80*/].f_2 == 0)
		{
			Global_2703656.f_2414[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_695();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_495(&(Global_2703656.f_2414[iVar0 /*80*/].f_69), 2);
				Global_2703656.f_2414[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_694(uParam0->f_69, 128))
			{
				if (func_500(Global_2703656.f_2414[iVar0 /*80*/].f_1))
				{
					Global_2703656.f_2414[iVar0 /*80*/].f_2 = 5;
					func_495(&(Global_2703656.f_2414[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_694(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_695()
{
	bool bVar0;
	
	if (Global_2703656.f_2737)
	{
		return;
	}
	if (!Global_78120)
	{
		Global_78120 = 1;
		bVar0 = true;
	}
	func_696();
	if (bVar0)
	{
		Global_78120 = 0;
	}
}

void func_696()
{
	Global_2703656.f_2738 = 0;
	Global_2703656.f_2738.f_582 = 0;
	func_700(&(Global_2703656.f_2738.f_1));
	Global_2703656.f_2738.f_1.f_1 = 0;
	func_697(&(Global_2703656.f_2738.f_1), 1);
}

void func_697(var uParam0, int iParam1)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x705B098546DEB18A(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if ((uParam0->f_566 || iParam1) && uParam0->f_4 != 0)
	{
		if (unk_0x8FE9914D4872D601())
		{
			unk_0xEA5DEA46C3EE64D3(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0xD7D6BA6E36AEC182(0);
			unk_0x6F06CF0E9AB02847();
		}
		unk_0x705B098546DEB18A(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_568)
	{
		unk_0x94B5910A9C945688(0);
		uParam0->f_568 = 0;
	}
	if (!Global_78120)
	{
		if (!unk_0xE08D4560995E7946(unk_0xB6BA8B8E3D0B41C6()))
		{
			if (!Global_78121)
			{
				if (unk_0xA829C9A2767AC8EF() && !func_699(0))
				{
					unk_0x5A7ACD1CDF509B0D(800);
				}
			}
		}
	}
	func_698(0);
}

void func_698(int iParam0)
{
	Global_78112 = iParam0;
	Global_78113 = iParam0;
}

bool func_699(bool bParam0)
{
	if (!bParam0 && unk_0xB4C854DD86E40FDA(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xE2D0C323A1AE5D85(Global_78100, 0);
}

void func_700(var uParam0)
{
	func_701(uParam0);
	uParam0->f_574 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_571 = 0;
	uParam0->f_573 = 0;
}

void func_701(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_572 = 0f;
	uParam0->f_562 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_563 = 0f;
	uParam0->f_564 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_567 = 0;
	uParam0->f_576 = 0;
	uParam0->f_568 = 0;
	uParam0->f_569 = 0;
	uParam0->f_570 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_578 = 0;
	uParam0->f_579 = 0;
	uParam0->f_577 = 1f;
}

int func_702(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

void func_703(var uParam0)
{
	if (func_502(uParam0->f_1))
	{
		uParam0->f_72 = func_455();
	}
}

void func_704(var uParam0, int iParam1)
{
	if (func_502(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_24() || !func_2370(iParam1, 0, 1))
	{
		return;
	}
	if (func_500(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_705(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_705(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	
	if (func_212(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0x0E40F846A70BA3EC(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_81475[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_212(unk_0x9E2D6C50374FCFA9()) || (func_731() && func_730())) && !unk_0xE2D0C323A1AE5D85(Global_2810287.f_4659, 31)) && !bParam4)
	{
		uVar1 = func_729();
		if (unk_0xE5965CDF24F93A9F(uVar1))
		{
			if (unk_0x65FAB09725E2FE75(iVar1))
			{
				if (unk_0xFF65CDB0EB7ACE71(iVar1) != -1)
				{
					if (func_2370(unk_0xFF65CDB0EB7ACE71(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x44859561F653DD4E()) && iParam1 < 4)
						{
							if (Global_4718592.f_81475[iParam1] != -1)
							{
								return func_727(iParam1, iParam0, 0);
							}
							else
							{
								return func_717(iParam0, unk_0xFF65CDB0EB7ACE71(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_717(iParam0, unk_0xFF65CDB0EB7ACE71(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x44859561F653DD4E()) && iParam1 < 4)
			{
				if (Global_4718592.f_81475[iParam1] != -1)
				{
					return func_727(iParam1, iParam0, 0);
				}
				else
				{
					return func_706(0, -1, 0);
				}
			}
			else
			{
				return func_706(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x44859561F653DD4E()) && iParam1 < 4)
	{
		if (Global_4718592.f_81475[iParam1] != -1)
		{
			return func_727(iParam1, iParam0, 0);
		}
		else
		{
			return func_717(iParam0, unk_0x9E2D6C50374FCFA9(), iParam1, bParam2, bParam3);
		}
	}
	return func_717(iParam0, unk_0x9E2D6C50374FCFA9(), iParam1, bParam2, bParam3);
}

int func_706(bool bParam0, int iParam1, bool bParam2)
{
	return func_707(unk_0x9E2D6C50374FCFA9(), bParam0, iParam1, bParam2);
}

int func_707(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x0D01086B38EC256F(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x0E40F846A70BA3EC(iParam0);
	if ((func_716() || (func_715() && func_713())) && Global_1655683.f_1)
	{
		if (bParam1)
		{
			return func_712(iParam2, iVar0);
		}
		else
		{
			return func_712(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_211(iVar0, iParam2, 0) && !unk_0xE2D0C323A1AE5D85(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_711(1);
				}
				else
				{
					return func_711(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_4, 20))
			{
				return func_708(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_708(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_711(1);
	}
	return func_711(0);
}

int func_708(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_710(iParam0, iParam1, iParam3);
	if (func_709(Global_4718592.f_86750, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_709(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4718592.f_138117 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9277[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_710(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_211(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_711(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_712(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_710(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

bool func_713()
{
	if (func_714())
	{
		return 1;
	}
	return unk_0xE2D0C323A1AE5D85(Global_4718592.f_142301, 4);
}

bool func_714()
{
	return unk_0xE2D0C323A1AE5D85(Global_4718592.f_131903, 12);
}

bool func_715()
{
	if (unk_0x44859561F653DD4E())
	{
		return unk_0xE2D0C323A1AE5D85(Global_4718592.f_142301, 0);
	}
	return ((unk_0xE2D0C323A1AE5D85(Global_4718592.f_142301, 0) || Global_1923663) && unk_0xB4C854DD86E40FDA(joaat("fm_deathmatch_creator")) > 0);
}

int func_716()
{
	if (func_714() && unk_0x44859561F653DD4E())
	{
		return 1;
	}
	return 0;
}

int func_717(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x0E40F846A70BA3EC(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1853128[iVar2 /*888*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_719())
			{
				iVar3 = func_454(iParam0);
				if (!iVar3 == -1)
				{
					return func_452(iVar3);
				}
			}
			if ((func_247(iParam1, iParam0, iVar0, 0) && !unk_0xE2D0C323A1AE5D85(Global_4718592.f_15, 18)) || ((func_211(unk_0x0E40F846A70BA3EC(iParam1), unk_0x0E40F846A70BA3EC(iParam0), 0) && unk_0xE2D0C323A1AE5D85(Global_4718592.f_15, 23)) && !unk_0xE2D0C323A1AE5D85(Global_4718592.f_15, 18)))
			{
				return func_711(1);
			}
			else if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_15, 26))
			{
				return func_718(1);
			}
			else
			{
				return func_707(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836580 || Global_1836571) || Global_1853128[iParam0 /*888*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1836580 == 1 && Global_1836590 == 0))
			{
				return func_711(1);
			}
			else
			{
				return func_707(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836575 && Global_1836066.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_454(iParam0);
	if (!iVar4 == -1)
	{
		return func_452(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_718(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_719()
{
	if ((((((func_348() || func_726()) || func_44()) || func_725()) || func_724()) || func_722()) || func_720())
	{
		return 1;
	}
	if (unk_0x44859561F653DD4E() && unk_0xE2D0C323A1AE5D85(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_720()
{
	return func_721(Global_4718592.f_86750);
}

int func_721(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31343[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_722()
{
	return func_723(Global_4718592.f_86750);
}

int func_723(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_30684[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_724()
{
	return Global_2714627.f_24;
}

var func_725()
{
	return Global_2714627.f_21;
}

var func_726()
{
	return Global_2714627.f_18;
}

int func_727(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058064.f_14[iParam0];
	if (func_719())
	{
		iVar2 = func_454(iParam1);
		if (!iVar2 == -1)
		{
			return func_452(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_594[iParam0 /*17044*/].f_7447[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_24())
	{
		if (Global_4718592.f_81475[iParam0] != -1 && Global_4718592.f_81475[iParam0] <= 4)
		{
			if (Global_4718592.f_81475[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4718592.f_81475[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4718592.f_81475[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4718592.f_81475[iParam0] == 4)
			{
				if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4718592.f_81475[iParam0];
			}
		}
		else
		{
			iVar0 = func_707(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_21, 13))
		{
			iVar0 = func_728(iParam0);
		}
		if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_15, 26) && !func_211(iParam0, unk_0x0E40F846A70BA3EC(iParam1), 0))
		{
			iVar0 = func_718(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_728(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4718592.f_138274;
			break;
		
		case 1:
			iVar0 = Global_4718592.f_138275;
			break;
		
		case 2:
			iVar0 = Global_4718592.f_138276;
			break;
		
		case 3:
			iVar0 = Global_4718592.f_138277;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_729()
{
	return Global_2621446.f_2;
}

bool func_730()
{
	return unk_0xE2D0C323A1AE5D85(Global_2621446, 4);
}

bool func_731()
{
	return unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_36.f_18, 14);
}

void func_732(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_24();
	uParam1->f_18 = func_24();
	uParam1->f_19 = func_24();
	uParam1->f_20 = func_24();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

void func_733(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xCED9E32812D6C7C7(&(Global_2810287.f_5193.f_14[iVar0]), iVar1);
}

int func_734()
{
	int iVar0;
	
	if (!func_39(unk_0x9E2D6C50374FCFA9(), 0))
	{
		if (!func_735(1, 1, 1, 0))
		{
			if (unk_0xE2D0C323A1AE5D85(Local_327[unk_0xF1354995C6159A78() /*26*/].f_1, 9))
			{
				unk_0xB0550BC91B0159D6(&(Local_327[unk_0xF1354995C6159A78() /*26*/].f_1), 9);
			}
			return 0;
		}
		if (func_567())
		{
			if (unk_0xE2D0C323A1AE5D85(Local_327[unk_0xF1354995C6159A78() /*26*/].f_1, 9))
			{
				unk_0xB0550BC91B0159D6(&(Local_327[unk_0xF1354995C6159A78() /*26*/].f_1), 9);
			}
			return 0;
		}
		if (!unk_0xE2D0C323A1AE5D85(Local_327[unk_0xF1354995C6159A78() /*26*/].f_1, 9))
		{
			unk_0xCED9E32812D6C7C7(&(Local_327[unk_0xF1354995C6159A78() /*26*/].f_1), 9);
		}
	}
	else
	{
		iVar0 = func_1171();
		if (iVar0 == -1)
		{
			return 0;
		}
		if (!unk_0xE2D0C323A1AE5D85(Local_327[iVar0 /*26*/].f_1, 9))
		{
			return 0;
		}
	}
	return 1;
}

int func_735(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_622(unk_0x9E2D6C50374FCFA9(), 29))
	{
		return 0;
	}
	if (func_571(unk_0x9E2D6C50374FCFA9(), 21))
	{
		return 0;
	}
	if (func_571(unk_0x9E2D6C50374FCFA9(), 25))
	{
		return 0;
	}
	if (bParam2)
	{
		if (unk_0x0843570206F71F38())
		{
			return 0;
		}
	}
	if (!func_474(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xC96A605CF3E9295B())
		{
			return 0;
		}
	}
	if (func_238(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (func_784())
	{
		return 0;
	}
	if (func_552())
	{
		return 0;
	}
	if (func_783())
	{
		return 0;
	}
	if (func_546())
	{
		return 0;
	}
	if (unk_0x44859561F653DD4E())
	{
		return 0;
	}
	if (func_175(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (!func_548())
	{
		return 0;
	}
	if (func_571(unk_0x9E2D6C50374FCFA9(), 0) || func_571(unk_0x9E2D6C50374FCFA9(), 3))
	{
		return 0;
	}
	if ((func_571(unk_0x9E2D6C50374FCFA9(), 12) || func_571(unk_0x9E2D6C50374FCFA9(), 14)) || func_571(unk_0x9E2D6C50374FCFA9(), 13))
	{
		return 0;
	}
	if (func_780(unk_0x9E2D6C50374FCFA9(), 0, -1))
	{
		if (!func_744())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_743())
		{
			return 0;
		}
	}
	if (Global_1932192)
	{
		return 0;
	}
	if (func_252(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (func_742())
	{
		return 0;
	}
	if (func_741(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if ((func_330(unk_0x9E2D6C50374FCFA9()) && func_327(unk_0x9E2D6C50374FCFA9()) == 123) && !bParam3)
	{
		return 0;
	}
	if (func_740())
	{
		return 0;
	}
	if (unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_28, 4))
	{
		return 0;
	}
	if (func_739(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (func_636(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (!func_408(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_738(unk_0x9E2D6C50374FCFA9()))
		{
			return 0;
		}
	}
	if (func_736())
	{
		return 0;
	}
	return 1;
}

bool func_736()
{
	return func_737() == 1;
}

int func_737()
{
	return Global_1973362;
}

int func_738(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1890187[iVar0 /*105*/].f_77.f_27 != 0;
	}
	return 0;
}

int func_739(int iParam0)
{
	if (Global_2689156[iParam0 /*453*/].f_270.f_4 != 0 || Global_2689156[iParam0 /*453*/].f_270.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_740()
{
	return Global_1946934.f_4583 != -1;
}

int func_741(int iParam0)
{
	if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_28, 14))
	{
		return 1;
	}
	if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_28, 11))
	{
		return 1;
	}
	return 0;
}

int func_742()
{
	if (Global_4516656.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_743()
{
	return Global_100026.f_376 > 0;
}

int func_744()
{
	int iVar0;
	
	iVar0 = func_406(unk_0x9E2D6C50374FCFA9());
	if (((func_779(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_30) || func_778(unk_0x9E2D6C50374FCFA9())) || func_777(unk_0x9E2D6C50374FCFA9())) || func_772(unk_0x9E2D6C50374FCFA9()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_771(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_770(iVar0) || func_769(iVar0))
		{
			return 1;
		}
	}
	if (func_603(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_769(iVar0))
		{
			return 1;
		}
	}
	if (func_768(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_767(iVar0))
		{
			return 1;
		}
	}
	if (func_766(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_765(iVar0))
		{
			return 1;
		}
	}
	if (func_764(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_763(iVar0))
		{
			return 1;
		}
	}
	if (func_762(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_761(iVar0))
		{
			return 1;
		}
	}
	if (func_158(unk_0x9E2D6C50374FCFA9(), 0))
	{
		if (func_760(iVar0))
		{
			if (func_759(unk_0x9E2D6C50374FCFA9()))
			{
				return 1;
			}
		}
	}
	if (func_758(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_757(iVar0))
		{
			return 1;
		}
		if (func_756(iVar0))
		{
			return 1;
		}
		if (func_755())
		{
			return 1;
		}
	}
	if (func_754(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_753())
		{
			return 1;
		}
	}
	if (func_752(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_756(iVar0))
		{
			return 1;
		}
	}
	if (func_751(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_750(iVar0))
		{
			return 1;
		}
	}
	if (func_749(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_748(iVar0))
		{
			return 1;
		}
	}
	if (func_747(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_746(iVar0) || func_745(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_745(int iParam0)
{
	switch (iParam0)
	{
		case 263:
			return 1;
		
		default:
	}
	return 0;
}

int func_746(int iParam0)
{
	switch (iParam0)
	{
		case 264:
			return 1;
		
		default:
	}
	return 0;
}

int func_747(int iParam0)
{
	if (iParam0 != func_24())
	{
		if (func_2370(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_159(Global_2689156[iParam0 /*453*/].f_319.f_6) == 24;
			}
		}
	}
	return 0;
}

int func_748(int iParam0)
{
	switch (iParam0)
	{
		case 276:
			return 1;
		
		default:
	}
	return 0;
}

int func_749(int iParam0)
{
	if (iParam0 != func_24())
	{
		if (func_2370(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_159(Global_2689156[iParam0 /*453*/].f_319.f_6) == 23;
			}
		}
	}
	return 0;
}

int func_750(int iParam0)
{
	switch (iParam0)
	{
		case 271:
			return 1;
		
		default:
	}
	return 0;
}

int func_751(int iParam0)
{
	if (iParam0 != func_24())
	{
		if (func_2370(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_159(Global_2689156[iParam0 /*453*/].f_319.f_6) == 22;
			}
		}
	}
	return 0;
}

int func_752(int iParam0)
{
	if (iParam0 != func_24())
	{
		if (func_2370(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1 && Global_2689156[iParam0 /*453*/].f_319.f_9 != func_24())
			{
				return func_159(Global_2689156[iParam0 /*453*/].f_319.f_6) == 20;
			}
		}
	}
	return 0;
}

bool func_753()
{
	return Global_2810287.f_6720;
}

int func_754(int iParam0)
{
	if (iParam0 != func_24())
	{
		if (func_2370(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_159(Global_2689156[iParam0 /*453*/].f_319.f_6) == 16;
			}
		}
	}
	return 0;
}

bool func_755()
{
	return Global_2810287.f_6719;
}

int func_756(int iParam0)
{
	switch (iParam0)
	{
		case 256:
			return 1;
		
		default:
	}
	return 0;
}

int func_757(int iParam0)
{
	switch (iParam0)
	{
		case 158:
			return 1;
		
		default:
	}
	return 0;
}

int func_758(int iParam0)
{
	if (iParam0 != func_24())
	{
		if (func_2370(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_159(Global_2689156[iParam0 /*453*/].f_319.f_6) == 14;
			}
		}
	}
	return 0;
}

int func_759(int iParam0)
{
	if (func_25(iParam0) != func_24())
	{
		return func_25(iParam0) == func_23(iParam0);
	}
	return 0;
}

int func_760(int iParam0)
{
	switch (iParam0)
	{
		case 241:
		case 248:
		case 242:
		case 244:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return 0;
}

int func_761(int iParam0)
{
	switch (iParam0)
	{
		case 237:
		case 238:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_762(int iParam0)
{
	if (iParam0 != func_24())
	{
		if (func_2370(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_159(Global_2689156[iParam0 /*453*/].f_319.f_6) == 11;
			}
		}
	}
	return 0;
}

int func_763(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_764(int iParam0)
{
	if (iParam0 != func_24())
	{
		if (func_2370(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_159(Global_2689156[iParam0 /*453*/].f_319.f_6) == 9;
			}
		}
	}
	return 0;
}

int func_765(int iParam0)
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return 1;
		
		default:
	}
	return 0;
}

int func_766(int iParam0)
{
	if (iParam0 != func_24())
	{
		if (func_2370(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_159(Global_2689156[iParam0 /*453*/].f_319.f_6) == 7;
			}
		}
	}
	return 0;
}

int func_767(int iParam0)
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

int func_768(int iParam0)
{
	if (iParam0 != func_24())
	{
		if (func_2370(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_159(Global_2689156[iParam0 /*453*/].f_319.f_6) == 4;
			}
		}
	}
	return 0;
}

int func_769(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

int func_770(int iParam0)
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

int func_771(int iParam0)
{
	if (func_342(Global_1853128[iParam0 /*888*/].f_267.f_30, -1))
	{
		return 1;
	}
	return 0;
}

int func_772(int iParam0)
{
	if (func_773(Global_1853128[iParam0 /*888*/].f_267.f_30, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_773(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_774(unk_0x9E2D6C50374FCFA9(), 0);
	}
	if (bParam1)
	{
		if (func_774(unk_0x9E2D6C50374FCFA9(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_774(int iParam0, bool bParam1)
{
	if (Global_1852964 != func_24())
	{
		if (!func_776(Global_1852964))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0x9E2D6C50374FCFA9() != Global_1852964)
			{
				if (unk_0xE2D0C323A1AE5D85(Global_2689156[Global_1852964 /*453*/].f_199, 24) || func_775(Global_1852964))
				{
					return 1;
				}
			}
		}
	}
	return unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_199, 24);
}

int func_775(int iParam0)
{
	if (iParam0 != func_24())
	{
		return unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_199, 9);
	}
	return 0;
}

int func_776(int iParam0)
{
	if (iParam0 != func_24())
	{
		return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_361, 2);
	}
	return 0;
}

int func_777(int iParam0)
{
	if (iParam0 != func_24())
	{
		if (func_2370(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_159(Global_2689156[iParam0 /*453*/].f_319.f_6) == 1;
			}
		}
	}
	return 0;
}

int func_778(int iParam0)
{
	if (iParam0 != func_24())
	{
		if (func_2370(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_159(Global_2689156[iParam0 /*453*/].f_319.f_6) == 0;
			}
		}
	}
	return 0;
}

int func_779(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_780(int iParam0, bool bParam1, int iParam2)
{
	if (Global_1853128[iParam0 /*888*/].f_267.f_30 > 0)
	{
		if (bParam1)
		{
			if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_28, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
	{
		if (iParam2 == -1 || func_159(Global_2689156[iParam0 /*453*/].f_319.f_6) != iParam2)
		{
			if (bParam1)
			{
				return func_781(iParam0) == iParam0;
			}
			return 1;
		}
	}
	return 0;
}

int func_781(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_24())
	{
		return iParam0;
	}
	if (func_782(iParam0) != -1)
	{
		iVar0 = func_159(func_782(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_450(iParam0, 0))
			{
				return func_23(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_24();
		}
		return Global_2689156[iParam0 /*453*/].f_319.f_9;
	}
	return func_24();
}

int func_782(int iParam0)
{
	if (iParam0 != func_24())
	{
		if (func_2370(iParam0, 1, 1))
		{
			return Global_2689156[iParam0 /*453*/].f_319.f_6;
		}
		else if (((Global_1575046 || Global_2667222.f_2678) && iParam0 == unk_0x9E2D6C50374FCFA9()) && func_2370(iParam0, 1, 0))
		{
			return Global_2689156[iParam0 /*453*/].f_319.f_6;
		}
	}
	return -1;
}

bool func_783()
{
	return Global_1575046;
}

bool func_784()
{
	return unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_36.f_18, 0);
}

void func_785(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4[3];
	var uVar5[3];
	int iVar6;
	int iVar7;
	
	if (!unk_0x9315DBF7D972F07A())
	{
		return;
	}
	if (bParam9)
	{
		iVar0 = func_442(unk_0x9E2D6C50374FCFA9());
		Global_1944899.f_4 = func_925();
		Global_1944899.f_5 = func_924();
		if (func_566(unk_0x9E2D6C50374FCFA9()) || func_441(unk_0x9E2D6C50374FCFA9()))
		{
			Global_1944899.f_6 = 1;
		}
		else
		{
			Global_1944899.f_6 = 0;
		}
		Global_1944899.f_1 = func_918(bParam9);
		Global_1944899.f_8 = unk_0x48352343BC5A41AE();
		Global_1944899.f_9 = func_917(bParam0);
		Global_1944899.f_10 = iParam1;
		Global_1944899.f_17 = Global_1944899.f_2;
		Global_1944899.f_18 = Global_1944899.f_2;
		Global_1944899.f_19 = func_913();
		Global_1944899.f_21 = (Global_1944899.f_8 - Global_1944899.f_7);
		if (func_450(unk_0x9E2D6C50374FCFA9(), 1))
		{
			Global_1944899.f_23 = func_917(func_517(1));
		}
		Global_1944899.f_24 = func_22(unk_0x9E2D6C50374FCFA9());
		Global_1944899.f_28 = func_912(unk_0x9E2D6C50374FCFA9());
		if (Global_1944899.f_24 > 2)
		{
			Global_1944899.f_24 = 2;
		}
		func_910(iVar0);
	}
	else
	{
		iVar0 = func_406(unk_0x9E2D6C50374FCFA9());
	}
	if (func_592(iVar0))
	{
		Global_1944638.f_2 = func_925();
		Global_1944638.f_3 = func_924();
		Global_1944638.f_50 = iParam4;
		Global_1944638.f_51 = iParam5;
		Global_1944638.f_10 = unk_0x48352343BC5A41AE();
		Global_1944638.f_20 = (Global_1944638.f_10 - Global_1944638.f_9);
		Global_1944638.f_12 = iParam1;
		Global_1944638.f_19 = func_906(iVar0, bParam0, func_909(bParam3));
		if (bParam0)
		{
			Global_1944638.f_11 = 1;
		}
		else
		{
			Global_1944638.f_11 = 0;
		}
		if ((func_565(unk_0x9E2D6C50374FCFA9()) || func_564(unk_0x9E2D6C50374FCFA9())) || func_408(unk_0x9E2D6C50374FCFA9()))
		{
			Global_1944638.f_8 = 1;
		}
		else
		{
			Global_1944638.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1944638.f_43 = 0;
			Global_1944638.f_45 = func_905(func_120(), iParam2);
			Global_1944638.f_47 = iParam7;
			Global_1944638.f_46 = iParam6;
			Global_1944638.f_52 = func_904(func_120(), iParam2);
		}
		func_902(iVar0);
	}
	else if (func_597(iVar0))
	{
		Global_1944692.f_2 = func_925();
		Global_1944692.f_3 = func_924();
		Global_1944692.f_10 = unk_0x48352343BC5A41AE();
		Global_1944692.f_19 = (Global_1944692.f_10 - Global_1944692.f_9);
		Global_1944692.f_12 = iParam1;
		if (bParam0)
		{
			Global_1944692.f_11 = 1;
		}
		else
		{
			Global_1944692.f_11 = 0;
		}
		if ((func_565(unk_0x9E2D6C50374FCFA9()) || func_564(unk_0x9E2D6C50374FCFA9())) || func_408(unk_0x9E2D6C50374FCFA9()))
		{
			Global_1944692.f_8 = 1;
		}
		else
		{
			Global_1944692.f_8 = 0;
		}
		func_900(iVar0);
	}
	else if (func_767(iVar0))
	{
		Global_1944755.f_2 = func_925();
		Global_1944755.f_3 = func_924();
		Global_1944755.f_9 = unk_0x48352343BC5A41AE();
		Global_1944755.f_18 = (Global_1944755.f_9 - Global_1944755.f_8);
		Global_1944755.f_11 = iParam1;
		Global_1944755.f_7 = func_913();
		Global_1944755.f_42 = func_898(func_41(), 5);
		iVar1 = unk_0x9E2D6C50374FCFA9();
		iVar2 = func_384(iVar1);
		Global_1944755.f_28 = iVar2;
		Global_1944755.f_29 = func_917((func_897(iVar1) || func_896(iVar1)));
		Global_1944755.f_30 = func_917(func_895(iVar1));
		Global_1944755.f_32 = func_917(func_894(iVar1));
		Global_1944755.f_33 = func_917(func_893(iVar1));
		Global_1944755.f_34 = func_917(func_892(iVar1));
		Global_1944755.f_35 = func_917(func_891(0, iVar1) == 1);
		Global_1944755.f_36 = func_917(func_890(iVar1));
		Global_1944755.f_37 = func_917(func_889(iVar1));
		Global_1944755.f_38 = func_917(func_888(iVar1));
		Global_1944755.f_39 = func_917(func_675(iVar1, iVar2, 0));
		Global_1944755.f_40 = func_917(func_675(iVar1, iVar2, 2));
		Global_1944755.f_41 = func_917(func_675(iVar1, iVar2, 1));
		if (func_887(iVar1))
		{
			Global_1944755.f_31 = 2;
		}
		else if (func_886(iVar1))
		{
			Global_1944755.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1944755.f_10 = 1;
		}
		else
		{
			Global_1944755.f_10 = 0;
		}
		if ((func_565(unk_0x9E2D6C50374FCFA9()) || func_564(unk_0x9E2D6C50374FCFA9())) || func_408(unk_0x9E2D6C50374FCFA9()))
		{
			Global_1944755.f_6 = 1;
		}
		else
		{
			Global_1944755.f_6 = 0;
		}
		Global_1944755.f_21 = -2;
		Global_1944755.f_22 = -2;
		func_884(iVar0);
	}
	else if (func_765(iVar0))
	{
		Global_1944799.f_2 = func_925();
		Global_1944799.f_3 = func_924();
		if ((func_565(unk_0x9E2D6C50374FCFA9()) || func_564(unk_0x9E2D6C50374FCFA9())) || func_408(unk_0x9E2D6C50374FCFA9()))
		{
			Global_1944799.f_6 = 1;
		}
		else
		{
			Global_1944799.f_6 = 0;
		}
		Global_1944799.f_9 = unk_0x48352343BC5A41AE();
		Global_1944799.f_10 = func_917(bParam0);
		Global_1944799.f_11 = iParam1;
		Global_1944799.f_17 = func_883(func_520());
		Global_1944799.f_18 = (Global_1944799.f_9 - Global_1944799.f_8);
		Global_1944799.f_20 = iParam8;
		Global_1944799.f_21 = -2;
		Global_1944799.f_22 = -2;
		Global_1944799.f_27 = func_882();
		Global_1944799.f_29 = func_881(6109, -1, 0);
		Global_1944799.f_30 = func_881(6105, -1, 0);
		Global_1944799.f_31 = func_881(6106, -1, 0);
		Global_1944799.f_32 = func_881(6108, -1, 0);
		Global_1944799.f_33 = func_881(6107, -1, 0);
		Global_1944799.f_34 = func_881(6110, -1, 0);
		Global_1944799.f_36 = func_917(func_517(1));
		Global_1944799.f_37 = func_878();
		func_864();
		func_862(iVar0);
	}
	else if (func_763(iVar0))
	{
		Global_1944853.f_2 = func_925();
		Global_1944853.f_3 = func_924();
		Global_1944853.f_1 = iParam10;
		if ((func_565(unk_0x9E2D6C50374FCFA9()) || func_564(unk_0x9E2D6C50374FCFA9())) || func_408(unk_0x9E2D6C50374FCFA9()))
		{
			Global_1944853.f_6 = 1;
		}
		else
		{
			Global_1944853.f_6 = 0;
		}
		Global_1944853.f_9 = unk_0x48352343BC5A41AE();
		Global_1944853.f_10 = func_917(bParam0);
		Global_1944853.f_11 = iParam1;
		Global_1944853.f_18 = (Global_1944853.f_9 - Global_1944853.f_8);
		Global_1944853.f_20 = iParam8;
		Global_1944853.f_23 = Global_786547;
		Global_1944853.f_36 = Global_786547.f_1;
		Global_1944853.f_24 = func_881(6159, -1, 0);
		Global_1944853.f_25 = func_881(6164, -1, 0);
		Global_1944853.f_26 = func_881(6165, -1, 0);
		Global_1944853.f_27 = func_917((((func_861() || func_860()) || func_859()) || func_858(unk_0x9E2D6C50374FCFA9())));
		Global_1944853.f_28 = func_881(6166, -1, 0);
		Global_1944853.f_29 = func_917(func_857());
		Global_1944853.f_35 = -1;
		Global_1944853.f_38 = -1;
		Global_1944853.f_39 = Global_1944853.f_4;
		Global_1944853.f_40 = Global_1944853.f_5;
		Global_1944853.f_41 = func_925();
		Global_1944853.f_42 = func_917(func_517(1));
		Global_1944853.f_44 = Global_1944853.f_18;
		func_855(iVar0);
	}
	else if (func_852(iVar0))
	{
		if (Global_1944989.f_2 == -1)
		{
			Global_1944989.f_2 = func_925();
		}
		if (Global_1944989.f_3 == -1)
		{
			Global_1944989.f_3 = func_924();
		}
		if ((func_565(unk_0x9E2D6C50374FCFA9()) || func_564(unk_0x9E2D6C50374FCFA9())) || func_408(unk_0x9E2D6C50374FCFA9()))
		{
			Global_1944989.f_6 = 1;
		}
		else
		{
			Global_1944989.f_6 = 0;
		}
		Global_1944989.f_1 = func_918(0);
		Global_1944989.f_7 = func_913();
		Global_1944989.f_9 = unk_0x48352343BC5A41AE();
		Global_1944989.f_10 = func_917(bParam0);
		Global_1944989.f_11 = iParam1;
		if (func_120() != -1)
		{
			Global_1944989.f_17 = func_851(func_120());
		}
		Global_1944989.f_18 = (Global_1944989.f_9 - Global_1944989.f_8);
		Global_1944989.f_19 = Global_2810287.f_6707;
		Global_1944989.f_28 = func_912(unk_0x9E2D6C50374FCFA9());
		Global_1944989.f_29 = func_917(func_850(unk_0x9E2D6C50374FCFA9()));
		Global_1944989.f_30 = func_917(func_849(unk_0x9E2D6C50374FCFA9()));
		Global_1944989.f_31 = func_848(unk_0x9E2D6C50374FCFA9());
		if (func_450(unk_0x9E2D6C50374FCFA9(), 1))
		{
			Global_1944989.f_33 = func_917(func_517(1));
		}
		if (Global_1944989.f_34 > 2)
		{
			Global_1944989.f_34 = 2;
		}
		func_846(iVar0);
	}
	else if (func_845(iVar0))
	{
		Global_1944935.f_2 = func_925();
		Global_1944935.f_3 = func_924();
		if ((func_565(unk_0x9E2D6C50374FCFA9()) || func_564(unk_0x9E2D6C50374FCFA9())) || func_408(unk_0x9E2D6C50374FCFA9()))
		{
			Global_1944935.f_6 = 1;
		}
		else
		{
			Global_1944935.f_6 = 0;
		}
		Global_1944935.f_1 = func_918(0);
		Global_1944935.f_9 = unk_0x48352343BC5A41AE();
		Global_1944935.f_10 = func_917(bParam0);
		Global_1944935.f_11 = iParam1;
		Global_1944935.f_18 = (Global_1944935.f_9 - Global_1944935.f_8);
		Global_1944935.f_28 = func_912(unk_0x9E2D6C50374FCFA9());
		if (Global_1944935.f_28)
		{
			Global_1944935.f_29 = func_844(unk_0x9E2D6C50374FCFA9());
		}
		else
		{
			Global_1944935.f_29 = 0;
		}
		Global_1944935.f_30 = func_828(unk_0x9E2D6C50374FCFA9(), 4, -1);
		Global_1944935.f_31 = func_848(unk_0x9E2D6C50374FCFA9());
		Global_1944935.f_32 = func_917(func_827(unk_0x9E2D6C50374FCFA9()));
		Global_1944935.f_33 = func_917(func_826(unk_0x9E2D6C50374FCFA9()));
		Global_1944935.f_34 = func_917(func_825(unk_0x9E2D6C50374FCFA9()));
		Global_1944935.f_35 = func_917(func_824(unk_0x9E2D6C50374FCFA9()));
		Global_1944935.f_36 = func_823(unk_0x9E2D6C50374FCFA9());
		Global_1944935.f_37 = func_822(unk_0x9E2D6C50374FCFA9());
		Global_1944935.f_39 = func_821(unk_0x9E2D6C50374FCFA9());
		if (func_450(unk_0x9E2D6C50374FCFA9(), 1))
		{
			Global_1944935.f_41 = func_917(func_517(1));
		}
		if (Global_1944935.f_42 > 2)
		{
			Global_1944935.f_42 = 2;
		}
		func_819(iVar0);
	}
	else if (func_818(iVar0))
	{
		Global_1945073.f_2 = func_925();
		Global_1945073.f_3 = func_924();
		Global_1945073.f_4 = func_817(func_120());
		Global_1945073.f_5 = func_816(func_120());
		if ((func_565(unk_0x9E2D6C50374FCFA9()) || func_564(unk_0x9E2D6C50374FCFA9())) || func_408(unk_0x9E2D6C50374FCFA9()))
		{
			Global_1945073.f_6 = 1;
		}
		else
		{
			Global_1945073.f_6 = 0;
		}
		Global_1945073.f_7 = func_913();
		Global_1945073.f_9 = unk_0x48352343BC5A41AE();
		Global_1945073.f_10 = func_917(bParam0);
		Global_1945073.f_11 = iParam1;
		if (func_520() != -1)
		{
			Global_1945073.f_17 = func_851(func_520());
		}
		Global_1945073.f_18 = (Global_1945073.f_9 - Global_1945073.f_8);
		Global_1945073.f_21 = 1;
		Global_1945073.f_22 = 1;
		Global_1945073.f_25 = func_815(unk_0x9E2D6C50374FCFA9());
		Global_1945073.f_27 = func_917(func_814(unk_0x9E2D6C50374FCFA9()));
		Global_1945073.f_28 = func_810(21, -1);
		Global_1945073.f_29 = func_917(func_809(unk_0x9E2D6C50374FCFA9()));
		func_807(iVar0);
	}
	else if (func_757(iVar0))
	{
		if (func_120() != -1)
		{
			Global_1945148.f_6 = func_817(func_120());
			Global_1945148.f_7 = func_816(func_120());
		}
		if (func_450(unk_0x9E2D6C50374FCFA9(), 1))
		{
			Global_1945148.f_8 = func_917(func_517(1));
		}
		Global_1945148.f_10 = func_913();
		Global_1945148.f_11 = 1;
		Global_1945148.f_13 = (unk_0x48352343BC5A41AE() - Global_1973258);
		Global_1945148.f_14 = iParam1;
		Global_1945148.f_19 = 1;
		Global_1945148.f_20 = 1;
		func_805(iVar0);
	}
	else if (func_756(iVar0))
	{
		Global_1945235.f_2 = func_925();
		if (func_120() != -1)
		{
			Global_1945235.f_6 = func_817(func_120());
			Global_1945235.f_7 = func_816(func_120());
		}
		Global_1945235.f_8 = func_917(func_517(1));
		Global_1945235.f_10 = func_913();
		Global_1945235.f_11 = 1;
		Global_1945235.f_14 = iParam1;
		func_803(iVar0);
	}
	else if (func_802(iVar0))
	{
		Global_1945347.f_2 = func_925();
		Global_1945347.f_9 = 1;
		Global_1945347.f_10 = bParam0;
		Global_1945347.f_11 = iParam1;
		func_800(iVar0);
	}
	else if (func_750(iVar0) || func_746(iVar0))
	{
		if (func_120() != -1)
		{
			Global_1945368.f_5 = func_817(func_120());
			Global_1945368.f_6 = func_816(func_120());
		}
		Global_1945368.f_7 = func_917(func_517(1));
		Global_1945368.f_9 = func_913();
		Global_1945368.f_10 = 1;
		Global_1945368.f_13 = iParam1;
		Global_1945368.f_33 = bParam0;
		Global_1945368.f_32 = iVar0;
		func_798(iVar0);
	}
	else if (func_745(iVar0) || func_797(iVar0))
	{
		iVar3 = func_120();
		if (iVar3 != -1)
		{
			Global_1945437.f_7 = func_817(iVar3);
			Global_1945437.f_8 = func_816(iVar3);
		}
		Global_1945437.f_9 = func_917(func_517(1));
		Global_1945437.f_11 = func_913();
		Global_1945437.f_12 = 1;
		Global_1945437.f_15 = bParam0;
		Global_1945437.f_3 = func_925();
		if (func_450(unk_0x9E2D6C50374FCFA9(), 1))
		{
			Global_1945437.f_9 = func_917(func_517(1));
		}
		else
		{
			Global_1945437.f_9 = -1;
		}
		if (func_745(iVar0))
		{
			Global_1945437.f_4 = func_795(func_796(unk_0x9E2D6C50374FCFA9()));
		}
		else
		{
			Global_1945437.f_4 = func_792(func_793(unk_0x9E2D6C50374FCFA9()));
		}
		Global_1945437.f_1 = iVar0;
		Global_1945437.f_16 = iParam1;
		iVar7 = unk_0x9E2D6C50374FCFA9();
		if (iVar3 != -1)
		{
			iVar7 = iVar3;
		}
		iVar6 = 0;
		while (iVar6 < 3)
		{
			uVar4[iVar6] = func_790(func_791(iVar7, iVar6));
			uVar5[iVar6] = func_788(func_789(iVar7, iVar6));
			iVar6++;
		}
		func_786(iVar0, &uVar4, &uVar5);
	}
	else
	{
		Global_1944620.f_6 = unk_0x48352343BC5A41AE();
		if (bParam0)
		{
			Global_1944620.f_7 = 1;
		}
		else
		{
			Global_1944620.f_7 = 0;
		}
		Global_1944620.f_8 = iParam1;
		if (Global_1944620.f_4 == 0)
		{
			if ((func_565(unk_0x9E2D6C50374FCFA9()) || func_564(unk_0x9E2D6C50374FCFA9())) || func_408(unk_0x9E2D6C50374FCFA9()))
			{
				Global_1944620.f_4 = 1;
			}
		}
	}
}

void func_786(int iParam0, var uParam1, var uParam2)
{
	unk_0x46A70777BE6CEAB9(&Global_1945437, uParam1, uParam2);
	func_787();
}

void func_787()
{
	struct<29> Var0;
	
	Global_1945437 = { Var0 };
}

int func_788(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -996199159;
		
		case 1:
			return 1351684416;
		
		case 2:
			return 80063766;
		
		default:
	}
	return -1;
}

int func_789(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		if (iParam1 >= 0 && iParam1 < 3)
		{
			return Global_1977258[iParam0 /*55*/].f_27.f_17[iParam1 /*3*/].f_1;
		}
	}
	return 0;
}

int func_790(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2118247256;
		
		case 1:
			return 1203690123;
		
		case 2:
			return 270501699;
		
		case 3:
			return 1117148689;
		
		case 4:
			return 372411449;
		
		case 5:
			return 1263185141;
		
		default:
	}
	return -1;
}

int func_791(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		if (iParam1 >= 0 && iParam1 < 3)
		{
			return Global_1977258[iParam0 /*55*/].f_27.f_17[iParam1 /*3*/];
		}
	}
	return -1;
}

int func_792(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -550162297;
		
		case 1:
			return 1867392996;
		
		case 2:
			return 1178478598;
		
		case 3:
			return 1733853200;
		
		case 4:
			return 122463526;
		
		case 5:
			return -11921007;
		
		case 6:
			return 1857889391;
		
		case 7:
			return -175123167;
		
		default:
	}
	return -1;
}

int func_793(int iParam0)
{
	if (func_406(iParam0) == 262)
	{
		return func_794(iParam0);
	}
	return -1;
}

int func_794(int iParam0)
{
	if (func_253(iParam0, 0))
	{
		return Global_1893548[iParam0 /*600*/].f_11.f_182;
	}
	return -1;
}

int func_795(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -652378470;
		
		case 1:
			return -1721915175;
		
		case 2:
			return 1943926012;
		
		case 3:
			return 1889811088;
		
		case 4:
			return 2056605795;
		
		case 5:
			return 1160295559;
		
		default:
	}
	return -1;
}

int func_796(int iParam0)
{
	if (func_406(iParam0) == 263)
	{
		return func_794(iParam0);
	}
	return -1;
}

int func_797(int iParam0)
{
	switch (iParam0)
	{
		case 262:
			return 1;
		
		default:
	}
	return 0;
}

void func_798(int iParam0)
{
	unk_0xDD14B13C611C2A72(&Global_1945368);
	func_799();
}

void func_799()
{
	struct<34> Var0;
	
	Global_1945368 = { Var0 };
}

void func_800(int iParam0)
{
	unk_0xA0EE58DF5F161A36(&Global_1945347);
	func_801();
}

void func_801()
{
	struct<21> Var0;
	
	Global_1945347 = { Var0 };
}

int func_802(int iParam0)
{
	switch (iParam0)
	{
		case 258:
			return 1;
		
		default:
	}
	return 0;
}

void func_803(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x95663AE09F86EE73(&Global_1945235);
	func_804();
}

void func_804()
{
	struct<35> Var0;
	
	Global_1945235 = { Var0 };
	Global_1945235.f_23 = 0;
	Global_1945235.f_22 = 0;
	Global_1945235.f_21 = 0;
}

void func_805(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x71E002586231CECC(&Global_1945148);
	func_806();
}

void func_806()
{
	struct<36> Var0;
	
	Global_1945148 = { Var0 };
	Global_1945148.f_23 = 0;
	Global_1945148.f_22 = 0;
	Global_1945148.f_21 = 0;
}

void func_807(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0xF736E9FFB158C31E(&Global_1945073);
	func_808();
}

void func_808()
{
	struct<31> Var0;
	
	Global_1945073 = { Var0 };
}

int func_809(int iParam0)
{
	if (iParam0 != func_24())
	{
		return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_379.f_2, 6);
	}
	return 0;
}

int func_810(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_41();
	}
	if (iParam0 == 7 && !Global_262145.f_17250)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_813(iParam0);
		if (iVar1 == 0 && func_881(5395, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_812(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_912(unk_0x9E2D6C50374FCFA9()) && iVar1 == 1)
		{
			return 1237;
		}
		if (func_811(-1) && iVar1 == 3)
		{
			return 1238;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1655634[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2863443[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 27)
		{
			return 0;
		}
		return Global_2863282[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

bool func_811(int iParam0)
{
	return func_881(9516, iParam0, 0) != 0;
}

bool func_812(int iParam0)
{
	if (!Global_262145.f_23939)
	{
		return 0;
	}
	return func_881(7209, iParam0, 0) != 0;
}

int func_813(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 4)
	{
		return iParam0;
	}
	return -1;
}

int func_814(int iParam0)
{
	if (iParam0 != func_24())
	{
		return Global_1853128[iParam0 /*888*/].f_267.f_379 != 0;
	}
	return 0;
}

int func_815(int iParam0)
{
	if (func_406(iParam0) == 243)
	{
		return func_794(iParam0);
	}
	return -1;
}

int func_816(int iParam0)
{
	if (iParam0 == func_24())
	{
		return -1;
	}
	return Global_1893548[iParam0 /*600*/].f_11.f_8[1];
}

int func_817(int iParam0)
{
	if (iParam0 == func_24())
	{
		return -1;
	}
	return Global_1893548[iParam0 /*600*/].f_11.f_8[0];
}

int func_818(int iParam0)
{
	switch (iParam0)
	{
		case 243:
			return 1;
		
		default:
	}
	return 0;
}

void func_819(int iParam0)
{
	unk_0x088366FA1148EB2F(&Global_1944935);
	func_820();
}

void func_820()
{
	struct<54> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Global_1944935 = { Var0 };
}

int func_821(int iParam0)
{
	if (iParam0 != func_24())
	{
		return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_344, 12);
	}
	return 0;
}

int func_822(int iParam0)
{
	if (iParam0 != func_24())
	{
		return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_344, 10);
	}
	return 0;
}

int func_823(int iParam0)
{
	if (iParam0 != func_24())
	{
		return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_344, 11);
	}
	return 0;
}

bool func_824(int iParam0)
{
	if (iParam0 == func_24())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_291.f_4, 4);
}

bool func_825(int iParam0)
{
	if (iParam0 == func_24())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_291.f_4, 3);
}

bool func_826(int iParam0)
{
	if (iParam0 == func_24())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_291.f_4, 2);
}

bool func_827(int iParam0)
{
	if (iParam0 == func_24())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_291.f_4, 1);
}

int func_828(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == func_24() || !func_843(iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return func_838(iParam0, iParam2);
		
		case 1:
			return func_836(iParam0, iParam2);
		
		case 3:
			return func_835(iParam0);
		
		case 2:
			return func_830(iParam0, iParam2);
		
		case 4:
			return func_829(iParam0);
		
		default:
	}
	return 0;
}

bool func_829(int iParam0)
{
	if (unk_0x44859561F653DD4E())
	{
		return unk_0xE2D0C323A1AE5D85(Global_4718592.f_131916.f_14, 6);
	}
	if (iParam0 == func_24())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_291.f_4, 6);
}

int func_830(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			return func_834(iParam0);
		
		case 11:
			return func_833(iParam0);
		
		case 12:
			return func_832(iParam0);
		
		case 13:
			return func_831(iParam0);
		
		default:
	}
	return 0;
}

bool func_831(int iParam0)
{
	if (iParam0 == func_24())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_291.f_4, 15);
}

bool func_832(int iParam0)
{
	if (iParam0 == func_24())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_291.f_4, 14);
}

bool func_833(int iParam0)
{
	if (iParam0 == func_24())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_291.f_4, 13);
}

bool func_834(int iParam0)
{
	if (iParam0 == func_24())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_291.f_4, 12);
}

bool func_835(int iParam0)
{
	if (unk_0x44859561F653DD4E())
	{
		return unk_0xE2D0C323A1AE5D85(Global_4718592.f_131916.f_14, 11);
	}
	if (iParam0 == func_24())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_291.f_4, 5);
}

int func_836(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
			return func_837(iParam0);
		
		case 6:
			return func_827(iParam0);
		
		case 7:
			return func_826(iParam0);
		
		case 8:
			return func_825(iParam0);
		
		case 9:
			return func_824(iParam0);
		
		default:
	}
	return 0;
}

bool func_837(int iParam0)
{
	if (iParam0 == func_24())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_291.f_4, 0);
}

int func_838(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_842(iParam0);
		
		case 1:
			return func_841(iParam0);
		
		case 2:
			return func_840(iParam0);
		
		case 3:
			return func_839(iParam0);
		
		case 4:
			return func_848(iParam0);
		
		default:
	}
	return 0;
}

bool func_839(int iParam0)
{
	if (iParam0 == func_24())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_291.f_4, 10);
}

bool func_840(int iParam0)
{
	if (iParam0 == func_24())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_291.f_4, 9);
}

bool func_841(int iParam0)
{
	if (iParam0 == func_24())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_291.f_4, 8);
}

bool func_842(int iParam0)
{
	if (iParam0 == func_24())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_291.f_4, 7);
}

bool func_843(int iParam0)
{
	return (iParam0 != -1 && iParam0 != 6);
}

int func_844(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_24())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_828(iParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_828(iParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_828(iParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_828(iParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

int func_845(int iParam0)
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

void func_846(int iParam0)
{
	unk_0xD64D32D200423B06(&Global_1944989);
	func_847();
}

void func_847()
{
	struct<39> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Global_1944989 = { Var0 };
}

int func_848(int iParam0)
{
	if (unk_0x44859561F653DD4E())
	{
		return unk_0xE2D0C323A1AE5D85(Global_4718592.f_131916.f_14, 12);
	}
	if (iParam0 != -1)
	{
		return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_361, 31);
	}
	return 0;
}

bool func_849(int iParam0)
{
	if (iParam0 == func_24())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_332.f_1, 0);
}

bool func_850(int iParam0)
{
	if (unk_0x44859561F653DD4E())
	{
		return unk_0xE2D0C323A1AE5D85(Global_4718592.f_131916.f_14, 5);
	}
	if (iParam0 == func_24())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_332.f_1, 19);
}

var func_851(int iParam0)
{
	return Global_1853128[iParam0 /*888*/].f_205.f_6;
}

int func_852(int iParam0)
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_853(func_854(unk_0x9E2D6C50374FCFA9()))))
	{
		return 1;
	}
	return 0;
}

int func_853(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 3:
		case 2:
		case 5:
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

int func_854(int iParam0)
{
	if (func_406(iParam0) == 237 || func_406(iParam0) == 250)
	{
		return func_794(iParam0);
	}
	return -1;
}

void func_855(int iParam0)
{
	unk_0x394A4AC6FA3905C0(&Global_1944853);
	func_856();
}

void func_856()
{
	struct<46> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Global_1944853 = { Var0 };
	Global_1944853.f_16 = 0;
}

bool func_857()
{
	return func_881(6158, -1, 0) != 0;
}

int func_858(int iParam0)
{
	if (iParam0 != func_24())
	{
		return Global_1853128[iParam0 /*888*/].f_267.f_281 != 0;
	}
	return 0;
}

bool func_859()
{
	return func_881(6166, -1, 0) == 3;
}

bool func_860()
{
	return func_881(6166, -1, 0) == 2;
}

bool func_861()
{
	return func_881(6166, -1, 0) == 1;
}

void func_862(int iParam0)
{
	unk_0xE054822C491E697A(&Global_1944799);
	func_863();
}

void func_863()
{
	struct<54> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1944799 = { Var0 };
	Global_1944799.f_23 = 0;
	Global_1944799.f_24 = 0;
	Global_1944799.f_16 = 0;
}

void func_864()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = (iVar0 + func_875(12));
		func_874(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1585844[iVar1 /*142*/].f_66 != 0 && func_866(Global_1585844[iVar1 /*142*/].f_66, 1))
			{
				if (Global_2810287.f_958 != iVar1)
				{
					if (func_865(Global_1585844[iVar1 /*142*/].f_66))
					{
						if (Global_1585844[iVar1 /*142*/].f_66 != 0)
						{
							iVar3 = Global_1585844[iVar1 /*142*/].f_66;
						}
						switch (iVar0)
						{
							case 0:
								Global_1944799.f_38 = iVar3;
								break;
							
							case 1:
								Global_1944799.f_39 = iVar3;
								break;
							
							case 2:
								Global_1944799.f_40 = iVar3;
								break;
							
							case 3:
								Global_1944799.f_41 = iVar3;
								break;
							
							case 4:
								Global_1944799.f_42 = iVar3;
								break;
							
							case 5:
								Global_1944799.f_43 = iVar3;
								break;
							
							case 6:
								Global_1944799.f_44 = iVar3;
								break;
							
							case 7:
								Global_1944799.f_45 = iVar3;
								break;
							
							case 8:
								Global_1944799.f_46 = iVar3;
								break;
							
							case 9:
								Global_1944799.f_47 = iVar3;
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
}

int func_865(int iParam0)
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("havok"):
		case joaat("hunter"):
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("microlight"):
		case joaat("tula"):
		case joaat("lazer"):
		case joaat("pyro"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("howard"):
		case joaat("bombushka"):
		case joaat("alphaz1"):
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case joaat("akula"):
		case joaat("volatol"):
		case joaat("strikeforce"):
		case joaat("seasparrow"):
		case joaat("alkonost"):
		case joaat("annihilator2"):
			return 1;
		
		default:
	}
	return 0;
}

int func_866(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x2886B1BFE0896A9A(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0x9315DBF7D972F07A()) || (iParam0 == joaat("buffalo3") && !unk_0x9315DBF7D972F07A())) || (iParam0 == joaat("gauntlet2") && !unk_0x9315DBF7D972F07A())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x9315DBF7D972F07A()))
	{
		if (!func_873())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x63913871ECC3707E())
		{
			if (unk_0xCD58DE0B13D04118(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x1B5C8EE302FC0D1E(Var1))
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
		if ((((!func_872() && !func_871()) && !func_870()) && !func_869()) && !func_873())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x3EBD3AF4E5D7A08C() || unk_0x8FE9914D4872D601()) || unk_0xA7384DAD7CF469DA())
		{
		}
		else if (!func_870())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_868(iParam0))
		{
			return 0;
		}
	}
	if (!func_867(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_867(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_680())
	{
		return 1;
	}
	unk_0x5D66DA471CACD32B(&iVar0, &uVar1);
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
	if (!unk_0x5B1B2A8FE51FDB2D(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_868(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2783340)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x48352343BC5A41AE();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_6856 && !Global_262145.f_13186) && iVar1 < Global_262145.f_13187)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14486 && iVar1 < Global_262145.f_14498)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14482 && iVar1 < Global_262145.f_14494)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14483 && iVar1 < Global_262145.f_14495)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14484 && iVar1 < Global_262145.f_14496)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14485 && iVar1 < Global_262145.f_14497)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14487 && iVar1 < Global_262145.f_14499)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14488 && iVar1 < Global_262145.f_14491)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14489 && iVar1 < Global_262145.f_14492)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14490 && iVar1 < Global_262145.f_14493)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_17119 && iVar1 < Global_262145.f_17084)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_17114 && iVar1 < Global_262145.f_17079)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_17118 && iVar1 < Global_262145.f_17083)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_17117 && iVar1 < Global_262145.f_17082)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_17111 && iVar1 < Global_262145.f_17076)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_17112 && iVar1 < Global_262145.f_17077)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_17115 && iVar1 < Global_262145.f_17080)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_17116 && iVar1 < Global_262145.f_17081)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_17113 && iVar1 < Global_262145.f_17078)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_17121 && iVar1 < Global_262145.f_17086)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_17122 && iVar1 < Global_262145.f_17087)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_17110 && iVar1 < Global_262145.f_17075)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_17109 && iVar1 < Global_262145.f_17074)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_17108 && iVar1 < Global_262145.f_17073)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_17120 && iVar1 < Global_262145.f_17085)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_17123 && iVar1 < Global_262145.f_17088)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_17124 && iVar1 < Global_262145.f_17089)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_17125 && iVar1 < Global_262145.f_17090)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_17126 && iVar1 < Global_262145.f_17091)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17273 && iVar1 < Global_262145.f_17295)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17274 && iVar1 < Global_262145.f_17296)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17275 && iVar1 < Global_262145.f_17297)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17276 && iVar1 < Global_262145.f_17298)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17277 && iVar1 < Global_262145.f_17299)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17278 && iVar1 < Global_262145.f_17300)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17280 && iVar1 < Global_262145.f_17301)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17281 && iVar1 < Global_262145.f_17302)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17282 && iVar1 < Global_262145.f_17303)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17283 && iVar1 < Global_262145.f_17304)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17284 && iVar1 < Global_262145.f_17305)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17285 && iVar1 < Global_262145.f_17306)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17286 && iVar1 < Global_262145.f_17307)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17292 && iVar1 < Global_262145.f_17314)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17289 && iVar1 < Global_262145.f_17310)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17290 && iVar1 < Global_262145.f_17311)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17291 && iVar1 < Global_262145.f_17312)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17279 && iVar1 < Global_262145.f_17313)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17293 && iVar1 < Global_262145.f_17315)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17287 && iVar1 < Global_262145.f_17308)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17288 && iVar1 < Global_262145.f_17309)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17294 && iVar1 < Global_262145.f_17316)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18925 && iVar1 < Global_262145.f_19022)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18926 && iVar1 < Global_262145.f_19023)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18927 && iVar1 < Global_262145.f_19024)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18928 && iVar1 < Global_262145.f_19025)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18929 && iVar1 < Global_262145.f_19026)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18930 && iVar1 < Global_262145.f_19027)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18931 && iVar1 < Global_262145.f_19028)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18932 && iVar1 < Global_262145.f_19029)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18933 && iVar1 < Global_262145.f_19030)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18934 && iVar1 < Global_262145.f_19031)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18935 && iVar1 < Global_262145.f_19032)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18936 && iVar1 < Global_262145.f_19033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18937 && iVar1 < Global_262145.f_19034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18938 && iVar1 < Global_262145.f_19035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18939 && iVar1 < Global_262145.f_19036)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18940 && iVar1 < Global_262145.f_19037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18941 && iVar1 < Global_262145.f_19038)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18942 && iVar1 < Global_262145.f_19039)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18943 && iVar1 < Global_262145.f_19040)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18944 && iVar1 < Global_262145.f_19041)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18945 && iVar1 < Global_262145.f_19042)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18946 && iVar1 < Global_262145.f_19043)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18947 && iVar1 < Global_262145.f_19044)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18948 && iVar1 < Global_262145.f_19045)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18949 && iVar1 < Global_262145.f_19046)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_20006 && iVar1 < Global_262145.f_20002)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_20007 && iVar1 < Global_262145.f_20003)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_20008 && iVar1 < Global_262145.f_20004)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_20009 && iVar1 < Global_262145.f_20005)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_20887 && iVar1 < Global_262145.f_20895)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_20888 && iVar1 < Global_262145.f_20896)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_20889 && iVar1 < Global_262145.f_20897)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_20890 && iVar1 < Global_262145.f_20898)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_20891 && iVar1 < Global_262145.f_20899)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_20892 && iVar1 < Global_262145.f_20900)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21668 && iVar1 < Global_262145.f_21688)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21680 && iVar1 < Global_262145.f_21700)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21671 && iVar1 < Global_262145.f_21691)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21681 && iVar1 < Global_262145.f_21701)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21669 && iVar1 < Global_262145.f_21689)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21685 && iVar1 < Global_262145.f_21705)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21683 && iVar1 < Global_262145.f_21703)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21684 && iVar1 < Global_262145.f_21704)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21679 && iVar1 < Global_262145.f_21699)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21686 && iVar1 < Global_262145.f_21706)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21682 && iVar1 < Global_262145.f_21702)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21678 && iVar1 < Global_262145.f_21698)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21670 && iVar1 < Global_262145.f_21690)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21672 && iVar1 < Global_262145.f_21692)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21673 && iVar1 < Global_262145.f_21693)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21674 && iVar1 < Global_262145.f_21694)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21675 && iVar1 < Global_262145.f_21695)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21676 && iVar1 < Global_262145.f_21696)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21677 && iVar1 < Global_262145.f_21697)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22629 && iVar1 < Global_262145.f_22657)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22630 && iVar1 < Global_262145.f_22658)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22631 && iVar1 < Global_262145.f_22659)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22632 && iVar1 < Global_262145.f_22660)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22633 && iVar1 < Global_262145.f_22661)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22634 && iVar1 < Global_262145.f_22662)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22635 && iVar1 < Global_262145.f_22663)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22636 && iVar1 < Global_262145.f_22664)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22637 && iVar1 < Global_262145.f_22665)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22638 && iVar1 < Global_262145.f_22666)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22639 && iVar1 < Global_262145.f_22667)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22640 && iVar1 < Global_262145.f_22668)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22641 && iVar1 < Global_262145.f_22669)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22642 && iVar1 < Global_262145.f_22670)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22643 && iVar1 < Global_262145.f_22671)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22644 && iVar1 < Global_262145.f_22672)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22645 && iVar1 < Global_262145.f_22673)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22646 && iVar1 < Global_262145.f_22674)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22647 && iVar1 < Global_262145.f_22675)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22648 && iVar1 < Global_262145.f_22676)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22649 && iVar1 < Global_262145.f_22677)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22650 && iVar1 < Global_262145.f_22678)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22651 && iVar1 < Global_262145.f_22679)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22652 && iVar1 < Global_262145.f_22680)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22653 && iVar1 < Global_262145.f_22681)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22654 && iVar1 < Global_262145.f_22682)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22655 && iVar1 < Global_262145.f_22683)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22656 && iVar1 < Global_262145.f_22684)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_23849 && iVar1 < Global_262145.f_23865)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_23850 && iVar1 < Global_262145.f_23866)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_23854 && iVar1 < Global_262145.f_23870)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_23857 && iVar1 < Global_262145.f_23873)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_23862 && iVar1 < Global_262145.f_23878)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_23856 && iVar1 < Global_262145.f_23872)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_23848 && iVar1 < Global_262145.f_23864)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_23855 && iVar1 < Global_262145.f_23871)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_23861 && iVar1 < Global_262145.f_23877)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_23860 && iVar1 < Global_262145.f_23876)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_23851 && iVar1 < Global_262145.f_23867)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_23853 && iVar1 < Global_262145.f_23869)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_23863 && iVar1 < Global_262145.f_23879)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_23859 && iVar1 < Global_262145.f_23875)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_23852 && iVar1 < Global_262145.f_23868)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_23858 && iVar1 < Global_262145.f_23874)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_23939 && iVar1 < Global_262145.f_23926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_23940 && iVar1 < Global_262145.f_23927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_23945 && iVar1 < Global_262145.f_23932)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_23944 && iVar1 < Global_262145.f_23931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_23942 && iVar1 < Global_262145.f_23929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_23948 && iVar1 < Global_262145.f_23935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_23950 && iVar1 < Global_262145.f_23937)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_23951 && iVar1 < Global_262145.f_23938)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_23949 && iVar1 < Global_262145.f_23936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_23941 && iVar1 < Global_262145.f_23928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_23943 && iVar1 < Global_262145.f_23930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_23947 && iVar1 < Global_262145.f_23934)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_23946 && iVar1 < Global_262145.f_23933)
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
		if (!Global_262145.f_26416 && iVar1 < Global_262145.f_26418)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25429 && iVar1 < Global_262145.f_25422)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25430 && iVar1 < Global_262145.f_25423)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25431 && iVar1 < Global_262145.f_25424)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25432 && iVar1 < Global_262145.f_25425)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26417 && iVar1 < Global_262145.f_26419)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25433 && iVar1 < Global_262145.f_25426)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25434 && iVar1 < Global_262145.f_25427)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25435 && iVar1 < Global_262145.f_25428)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25440 && iVar1 < Global_262145.f_25461)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25441 && iVar1 < Global_262145.f_25462)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25442 && iVar1 < Global_262145.f_25463)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25443 && iVar1 < Global_262145.f_25464)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25444 && iVar1 < Global_262145.f_25465)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25445 && iVar1 < Global_262145.f_25466)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25446 && iVar1 < Global_262145.f_25467)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25447 && iVar1 < Global_262145.f_25468)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25448 && iVar1 < Global_262145.f_25469)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25449 && iVar1 < Global_262145.f_25470)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25450 && iVar1 < Global_262145.f_25471)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25451 && iVar1 < Global_262145.f_25472)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25452 && iVar1 < Global_262145.f_25473)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25453 && iVar1 < Global_262145.f_25474)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25454 && iVar1 < Global_262145.f_25475)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25455 && iVar1 < Global_262145.f_25476)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25456 && iVar1 < Global_262145.f_25477)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25457 && iVar1 < Global_262145.f_25478)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25458 && iVar1 < Global_262145.f_25479)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25459 && iVar1 < Global_262145.f_25480)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_25460 && iVar1 < Global_262145.f_25481)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_28261 && iVar1 < Global_262145.f_28282)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_28262 && iVar1 < Global_262145.f_28283)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_28263 && iVar1 < Global_262145.f_28284)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_28264 && iVar1 < Global_262145.f_28285)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_28265 && iVar1 < Global_262145.f_28286)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_28266 && iVar1 < Global_262145.f_28287)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_28267 && iVar1 < Global_262145.f_28288)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_28268 && iVar1 < Global_262145.f_28289)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_28269 && iVar1 < Global_262145.f_28290)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_28270 && iVar1 < Global_262145.f_28291)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_28271 && iVar1 < Global_262145.f_28292)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_28272 && iVar1 < Global_262145.f_28293)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_28273 && iVar1 < Global_262145.f_28294)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_28274 && iVar1 < Global_262145.f_28295)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_28275 && iVar1 < Global_262145.f_28296)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_28276 && iVar1 < Global_262145.f_28297)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_28277 && iVar1 < Global_262145.f_28298)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_28278 && iVar1 < Global_262145.f_28299)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_28279 && iVar1 < Global_262145.f_28300)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_28280 && iVar1 < Global_262145.f_28301)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_28281 && iVar1 < Global_262145.f_28302)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_28304 && iVar1 < Global_262145.f_28305) && !Global_262145.f_28259)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_28307 && iVar1 < Global_262145.f_28308) && !Global_262145.f_28260)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_28312 && iVar1 < Global_262145.f_28315)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_28313 && iVar1 < Global_262145.f_28316)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_28314 && iVar1 < Global_262145.f_28317)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_29330 && iVar1 < Global_262145.f_28995)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("club"))
	{
		if (!Global_262145.f_28981 && iVar1 < Global_262145.f_29002)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_28982 && iVar1 < Global_262145.f_28988)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_29328 && iVar1 < Global_262145.f_28996)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_29329 && iVar1 < Global_262145.f_28997)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_28975 && iVar1 < Global_262145.f_28994)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_28976 && iVar1 < Global_262145.f_29003)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_28977 && iVar1 < Global_262145.f_28993)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_28978 && iVar1 < Global_262145.f_28991)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_29324 && iVar1 < Global_262145.f_28998)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_29325 && iVar1 < Global_262145.f_28999)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_29326 && iVar1 < Global_262145.f_29000)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_29327 && iVar1 < Global_262145.f_29001)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_28979 && iVar1 < Global_262145.f_28990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_28980 && iVar1 < Global_262145.f_28992)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_29775 && iVar1 < Global_262145.f_29758)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_29776 && iVar1 < Global_262145.f_29759)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_29777 && iVar1 < Global_262145.f_29760)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_29778 && iVar1 < Global_262145.f_29761)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_29779 && iVar1 < Global_262145.f_29762)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("winky"))
	{
		if (!Global_262145.f_29780 && iVar1 < Global_262145.f_29763)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto"))
	{
		if (!Global_262145.f_29781 && iVar1 < Global_262145.f_29764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_29782 && iVar1 < Global_262145.f_29765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_29783 && iVar1 < Global_262145.f_29766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil"))
	{
		if (Global_262145.f_29792)
		{
		}
		else if (!Global_262145.f_29784 && iVar1 < Global_262145.f_29767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_29785 && iVar1 < Global_262145.f_29768)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_29786 && iVar1 < Global_262145.f_29769)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_29787 && iVar1 < Global_262145.f_29770)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_29788 && iVar1 < Global_262145.f_29771)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_29793)
		{
		}
		else if (!Global_262145.f_29789 && iVar1 < Global_262145.f_29772)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_29790 && iVar1 < Global_262145.f_29773)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verus"))
	{
		if (!Global_262145.f_29791 && iVar1 < Global_262145.f_29774)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tailgater2"))
	{
		if (!Global_262145.f_30643 && iVar1 < Global_262145.f_30626)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("euros"))
	{
		if (!Global_262145.f_30644 && iVar1 < Global_262145.f_30627)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan3"))
	{
		if (!Global_262145.f_30645 && iVar1 < Global_262145.f_30628)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rt3000"))
	{
		if (!Global_262145.f_30646 && iVar1 < Global_262145.f_30629)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vectre"))
	{
		if (!Global_262145.f_30647 && iVar1 < Global_262145.f_30630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zr350"))
	{
		if (!Global_262145.f_30648 && iVar1 < Global_262145.f_30631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("warrener2"))
	{
		if (!Global_262145.f_30649 && iVar1 < Global_262145.f_30632)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("calico"))
	{
		if (!Global_262145.f_30650 && iVar1 < Global_262145.f_30633)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("remus"))
	{
		if (!Global_262145.f_30651 && iVar1 < Global_262145.f_30634)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cypher"))
	{
		if (!Global_262145.f_30652 && iVar1 < Global_262145.f_30635)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator7"))
	{
		if (!Global_262145.f_30653 && iVar1 < Global_262145.f_30636)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester4"))
	{
		if (!Global_262145.f_30654 && iVar1 < Global_262145.f_30637)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("futo2"))
	{
		if (!Global_262145.f_30655 && iVar1 < Global_262145.f_30638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator8"))
	{
		if (!Global_262145.f_30656 && iVar1 < Global_262145.f_30639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("previon"))
	{
		if (!Global_262145.f_30657 && iVar1 < Global_262145.f_30640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("growler"))
	{
		if (!Global_262145.f_30658 && iVar1 < Global_262145.f_30641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet6"))
	{
		if (!Global_262145.f_30659 && iVar1 < Global_262145.f_30642)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -915234475)
	{
		if (!Global_262145.f_31467 && iVar1 < Global_262145.f_31452)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -619930876)
	{
		if (!Global_262145.f_31468 && iVar1 < Global_262145.f_31453)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1532171089)
	{
		if (!Global_262145.f_31469 && iVar1 < Global_262145.f_31454)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 461465043)
	{
		if (!Global_262145.f_31470 && iVar1 < Global_262145.f_31455)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1444114309)
	{
		if (!Global_262145.f_31471 && iVar1 < Global_262145.f_31456)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1527436269)
	{
		if (!Global_262145.f_31472 && iVar1 < Global_262145.f_31457)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 629969764)
	{
		if (!Global_262145.f_31473 && iVar1 < Global_262145.f_31458)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1141395928)
	{
		if (!Global_262145.f_31474 && iVar1 < Global_262145.f_31459)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 655665811)
	{
		if (!Global_262145.f_31475 && iVar1 < Global_262145.f_31460)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1993851908)
	{
		if (!Global_262145.f_31476 && iVar1 < Global_262145.f_31461)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 662793086)
	{
		if (!Global_262145.f_31477 && iVar1 < Global_262145.f_31462)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -261346873)
	{
		if (!Global_262145.f_31478 && iVar1 < Global_262145.f_31463)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -670086588)
	{
		if (!Global_262145.f_31479 && iVar1 < Global_262145.f_31464)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1353120668)
	{
		if (!Global_262145.f_31480 && iVar1 < Global_262145.f_31465)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 359875117)
	{
		if (Global_262145.f_31545)
		{
		}
		else if (!Global_262145.f_31481 && iVar1 < Global_262145.f_31466)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_869()
{
	return 0;
}

int func_870()
{
	return 1;
}

int func_871()
{
	return 1;
}

int func_872()
{
	if (unk_0x014D8C5910A5B01B(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_873()
{
	var uVar0;
	
	if (unk_0xAF5DBE95205A49D1())
	{
		if (unk_0x5B66E9FB7530BB95())
		{
			if (unk_0x2F04A4784A70593C())
			{
				unk_0x61481F9FBB1C7EDD(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xCED9E32812D6C7C7(&uVar0, 2);
				unk_0xCED9E32812D6C7C7(&uVar0, 4);
				unk_0xCED9E32812D6C7C7(&uVar0, 6);
				unk_0xCED9E32812D6C7C7(&Global_25, 2);
				unk_0xCED9E32812D6C7C7(&Global_25, 4);
				unk_0xCED9E32812D6C7C7(&Global_25, 6);
				unk_0x076A5661EF5ABEE4(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0xB8F4926B803BFD19())
				{
					iVar0 = unk_0x5D851A9195129CE9(866);
					unk_0xCED9E32812D6C7C7(&iVar0, 0);
					unk_0x212EDDD868F364B5(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_151754 == 2)
	{
		return 1;
	}
	else if (Global_151754 == 3)
	{
		return 0;
	}
	if (unk_0xB8F4926B803BFD19())
	{
		if (unk_0xE2D0C323A1AE5D85(unk_0x5D851A9195129CE9(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_874(int iParam0, int iParam1, bool bParam2)
{
	if (Global_262145.f_10421)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1941386[iParam0] - 1);
		if (bParam2)
		{
			if ((unk_0x8142A6539DDC180F() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_875(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 88;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 128;
			break;
		
		case 11:
			return 148;
			break;
		
		case 6:
			return 65;
			break;
		
		case 7:
			return 75;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 159;
			break;
		
		case 13:
			return 179;
			break;
		
		case 14:
			return 191;
			break;
		
		case 15:
			return 192;
			break;
		
		case 16:
			return 202;
			break;
		
		case 17:
			return 212;
			break;
		
		case 18:
			return 227;
			break;
		
		case 19:
			return 237;
			break;
		
		case 20:
			return 247;
			break;
		
		case 21:
			return 258;
			break;
		
		case 22:
			return 268;
			break;
		
		case 23:
			return 281;
			break;
		
		case 24:
			return 294;
			break;
		
		case 25:
			return 307;
			break;
		
		case 26:
			return 317;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_813(iParam0);
		return func_877(iVar0);
	}
	return (func_876(iParam0, -1, 1) * iParam0);
}

int func_876(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_773(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_779(iParam1))
			{
				return 0;
			}
			else if (func_342(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 == 118)
			{
				return 1;
			}
			else if ((iParam1 == 119 || iParam1 == 120) || iParam1 == 121)
			{
				return 10;
			}
			else if (iParam1 == 122)
			{
				return 9;
			}
			else if (iParam1 == 123 || iParam1 == 124)
			{
				return 10;
			}
			else if (iParam1 == 125)
			{
				return 10;
			}
			else if (iParam1 == 126)
			{
				return 10;
			}
			else if (iParam1 == 127)
			{
				return 10;
			}
			else if (iParam1 == 128)
			{
				return 20;
			}
			else if (iParam1 <= 128 && iParam1 > 0)
			{
				if (Global_1312124[iParam1 /*1951*/].f_33 == 2)
				{
					if (bParam2)
					{
						return 3;
					}
					else
					{
						return 2;
					}
				}
				else if (Global_1312124[iParam1 /*1951*/].f_33 == 6)
				{
					if (bParam2)
					{
						return 8;
					}
					else
					{
						return 6;
					}
				}
				else if (Global_1312124[iParam1 /*1951*/].f_33 == 10)
				{
					if (bParam2)
					{
						return 13;
					}
					else
					{
						return 10;
					}
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 23:
		case 24:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
		
		case 12:
			return 20;
			break;
		
		case 13:
			return 7;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
		case 16:
		case 17:
			return 10;
			break;
		
		case 18:
		case 19:
		case 20:
			return 10;
			break;
		
		case 21:
			return 10;
			break;
		
		case 22:
			return 10;
			break;
		
		case 25:
			return 10;
			break;
		
		case 26:
			return 20;
			break;
	}
	return 0;
}

int func_877(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		case 2:
			return 223;
		
		case 1:
			return 224;
		
		case 3:
			return 278;
		
		default:
	}
	return -1;
}

var func_878()
{
	var uVar0;
	
	uVar0 = func_880();
	if (!func_879())
	{
		if (func_120() != func_24())
		{
			uVar0 = func_22(func_120()) + 1;
		}
	}
	return uVar0;
}

bool func_879()
{
	return func_486(unk_0x9E2D6C50374FCFA9());
}

int func_880()
{
	return func_22(unk_0x9E2D6C50374FCFA9()) + 1;
}

int func_881(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 12597)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2821895[iParam0 /*3*/][func_575(iParam1)];
		if (unk_0x61481F9FBB1C7EDD(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_882()
{
	return func_881(6115, -1, 0);
}

int func_883(int iParam0)
{
	if (func_450(iParam0, 1))
	{
		return Global_1893548[iParam0 /*600*/].f_11.f_429;
	}
	return -1;
}

void func_884(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x806FE7B7DB6B4483(&Global_1944755);
	func_885();
}

void func_885()
{
	struct<44> Var0;
	
	Global_1944755 = { Var0 };
	Global_1944755.f_23 = 0;
	Global_1944755.f_24 = 0;
	Global_1944755.f_16 = 0;
}

bool func_886(int iParam0)
{
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_361, 12);
}

bool func_887(int iParam0)
{
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_361, 13);
}

int func_888(int iParam0)
{
	if (iParam0 != func_24())
	{
		if ((unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_269, 12) || unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_269, 13)) || unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_269, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_889(int iParam0)
{
	if (iParam0 != func_24())
	{
		if ((unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_269, 0) || unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_269, 1)) || unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_269, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_890(int iParam0)
{
	if (iParam0 != func_24())
	{
		if (((((unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_269, 3) || unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_269, 4)) || unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_269, 5)) || unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_269, 0)) || unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_269, 1)) || unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_269, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_891(int iParam0, int iParam1)
{
	if (iParam1 == func_24())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam1 /*888*/].f_267.f_269, 0))
			{
				return 3;
			}
			else if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam1 /*888*/].f_267.f_269, 3))
			{
				return 2;
			}
			else if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam1 /*888*/].f_267.f_269, 6))
			{
				return 4;
			}
			else if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam1 /*888*/].f_267.f_269, 9))
			{
				return 1;
			}
			else if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam1 /*888*/].f_267.f_269, 12))
			{
				return 7;
			}
			else if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam1 /*888*/].f_267.f_269, 15))
			{
				return 5;
			}
			else if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam1 /*888*/].f_267.f_269, 18))
			{
				return 6;
			}
			else if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam1 /*888*/].f_267.f_269, 21))
			{
				return 0;
			}
			else if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam1 /*888*/].f_267.f_269, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam1 /*888*/].f_267.f_269, 1))
			{
				return 3;
			}
			else if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam1 /*888*/].f_267.f_269, 4))
			{
				return 2;
			}
			else if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam1 /*888*/].f_267.f_269, 7))
			{
				return 4;
			}
			else if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam1 /*888*/].f_267.f_269, 10))
			{
				return 1;
			}
			else if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam1 /*888*/].f_267.f_269, 13))
			{
				return 7;
			}
			else if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam1 /*888*/].f_267.f_269, 16))
			{
				return 5;
			}
			else if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam1 /*888*/].f_267.f_269, 19))
			{
				return 6;
			}
			else if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam1 /*888*/].f_267.f_269, 22))
			{
				return 0;
			}
			else if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam1 /*888*/].f_267.f_269, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam1 /*888*/].f_267.f_269, 2))
			{
				return 3;
			}
			else if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam1 /*888*/].f_267.f_269, 5))
			{
				return 2;
			}
			else if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam1 /*888*/].f_267.f_269, 8))
			{
				return 4;
			}
			else if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam1 /*888*/].f_267.f_269, 11))
			{
				return 1;
			}
			else if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam1 /*888*/].f_267.f_269, 14))
			{
				return 7;
			}
			else if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam1 /*888*/].f_267.f_269, 17))
			{
				return 5;
			}
			else if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam1 /*888*/].f_267.f_269, 20))
			{
				return 6;
			}
			else if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam1 /*888*/].f_267.f_269, 23))
			{
				return 0;
			}
			else if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam1 /*888*/].f_267.f_269, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

int func_892(int iParam0)
{
	if (iParam0 != func_24())
	{
		if ((unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_269, 6) || unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_269, 7)) || unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_269, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_893(int iParam0)
{
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_361, 8);
}

bool func_894(int iParam0)
{
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_361, 7);
}

bool func_895(int iParam0)
{
	if (iParam0 == func_24())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_361, 9);
}

bool func_896(int iParam0)
{
	if (iParam0 == func_24())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_361, 11);
}

bool func_897(int iParam0)
{
	if (iParam0 == func_24())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_361, 10);
}

int func_898(int iParam0, int iParam1)
{
	return func_881(func_899(iParam1), iParam0, 0);
}

int func_899(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3900;
		
		case 1:
			return 3929;
		
		case 2:
			return 3933;
		
		case 3:
			return 3937;
		
		case 4:
			return 3941;
		
		case 5:
			return 5452;
		
		default:
	}
	return 3900;
}

void func_900(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x58E508B2CCE30269(&Global_1944692);
	func_901();
}

void func_901()
{
	struct<63> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Var0.f_54 = -1;
	Var0.f_55 = -1;
	Var0.f_56 = -1;
	Var0.f_57 = -1;
	Var0.f_58 = -1;
	Var0.f_59 = -1;
	Var0.f_60 = -1;
	Var0.f_61 = -1;
	Var0.f_62 = -1;
	Global_1944692 = { Var0 };
	Global_1944692.f_24 = 0;
	Global_1944692.f_25 = 0;
	Global_1944692.f_17 = 0;
}

void func_902(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x13832E7D597DDAD5(&Global_1944638);
	func_903();
}

void func_903()
{
	struct<54> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1944638 = { Var0 };
	Global_1944638.f_29 = 0;
	Global_1944638.f_30 = 0;
	Global_1944638.f_17 = 0;
}

int func_904(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_675(iParam0, iParam1, 2);
	bVar1 = func_675(iParam0, iParam1, 1);
	bVar2 = func_675(iParam0, iParam1, 0);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 7;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 6;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 5;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 4;
	}
	else if (bVar0)
	{
		return 3;
	}
	else if (bVar1)
	{
		return 2;
	}
	else if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_905(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_24())
	{
		return 0;
	}
	if (func_652(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1853128[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/] == iParam1)
			{
				return Global_1853128[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_906(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_770(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17965;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17964;
		}
		else
		{
			iVar0 = Global_262145.f_17946;
		}
		iVar1 = 19;
	}
	else if (func_769(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_482(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_17945;
			iVar1 = 20;
		}
	}
	else if (func_592(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17965;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17964;
		}
		else
		{
			iVar0 = Global_262145.f_17946;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0x32F2A84DF86ECD0C(func_817(func_120()), func_816(func_120()), func_925(), func_924(), iVar1, iVar0);
	}
	func_908(iVar0);
	func_907(iVar0);
	return iVar0;
}

void func_907(int iParam0)
{
	int iVar0;
	
	iVar0 = func_881(3970, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_468 = iVar0;
	func_678(3970, iVar0, -1, 1, 0);
}

void func_908(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x9E2D6C50374FCFA9();
	Global_1893548[iVar0 /*600*/].f_11.f_467 = (Global_1893548[iVar0 /*600*/].f_11.f_467 + iParam0);
	if (Global_1893548[iVar0 /*600*/].f_11.f_467 < -9999)
	{
		Global_1893548[iVar0 /*600*/].f_11.f_467 = 9999;
	}
	else if (Global_1893548[iVar0 /*600*/].f_11.f_467 > 9999)
	{
		Global_1893548[iVar0 /*600*/].f_11.f_467 = 9999;
	}
}

int func_909(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_565(unk_0x9E2D6C50374FCFA9()) || func_408(unk_0x9E2D6C50374FCFA9()))
	{
		return 1;
	}
	return 0;
}

void func_910(var uParam0)
{
	unk_0x408363EC3F842FC2(&Global_1944899);
	func_911();
}

void func_911()
{
	struct<36> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Global_1944899 = { Var0 };
}

int func_912(int iParam0)
{
	if (iParam0 != func_24())
	{
		return Global_1853128[iParam0 /*888*/].f_267.f_332 != 0;
	}
	return 0;
}

int func_913()
{
	int iVar0;
	
	if (func_916())
	{
		return 4;
	}
	else if (func_879())
	{
		if (func_915(unk_0x9E2D6C50374FCFA9()))
		{
			return 8;
		}
		return 6;
	}
	if (func_517(1))
	{
		iVar0 = func_883(unk_0x9E2D6C50374FCFA9());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_914(1))
	{
		if (func_915(func_120()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

bool func_914(bool bParam0)
{
	return func_450(unk_0x9E2D6C50374FCFA9(), bParam0);
}

bool func_915(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_28, 26);
}

bool func_916()
{
	return func_519(unk_0x9E2D6C50374FCFA9());
}

int func_917(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_918(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	if (bParam0)
	{
		iVar0 = func_442(unk_0x9E2D6C50374FCFA9());
	}
	else
	{
		iVar0 = func_406(unk_0x9E2D6C50374FCFA9());
	}
	if (iVar0 != -1)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = func_923(unk_0x9E2D6C50374FCFA9());
			iVar1 = iVar2;
			break;
		
		case 150:
			iVar2 = func_921(unk_0x9E2D6C50374FCFA9());
			iVar1 = iVar2;
			break;
		
		case 237:
			iVar2 = func_920(unk_0x9E2D6C50374FCFA9());
			if (func_853(func_854(unk_0x9E2D6C50374FCFA9())))
			{
				iVar1 = 100;
			}
			else
			{
				iVar1 = 200;
			}
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 250:
			iVar2 = func_920(unk_0x9E2D6C50374FCFA9());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 238:
			iVar2 = func_919(unk_0x9E2D6C50374FCFA9());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 249:
			iVar2 = func_919(unk_0x9E2D6C50374FCFA9());
			iVar1 = 500;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 239:
			iVar1 = 600;
			break;
		
		case 240:
			iVar1 = 700;
			break;
		
		case 241:
			iVar1 = 800;
			break;
		
		case 242:
			iVar1 = 900;
			break;
		
		case 244:
			iVar1 = 1100;
			break;
		
		case 248:
			iVar1 = 1200;
			break;
	}
	return iVar1;
}

int func_919(int iParam0)
{
	if (func_406(unk_0x9E2D6C50374FCFA9()) == 238 || func_406(unk_0x9E2D6C50374FCFA9()) == 249)
	{
		return Global_1893548[iParam0 /*600*/].f_11.f_477;
	}
	return -1;
}

int func_920(int iParam0)
{
	if (func_406(unk_0x9E2D6C50374FCFA9()) == 237 || func_406(unk_0x9E2D6C50374FCFA9()) == 250)
	{
		return Global_1893548[iParam0 /*600*/].f_11.f_476;
	}
	return -1;
}

int func_921(int iParam0)
{
	return func_922(iParam0, 150);
}

int func_922(int iParam0, int iParam1)
{
	if (func_442(iParam0) == iParam1)
	{
		return Global_1893548[iParam0 /*600*/].f_11.f_474;
	}
	return -1;
}

int func_923(int iParam0)
{
	return func_922(iParam0, 236);
}

int func_924()
{
	if (Global_1944620.f_3 != 0)
	{
		return Global_1944620.f_3;
	}
	return -1;
}

int func_925()
{
	if (Global_1944620.f_2 != 0)
	{
		return Global_1944620.f_2;
	}
	return -1;
}

void func_926()
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	Global_1944755.f_19 = (Local_239.f_1237 - func_119() + 1);
	iVar1 = func_384(unk_0x9E2D6C50374FCFA9());
	iVar2 = func_682(unk_0x9E2D6C50374FCFA9(), iVar1);
	fVar0 = func_683();
	fVar0 = (fVar0 * Global_262145.f_18843);
	iVar3 = round((to_float(iVar2) * fVar0));
	Global_1944755.f_26 = func_905(unk_0x9E2D6C50374FCFA9(), func_384(unk_0x9E2D6C50374FCFA9()));
	Global_1944755.f_27 = (iVar2 - iVar3);
}

void func_927(int iParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	func_1138(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_1137(iParam0, uParam2->f_13, bParam3));
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		if ((iParam0 == 158 && uParam2->f_21 == 1) && !uParam2->f_22)
		{
			iVar1 = 200;
		}
		iVar1 = round((to_float(iVar1) / to_float(uParam2->f_4)));
		iVar1 = round((IntToFloat(iVar1) * fVar3));
		iVar1 = round((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = (iVar0 + func_1136(iParam0, bParam3));
		iVar0 = round((to_float(iVar0) / to_float(uParam2->f_4)));
		iVar0 = round((IntToFloat(iVar0) * fVar2));
		iVar0 = round((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = round((to_float(iVar1) / to_float(uParam2->f_4)));
		iVar1 = round((IntToFloat(iVar1) * fVar3));
		iVar1 = round((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = round((to_float(iVar0) / to_float(uParam2->f_4)));
		iVar0 = round((IntToFloat(iVar0) * fVar2));
		iVar0 = round((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (uParam2->f_18 > -1)
	{
		iVar0 = (iVar0 + uParam2->f_18);
	}
	if (uParam2->f_19 > -1)
	{
		iVar1 = (iVar1 + uParam2->f_19);
	}
	if (func_1135(iParam0))
	{
		if (bParam1)
		{
			if (func_1134(unk_0x9E2D6C50374FCFA9()) > 0)
			{
				func_1133();
			}
			else
			{
				func_1132();
			}
		}
		else
		{
			func_1131();
		}
	}
	func_1115(iParam0, bParam1, uParam2, &iVar0, &uVar4);
	func_1113(iParam0, uParam2, &iVar0, &iVar5);
	func_1101(iParam0, uParam2, &iVar0, &iVar5);
	func_1098(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_1081(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2810287.f_5193.f_387 = uVar4;
	}
	else
	{
		Global_2810287.f_5193.f_387 = iVar5;
	}
	iVar8 = func_520();
	if (iVar8 != func_24() && iParam0 != 148)
	{
		if (func_450(unk_0x9E2D6C50374FCFA9(), 0))
		{
			if (!func_484(unk_0x9E2D6C50374FCFA9(), iVar8, 1))
			{
				func_1066(&iVar0, 1);
			}
		}
	}
	func_1062(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1944620.f_10 = iVar1;
		func_1061();
		func_1019(0, unk_0xE2D3D51028F0428A(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1944620.f_9 = iVar0;
		func_1008(iParam0, iVar0, iVar7, uVar4, iVar5, uParam2);
		func_1007(iParam0, iVar0);
		if (func_1006(iParam0))
		{
			if (func_1005(iParam0) > -1)
			{
				func_1004(func_1005(iParam0), iVar0);
			}
		}
		Global_2727434 = iVar0;
		func_1003(&Global_2725690, 0, 0);
	}
	if (func_565(unk_0x9E2D6C50374FCFA9()) || func_408(unk_0x9E2D6C50374FCFA9()))
	{
		func_996(iParam0);
	}
	if (func_592(iParam0))
	{
		Global_1944638.f_13 = iVar0;
		Global_1944638.f_14 = iVar1;
	}
	if (func_597(iParam0))
	{
		Global_1944692.f_13 = iVar0;
		Global_1944692.f_14 = iVar1;
	}
	if (func_767(iParam0))
	{
		Global_1944755.f_12 = iVar0;
		Global_1944755.f_13 = iVar1;
	}
	if (func_765(iParam0))
	{
		Global_1944799.f_12 = iVar0;
		Global_1944799.f_13 = iVar1;
	}
	if (func_763(iParam0))
	{
		Global_1944853.f_12 = iVar0;
		Global_1944853.f_13 = iVar1;
	}
	if (func_596(iParam0))
	{
		if (func_845(iParam0))
		{
			Global_1944935.f_12 = iVar0;
			Global_1944935.f_13 = iVar1;
		}
		else if (func_852(iParam0))
		{
			Global_1944989.f_12 = iVar0;
			Global_1944989.f_13 = iVar1;
		}
	}
	if (func_818(iParam0))
	{
		Global_1945073.f_12 = iVar0;
		Global_1945073.f_13 = iVar1;
	}
	if (func_757(iParam0))
	{
		Global_1945148.f_16 = iVar0;
		Global_1945148.f_17 = iVar1;
	}
	if (func_756(iParam0))
	{
		Global_1945235.f_16 = iVar0;
		Global_1945235.f_17 = iVar1;
	}
	if (func_750(iParam0) || func_746(iParam0))
	{
		Global_1945368.f_15 = iVar0;
		Global_1945368.f_16 = iVar1;
	}
	func_928(bParam1, iParam0);
}

void func_928(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	
	if (bParam0)
	{
		bVar1 = false;
		switch (iParam1)
		{
			case 226:
				iVar0 = 2;
				bVar1 = true;
				break;
			
			case 190:
				iVar0 = 3;
				bVar1 = true;
				break;
			
			case 230:
				iVar0 = 4;
				bVar1 = true;
				break;
			
			case 168:
				iVar0 = 5;
				bVar1 = true;
				break;
			
			case 188:
				iVar0 = 6;
				bVar1 = true;
				break;
		}
		if (bVar1)
		{
			if (func_995(iVar0) && !func_937(iVar0))
			{
				func_929(iVar0);
			}
			if (func_995(1) && !func_937(1))
			{
				func_929(1);
			}
		}
	}
}

void func_929(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 11)
	{
		func_671(func_933(func_934(iParam0)), 1, -1);
		func_930(12, func_932(func_934(iParam0)), "UNLOCK_DESC_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
	}
}

void func_930(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = func_931(&Global_1652537);
	Global_1652537[iVar0 /*106*/] = iParam0;
	StringCopy(&(Global_1652537[iVar0 /*106*/].f_17), sParam3, 64);
	StringCopy(&(Global_1652537[iVar0 /*106*/].f_1), sParam4, 64);
	StringCopy(&(Global_1652537[iVar0 /*106*/].f_33), sParam1, 64);
	StringCopy(&(Global_1652537[iVar0 /*106*/].f_49), sParam2, 64);
	Global_1652537[iVar0 /*106*/].f_97 = iParam5;
	Global_1652537[iVar0 /*106*/].f_104 = iParam9;
	Global_1652537[iVar0 /*106*/].f_105 = iParam10;
	if (iParam6 != 0)
	{
	}
	if (iParam7 != 0)
	{
	}
	if (!unk_0xACC32B78196FBC2A(sParam8))
	{
		StringCopy(&(Global_1652537[iVar0 /*106*/].f_98), sParam8, 24);
	}
}

int func_931(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if ((*uParam0)[iVar1 /*106*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

char* func_932(int iParam0)
{
	switch (iParam0)
	{
		case -240057754:
		case -2417894:
			return "CLO_FXM_U_10_2";
			break;
		
		case -1166011267:
		case -906547381:
			return "CLO_FXM_U_10_3";
			break;
		
		case -721794703:
		case 308133919:
			return "CLO_FXM_U_10_4";
			break;
		
		case 488495423:
		case 1072091359:
			return "CLO_FXM_U_10_0";
			break;
		
		case -523083487:
		case 508464559:
			return "CLO_FXM_U_10_1";
			break;
		
		case -1498989066:
		case 452715244:
			return "CLO_FXM_B_0_0";
			break;
		
		case 1281689967:
		case -112025702:
			return "CLO_FXM_B_0_1";
			break;
		
		case 841209069:
		case 128072761:
			return "CLO_FXM_B_0_2";
			break;
		
		case 1742192724:
		case -705996596:
			return "CLO_FXM_B_0_3";
			break;
		
		case -2022943269:
		case 733291825:
			return "CLO_FXM_B_1_0";
			break;
		
		case -804690608:
		case -101367374:
			return "CLO_FXM_B_1_1";
			break;
		
		case -1100955137:
		case 1328802862:
			return "CLO_FXM_B_1_2";
			break;
		
		case 2089631321:
		case 495519961:
			return "CLO_FXM_B_1_3";
			break;
		
		case 591101258:
		case -693204279:
			return "CLO_FXM_B_2_0";
			break;
		
		case -1278730655:
		case 150499164:
			return "CLO_FXM_B_2_1";
			break;
		
		case -1215879713:
		case -129905169:
			return "CLO_FXM_B_2_2";
			break;
		
		case -918271655:
		case 612902523:
			return "CLO_FXM_B_2_3";
			break;
	}
	switch (iParam0)
	{
		case 1313302606:
		case 1409068743:
			return "CLO_TRM_D_30_1";
			break;
		
		case 991513037:
		case -1634791241:
			return "CLO_TRM_DECL_8";
			break;
		
		case -675149090:
		case -1227437948:
			return "CLO_TRM_DECL_10";
			break;
		
		case -1659998431:
		case -2112473443:
		case -947707813:
		case 693543937:
			return "CLO_TRM_U_11_0";
			break;
		
		case -1686814509:
		case -1408179706:
			return "CLO_TRM_DECL_11";
			break;
		
		case -11432663:
		case 1005080874:
		case 1248902972:
		case 39557656:
		case 272288400:
		case 1299492081:
			return "CLO_TRM_O_BS_1";
			break;
		
		case -126686984:
		case 2057911750:
			return "CLO_TRM_U_9_15";
			break;
		
		case 1527426310:
		case 652346313:
		case -493474820:
			return "CLO_TRM_U_13_2";
			break;
		
		case -926775180:
		case -2002794681:
		case 1039426231:
			return "CLO_TRM_U_13_0";
			break;
		
		case 915891232:
		case -1732614276:
		case -811071968:
			return "CLO_TRM_U_13_1";
			break;
		
		case -1530567150:
		case -1187110619:
		case 1112304057:
		case -1366594938:
			return "CLO_TRM_PH_1_0";
			break;
		
		case -1830763959:
		case -1778066765:
		case 796541973:
		case 2004974703:
			return "CLO_TRM_PH_1_1";
			break;
		
		case -1174740608:
		case 1620783517:
			return "CLO_TRM_O_MS_0";
			break;
		
		case -1943796269:
		case -1699338794:
			return "CLO_TRM_O_MS_1";
			break;
		
		case -1372800957:
			return "PS_BAG_64";
			break;
		
		case -1125170035:
			return "PS_BAG_65";
			break;
		
		case 1276052663:
			return "PS_BAG_66";
			break;
		
		case 2138708412:
		case -1894139601:
			return "CLO_TRM_DECL_12";
			break;
		
		case 205793848:
		case -786254870:
			return "CLO_TRM_DECL_13";
			break;
		
		case 1325175663:
		case -773154515:
			return "CLO_TRM_DECL_14";
			break;
		
		case -368088972:
		case 1778247767:
			return "CLO_TRM_DECL_15";
			break;
		
		case -1771053026:
		case -648092145:
			return "CLO_TRM_DECL_16";
			break;
		
		case 602068555:
		case 774354345:
		case -1820765864:
		case -1559667847:
		case 503440926:
		case 1098093807:
			return "CLO_TRM_O_BS_0";
			break;
	}
	switch (iParam0)
	{
		case 153754618:
		case -308681510:
			return "CLO_H4M_DECL_55";
			break;
		
		case 659374865:
		case -2032106950:
			return "CLO_H4M_DECL_57";
			break;
		
		case -13136248:
		case 921664999:
			return "CLO_H4M_DECL_59";
			break;
		
		case -1132960710:
		case 1700345329:
			return "CLO_H4M_DECL_61";
			break;
		
		case 1993003331:
		case -46539229:
			return "CLO_H4M_DECL_63";
			break;
		
		case -625419875:
		case 552527284:
			return "CLO_H4M_DECL_65";
			break;
	}
	switch (iParam0)
	{
		case 156407004:
		case 992344178:
			return "CLO_H4M_DECL_30";
			break;
		
		case 850137272:
		case 530639494:
			return "CLO_H4M_DECL_32";
			break;
		
		case -907859154:
		case 1472939772:
			return "CLO_H4M_DECL_28";
			break;
		
		case -475744483:
		case 1057844725:
			return "CLO_H4M_DECL_29";
			break;
		
		case -47667242:
		case 1810957693:
			return "CLO_H4M_DECL_31";
			break;
		
		case -409012879:
		case 1261157513:
			return "CLO_H4M_DECL_22";
			break;
		
		case 1327735228:
		case 1864065459:
			return "CLO_H4M_DECL_23";
			break;
		
		case -187858220:
		case -1644702422:
			return "CLO_H4M_DECL_20";
			break;
		
		case 1452108911:
		case -1603076035:
			return "CLO_H4M_DECL_21";
			break;
		
		case -1932584643:
		case -310682988:
			return "CLO_H4M_DECL_3";
			break;
		
		case -252057754:
		case 2103214089:
			return "CLO_H4M_DECL_4";
			break;
		
		case 116007471:
		case 2133791411:
			return "CLO_H4M_DECL_5";
			break;
		
		case -463212372:
		case 70168645:
			return "CLO_H4M_DECL_6";
			break;
		
		case -1171053658:
		case -669229192:
			return "CLO_H4M_DECL_27";
			break;
		
		case -990049180:
		case 620186715:
			return "CLO_H4M_DECL_26";
			break;
		
		case -1617127026:
		case 519116877:
			return "CLO_H4M_DECL_25";
			break;
		
		case 1770910373:
		case -1586273681:
			return "CLO_H4M_DECL_24";
			break;
		
		case -2143701887:
		case -72045715:
			return "CLO_H4M_DECL_2";
			break;
		
		case 1999836107:
		case 1105733954:
			return "CLO_H4M_DECL_1";
			break;
		
		case 417383307:
		case -1733868774:
			return "CLO_H4M_DECL_0";
			break;
		
		case -2136840722:
		case 75001248:
			return "CLO_H4M_DECL_7";
			break;
		
		case -83336071:
		case -351320953:
			return "CLO_H4M_DECL_8";
			break;
		
		case -1391222343:
		case -1824952815:
			return "CLO_H4M_DECL_9";
			break;
		
		case -1715443581:
		case -548539487:
			return "CLO_H4M_DECL_10";
			break;
		
		case 1673024230:
		case -925164242:
			return "CLO_H4M_DECL_11";
			break;
		
		case -1832442562:
		case 887187828:
			return "CLO_H4M_DECL_12";
			break;
		
		case 2086548996:
		case 249518856:
			return "CLO_H4M_DECL_13";
			break;
		
		case 1006203940:
		case -1491875241:
			return "CLO_H4M_DECL_14";
			break;
		
		case -1032809603:
		case 1114248050:
			return "CLO_H4M_DECL_15";
			break;
		
		case 1054867669:
		case 335686386:
			return "CLO_H4M_DECL_16";
			break;
		
		case -1911088924:
		case -773349244:
			return "CLO_H4M_DECL_17";
			break;
		
		case 983574619:
		case -1153521254:
			return "CLO_H4M_DECL_18";
			break;
		
		case 2119361460:
		case 449125530:
			return "CLO_H4M_DECL_19";
			break;
		
		case 596636884:
		case -1089524784:
			return "CLO_H4M_DECL_33";
			break;
	}
	switch (iParam0)
	{
		case 193032544:
		case -1747470682:
		case 1743653920:
		case 124145947:
			return "CLO_H4F_U_8_0";
			break;
		
		case -1068490820:
		case -906046046:
			return "CLO_H4F_U_10_0";
			break;
		
		case -843735811:
		case -179852662:
			return "CLO_H4F_U_5_0";
			break;
		
		case -1150093192:
		case -486242812:
			return "CLO_H4F_U_5_1";
			break;
		
		case -1804748036:
		case -1325807533:
			return "CLO_H4F_U_7_1";
			break;
		
		case 686668863:
		case -304462319:
			return "CLO_H4M_DECL_48";
			break;
		
		case 235066951:
		case 1884986113:
			return "CLO_H4M_DECL_47";
			break;
		
		case 1510632880:
		case -594316604:
			return "CLO_H4M_DECL_45";
			break;
		
		case 1912778271:
		case 1362488454:
			return "CLO_H4M_DECL_46";
			break;
		
		case 1883424478:
		case 1295264906:
			return "CLO_H4F_U_7_5";
			break;
		
		case 1585980265:
		case 455362671:
			return "CLO_H4F_U_7_4";
			break;
		
		case 1324675295:
		case 1138553164:
			return "CLO_H4F_D_0_0";
			break;
		
		case 1047498497:
		case 431167936:
			return "CLO_H4F_U_7_2";
			break;
		
		case 1894446071:
		case 733789651:
			return "CLO_H4F_U_7_3";
			break;
		
		case 781674592:
		case 597888060:
			return "CLO_H4F_U_4_0";
			break;
		
		case 1688044709:
		case -1048078133:
			return "CLO_H4F_U_6_4";
			break;
		
		case -1152863750:
		case 1966407715:
			return "CLO_H4F_U_6_3";
			break;
		
		case 217109849:
		case -2013616722:
			return "CLO_H4F_U_6_2";
			break;
		
		case -507609371:
		case -1710110244:
			return "CLO_H4F_U_6_1";
			break;
		
		case -1324049006:
		case -1412666031:
			return "CLO_H4F_U_6_0";
			break;
		
		case 491860090:
		case 1852149696:
			return "CLO_H4F_L_1_0";
			break;
		
		case -98964984:
		case 1346196336:
			return "CLO_H4F_L_1_1";
			break;
		
		case -373077669:
		case 2093788310:
			return "CLO_H4F_L_1_2";
			break;
		
		case -228620636:
		case 1058320393:
			return "CLO_H4F_L_0_0";
			break;
		
		case -135868800:
		case 637248244:
		case 2109360205:
		case 1275503017:
			return "CLO_H4F_PH_1_0";
			break;
		
		case -1340948775:
		case 949078048:
		case -1945344783:
		case -776164077:
			return "CLO_H4F_PH_1_1";
			break;
		
		case -1689217707:
		case 1259040019:
		case 2075837522:
		case -963537219:
			return "CLO_H4F_PH_1_2";
			break;
		
		case -846726717:
		case 1568838149:
		case -1978572545:
		case 878899806:
			return "CLO_H4F_PH_1_3";
			break;
		
		case -1093837746:
		case 1876768442:
		case 1726421675:
		case 724361202:
			return "CLO_H4F_PH_1_4";
			break;
	}
	switch (iParam0)
	{
		case -360715836:
		case -1624389651:
		case 243836943:
		case 1312139416:
			return "CLO_H4F_PLW_0_0";
			break;
		
		case -626734578:
		case -1939725738:
		case -39745983:
		case 1527824974:
			return "CLO_H4F_PLW_0_1";
			break;
		
		case -723370359:
		case -1277169323:
		case 739992372:
		case 1842046915:
			return "CLO_H4F_PLW_0_2";
			break;
		
		case -1214774283:
		case -1538633174:
		case 696212988:
		case 108960043:
			return "CLO_H4F_PLW_0_3";
			break;
		
		case 368984260:
		case 1329899548:
		case -712067560:
		case 414465430:
			return "CLO_H4F_PLW_0_4";
			break;
		
		case 875199772:
		case 1171821892:
		case -991030057:
		case 572608624:
			return "CLO_H4F_PLW_0_5";
			break;
		
		case 40409497:
		case 1824023299:
		case -214699678:
		case 878703853:
			return "CLO_H4F_PLW_0_6";
			break;
		
		case 279950887:
		case 1637174461:
		case 125146481:
		case 1058015837:
			return "CLO_H4F_PLW_0_7";
			break;
		
		case 1823960629:
		case 677993062:
		case 355152092:
		case 1366404896:
			return "CLO_H4F_PLW_0_8";
			break;
		
		case 990612190:
		case -15530054:
		case 700602890:
		case 1537524614:
			return "CLO_H4F_PLW_0_9";
			break;
		
		case -64425650:
		case 1762092216:
		case 152902057:
		case -1675566132:
			return "CLO_H4F_PLW_010";
			break;
		
		case -291875279:
		case 927564093:
		case 1409363824:
		case 1784152123:
			return "CLO_H4F_PLW_011";
			break;
	}
	switch (iParam0)
	{
		case -1364447384:
		case -2133234397:
			return "CLO_H4F_PEY_0_0";
			break;
		
		case 1480295044:
		case 1863698844:
			return "CLO_H4F_PEY_0_1";
			break;
		
		case -1977784761:
		case 330175182:
			return "CLO_H4F_PEY_0_2";
			break;
		
		case 1372550572:
		case 1229553156:
			return "CLO_H4F_PEY_0_3";
			break;
		
		case 1133140258:
		case 758400474:
			return "CLO_H4F_PEY_0_4";
			break;
		
		case 783527797:
		case -623173331:
			return "CLO_H4F_PEY_0_5";
			break;
		
		case 525570229:
		case -894664496:
			return "CLO_H4F_PEY_0_6";
			break;
		
		case 710420154:
		case 17690002:
			return "CLO_H4F_PEY_0_7";
			break;
		
		case 484248516:
		case -265532465:
			return "CLO_H4F_PEY_0_8";
			break;
		
		case -470279681:
		case -1779198113:
			return "CLO_H4F_PEY_0_9";
			break;
		
		case 624976017:
		case 357509846:
			return "CLO_H4F_PEY_010";
			break;
		
		case 393266418:
		case 636341267:
			return "CLO_H4F_PEY_011";
			break;
	}
	switch (iParam0)
	{
		case 944286754:
		case 1683790232:
		case -691678195:
		case 1249842995:
			return "CLO_H4F_T_13_0";
			break;
		
		case -2040870827:
		case 1218208280:
		case -1985267239:
		case 859302053:
			return "CLO_H4F_T_13_1";
			break;
		
		case 1424254297:
		case -2147200793:
		case 2068946214:
		case 621038654:
			return "CLO_H4F_T_13_2";
			break;
		
		case 583565602:
		case 1916319056:
		case -1642143040:
		case -320381947:
			return "CLO_H4F_T_13_3";
			break;
		
		case -288155336:
		case -1374540534:
		case -1869854821:
		case -5799547:
			return "CLO_H4F_T_13_4";
			break;
		
		case 1168361176:
		case -1143617391:
		case 1112910639:
		case -914123458:
			return "CLO_H4F_T_13_5";
			break;
		
		case 190370371:
		case -927735219:
		case 755400849:
		case -34144732:
			return "CLO_H4F_T_13_6";
			break;
		
		case 572784601:
		case -663060006:
		case 1666772277:
		case -1509306805:
			return "CLO_H4F_T_13_7";
			break;
		
		case -245293476:
		case -151011612:
		case 1312408311:
		case -657181729:
			return "CLO_H4F_T_13_8";
			break;
		
		case -5981469:
		case 79780455:
		case 410507132:
		case -2104752304:
			return "CLO_H4F_T_13_9";
			break;
		
		case -2056851459:
		case -321877893:
		case -1105452802:
		case -2102601008:
			return "CLO_H4F_T_13_10";
			break;
		
		case 41118228:
		case -613915217:
		case 258163595:
		case -2006391224:
			return "CLO_H4F_T_13_11";
			break;
		
		case -255965526:
		case -917847692:
		case -459280891:
		case 561715294:
			return "CLO_H4F_T_13_12";
			break;
		
		case -1646780193:
		case 908892982:
		case -1293088096:
		case 691873762:
			return "CLO_H4F_T_13_13";
			break;
		
		case -1677189825:
		case 601454224:
		case 138786128:
		case 1056887653:
			return "CLO_H4F_T_13_14";
			break;
		
		case 362614887:
		case -16110350:
		case 1462555445:
		case 1425538903:
			return "CLO_H4F_T_13_15";
			break;
	}
	switch (iParam0)
	{
		case 598488729:
		case 964509759:
			return "CLO_H4M_B_4_0";
			break;
		
		case 854447388:
		case 1806705832:
			return "CLO_H4M_B_4_1";
			break;
		
		case 2001034706:
		case 1728518998:
			return "CLO_H4M_B_4_2";
			break;
		
		case -2138345378:
		case -1724448843:
			return "CLO_H4M_B_4_3";
			break;
		
		case 1254196427:
		case -2106535383:
			return "CLO_H4M_B_4_4";
			break;
		
		case 1711192901:
		case -1261717794:
			return "CLO_H4M_B_4_5";
			break;
		
		case -1175362775:
		case -686556306:
			return "CLO_H4M_B_4_6";
			break;
		
		case -867891252:
		case -1067659776:
			return "CLO_H4M_B_4_7";
			break;
		
		case -1653233102:
		case -358800748:
			return "CLO_H4M_B_4_8";
			break;
		
		case -1392490169:
		case -605518549:
			return "CLO_H4M_B_4_9";
			break;
		
		case 625638735:
		case -734987935:
			return "CLO_H4M_B_4_10";
			break;
		
		case 268817094:
		case -503573257:
			return "CLO_H4M_B_4_11";
			break;
		
		case 1102231075:
		case -273305494:
			return "CLO_H4M_B_4_12";
			break;
		
		case 1551035299:
		case 259518446:
			return "CLO_H4M_B_4_13";
			break;
		
		case -639637893:
		case -1618604024:
			return "CLO_H4M_B_4_14";
			break;
		
		case -727983117:
		case -1085911160:
			return "CLO_H4M_B_4_15";
			break;
		
		case 106807158:
		case -854791403:
			return "CLO_H4M_B_4_16";
			break;
		
		case -283209480:
		case -623769953:
			return "CLO_H4M_B_4_17";
			break;
		
		case 1890849825:
		case 1718492629:
			return "CLO_H4M_B_4_18";
			break;
		
		case -1959114451:
		case 1951971754:
			return "CLO_H4M_B_4_19";
			break;
	}
	switch (iParam0)
	{
		case -36224791:
		case 327104734:
			return "CLO_H4M_PEY_1_0";
			break;
		
		case -1139163793:
		case 99196339:
			return "CLO_H4M_PEY_1_1";
			break;
		
		case -1842419302:
		case 804581833:
			return "CLO_H4M_PEY_1_2";
			break;
		
		case 2121581094:
		case 566908276:
			return "CLO_H4M_PEY_1_3";
			break;
		
		case 1957801632:
		case -1535223074:
			return "CLO_H4M_PEY_1_4";
			break;
		
		case 1660947261:
		case -1766539445:
			return "CLO_H4M_PEY_1_5";
			break;
		
		case 997276700:
		case -1107784238:
			return "CLO_H4M_PEY_1_6";
			break;
		
		case 724278161:
		case -1301711180:
			return "CLO_H4M_PEY_1_7";
			break;
		
		case -1880201963:
		case 1229923461:
			return "CLO_H4M_PEY_1_8";
			break;
		
		case 2108670104:
		case 999885081:
			return "CLO_H4M_PEY_1_9";
			break;
		
		case 1149517553:
		case -1409944646:
			return "CLO_H4M_PEY_110";
			break;
		
		case -1842521530:
		case -1678486601:
			return "CLO_H4M_PEY_111";
			break;
		
		case -1661989803:
		case -1630379289:
			return "CLO_H4M_PEY_2_0";
			break;
		
		case 315029509:
		case -442077042:
			return "CLO_H4M_PEY_2_1";
			break;
		
		case 76045192:
		case -2097370308:
			return "CLO_H4M_PEY_2_2";
			break;
		
		case -231524642:
		case -900220431:
			return "CLO_H4M_PEY_2_3";
			break;
		
		case -538078637:
		case -1147331460:
			return "CLO_H4M_PEY_2_4";
			break;
		
		case 1280600755:
		case 511435320:
			return "CLO_H4M_PEY_2_5";
			break;
		
		case 1050267454:
		case 280643253:
			return "CLO_H4M_PEY_2_6";
			break;
		
		case 686728168:
		case 52898703:
			return "CLO_H4M_PEY_2_7";
			break;
		
		case 388825189:
		case -182939790:
			return "CLO_H4M_PEY_2_8";
			break;
		
		case -1765539843:
		case -380995642:
			return "CLO_H4M_PEY_2_9";
			break;
		
		case -332552075:
		case -321839039:
			return "CLO_H4M_PEY_210";
			break;
		
		case -624917093:
		case 1940860411:
			return "CLO_H4M_PEY_211";
			break;
		
		case -1463507504:
		case 1073312767:
			return "CLO_H4M_PEY_3_0";
			break;
		
		case -744686720:
		case 315136414:
			return "CLO_H4M_PEY_3_1";
			break;
		
		case -982294739:
		case 590559859:
			return "CLO_H4M_PEY_3_2";
			break;
		
		case 1101354891:
		case 833640293:
			return "CLO_H4M_PEY_3_3";
			break;
		
		case -352998867:
		case 1113749705:
			return "CLO_H4M_PEY_3_4";
			break;
		
		case -629143230:
		case 349871546:
			return "CLO_H4M_PEY_3_5";
			break;
		
		case 214625751:
		case 1720729896:
			return "CLO_H4M_PEY_3_6";
			break;
		
		case 1809853456:
		case 2002248375:
			return "CLO_H4M_PEY_3_7";
			break;
		
		case 1473119212:
		case 1227163218:
			return "CLO_H4M_PEY_3_8";
			break;
		
		case -1988237493:
		case 1529621088:
			return "CLO_H4M_PEY_3_9";
			break;
		
		case -308780352:
		case -488766247:
			return "CLO_H4M_PEY_310";
			break;
		
		case -539048115:
		case 1676314352:
			return "CLO_H4M_PEY_311";
			break;
	}
	switch (iParam0)
	{
		case -1265443416:
			return "CLO_SUM_DECL_0";
			break;
		
		case 676807987:
			return "CLO_SUF_DECL_0";
			break;
		
		case 1888753218:
			return "CLO_SUM_DECL_1";
			break;
		
		case 272160153:
			return "CLO_SUF_DECL_1";
			break;
		
		case -552467991:
			return "CLO_SUM_DECL_2";
			break;
		
		case 1593344440:
			return "CLO_SUF_DECL_2";
			break;
		
		case -1655919948:
			return "CLO_SUM_DECL_3";
			break;
		
		case 546222390:
			return "CLO_SUF_DECL_3";
			break;
		
		case -917106601:
			return "CLO_SUM_DECL_4";
			break;
		
		case 1983375900:
			return "CLO_SUF_DECL_4";
			break;
		
		case 1595446967:
			return "CLO_SUM_DECL_5";
			break;
		
		case -620589387:
			return "CLO_SUF_DECL_5";
			break;
		
		case -530593323:
			return "CLO_SUM_DECL_6";
			break;
		
		case 383923929:
			return "CLO_SUF_DECL_6";
			break;
		
		case 561619447:
			return "CLO_SUM_DECL_7";
			break;
		
		case -1703406594:
			return "CLO_SUF_DECL_7";
			break;
		
		case -1913656173:
			return "CLO_SUM_DECL_8";
			break;
		
		case -398286533:
			return "CLO_SUF_DECL_8";
			break;
		
		case -1766901922:
			return "CLO_SUM_DECL_9";
			break;
		
		case -80478106:
			return "CLO_SUF_DECL_9";
			break;
		
		case 2091781849:
			return "CLO_SUM_DECL_10";
			break;
		
		case 1835331655:
			return "CLO_SUF_DECL_10";
			break;
		
		case 1824588341:
			return "CLO_SUM_DECL_11";
			break;
		
		case -1650596870:
			return "CLO_SUF_DECL_11";
			break;
		
		case 242597641:
			return "CLO_SUM_DECL_12";
			break;
		
		case 1231926496:
			return "CLO_SUF_DECL_12";
			break;
		
		case 566785691:
			return "CLO_SUM_DECL_13";
			break;
		
		case -1506181253:
			return "CLO_SUF_DECL_13";
			break;
		
		case -2091312957:
			return "CLO_SUM_DECL_14";
			break;
		
		case -1737145605:
			return "CLO_SUF_DECL_14";
			break;
		
		case -2079214831:
			return "CLO_SUM_DECL_15";
			break;
		
		case 1673851512:
			return "CLO_SUF_DECL_15";
			break;
		
		case 1359156274:
			return "CLO_SUM_DECL_16";
			break;
		
		case 1023339598:
			return "CLO_SUF_DECL_16";
			break;
		
		case -1302300594:
			return "CLO_SUM_DECL_17";
			break;
		
		case -163738770:
			return "CLO_SUF_DECL_17";
			break;
		
		case -1351518396:
			return "CLO_SUM_DECL_18";
			break;
		
		case 1863218823:
			return "CLO_SUF_DECL_18";
			break;
		
		case -797874817:
			return "CLO_SUM_DECL_19";
			break;
		
		case 333966447:
			return "CLO_SUF_DECL_19";
			break;
		
		case -385507297:
			return "CLO_SUM_DECL_20";
			break;
		
		case 1412626052:
			return "CLO_SUF_DECL_20";
			break;
		
		case 2011910758:
			return "CLO_SUM_DECL_21";
			break;
		
		case -39100956:
			return "CLO_SUF_DECL_21";
			break;
		
		case -1953985443:
			return "CLO_SUM_DECL_22";
			break;
		
		case 1631533003:
			return "CLO_SUF_DECL_22";
			break;
		
		case -1124222352:
			return "CLO_SUM_DECL_23";
			break;
		
		case 1493430918:
			return "CLO_SUF_DECL_23";
			break;
		
		case -1806994767:
			return "CLO_SUM_DECL_24";
			break;
		
		case -196693334:
			return "CLO_SUF_DECL_24";
			break;
		
		case -1445761968:
			return "CLO_SUM_DECL_25";
			break;
		
		case 553507495:
			return "CLO_SUF_DECL_25";
			break;
		
		case -89186417:
			return "CLO_SUM_DECL_26";
			break;
		
		case 2003474700:
			return "CLO_SUF_DECL_26";
			break;
		
		case -308083083:
			return "CLO_SUM_DECL_27";
			break;
		
		case 1121792228:
			return "CLO_SUF_DECL_27";
			break;
		
		case 667714507:
			return "CLO_SUM_DECL_28";
			break;
		
		case -1424651669:
			return "CLO_SUF_DECL_28";
			break;
		
		case -1610210252:
			return "CLO_SUM_DECL_29";
			break;
		
		case -1454164346:
			return "CLO_SUF_DECL_29";
			break;
		
		case 1868506246:
			return "CLO_SUM_B_3_4";
			break;
		
		case -307572086:
			return "CLO_SUF_B_3_4";
			break;
		
		case 1686703834:
			return "CLO_SUM_B_3_5";
			break;
		
		case -1486436861:
			return "CLO_SUF_B_3_5";
			break;
		
		case -1811091999:
			return "CLO_SUM_B_3_6";
			break;
		
		case -1705464857:
			return "CLO_SUF_B_3_6";
			break;
		
		case 414381867:
			return "CLO_SUM_B_3_7";
			break;
		
		case -469188798:
			return "CLO_SUF_B_3_7";
			break;
		
		case -1206261789:
			return "CLO_SUM_L_1_25";
			break;
		
		case 692621401:
			return "CLO_SUF_L_2_25";
			break;
		
		case 1395785293:
			return "CLO_SUM_U_0_25";
			break;
		
		case 60231546:
			return "CLO_SUF_U_0_25";
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_VWD_M_DECL_1_0"):
			return "CLO_VWM_D_1_0";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_0"):
			return "CLO_VWF_D_1_0";
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_6"):
			return "CLO_VWM_D_1_6";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_6"):
			return "CLO_VWF_D_1_6";
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_7"):
			return "CLO_VWM_D_1_7";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_7"):
			return "CLO_VWF_D_1_7";
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_8"):
			return "CLO_VWM_D_1_8";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_8"):
			return "CLO_VWF_D_1_8";
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_5"):
			return "CLO_VWM_U_23_5";
			break;
		
		case joaat("DLC_MP_VWD_F_JBIB_21_5"):
			return "CLO_VWF_U_21_5";
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_8"):
			return "CLO_VWM_U_23_8";
			break;
		
		case joaat("DLC_MP_VWD_F_JBIB_21_8"):
			return "CLO_VWF_U_21_8";
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_9"):
			return "CLO_VWM_U_23_9";
			break;
		
		case joaat("DLC_MP_VWD_F_JBIB_21_9"):
			return "CLO_VWF_U_21_9";
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_10"):
			return "CLO_VWM_U_23_10";
			break;
		
		case joaat("DLC_MP_VWD_F_JBIB_21_10"):
			return "CLO_VWF_U_21_10";
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_11"):
			return "CLO_VWM_D_1_11";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_11"):
			return "CLO_VWF_D_1_11";
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_12"):
			return "CLO_VWM_D_1_12";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_12"):
			return "CLO_VMF_D_1_12";
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_13"):
			return "CLO_VWM_D_1_13";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_13"):
			return "CLO_VWF_D_1_13";
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_14"):
			return "CLO_VWM_D_1_14";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_14"):
			return "CLO_VWF_D_1_14";
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_15"):
			return "CLO_VWM_D_1_15";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_15"):
			return "CLO_VWF_D_1_15";
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_16"):
			return "CLO_VWM_D_1_16";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_16"):
			return "CLO_VWF_D_1_16";
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_17"):
			return "CLO_VWM_D_1_17";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_17"):
			return "CLO_VWF_D_1_17";
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_18"):
			return "CLO_VWM_D_1_18";
			break;
		
		case joaat("DLC_MP_VWD_F_DECL_1_18"):
			return "CLO_VWF_D_1_18";
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_0"):
			return "CLO_VWM_U_23_0";
			break;
		
		case joaat("DLC_MP_VWD_F_JBIB_21_0"):
			return "CLO_VMF_U_21_0";
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_2"):
			return "CLO_VWM_U_23_2";
			break;
		
		case joaat("DLC_MP_VWD_F_JBIB_21_2"):
			return "CLO_VMF_U_21_2";
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_4"):
			return "CLO_VWM_U_23_4";
			break;
		
		case joaat("DLC_MP_VWD_F_JBIB_21_4"):
			return "CLO_VMF_U_21_4";
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_7"):
			return "CLO_VWM_U_23_7";
			break;
		
		case joaat("DLC_MP_VWD_F_JBIB_21_7"):
			return "CLO_VMF_U_21_7";
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Christmas2018_Tee_000_M"):
			return "CLO_AWM_DECL_0";
		
		case joaat("MP_Christmas2018_Tee_000_F"):
			return "CLO_AWF_DECL_0";
		
		case joaat("MP_Christmas2018_Tee_001_M"):
			return "CLO_AWM_DECL_1";
		
		case joaat("MP_Christmas2018_Tee_001_F"):
			return "CLO_AWF_DECL_1";
		
		case joaat("MP_Christmas2018_Tee_002_M"):
			return "CLO_AWM_DECL_2";
		
		case joaat("MP_Christmas2018_Tee_002_F"):
			return "CLO_AWF_DECL_2";
		
		case joaat("MP_Christmas2018_Tee_003_M"):
			return "CLO_AWM_DECL_3";
		
		case joaat("MP_Christmas2018_Tee_003_F"):
			return "CLO_AWF_DECL_3";
		
		case joaat("MP_Christmas2018_Tee_004_M"):
			return "CLO_AWM_DECL_4";
		
		case joaat("MP_Christmas2018_Tee_004_F"):
			return "CLO_AWF_DECL_4";
		
		case joaat("MP_Christmas2018_Tee_005_M"):
			return "CLO_AWM_DECL_5";
		
		case joaat("MP_Christmas2018_Tee_005_F"):
			return "CLO_AWF_DECL_5";
		
		case joaat("MP_Christmas2018_Tee_006_M"):
			return "CLO_AWM_DECL_6";
		
		case joaat("MP_Christmas2018_Tee_006_F"):
			return "CLO_AWF_DECL_6";
		
		case joaat("MP_Christmas2018_Tee_007_M"):
			return "CLO_AWM_DECL_7";
		
		case joaat("MP_Christmas2018_Tee_007_F"):
			return "CLO_AWF_DECL_7";
		
		case joaat("MP_Christmas2018_Tee_008_M"):
			return "CLO_AWM_DECL_8";
		
		case joaat("MP_Christmas2018_Tee_008_F"):
			return "CLO_AWF_DECL_8";
		
		case joaat("MP_Christmas2018_Tee_009_M"):
			return "CLO_AWM_DECL_9";
		
		case joaat("MP_Christmas2018_Tee_009_F"):
			return "CLO_AWF_DECL_9";
		
		case joaat("MP_Christmas2018_Tee_010_M"):
			return "CLO_AWM_DECL_10";
		
		case joaat("MP_Christmas2018_Tee_010_F"):
			return "CLO_AWF_DECL_10";
		
		case joaat("MP_Christmas2018_Tee_011_M"):
			return "CLO_AWM_DECL_11";
		
		case joaat("MP_Christmas2018_Tee_011_F"):
			return "CLO_AWF_DECL_11";
		
		case joaat("MP_Christmas2018_Tee_012_M"):
			return "CLO_AWM_DECL_12";
		
		case joaat("MP_Christmas2018_Tee_012_F"):
			return "CLO_AWF_DECL_12";
		
		case joaat("MP_Christmas2018_Tee_013_M"):
			return "CLO_AWM_DECL_13";
		
		case joaat("MP_Christmas2018_Tee_013_F"):
			return "CLO_AWF_DECL_13";
		
		case joaat("MP_Christmas2018_Tee_014_M"):
			return "CLO_AWM_DECL_14";
		
		case joaat("MP_Christmas2018_Tee_014_F"):
			return "CLO_AWF_DECL_14";
		
		case joaat("MP_Christmas2018_Tee_015_M"):
			return "CLO_AWM_DECL_15";
		
		case joaat("MP_Christmas2018_Tee_015_F"):
			return "CLO_AWF_DECL_15";
		
		case joaat("MP_Christmas2018_Tee_016_M"):
			return "CLO_AWM_DECL_16";
		
		case joaat("MP_Christmas2018_Tee_016_F"):
			return "CLO_AWF_DECL_16";
		
		case joaat("MP_Christmas2018_Tee_017_M"):
			return "CLO_AWM_DECL_17";
		
		case joaat("MP_Christmas2018_Tee_017_F"):
			return "CLO_AWF_DECL_17";
		
		case joaat("MP_Christmas2018_Tee_018_M"):
			return "CLO_AWM_DECL_18";
		
		case joaat("MP_Christmas2018_Tee_018_F"):
			return "CLO_AWF_DECL_18";
		
		case joaat("MP_Christmas2018_Tee_019_M"):
			return "CLO_AWM_DECL_19";
		
		case joaat("MP_Christmas2018_Tee_019_F"):
			return "CLO_AWF_DECL_19";
		
		case joaat("MP_Christmas2018_Tee_020_M"):
			return "CLO_AWM_DECL_20";
		
		case joaat("MP_Christmas2018_Tee_020_F"):
			return "CLO_AWF_DECL_20";
		
		case joaat("MP_Christmas2018_Tee_021_M"):
			return "CLO_AWM_DECL_21";
		
		case joaat("MP_Christmas2018_Tee_021_F"):
			return "CLO_AWF_DECL_21";
		
		case joaat("MP_Christmas2018_Tee_022_M"):
			return "CLO_AWM_DECL_22";
		
		case joaat("MP_Christmas2018_Tee_022_F"):
			return "CLO_AWF_DECL_22";
		
		case joaat("MP_Christmas2018_Tee_023_M"):
			return "CLO_AWM_DECL_23";
		
		case joaat("MP_Christmas2018_Tee_023_F"):
			return "CLO_AWF_DECL_23";
		
		case joaat("MP_Christmas2018_Tee_024_M"):
			return "CLO_AWM_DECL_24";
		
		case joaat("MP_Christmas2018_Tee_024_F"):
			return "CLO_AWF_DECL_24";
		
		case joaat("MP_Christmas2018_Tee_025_M"):
			return "CLO_AWM_DECL_25";
		
		case joaat("MP_Christmas2018_Tee_025_F"):
			return "CLO_AWF_DECL_25";
		
		case joaat("MP_Christmas2018_Tee_026_M"):
			return "CLO_AWM_DECL_26";
		
		case joaat("MP_Christmas2018_Tee_026_F"):
			return "CLO_AWF_DECL_26";
		
		case joaat("MP_Christmas2018_Tee_027_M"):
			return "CLO_AWM_DECL_27";
		
		case joaat("MP_Christmas2018_Tee_027_F"):
			return "CLO_AWF_DECL_27";
		
		case joaat("MP_Christmas2018_Tee_028_M"):
			return "CLO_AWM_DECL_28";
		
		case joaat("MP_Christmas2018_Tee_028_F"):
			return "CLO_AWF_DECL_28";
		
		case joaat("MP_Christmas2018_Tee_029_M"):
			return "CLO_AWM_DECL_29";
		
		case joaat("MP_Christmas2018_Tee_029_F"):
			return "CLO_AWF_DECL_29";
		
		case joaat("MP_Christmas2018_Tee_030_M"):
			return "CLO_AWM_DECL_30";
		
		case joaat("MP_Christmas2018_Tee_030_F"):
			return "CLO_AWF_DECL_30";
		
		case joaat("MP_Christmas2018_Tee_031_M"):
			return "CLO_AWM_DECL_31";
		
		case joaat("MP_Christmas2018_Tee_031_F"):
			return "CLO_AWF_DECL_31";
		
		case joaat("MP_Christmas2018_Tee_032_M"):
			return "CLO_AWM_DECL_32";
		
		case joaat("MP_Christmas2018_Tee_032_F"):
			return "CLO_AWF_DECL_32";
		
		case joaat("MP_Christmas2018_Tee_033_M"):
			return "CLO_AWM_DECL_33";
		
		case joaat("MP_Christmas2018_Tee_033_F"):
			return "CLO_AWF_DECL_33";
		
		case joaat("MP_Christmas2018_Tee_034_M"):
			return "CLO_AWM_DECL_34";
		
		case joaat("MP_Christmas2018_Tee_034_F"):
			return "CLO_AWF_DECL_34";
		
		case joaat("MP_Christmas2018_Tee_035_M"):
			return "CLO_AWM_DECL_35";
		
		case joaat("MP_Christmas2018_Tee_035_F"):
			return "CLO_AWF_DECL_35";
		
		case joaat("MP_Christmas2018_Tee_036_M"):
			return "CLO_AWM_DECL_36";
		
		case joaat("MP_Christmas2018_Tee_036_F"):
			return "CLO_AWF_DECL_36";
		
		case joaat("MP_Christmas2018_Tee_037_M"):
			return "CLO_AWM_DECL_37";
		
		case joaat("MP_Christmas2018_Tee_037_F"):
			return "CLO_AWF_DECL_37";
		
		case joaat("MP_Christmas2018_Tee_038_M"):
			return "CLO_AWM_DECL_38";
		
		case joaat("MP_Christmas2018_Tee_038_F"):
			return "CLO_AWF_DECL_38";
		
		case joaat("MP_Christmas2018_Tee_039_M"):
			return "CLO_AWM_DECL_39";
		
		case joaat("MP_Christmas2018_Tee_039_F"):
			return "CLO_AWF_DECL_39";
		
		case joaat("MP_Christmas2018_Tee_040_M"):
			return "CLO_AWM_DECL_40";
		
		case joaat("MP_Christmas2018_Tee_040_F"):
			return "CLO_AWF_DECL_40";
		
		case joaat("MP_Christmas2018_Tee_041_M"):
			return "CLO_AWM_DECL_41";
		
		case joaat("MP_Christmas2018_Tee_041_F"):
			return "CLO_AWF_DECL_41";
		
		case joaat("MP_Christmas2018_Tee_042_M"):
			return "CLO_AWM_DECL_42";
		
		case joaat("MP_Christmas2018_Tee_042_F"):
			return "CLO_AWF_DECL_42";
		
		case joaat("MP_Christmas2018_Tee_043_M"):
			return "CLO_AWM_DECL_43";
		
		case joaat("MP_Christmas2018_Tee_043_F"):
			return "CLO_AWF_DECL_43";
		
		case joaat("MP_Christmas2018_Tee_044_M"):
			return "CLO_AWM_DECL_44";
		
		case joaat("MP_Christmas2018_Tee_044_F"):
			return "CLO_AWF_DECL_44";
		
		case joaat("MP_Christmas2018_Tee_045_M"):
			return "CLO_AWM_DECL_45";
		
		case joaat("MP_Christmas2018_Tee_045_F"):
			return "CLO_AWF_DECL_45";
		
		case joaat("MP_Christmas2018_Tee_046_M"):
			return "CLO_AWM_DECL_46";
		
		case joaat("MP_Christmas2018_Tee_046_F"):
			return "CLO_AWF_DECL_46";
		
		case joaat("MP_Christmas2018_Tee_047_M"):
			return "CLO_AWM_DECL_47";
		
		case joaat("MP_Christmas2018_Tee_047_F"):
			return "CLO_AWF_DECL_47";
		
		case joaat("MP_Christmas2018_Tee_048_M"):
			return "CLO_AWM_DECL_48";
		
		case joaat("MP_Christmas2018_Tee_048_F"):
			return "CLO_AWF_DECL_48";
		
		case joaat("MP_Christmas2018_Tee_049_M"):
			return "CLO_AWM_DECL_49";
		
		case joaat("MP_Christmas2018_Tee_049_F"):
			return "CLO_AWF_DECL_49";
		
		case joaat("MP_Christmas2018_Tee_050_M"):
			return "CLO_AWM_DECL_50";
		
		case joaat("MP_Christmas2018_Tee_050_F"):
			return "CLO_AWF_DECL_50";
		
		case joaat("MP_Christmas2018_Tee_051_M"):
			return "CLO_AWM_DECL_51";
		
		case joaat("MP_Christmas2018_Tee_051_F"):
			return "CLO_AWF_DECL_51";
		
		case joaat("MP_Christmas2018_Tee_052_M"):
			return "CLO_AWM_DECL_52";
		
		case joaat("MP_Christmas2018_Tee_052_F"):
			return "CLO_AWF_DECL_52";
		
		case joaat("MP_Christmas2018_Tee_053_M"):
			return "CLO_AWM_DECL_53";
		
		case joaat("MP_Christmas2018_Tee_053_F"):
			return "CLO_AWF_DECL_53";
		
		case joaat("MP_Christmas2018_Tee_054_M"):
			return "CLO_AWM_DECL_54";
		
		case joaat("MP_Christmas2018_Tee_054_F"):
			return "CLO_AWF_DECL_54";
		
		case joaat("MP_Christmas2018_Tee_055_M"):
			return "CLO_AWM_DECL_55";
		
		case joaat("MP_Christmas2018_Tee_055_F"):
			return "CLO_AWF_DECL_55";
		
		case joaat("MP_Christmas2018_Tee_056_M"):
			return "CLO_AWM_DECL_56";
		
		case joaat("MP_Christmas2018_Tee_056_F"):
			return "CLO_AWF_DECL_56";
		
		case joaat("MP_Christmas2018_Tee_057_M"):
			return "CLO_AWM_DECL_57";
		
		case joaat("MP_Christmas2018_Tee_057_F"):
			return "CLO_AWF_DECL_57";
		
		case joaat("MP_Christmas2018_Tee_058_M"):
			return "CLO_AWM_DECL_58";
		
		case joaat("MP_Christmas2018_Tee_058_F"):
			return "CLO_AWF_DECL_58";
		
		case joaat("MP_Christmas2018_Tee_059_M"):
			return "CLO_AWM_DECL_59";
		
		case joaat("MP_Christmas2018_Tee_059_F"):
			return "CLO_AWF_DECL_59";
		
		case joaat("MP_Christmas2018_Tee_060_M"):
			return "CLO_AWM_DECL_60";
		
		case joaat("MP_Christmas2018_Tee_060_F"):
			return "CLO_AWF_DECL_60";
		
		case joaat("MP_Christmas2018_Tee_061_M"):
			return "CLO_AWMDECL_61";
		
		case joaat("MP_Christmas2018_Tee_061_F"):
			return "CLO_AWF_DECL_61";
		
		case joaat("MP_Christmas2018_Tee_062_M"):
			return "CLO_AWM_DECL_62";
		
		case joaat("MP_Christmas2018_Tee_062_F"):
			return "CLO_AWF_DECL_62";
		
		case joaat("MP_Christmas2018_Tee_063_M"):
			return "CLO_AWM_DECL_63";
		
		case joaat("MP_Christmas2018_Tee_063_F"):
			return "CLO_AWF_DECL_63";
		
		case joaat("MP_Christmas2018_Tee_064_M"):
			return "CLO_AWM_DECL_64";
		
		case joaat("MP_Christmas2018_Tee_064_F"):
			return "CLO_AWF_DECL_64";
		
		case joaat("MP_Christmas2018_Tee_065_M"):
			return "CLO_AWM_DECL_65";
		
		case joaat("MP_Christmas2018_Tee_065_F"):
			return "CLO_AWF_DECL_65";
		
		case joaat("MP_Christmas2018_Tee_066_M"):
			return "CLO_AWM_DECL_66";
		
		case joaat("MP_Christmas2018_Tee_066_F"):
			return "CLO_AWF_DECL_66";
		
		case joaat("MP_Christmas2018_Tee_067_M"):
			return "CLO_AWM_DECL_67";
		
		case joaat("MP_Christmas2018_Tee_067_F"):
			return "CLO_AWF_DECL_67";
		
		case joaat("MP_Christmas2018_Tee_068_M"):
			return "CLO_AWM_DECL_68";
		
		case joaat("MP_Christmas2018_Tee_068_F"):
			return "CLO_AWF_DECL_68";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_ARENA_F_JBIB_16_0"):
			return "CLO_X5F_U_16_0";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_0"):
			return "CLO_X5M_U_16_0";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_1"):
			return "CLO_X5F_U_16_1";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_1"):
			return "CLO_X5M_U_16_1";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_2"):
			return "CLO_X5F_U_16_2";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_2"):
			return "CLO_X5M_U_16_2";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_3"):
			return "CLO_X5F_U_16_3";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_3"):
			return "CLO_X5M_U_16_3";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_4"):
			return "CLO_X5F_U_16_4";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_4"):
			return "CLO_X5M_U_16_4";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_5"):
			return "CLO_X5F_U_16_5";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_5"):
			return "CLO_X5M_U_16_5";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_6"):
			return "CLO_X5F_U_16_6";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_6"):
			return "CLO_X5M_U_16_6";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_7"):
			return "CLO_X5F_U_16_7";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_7"):
			return "CLO_X5M_U_16_7";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_8"):
			return "CLO_X5F_U_16_8";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_8"):
			return "CLO_X5M_U_16_8";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_9"):
			return "CLO_X5F_U_16_9";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_9"):
			return "CLO_X5M_U_16_9";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_10"):
			return "CLO_X5F_U_16_10";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_10"):
			return "CLO_X5M_U_16_10";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_11"):
			return "CLO_X5F_U_16_11";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_11"):
			return "CLO_X5M_U_16_11";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_12"):
			return "CLO_X5F_U_16_12";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_12"):
			return "CLO_X5M_U_16_12";
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_13"):
			return "CLO_X5F_U_16_13";
		
		case joaat("DLC_MP_ARENA_M_JBIB_16_13"):
			return "CLO_X5M_U_16_13";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Battle_Clothing_000_M"):
		case joaat("MP_Battle_Clothing_000_F"):
			return "CLO_BHM_DECL_0";
		
		case joaat("MP_Battle_Clothing_002_M"):
		case joaat("MP_Battle_Clothing_002_F"):
			return "CLO_BHM_DECL_1";
		
		case joaat("MP_Battle_Clothing_003_M"):
		case joaat("MP_Battle_Clothing_003_F"):
			return "CLO_BHM_DECL_2";
		
		case joaat("MP_Battle_Clothing_004_M"):
		case joaat("MP_Battle_Clothing_004_F"):
			return "CLO_BHM_DECL_3";
		
		case joaat("MP_Battle_Clothing_005_M"):
		case joaat("MP_Battle_Clothing_005_F"):
			return "CLO_BHM_DECL_4";
		
		case joaat("MP_Battle_Clothing_006_M"):
		case joaat("MP_Battle_Clothing_006_F"):
			return "CLO_BHM_DECL_5";
		
		case joaat("MP_Battle_Clothing_007_M"):
		case joaat("MP_Battle_Clothing_007_F"):
			return "CLO_BHM_DECL_6";
		
		case joaat("MP_Battle_Clothing_008_M"):
		case joaat("MP_Battle_Clothing_008_F"):
			return "CLO_BHM_DECL_7";
		
		case joaat("MP_Battle_Clothing_009_M"):
		case joaat("MP_Battle_Clothing_009_F"):
			return "CLO_BHM_DECL_8";
		
		case joaat("MP_Battle_Clothing_010_M"):
		case joaat("MP_Battle_Clothing_010_F"):
			return "CLO_BHM_DECL_9";
		
		case joaat("MP_Battle_Clothing_011_M"):
		case joaat("MP_Battle_Clothing_011_F"):
			return "CLO_BHM_DECL_10";
		
		case joaat("MP_Battle_Clothing_012_M"):
		case joaat("MP_Battle_Clothing_012_F"):
			return "CLO_BHM_DECL_11";
		
		case joaat("MP_Battle_Clothing_013_M"):
		case joaat("MP_Battle_Clothing_013_F"):
			return "CLO_BHM_DECL_12";
		
		case joaat("MP_Battle_Clothing_014_M"):
		case joaat("MP_Battle_Clothing_014_F"):
			return "CLO_BHM_DECL_13";
		
		case joaat("MP_Battle_Clothing_015_M"):
		case joaat("MP_Battle_Clothing_015_F"):
			return "CLO_BHM_DECL_14";
		
		case joaat("MP_Battle_Clothing_016_M"):
		case joaat("MP_Battle_Clothing_016_F"):
			return "CLO_BHM_DECL_15";
		
		case joaat("MP_Battle_Clothing_017_M"):
		case joaat("MP_Battle_Clothing_017_F"):
			return "CLO_BHM_DECL_16";
		
		case joaat("MP_Battle_Clothing_018_M"):
		case joaat("MP_Battle_Clothing_018_F"):
			return "CLO_BHM_DECL_17";
		
		case joaat("MP_Battle_Clothing_019_M"):
		case joaat("MP_Battle_Clothing_019_F"):
			return "CLO_BHM_DECL_18";
		
		case joaat("MP_Battle_Clothing_020_M"):
		case joaat("MP_Battle_Clothing_020_F"):
			return "CLO_BHM_DECL_19";
		
		case joaat("MP_Battle_Clothing_021_M"):
		case joaat("MP_Battle_Clothing_021_F"):
			return "CLO_BHM_DECL_20";
		
		case joaat("MP_Battle_Clothing_022_M"):
		case joaat("MP_Battle_Clothing_022_F"):
			return "BBNCSHIRT3";
		
		case joaat("MP_Battle_Clothing_023_M"):
		case joaat("MP_Battle_Clothing_023_F"):
			return "BBNCSHIRT4";
		
		case joaat("MP_Battle_Clothing_024_M"):
		case joaat("MP_Battle_Clothing_024_F"):
			return "BBNCSHIRT5";
		
		case joaat("MP_Battle_Clothing_025_M"):
		case joaat("MP_Battle_Clothing_025_F"):
			return "BBNCSHIRT1";
		
		case joaat("MP_Battle_Clothing_026_M"):
		case joaat("MP_Battle_Clothing_026_F"):
			return "BBNCSHIRT7";
		
		case joaat("MP_Battle_Clothing_027_M"):
		case joaat("MP_Battle_Clothing_027_F"):
			return "BBNCSHIRT2";
		
		case joaat("MP_Battle_Clothing_028_M"):
		case joaat("MP_Battle_Clothing_028_F"):
			return "BBNCSHIRT6";
		
		case joaat("MP_Battle_Clothing_029_M"):
		case joaat("MP_Battle_Clothing_029_F"):
			return "BBNCSHIRT8";
		
		case joaat("MP_Battle_Clothing_030_M"):
		case joaat("MP_Battle_Clothing_030_F"):
			return "BBNCSHIRT9";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Battle_Clothing_031_M"):
		case joaat("MP_Battle_Clothing_031_F"):
			return "CLO_BHF_DECL_30";
		
		case joaat("MP_Battle_Clothing_032_M"):
		case joaat("MP_Battle_Clothing_032_F"):
			return "CLO_BHF_DECL_31";
		
		case joaat("MP_Battle_Clothing_033_M"):
		case joaat("MP_Battle_Clothing_033_F"):
			return "CLO_BHF_DECL_32";
		
		case joaat("MP_Battle_Clothing_034_M"):
		case joaat("MP_Battle_Clothing_034_F"):
			return "CLO_BHF_DECL_33";
		
		case joaat("MP_Battle_Clothing_035_M"):
		case joaat("MP_Battle_Clothing_035_F"):
			return "CLO_BHF_DECL_34";
		
		case joaat("MP_Battle_Clothing_036_M"):
		case joaat("MP_Battle_Clothing_036_F"):
			return "CLO_BHF_DECL_35";
		
		case joaat("MP_Battle_Clothing_037_M"):
		case joaat("MP_Battle_Clothing_037_F"):
			return "CLO_BHF_DECL_36";
		
		case joaat("MP_Battle_Clothing_038_M"):
		case joaat("MP_Battle_Clothing_038_F"):
			return "CLO_BHF_DECL_37";
		
		case joaat("MP_Battle_Clothing_039_M"):
		case joaat("MP_Battle_Clothing_039_F"):
			return "CLO_BHF_DECL_38";
		
		case joaat("MP_Battle_Clothing_040_M"):
		case joaat("MP_Battle_Clothing_040_F"):
			return "CLO_BHF_DECL_39";
		
		case joaat("MP_Battle_Clothing_041_M"):
		case joaat("MP_Battle_Clothing_041_F"):
			return "CLO_BHF_DECL_40";
		
		case joaat("MP_Battle_Clothing_042_M"):
		case joaat("MP_Battle_Clothing_042_F"):
			return "CLO_BHF_DECL_41";
		
		case joaat("MP_Battle_Clothing_043_M"):
		case joaat("MP_Battle_Clothing_043_F"):
			return "CLO_BHF_DECL_42";
		
		case joaat("MP_Battle_Clothing_044_M"):
		case joaat("MP_Battle_Clothing_044_F"):
			return "CLO_BHF_DECL_43";
		
		case joaat("MP_Battle_Clothing_045_M"):
		case joaat("MP_Battle_Clothing_045_F"):
			return "CLO_BHF_DECL_44";
		
		case joaat("MP_Battle_Clothing_046_M"):
		case joaat("MP_Battle_Clothing_046_F"):
			return "CLO_BHF_DECL_45";
		
		case joaat("MP_Battle_Clothing_047_M"):
		case joaat("MP_Battle_Clothing_047_F"):
			return "CLO_BHF_DECL_46";
		
		case joaat("MP_Battle_Clothing_048_M"):
		case joaat("MP_Battle_Clothing_048_F"):
			return "CLO_BHF_DECL_47";
		
		case joaat("MP_Battle_Clothing_049_M"):
		case joaat("MP_Battle_Clothing_049_F"):
			return "CLO_BHF_DECL_48";
		
		case joaat("MP_Battle_Clothing_050_M"):
		case joaat("MP_Battle_Clothing_050_F"):
			return "CLO_BHF_DECL_49";
		
		case joaat("MP_Battle_Clothing_051_M"):
		case joaat("MP_Battle_Clothing_051_F"):
			return "CLO_BHF_DECL_50";
		
		case joaat("MP_Battle_Clothing_052_M"):
		case joaat("MP_Battle_Clothing_052_F"):
			return "CLO_BHF_DECL_51";
		
		case joaat("MP_Battle_Clothing_053_M"):
		case joaat("MP_Battle_Clothing_053_F"):
			return "CLO_BHF_DECL_52";
		
		case joaat("MP_Battle_Clothing_054_M"):
		case joaat("MP_Battle_Clothing_054_F"):
			return "CLO_BHF_DECL_53";
		
		case joaat("MP_Battle_Clothing_055_M"):
		case joaat("MP_Battle_Clothing_055_F"):
			return "CLO_BHF_DECL_54";
		
		case joaat("MP_Battle_Clothing_056_M"):
		case joaat("MP_Battle_Clothing_056_F"):
			return "CLO_BHF_DECL_55";
		
		case joaat("MP_Battle_Clothing_057_M"):
		case joaat("MP_Battle_Clothing_057_F"):
			return "CLO_BHF_DECL_56";
		
		case joaat("MP_Battle_Clothing_058_M"):
		case joaat("MP_Battle_Clothing_058_F"):
			return "CLO_BHF_DECL_57";
		
		case joaat("MP_Battle_Clothing_059_M"):
		case joaat("MP_Battle_Clothing_059_F"):
			return "CLO_BHF_DECL_58";
		
		case joaat("MP_Battle_Clothing_060_M"):
		case joaat("MP_Battle_Clothing_060_F"):
			return "CLO_BHF_DECL_59";
		
		case joaat("MP_Battle_Clothing_061_M"):
		case joaat("MP_Battle_Clothing_061_F"):
			return "CLO_BHF_DECL_60";
		
		case joaat("MP_Battle_Clothing_062_M"):
		case joaat("MP_Battle_Clothing_062_F"):
			return "CLO_BHF_DECL_61";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_0"):
		case joaat("DLC_MP_X17_M_BERD_2_0"):
		case joaat("DLC_MP_X17_M_LEGS_1_0"):
		case joaat("DLC_MP_X17_M_FEET_1_0"):
		case joaat("DLC_MP_X17_M_JBIB_5_0"):
			return "CLO_X17M_O_M_0";
		
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_0"):
		case joaat("DLC_MP_X17_F_BERD_2_0"):
		case joaat("DLC_MP_X17_F_LEGS_1_0"):
		case joaat("DLC_MP_X17_F_FEET_1_0"):
		case joaat("DLC_MP_X17_F_JBIB_5_0"):
			return "CLO_X17F_O_M_0";
		
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_1"):
		case joaat("DLC_MP_X17_M_BERD_2_1"):
		case joaat("DLC_MP_X17_M_LEGS_1_1"):
		case joaat("DLC_MP_X17_M_FEET_1_1"):
		case joaat("DLC_MP_X17_M_JBIB_5_1"):
			return "CLO_X17M_O_M_1";
		
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_1"):
		case joaat("DLC_MP_X17_F_BERD_2_1"):
		case joaat("DLC_MP_X17_F_LEGS_1_1"):
		case joaat("DLC_MP_X17_F_FEET_1_1"):
		case joaat("DLC_MP_X17_F_JBIB_5_1"):
			return "CLO_X17F_O_M_1";
		
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_2"):
		case joaat("DLC_MP_X17_M_BERD_2_2"):
		case joaat("DLC_MP_X17_M_LEGS_1_2"):
		case joaat("DLC_MP_X17_M_FEET_1_2"):
		case joaat("DLC_MP_X17_M_JBIB_5_2"):
			return "CLO_X17M_O_M_2";
		
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_2"):
		case joaat("DLC_MP_X17_F_BERD_2_2"):
		case joaat("DLC_MP_X17_F_LEGS_1_2"):
		case joaat("DLC_MP_X17_F_FEET_1_2"):
		case joaat("DLC_MP_X17_F_JBIB_5_2"):
			return "CLO_X17F_O_M_2";
		
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_3"):
		case joaat("DLC_MP_X17_M_BERD_2_3"):
		case joaat("DLC_MP_X17_M_LEGS_1_3"):
		case joaat("DLC_MP_X17_M_FEET_1_3"):
		case joaat("DLC_MP_X17_M_JBIB_5_3"):
			return "CLO_X17M_O_M_3";
		
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_3"):
		case joaat("DLC_MP_X17_F_BERD_2_3"):
		case joaat("DLC_MP_X17_F_LEGS_1_3"):
		case joaat("DLC_MP_X17_F_FEET_1_3"):
		case joaat("DLC_MP_X17_F_JBIB_5_3"):
			return "CLO_X17F_O_M_3";
		
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_4"):
		case joaat("DLC_MP_X17_M_BERD_2_4"):
		case joaat("DLC_MP_X17_M_LEGS_1_4"):
		case joaat("DLC_MP_X17_M_FEET_1_4"):
		case joaat("DLC_MP_X17_M_JBIB_5_4"):
			return "CLO_X17M_O_M_4";
		
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_4"):
		case joaat("DLC_MP_X17_F_BERD_2_4"):
		case joaat("DLC_MP_X17_F_LEGS_1_4"):
		case joaat("DLC_MP_X17_F_FEET_1_4"):
		case joaat("DLC_MP_X17_F_JBIB_5_4"):
			return "CLO_X17F_O_M_4";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_LTS_M_OUTFIT_14"):
		case joaat("DLC_MP_LTS_F_OUTFIT_14"):
			return "CLO_LTSM_O_14";
		
		case joaat("DLC_MP_X17_M_BERD_10_0"):
		case joaat("DLC_MP_X17_F_BERD_10_0"):
			return "UNLOCK_AWD_KRAMP1";
		
		case joaat("DLC_MP_X17_M_BERD_10_1"):
		case joaat("DLC_MP_X17_F_BERD_10_1"):
			return "UNLOCK_AWD_KRAMP2";
		
		case joaat("DLC_MP_X17_M_BERD_10_2"):
		case joaat("DLC_MP_X17_F_BERD_10_2"):
			return "UNLOCK_AWD_KRAMP3";
		
		case joaat("DLC_MP_X17_M_BERD_10_3"):
		case joaat("DLC_MP_X17_F_BERD_10_3"):
			return "UNLOCK_AWD_KRAMP4";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_PHEAD_6_0"):
		case joaat("DLC_MP_GR_M_PHEAD_7_0"):
			return "CLO_GRM_PH_6_0";
		
		case joaat("DLC_MP_GR_F_PHEAD_6_0"):
		case joaat("DLC_MP_GR_F_PHEAD_7_0"):
			return "CLO_GRF_PH_6_0";
		
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
			return "CLO_GRM_PH_6_2";
		
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
			return "CLO_GRF_PH_6_2";
		
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
			return "CLO_GRM_PH_6_4";
		
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
			return "CLO_GRF_PH_6_4";
		
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
			return "CLO_GRM_PH_6_5";
		
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
			return "CLO_GRF_PH_6_5";
		
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
			return "CLO_GRM_PH_6_6";
		
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
			return "CLO_GRF_PH_6_6";
		
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
			return "CLO_GRM_PH_6_7";
		
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
			return "CLO_GRF_PH_6_7";
		
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
			return "CLO_GRM_PH_6_8";
		
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
			return "CLO_GRF_PH_6_8";
		
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
			return "CLO_GRM_PH_6_10";
		
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
			return "CLO_GRF_PH_6_10";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
			return "CLO_GRF_U_25_0";
		
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
			return "CLO_GRF_U_25_1";
		
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
			return "CLO_GRM_U_20_0";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_DECL_5_0"):
		case joaat("DLC_MP_GR_F_DECL_5_0"):
			return "CLO_GRF_DECL_19";
		
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
			return "CLO_GRM_DECL_20";
		
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
			return "CLO_GRM_DECL_21";
		
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
			return "CLO_GRF_DECL_22";
		
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
			return "CLO_GRM_DECL_23";
		
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
			return "CLO_GRM_DECL_25";
		
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
			return "CLO_GRM_DECL_27";
		
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
			return "CLO_GRM_DECL_29";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_000_M"):
		case joaat("MP_Gunrunning_Award_000_F"):
			return "CLO_GRF_DECL_0";
		
		case joaat("MP_Gunrunning_Award_002_M"):
		case joaat("MP_Gunrunning_Award_002_F"):
			return "CLO_GRM_DECL_2";
		
		case joaat("MP_Gunrunning_Award_003_M"):
		case joaat("MP_Gunrunning_Award_003_F"):
			return "CLO_GRF_DECL_3";
		
		case joaat("MP_Gunrunning_Award_005_M"):
		case joaat("MP_Gunrunning_Award_005_F"):
			return "CLO_GRF_DECL_5";
		
		case joaat("MP_Gunrunning_Award_006_M"):
		case joaat("MP_Gunrunning_Award_006_F"):
			return "CLO_GRF_DECL_6";
		
		case joaat("MP_Gunrunning_Award_009_M"):
		case joaat("MP_Gunrunning_Award_009_F"):
			return "CLO_GRM_DECL_9";
		
		case joaat("MP_Gunrunning_Award_010_M"):
		case joaat("MP_Gunrunning_Award_010_F"):
			return "CLO_GRM_DECL_10";
		
		case joaat("MP_Gunrunning_Award_011_M"):
		case joaat("MP_Gunrunning_Award_011_F"):
			return "CLO_GRF_DECL_11";
		
		case joaat("MP_Gunrunning_Award_012_M"):
		case joaat("MP_Gunrunning_Award_012_F"):
			return "CLO_GRF_DECL_12";
		
		case joaat("MP_Gunrunning_Award_014_M"):
		case joaat("MP_Gunrunning_Award_014_F"):
			return "CLO_GRM_DECL_14";
		
		case joaat("MP_Gunrunning_Award_015_M"):
		case joaat("MP_Gunrunning_Award_015_F"):
			return "CLO_GRM_DECL_15";
		
		case joaat("MP_Gunrunning_Award_016_M"):
		case joaat("MP_Gunrunning_Award_016_F"):
			return "CLO_GRM_DECL_16";
		
		case joaat("MP_Gunrunning_Award_017_M"):
		case joaat("MP_Gunrunning_Award_017_F"):
			return "CLO_GRM_DECL_10";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_IE_M_BERD_7_0"):
			return "CLO_X4M_B_7_0";
		
		case joaat("DLC_MP_IE_F_BERD_7_0"):
			return "CLO_X4F_B_7_0";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Biker_Award_000_M"):
			return "CLO_BIM_DECL_57";
		
		case joaat("MP_Biker_Award_000_F"):
			return "CLO_BIF_DECL_56";
		
		case joaat("MP_Biker_Award_001_M"):
			return "CLO_BIM_DECL_57";
		
		case joaat("MP_Biker_Award_001_F"):
			return "CLO_BIF_DECL_57";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Biker_Tee_022_M"):
		case joaat("MP_Biker_Tee_022_F"):
			return "bikshirt4";
		
		case joaat("MP_Biker_Tee_023_M"):
		case joaat("MP_Biker_Tee_023_F"):
			return "bikshirt5";
		
		case joaat("MP_Biker_Tee_024_M"):
		case joaat("MP_Biker_Tee_024_F"):
			return "bikshirt7";
		
		case joaat("MP_Biker_Tee_025_M"):
		case joaat("MP_Biker_Tee_025_F"):
			return "bikshirt6";
		
		case joaat("MP_Biker_Tee_047_M"):
		case joaat("MP_Biker_Tee_047_F"):
			return "bikshirt3";
		
		case joaat("MP_Biker_Tee_048_M"):
		case joaat("MP_Biker_Tee_048_F"):
			return "bikshirt2";
		
		case joaat("MP_Biker_Tee_049_M"):
		case joaat("MP_Biker_Tee_049_F"):
			return "bikshirt1";
		
		case joaat("MP_Biker_Tee_050_M"):
		case joaat("MP_Biker_Tee_050_F"):
			return "bikshirt0";
		
		case joaat("MP_Biker_Tee_051_M"):
		case joaat("MP_Biker_Tee_051_F"):
			return "bikshirt8";
		
		case joaat("MP_Biker_Tee_052_M"):
		case joaat("MP_Biker_Tee_052_F"):
			return "bikshirt9";
		
		case joaat("MP_Biker_Tee_053_M"):
		case joaat("MP_Biker_Tee_053_F"):
			return "bikshirt10";
		
		case joaat("MP_Biker_Tee_054_M"):
		case joaat("MP_Biker_Tee_054_F"):
			return "bikshirt11";
		
		case joaat("MP_Biker_Tee_055_M"):
		case joaat("MP_Biker_Tee_055_F"):
			return "bikshirt12";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_BIKER_M_DECL_0_0"):
		case joaat("DLC_MP_BIKER_F_DECL_0_0"):
			return "bikshirt13";
		
		case joaat("DLC_MP_BIKER_M_DECL_0_1"):
		case joaat("DLC_MP_BIKER_F_DECL_0_1"):
			return "bikshirt14";
		
		case joaat("DLC_MP_BIKER_M_DECL_0_2"):
		case joaat("DLC_MP_BIKER_F_DECL_0_2"):
			return "bikshirt15";
		
		case joaat("DLC_MP_BIKER_M_DECL_0_3"):
		case joaat("DLC_MP_BIKER_F_DECL_0_3"):
			return "bikshirt16";
		
		case joaat("DLC_MP_BIKER_M_DECL_0_4"):
		case joaat("DLC_MP_BIKER_F_DECL_0_4"):
			return "bikshirt17";
		
		case joaat("DLC_MP_BIKER_M_DECL_0_5"):
		case joaat("DLC_MP_BIKER_F_DECL_0_5"):
			return "bikshirt18";
		
		case joaat("DLC_MP_BIKER_M_DECL_0_6"):
		case joaat("DLC_MP_BIKER_F_DECL_0_6"):
			return "bikshirt19";
		
		case joaat("DLC_MP_BIKER_M_DECL_0_7"):
		case joaat("DLC_MP_BIKER_F_DECL_0_7"):
			return "bikshirt20";
		
		case joaat("DLC_MP_BIKER_M_DECL_0_8"):
		case joaat("DLC_MP_BIKER_F_DECL_0_8"):
			return "bikshirt21";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_0"):
			return "CLO_STM_O_E_0";
		
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_0"):
			return "CLO_STF_O_E_0";
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_1"):
			return "CLO_STM_O_E_1";
		
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_1"):
			return "CLO_STF_O_E_1";
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_2"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_2"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_2"):
			return "CLO_STM_O_E_2";
		
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_2"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_2"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_2"):
			return "CLO_STF_O_E_2";
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_3"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_3"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_3"):
			return "CLO_STM_O_E_3";
		
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_3"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_3"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_3"):
			return "CLO_STF_O_E_3";
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_4"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_4"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_4"):
			return "CLO_STM_O_E_4";
		
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_4"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_4"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_4"):
			return "CLO_STF_O_E_4";
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_5"):
		case joaat("DLC_MP_STUNT_M_PHEAD_13_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_14_0"):
			return "CLO_STM_O_E_15";
		
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_5"):
		case joaat("DLC_MP_STUNT_F_PHEAD_13_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_14_0"):
			return "CLO_STF_O_E_5";
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_6"):
		case joaat("DLC_MP_STUNT_M_PHEAD_13_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_14_1"):
			return "CLO_STM_O_E_6";
		
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_6"):
		case joaat("DLC_MP_STUNT_F_PHEAD_13_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_14_1"):
			return "CLO_STF_O_E_6";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_EXEC_F_JBIB_15_0"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_0"):
			return "CLO_EXF_EU_15_0";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_0"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_0"):
			return "CLO_EXM_EU_15_0";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_1"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_1"):
			return "CLO_EXF_EU_15_1";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_1"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_1"):
			return "CLO_EXM_EU_15_1";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_2"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_2"):
			return "CLO_EXF_EU_15_2";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_2"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_2"):
			return "CLO_EXM_EU_15_2";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_3"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_3"):
			return "CLO_EXF_EU_15_3";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_3"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_3"):
			return "CLO_EXM_EU_15_3";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_4"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_4"):
			return "CLO_EXF_EU_15_4";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_4"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_4"):
			return "CLO_EXM_EU_15_4";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_5"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_5"):
			return "CLO_EXF_EU_15_5";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_5"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_5"):
			return "CLO_EXM_EU_15_5";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_6"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_6"):
			return "CLO_EXF_EU_15_6";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_6"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_6"):
			return "CLO_EXM_EU_15_6";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_7"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_7"):
			return "CLO_EXF_EU_15_7";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_7"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_7"):
			return "CLO_EXM_EU_15_7";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_8"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_8"):
			return "CLO_EXF_EU_15_8";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_8"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_8"):
			return "CLO_EXM_EU_15_8";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_9"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_9"):
			return "CLO_EXF_EU_15_9";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_9"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_9"):
			return "CLO_EXM_EU_15_9";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_10"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_10"):
			return "CLO_EXF_EU_1510";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_10"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_10"):
			return "CLO_EXM_EU_1510";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_11"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_11"):
			return "CLO_EXF_EU_1511";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_11"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_11"):
			return "CLO_EXM_EU_1511";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_12"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_12"):
			return "CLO_EXF_EU_1512";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_12"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_12"):
			return "CLO_EXM_EU_1512";
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_13"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_13"):
			return "CLO_EXF_EU_1513";
		
		case joaat("DLC_MP_EXEC_M_JBIB_15_13"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_13"):
			return "CLO_EXM_EU_1513";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_EXEC_F_JBIB_16_0"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_0"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_1"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_1"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_2"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_2"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_3"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_3"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_4"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_4"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_5"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_5"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_6"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_6"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_7"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_7"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_8"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_8"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_9"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_9"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_10"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_10"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_11"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_11"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_12"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_12"):
			return "SMOKINGJACKUNLOCK";
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_13"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_13"):
			return "SMOKINGJACKUNLOCK";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_LOW_F_PHEAD_1_0"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_0"):
			return "UNLOKLOWHATS0";
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_1"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_1"):
			return "UNLOKLOWHATS1";
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_2"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_2"):
			return "UNLOKLOWHATS2";
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_3"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_3"):
			return "UNLOKLOWHATS3";
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_4"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_4"):
			return "UNLOKLOWHATS4";
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_5"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_5"):
			return "UNLOKLOWHATS5";
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_6"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_6"):
			return "UNLOKLOWHATS6";
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_7"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_7"):
			return "UNLOKLOWHATS7";
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_8"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_8"):
			return "UNLOKLOWHATS8";
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_9"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_9"):
			return "UNLOKLOWHATS9";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_IND_F_PHEAD_6_0"):
		case joaat("DLC_MP_IND_M_PHEAD_6_0"):
			return "UNLOCK_NAME_BHAT1";
		
		case joaat("DLC_MP_IND_F_PHEAD_6_1"):
		case joaat("DLC_MP_IND_M_PHEAD_6_1"):
			return "UNLOCK_NAME_BHAT2";
		
		case joaat("DLC_MP_IND_F_PHEAD_6_2"):
		case joaat("DLC_MP_IND_M_PHEAD_6_2"):
			return "UNLOCK_NAME_BHAT3";
		
		case joaat("DLC_MP_IND_F_PHEAD_6_3"):
		case joaat("DLC_MP_IND_M_PHEAD_6_3"):
			return "UNLOCK_NAME_BHAT4";
		
		case joaat("DLC_MP_IND_F_PHEAD_6_4"):
		case joaat("DLC_MP_IND_M_PHEAD_6_4"):
			return "UNLOCK_NAME_BHAT5";
		
		case joaat("DLC_MP_IND_F_PHEAD_6_5"):
		case joaat("DLC_MP_IND_M_PHEAD_6_5"):
			return "UNLOCK_NAME_BHAT6";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_LTS_M_BERD_2_0"):
		case joaat("DLC_MP_LTS_F_BERD_2_0"):
			return "BBSHIRTUN15";
		
		case joaat("FM_Hip_M_Retro_010"):
		case joaat("FM_Hip_F_Retro_010"):
			return "BBSHIRTUN6";
		
		case joaat("FM_Hip_M_Retro_003"):
		case joaat("FM_Hip_F_Retro_003"):
			return "BBSHIRTUN1";
		
		case joaat("FM_Hip_M_Retro_000"):
		case joaat("FM_Hip_F_Retro_000"):
			return "BBSHIRTUN2";
		
		case joaat("FM_Hip_M_Retro_001"):
		case joaat("FM_Hip_F_Retro_001"):
			return "BBSHIRTUN4";
		
		case joaat("FM_Hip_M_Retro_002"):
		case joaat("FM_Hip_F_Retro_002"):
			return "BBSHIRTUN3";
		
		case joaat("FM_Hip_M_Retro_004"):
		case joaat("FM_Hip_F_Retro_004"):
			return "BBSHIRTUN0";
		
		case joaat("FM_Hip_M_Retro_005"):
		case joaat("FM_Hip_F_Retro_005"):
			return "BBSHIRTUN10";
		
		case joaat("FM_Hip_M_Retro_006"):
		case joaat("FM_Hip_F_Retro_006"):
			return "BBSHIRTUN8";
		
		case joaat("FM_Hip_M_Retro_007"):
		case joaat("FM_Hip_F_Retro_007"):
			return "BBSHIRTUN9";
		
		case joaat("FM_Hip_M_Retro_008"):
		case joaat("FM_Hip_F_Retro_008"):
			return "BBSHIRTUN14";
		
		case joaat("FM_Hip_M_Retro_009"):
		case joaat("FM_Hip_F_Retro_009"):
			return "BBSHIRTUN12";
		
		case joaat("FM_Hip_M_Retro_011"):
		case joaat("FM_Hip_F_Retro_011"):
			return "BBSHIRTUN5";
		
		case joaat("FM_Hip_M_Retro_012"):
		case joaat("FM_Hip_F_Retro_012"):
			return "BBSHIRTUN13";
		
		case joaat("FM_Hip_M_Retro_013"):
		case joaat("FM_Hip_F_Retro_013"):
			return "BBSHIRTUN7";
		
		case joaat("FM_Ind_M_Award_000"):
		case joaat("FM_Ind_F_Award_000"):
			return "UNLOCK_NAME_SHIRT14";
		
		default:
	}
	switch (iParam0)
	{
		case 1743008394:
			return "CLO_X3F_U_1_0";
		
		case 1084175393:
			return "CLO_X3M_U_1_0";
		
		case -1090232119:
			return "CLO_X3F_U_1_1";
		
		case 787255484:
			return "CLO_X3M_U_1_1";
		
		case -1133356123:
			return "CLO_X3F_U_1_2";
		
		case -566366372:
			return "CLO_X3M_U_1_2";
		
		default:
	}
	switch (iParam0)
	{
		case 1970268516:
			return "CLO_X2F_HT_4_0";
		
		case 2026483804:
			return "CLO_X2F_HT_5_0";
		
		case 1831101822:
			return "CLO_X2M_HT_4_0";
		
		case 1411612772:
			return "CLO_X2M_HT_5_0";
		
		case 1875861023:
			return "CLO_X2F_HT_4_3";
		
		case -1385031204:
			return "CLO_X2F_HT_5_3";
		
		case -703154335:
			return "CLO_X2M_HT_4_3";
		
		case 798340921:
			return "CLO_X2M_HT_5_3";
		
		case -1208373599:
			return "CLO_X3M_B_10_0";
		
		case 1656518170:
			return "CLO_X3F_B_10_0";
		
		case -970054678:
			return "CLO_X2M_B_1_0";
		
		case -840010097:
			return "CLO_X2F_B_1_0";
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_IND_F_PHEAD_6_0"):
			return "CLO_INDF_HT_6_0";
		
		case joaat("DLC_MP_IND_M_PHEAD_6_0"):
			return "CLO_INDM_HT_6_0";
		
		case joaat("DLC_MP_IND_F_PHEAD_6_1"):
			return "CLO_INDF_HT_6_1";
		
		case joaat("DLC_MP_IND_M_PHEAD_6_1"):
			return "CLO_INDM_HT_6_1";
		
		case joaat("DLC_MP_IND_F_PHEAD_6_2"):
			return "CLO_INDF_HT_6_2";
		
		case joaat("DLC_MP_IND_M_PHEAD_6_2"):
			return "CLO_INDM_HT_6_2";
		
		case joaat("DLC_MP_IND_F_PHEAD_6_3"):
			return "CLO_INDF_HT_6_3";
		
		case joaat("DLC_MP_IND_M_PHEAD_6_3"):
			return "CLO_INDM_HT_6_3";
		
		case joaat("DLC_MP_IND_F_PHEAD_6_4"):
			return "CLO_INDF_HT_6_4";
		
		case joaat("DLC_MP_IND_M_PHEAD_6_4"):
			return "CLO_INDM_HT_6_4";
		
		case joaat("DLC_MP_IND_F_PHEAD_6_5"):
			return "CLO_INDF_HT_6_5";
		
		case joaat("DLC_MP_IND_M_PHEAD_6_5"):
			return "CLO_INDM_HT_6_5";
		
		default:
	}
	return "UNLOCK_AWD_SHIRT";
}

int func_933(int iParam0)
{
	switch (iParam0)
	{
		case -240057754:
		case -2417894:
			return 32309;
			break;
		
		case -1166011267:
		case -906547381:
			return 32310;
			break;
		
		case -721794703:
		case 308133919:
			return 32311;
			break;
		
		case 488495423:
		case 1072091359:
			return 32307;
			break;
		
		case -523083487:
		case 508464559:
			return 32308;
			break;
		
		case -1498989066:
		case 452715244:
			return 32295;
			break;
		
		case 1281689967:
		case -112025702:
			return 32296;
			break;
		
		case 841209069:
		case 128072761:
			return 32297;
			break;
		
		case 1742192724:
		case -705996596:
			return 32298;
			break;
		
		case -2022943269:
		case 733291825:
			return 32299;
			break;
		
		case -804690608:
		case -101367374:
			return 32300;
			break;
		
		case -1100955137:
		case 1328802862:
			return 32301;
			break;
		
		case 2089631321:
		case 495519961:
			return 32302;
			break;
		
		case 591101258:
		case -693204279:
			return 32303;
			break;
		
		case -1278730655:
		case 150499164:
			return 32304;
			break;
		
		case -1215879713:
		case -129905169:
			return 32305;
			break;
		
		case -918271655:
		case 612902523:
			return 32306;
			break;
	}
	switch (iParam0)
	{
		case 1313302606:
		case 1409068743:
			return 32273;
			break;
		
		case 991513037:
		case -1634791241:
			return 31768;
			break;
		
		case -675149090:
		case -1227437948:
			return 31769;
			break;
		
		case -1659998431:
		case -2112473443:
		case -947707813:
		case 693543937:
			return 31784;
			break;
		
		case -1686814509:
		case -1408179706:
			return 31770;
			break;
		
		case -11432663:
		case 1005080874:
		case 1248902972:
		case 39557656:
		case 272288400:
		case 1299492081:
			return 31777;
			break;
		
		case -126686984:
		case 2057911750:
			return 31788;
			break;
		
		case 1527426310:
		case 652346313:
		case -493474820:
			return 31787;
			break;
		
		case -926775180:
		case -2002794681:
		case 1039426231:
			return 31786;
			break;
		
		case 915891232:
		case -1732614276:
		case -811071968:
			return 31785;
			break;
		
		case -1530567150:
		case -1187110619:
		case 1112304057:
		case -1366594938:
			return 31766;
			break;
		
		case -1830763959:
		case -1778066765:
		case 796541973:
		case 2004974703:
			return 31767;
			break;
		
		case -1174740608:
		case 1620783517:
			return 31789;
			break;
		
		case -1943796269:
		case -1699338794:
			return 31790;
			break;
		
		case -1372800957:
			return 31791;
			break;
		
		case -1125170035:
			return 31792;
			break;
		
		case 1276052663:
			return 31793;
			break;
		
		case 2138708412:
		case -1894139601:
			return 31771;
			break;
		
		case 205793848:
		case -786254870:
			return 31772;
			break;
		
		case 1325175663:
		case -773154515:
			return 31773;
			break;
		
		case -368088972:
		case 1778247767:
			return 31774;
			break;
		
		case -1771053026:
		case -648092145:
			return 31775;
			break;
		
		case 602068555:
		case 774354345:
		case -1820765864:
		case -1559667847:
		case 503440926:
		case 1098093807:
			return 31776;
			break;
	}
	switch (iParam0)
	{
		case 153754618:
		case -308681510:
			return 30703;
			break;
		
		case 659374865:
		case -2032106950:
			return 30704;
			break;
		
		case -13136248:
		case 921664999:
			return 30700;
			break;
		
		case -1132960710:
		case 1700345329:
			return 30701;
			break;
		
		case 1993003331:
		case -46539229:
			return 30702;
			break;
		
		case -625419875:
		case 552527284:
			return 30699;
			break;
	}
	switch (iParam0)
	{
		case 156407004:
		case 992344178:
			return 30533;
			break;
		
		case 850137272:
		case 530639494:
			return 30534;
			break;
		
		case -907859154:
		case 1472939772:
			return 30535;
			break;
		
		case -475744483:
		case 1057844725:
			return 30536;
			break;
		
		case -47667242:
		case 1810957693:
			return 30537;
			break;
		
		case -409012879:
		case 1261157513:
			return 30538;
			break;
		
		case 1327735228:
		case 1864065459:
			return 30539;
			break;
		
		case -187858220:
		case -1644702422:
			return 30540;
			break;
		
		case 1452108911:
		case -1603076035:
			return 30541;
			break;
		
		case -1932584643:
		case -310682988:
			return 30542;
			break;
		
		case -252057754:
		case 2103214089:
			return 30543;
			break;
		
		case 116007471:
		case 2133791411:
			return 30544;
			break;
		
		case -463212372:
		case 70168645:
			return 30545;
			break;
		
		case -1171053658:
		case -669229192:
			return 30546;
			break;
		
		case -990049180:
		case 620186715:
			return 30547;
			break;
		
		case -1617127026:
		case 519116877:
			return 30548;
			break;
		
		case 1770910373:
		case -1586273681:
			return 30549;
			break;
		
		case -2143701887:
		case -72045715:
			return 30550;
			break;
		
		case 1999836107:
		case 1105733954:
			return 30551;
			break;
		
		case 417383307:
		case -1733868774:
			return 30552;
			break;
		
		case -2136840722:
		case 75001248:
			return 30553;
			break;
		
		case -83336071:
		case -351320953:
			return 30554;
			break;
		
		case -1391222343:
		case -1824952815:
			return 30555;
			break;
		
		case -1715443581:
		case -548539487:
			return 30556;
			break;
		
		case 1673024230:
		case -925164242:
			return 30557;
			break;
		
		case -1832442562:
		case 887187828:
			return 30524;
			break;
		
		case 2086548996:
		case 249518856:
			return 30525;
			break;
		
		case 1006203940:
		case -1491875241:
			return 30526;
			break;
		
		case -1032809603:
		case 1114248050:
			return 30527;
			break;
		
		case 1054867669:
		case 335686386:
			return 30528;
			break;
		
		case -1911088924:
		case -773349244:
			return 30529;
			break;
		
		case 983574619:
		case -1153521254:
			return 30530;
			break;
		
		case 2119361460:
		case 449125530:
			return 30531;
			break;
		
		case 596636884:
		case -1089524784:
			return 30532;
			break;
	}
	switch (iParam0)
	{
		case 193032544:
		case -1747470682:
		case 1743653920:
		case 124145947:
			return 30563;
			break;
		
		case -1068490820:
		case -906046046:
			return 30564;
			break;
		
		case -843735811:
		case -179852662:
			return 30565;
			break;
		
		case -1150093192:
		case -486242812:
			return 30566;
			break;
		
		case -1804748036:
		case -1325807533:
			return 30567;
			break;
		
		case 686668863:
		case -304462319:
			return 30568;
			break;
		
		case 235066951:
		case 1884986113:
			return 30569;
			break;
		
		case 1510632880:
		case -594316604:
			return 30570;
			break;
		
		case 1912778271:
		case 1362488454:
			return 30571;
			break;
		
		case 1883424478:
		case 1295264906:
			return 30572;
			break;
		
		case 1585980265:
		case 455362671:
			return 30573;
			break;
		
		case 1324675295:
		case 1138553164:
			return 30574;
			break;
		
		case 1047498497:
		case 431167936:
			return 30575;
			break;
		
		case 1894446071:
		case 733789651:
			return 30576;
			break;
		
		case 781674592:
		case 597888060:
			return 30577;
			break;
		
		case 1688044709:
		case -1048078133:
			return 30578;
			break;
		
		case -1152863750:
		case 1966407715:
			return 30579;
			break;
		
		case 217109849:
		case -2013616722:
			return 30580;
			break;
		
		case -507609371:
		case -1710110244:
			return 30581;
			break;
		
		case -1324049006:
		case -1412666031:
			return 30582;
			break;
		
		case 491860090:
		case 1852149696:
			return 30583;
			break;
		
		case -98964984:
		case 1346196336:
			return 30584;
			break;
		
		case -373077669:
		case 2093788310:
			return 30585;
			break;
		
		case -228620636:
		case 1058320393:
			return 30586;
			break;
		
		case -135868800:
		case 637248244:
		case 2109360205:
		case 1275503017:
			return 30587;
			break;
		
		case -1340948775:
		case 949078048:
		case -1945344783:
		case -776164077:
			return 30588;
			break;
		
		case -1689217707:
		case 1259040019:
		case 2075837522:
		case -963537219:
			return 30589;
			break;
		
		case -846726717:
		case 1568838149:
		case -1978572545:
		case 878899806:
			return 30590;
			break;
		
		case -1093837746:
		case 1876768442:
		case 1726421675:
		case 724361202:
			return 30591;
			break;
	}
	switch (iParam0)
	{
		case -360715836:
		case -1624389651:
		case 243836943:
		case 1312139416:
			return 30592;
			break;
		
		case -626734578:
		case -1939725738:
		case -39745983:
		case 1527824974:
			return 30593;
			break;
		
		case -723370359:
		case -1277169323:
		case 739992372:
		case 1842046915:
			return 30594;
			break;
		
		case -1214774283:
		case -1538633174:
		case 696212988:
		case 108960043:
			return 30595;
			break;
		
		case 368984260:
		case 1329899548:
		case -712067560:
		case 414465430:
			return 30596;
			break;
		
		case 875199772:
		case 1171821892:
		case -991030057:
		case 572608624:
			return 30597;
			break;
		
		case 40409497:
		case 1824023299:
		case -214699678:
		case 878703853:
			return 30598;
			break;
		
		case 279950887:
		case 1637174461:
		case 125146481:
		case 1058015837:
			return 30599;
			break;
		
		case 1823960629:
		case 677993062:
		case 355152092:
		case 1366404896:
			return 30600;
			break;
		
		case 990612190:
		case -15530054:
		case 700602890:
		case 1537524614:
			return 30601;
			break;
		
		case -64425650:
		case 1762092216:
		case 152902057:
		case -1675566132:
			return 30602;
			break;
		
		case -291875279:
		case 927564093:
		case 1409363824:
		case 1784152123:
			return 30603;
			break;
	}
	switch (iParam0)
	{
		case -1364447384:
		case -2133234397:
			return 30604;
			break;
		
		case 1480295044:
		case 1863698844:
			return 30605;
			break;
		
		case -1977784761:
		case 330175182:
			return 30606;
			break;
		
		case 1372550572:
		case 1229553156:
			return 30607;
			break;
		
		case 1133140258:
		case 758400474:
			return 30608;
			break;
		
		case 783527797:
		case -623173331:
			return 30609;
			break;
		
		case 525570229:
		case -894664496:
			return 30610;
			break;
		
		case 710420154:
		case 17690002:
			return 30611;
			break;
		
		case 484248516:
		case -265532465:
			return 30612;
			break;
		
		case -470279681:
		case -1779198113:
			return 30613;
			break;
		
		case 624976017:
		case 357509846:
			return 30614;
			break;
		
		case 393266418:
		case 636341267:
			return 30615;
			break;
	}
	switch (iParam0)
	{
		case 944286754:
		case 1683790232:
		case -691678195:
		case 1249842995:
			return 30616;
			break;
		
		case -2040870827:
		case 1218208280:
		case -1985267239:
		case 859302053:
			return 30617;
			break;
		
		case 1424254297:
		case -2147200793:
		case 2068946214:
		case 621038654:
			return 30618;
			break;
		
		case 583565602:
		case 1916319056:
		case -1642143040:
		case -320381947:
			return 30619;
			break;
		
		case -288155336:
		case -1374540534:
		case -1869854821:
		case -5799547:
			return 30620;
			break;
		
		case 1168361176:
		case -1143617391:
		case 1112910639:
		case -914123458:
			return 30621;
			break;
		
		case 190370371:
		case -927735219:
		case 755400849:
		case -34144732:
			return 30622;
			break;
		
		case 572784601:
		case -663060006:
		case 1666772277:
		case -1509306805:
			return 30623;
			break;
		
		case -245293476:
		case -151011612:
		case 1312408311:
		case -657181729:
			return 30624;
			break;
		
		case -5981469:
		case 79780455:
		case 410507132:
		case -2104752304:
			return 30625;
			break;
		
		case -2056851459:
		case -321877893:
		case -1105452802:
		case -2102601008:
			return 30626;
			break;
		
		case 41118228:
		case -613915217:
		case 258163595:
		case -2006391224:
			return 30627;
			break;
		
		case -255965526:
		case -917847692:
		case -459280891:
		case 561715294:
			return 30628;
			break;
		
		case -1646780193:
		case 908892982:
		case -1293088096:
		case 691873762:
			return 30629;
			break;
		
		case -1677189825:
		case 601454224:
		case 138786128:
		case 1056887653:
			return 30630;
			break;
		
		case 362614887:
		case -16110350:
		case 1462555445:
		case 1425538903:
			return 30631;
			break;
	}
	switch (iParam0)
	{
		case 598488729:
		case 964509759:
			return 30674;
			break;
		
		case 854447388:
		case 1806705832:
			return 30675;
			break;
		
		case 2001034706:
		case 1728518998:
			return 30676;
			break;
		
		case -2138345378:
		case -1724448843:
			return 30677;
			break;
		
		case 1254196427:
		case -2106535383:
			return 30678;
			break;
		
		case 1711192901:
		case -1261717794:
			return 30679;
			break;
		
		case -1175362775:
		case -686556306:
			return 30680;
			break;
		
		case -867891252:
		case -1067659776:
			return 30681;
			break;
		
		case -1653233102:
		case -358800748:
			return 30682;
			break;
		
		case -1392490169:
		case -605518549:
			return 30683;
			break;
		
		case 625638735:
		case -734987935:
			return 30684;
			break;
		
		case 268817094:
		case -503573257:
			return 30685;
			break;
		
		case 1102231075:
		case -273305494:
			return 30686;
			break;
		
		case 1551035299:
		case 259518446:
			return 30687;
			break;
		
		case -639637893:
		case -1618604024:
			return 30688;
			break;
		
		case -727983117:
		case -1085911160:
			return 30689;
			break;
		
		case 106807158:
		case -854791403:
			return 30690;
			break;
		
		case -283209480:
		case -623769953:
			return 30691;
			break;
		
		case 1890849825:
		case 1718492629:
			return 30692;
			break;
		
		case -1959114451:
		case 1951971754:
			return 30693;
			break;
	}
	switch (iParam0)
	{
		case -36224791:
		case 327104734:
			return 30638;
			break;
		
		case -1139163793:
		case 99196339:
			return 30639;
			break;
		
		case -1842419302:
		case 804581833:
			return 30640;
			break;
		
		case 2121581094:
		case 566908276:
			return 30641;
			break;
		
		case 1957801632:
		case -1535223074:
			return 30642;
			break;
		
		case 1660947261:
		case -1766539445:
			return 30643;
			break;
		
		case 997276700:
		case -1107784238:
			return 30644;
			break;
		
		case 724278161:
		case -1301711180:
			return 30645;
			break;
		
		case -1880201963:
		case 1229923461:
			return 30646;
			break;
		
		case 2108670104:
		case 999885081:
			return 30647;
			break;
		
		case 1149517553:
		case -1409944646:
			return 30648;
			break;
		
		case -1842521530:
		case -1678486601:
			return 30649;
			break;
		
		case -1661989803:
		case -1630379289:
			return 30650;
			break;
		
		case 315029509:
		case -442077042:
			return 30651;
			break;
		
		case 76045192:
		case -2097370308:
			return 30652;
			break;
		
		case -231524642:
		case -900220431:
			return 30653;
			break;
		
		case -538078637:
		case -1147331460:
			return 30654;
			break;
		
		case 1280600755:
		case 511435320:
			return 30655;
			break;
		
		case 1050267454:
		case 280643253:
			return 30656;
			break;
		
		case 686728168:
		case 52898703:
			return 30657;
			break;
		
		case 388825189:
		case -182939790:
			return 30658;
			break;
		
		case -1765539843:
		case -380995642:
			return 30659;
			break;
		
		case -332552075:
		case -321839039:
			return 30660;
			break;
		
		case -624917093:
		case 1940860411:
			return 30661;
			break;
		
		case -1463507504:
		case 1073312767:
			return 30662;
			break;
		
		case -744686720:
		case 315136414:
			return 30663;
			break;
		
		case -982294739:
		case 590559859:
			return 30664;
			break;
		
		case 1101354891:
		case 833640293:
			return 30665;
			break;
		
		case -352998867:
		case 1113749705:
			return 30666;
			break;
		
		case -629143230:
		case 349871546:
			return 30667;
			break;
		
		case 214625751:
		case 1720729896:
			return 30668;
			break;
		
		case 1809853456:
		case 2002248375:
			return 30669;
			break;
		
		case 1473119212:
		case 1227163218:
			return 30670;
			break;
		
		case -1988237493:
		case 1529621088:
			return 30671;
			break;
		
		case -308780352:
		case -488766247:
			return 30672;
			break;
		
		case -539048115:
		case 1676314352:
			return 30673;
			break;
	}
	switch (iParam0)
	{
		case -1265443416:
		case 676807987:
			return 30260;
			break;
		
		case 1888753218:
		case 272160153:
			return 30261;
			break;
		
		case -552467991:
		case 1593344440:
			return 30262;
			break;
		
		case -1655919948:
		case 546222390:
			return 30263;
			break;
		
		case -917106601:
		case 1983375900:
			return 30264;
			break;
		
		case 1595446967:
		case -620589387:
			return 30265;
			break;
		
		case -530593323:
		case 383923929:
			return 30266;
			break;
		
		case 561619447:
		case -1703406594:
			return 30267;
			break;
		
		case -1913656173:
		case -398286533:
			return 30268;
			break;
		
		case -1766901922:
		case -80478106:
			return 30269;
			break;
		
		case 2091781849:
		case 1835331655:
			return 30270;
			break;
		
		case 1824588341:
		case -1650596870:
			return 30271;
			break;
		
		case 242597641:
		case 1231926496:
			return 30272;
			break;
		
		case 566785691:
		case -1506181253:
			return 30273;
			break;
		
		case -2091312957:
		case -1737145605:
			return 30274;
			break;
		
		case -2079214831:
		case 1673851512:
			return 30275;
			break;
		
		case 1359156274:
		case 1023339598:
			return 30276;
			break;
		
		case 1904247246:
		case -163738770:
			return 30277;
			break;
		
		case -1351518396:
		case 1863218823:
			return 30278;
			break;
		
		case -797874817:
		case 333966447:
			return 30279;
			break;
		
		case -385507297:
		case 1412626052:
			return 30280;
			break;
		
		case 2011910758:
		case -39100956:
			return 30281;
			break;
		
		case -1953985443:
		case 1631533003:
			return 30282;
			break;
		
		case -1124222352:
		case 1493430918:
			return 30283;
			break;
		
		case -1806994767:
		case -196693334:
			return 30284;
			break;
		
		case -1445761968:
		case 553507495:
			return 30285;
			break;
		
		case -89186417:
		case 2003474700:
			return 30286;
			break;
		
		case -308083083:
		case 1121792228:
			return 30287;
			break;
		
		case 667714507:
		case -1424651669:
			return 30288;
			break;
		
		case -1610210252:
		case -1454164346:
			return 30289;
			break;
		
		case 1868506246:
		case -307572086:
			return 30290;
			break;
		
		case 1686703834:
		case -1486436861:
			return 30291;
			break;
		
		case -1811091999:
		case -1705464857:
			return 30292;
			break;
		
		case 414381867:
		case -469188798:
			return 30293;
			break;
		
		case -1206261789:
		case 692621401:
			return 30294;
			break;
		
		case 1395785293:
		case 60231546:
			return 30295;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_VWD_M_DECL_1_0"):
		case joaat("DLC_MP_VWD_F_DECL_1_0"):
			return 27194;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_6"):
		case joaat("DLC_MP_VWD_F_DECL_1_6"):
			return 27195;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_7"):
		case joaat("DLC_MP_VWD_F_DECL_1_7"):
			return 27196;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_8"):
		case joaat("DLC_MP_VWD_F_DECL_1_8"):
			return 27197;
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_5"):
		case joaat("DLC_MP_VWD_F_JBIB_21_5"):
			return 27198;
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_8"):
		case joaat("DLC_MP_VWD_F_JBIB_21_8"):
			return 27199;
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_9"):
		case joaat("DLC_MP_VWD_F_JBIB_21_9"):
			return 27200;
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_10"):
		case joaat("DLC_MP_VWD_F_JBIB_21_10"):
			return 27201;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_11"):
		case joaat("DLC_MP_VWD_F_DECL_1_11"):
			return 27202;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_12"):
		case joaat("DLC_MP_VWD_F_DECL_1_12"):
			return 27203;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_13"):
		case joaat("DLC_MP_VWD_F_DECL_1_13"):
			return 27204;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_14"):
		case joaat("DLC_MP_VWD_F_DECL_1_14"):
			return 27205;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_15"):
		case joaat("DLC_MP_VWD_F_DECL_1_15"):
			return 27206;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_16"):
		case joaat("DLC_MP_VWD_F_DECL_1_16"):
			return 27207;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_17"):
		case joaat("DLC_MP_VWD_F_DECL_1_17"):
			return 27208;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_18"):
		case joaat("DLC_MP_VWD_F_DECL_1_18"):
			return 27209;
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_0"):
		case joaat("DLC_MP_VWD_F_JBIB_21_0"):
			return 27210;
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_2"):
		case joaat("DLC_MP_VWD_F_JBIB_21_2"):
			return 27211;
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_4"):
		case joaat("DLC_MP_VWD_F_JBIB_21_4"):
			return 27212;
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_7"):
		case joaat("DLC_MP_VWD_F_JBIB_21_7"):
			return 27213;
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Christmas2018_Tee_000_M"):
		case joaat("MP_Christmas2018_Tee_000_F"):
			return 25032;
			break;
		
		case joaat("MP_Christmas2018_Tee_001_M"):
		case joaat("MP_Christmas2018_Tee_001_F"):
			return 25033;
			break;
		
		case joaat("MP_Christmas2018_Tee_002_M"):
		case joaat("MP_Christmas2018_Tee_002_F"):
			return 25034;
			break;
		
		case joaat("MP_Christmas2018_Tee_003_M"):
		case joaat("MP_Christmas2018_Tee_003_F"):
			return 25035;
			break;
		
		case joaat("MP_Christmas2018_Tee_004_M"):
		case joaat("MP_Christmas2018_Tee_004_F"):
			return 25036;
			break;
		
		case joaat("MP_Christmas2018_Tee_005_M"):
		case joaat("MP_Christmas2018_Tee_005_F"):
			return 25037;
			break;
		
		case joaat("MP_Christmas2018_Tee_006_M"):
		case joaat("MP_Christmas2018_Tee_006_F"):
			return 25038;
			break;
		
		case joaat("MP_Christmas2018_Tee_007_M"):
		case joaat("MP_Christmas2018_Tee_007_F"):
			return 25039;
			break;
		
		case joaat("MP_Christmas2018_Tee_008_M"):
		case joaat("MP_Christmas2018_Tee_008_F"):
			return 25040;
			break;
		
		case joaat("MP_Christmas2018_Tee_009_M"):
		case joaat("MP_Christmas2018_Tee_009_F"):
			return 25041;
			break;
		
		case joaat("MP_Christmas2018_Tee_010_M"):
		case joaat("MP_Christmas2018_Tee_010_F"):
			return 25042;
			break;
		
		case joaat("MP_Christmas2018_Tee_011_M"):
		case joaat("MP_Christmas2018_Tee_011_F"):
			return 25043;
			break;
		
		case joaat("MP_Christmas2018_Tee_012_M"):
		case joaat("MP_Christmas2018_Tee_012_F"):
			return 25044;
			break;
		
		case joaat("MP_Christmas2018_Tee_013_M"):
		case joaat("MP_Christmas2018_Tee_013_F"):
			return 25045;
			break;
		
		case joaat("MP_Christmas2018_Tee_014_M"):
		case joaat("MP_Christmas2018_Tee_014_F"):
			return 25046;
			break;
		
		case joaat("MP_Christmas2018_Tee_015_M"):
		case joaat("MP_Christmas2018_Tee_015_F"):
			return 25047;
			break;
		
		case joaat("MP_Christmas2018_Tee_016_M"):
		case joaat("MP_Christmas2018_Tee_016_F"):
			return 25048;
			break;
		
		case joaat("MP_Christmas2018_Tee_017_M"):
		case joaat("MP_Christmas2018_Tee_017_F"):
			return 25049;
			break;
		
		case joaat("MP_Christmas2018_Tee_018_M"):
		case joaat("MP_Christmas2018_Tee_018_F"):
			return 25050;
			break;
		
		case joaat("MP_Christmas2018_Tee_019_M"):
		case joaat("MP_Christmas2018_Tee_019_F"):
			return 25051;
			break;
		
		case joaat("MP_Christmas2018_Tee_020_M"):
		case joaat("MP_Christmas2018_Tee_020_F"):
			return 25052;
			break;
		
		case joaat("MP_Christmas2018_Tee_021_M"):
		case joaat("MP_Christmas2018_Tee_021_F"):
			return 25053;
			break;
		
		case joaat("MP_Christmas2018_Tee_022_M"):
		case joaat("MP_Christmas2018_Tee_022_F"):
			return 25054;
			break;
		
		case joaat("MP_Christmas2018_Tee_023_M"):
		case joaat("MP_Christmas2018_Tee_023_F"):
			return 25055;
			break;
		
		case joaat("MP_Christmas2018_Tee_024_M"):
		case joaat("MP_Christmas2018_Tee_024_F"):
			return 25056;
			break;
		
		case joaat("MP_Christmas2018_Tee_025_M"):
		case joaat("MP_Christmas2018_Tee_025_F"):
			return 25057;
			break;
		
		case joaat("MP_Christmas2018_Tee_026_M"):
		case joaat("MP_Christmas2018_Tee_026_F"):
			return 25058;
			break;
		
		case joaat("MP_Christmas2018_Tee_027_M"):
		case joaat("MP_Christmas2018_Tee_027_F"):
			return 25059;
			break;
		
		case joaat("MP_Christmas2018_Tee_028_M"):
		case joaat("MP_Christmas2018_Tee_028_F"):
			return 25060;
			break;
		
		case joaat("MP_Christmas2018_Tee_029_M"):
		case joaat("MP_Christmas2018_Tee_029_F"):
			return 25061;
			break;
		
		case joaat("MP_Christmas2018_Tee_030_M"):
		case joaat("MP_Christmas2018_Tee_030_F"):
			return 25062;
			break;
		
		case joaat("MP_Christmas2018_Tee_031_M"):
		case joaat("MP_Christmas2018_Tee_031_F"):
			return 25063;
			break;
		
		case joaat("MP_Christmas2018_Tee_032_M"):
		case joaat("MP_Christmas2018_Tee_032_F"):
			return 25064;
			break;
		
		case joaat("MP_Christmas2018_Tee_033_M"):
		case joaat("MP_Christmas2018_Tee_033_F"):
			return 25065;
			break;
		
		case joaat("MP_Christmas2018_Tee_034_M"):
		case joaat("MP_Christmas2018_Tee_034_F"):
			return 25066;
			break;
		
		case joaat("MP_Christmas2018_Tee_035_M"):
		case joaat("MP_Christmas2018_Tee_035_F"):
			return 25067;
			break;
		
		case joaat("MP_Christmas2018_Tee_036_M"):
		case joaat("MP_Christmas2018_Tee_036_F"):
			return 25068;
			break;
		
		case joaat("MP_Christmas2018_Tee_037_M"):
		case joaat("MP_Christmas2018_Tee_037_F"):
			return 25069;
			break;
		
		case joaat("MP_Christmas2018_Tee_038_M"):
		case joaat("MP_Christmas2018_Tee_038_F"):
			return 25070;
			break;
		
		case joaat("MP_Christmas2018_Tee_039_M"):
		case joaat("MP_Christmas2018_Tee_039_F"):
			return 25071;
			break;
		
		case joaat("MP_Christmas2018_Tee_040_M"):
		case joaat("MP_Christmas2018_Tee_040_F"):
			return 25072;
			break;
		
		case joaat("MP_Christmas2018_Tee_041_M"):
		case joaat("MP_Christmas2018_Tee_041_F"):
			return 25073;
			break;
		
		case joaat("MP_Christmas2018_Tee_042_M"):
		case joaat("MP_Christmas2018_Tee_042_F"):
			return 25074;
			break;
		
		case joaat("MP_Christmas2018_Tee_043_M"):
		case joaat("MP_Christmas2018_Tee_043_F"):
			return 25075;
			break;
		
		case joaat("MP_Christmas2018_Tee_044_M"):
		case joaat("MP_Christmas2018_Tee_044_F"):
			return 25076;
			break;
		
		case joaat("MP_Christmas2018_Tee_045_M"):
		case joaat("MP_Christmas2018_Tee_045_F"):
			return 25077;
			break;
		
		case joaat("MP_Christmas2018_Tee_046_M"):
		case joaat("MP_Christmas2018_Tee_046_F"):
			return 25078;
			break;
		
		case joaat("MP_Christmas2018_Tee_047_M"):
		case joaat("MP_Christmas2018_Tee_047_F"):
			return 25079;
			break;
		
		case joaat("MP_Christmas2018_Tee_048_M"):
		case joaat("MP_Christmas2018_Tee_048_F"):
			return 25080;
			break;
		
		case joaat("MP_Christmas2018_Tee_049_M"):
		case joaat("MP_Christmas2018_Tee_049_F"):
			return 25081;
			break;
		
		case joaat("MP_Christmas2018_Tee_050_M"):
		case joaat("MP_Christmas2018_Tee_050_F"):
			return 25082;
			break;
		
		case joaat("MP_Christmas2018_Tee_051_M"):
		case joaat("MP_Christmas2018_Tee_051_F"):
			return 25083;
			break;
		
		case joaat("MP_Christmas2018_Tee_052_M"):
		case joaat("MP_Christmas2018_Tee_052_F"):
			return 25084;
			break;
		
		case joaat("MP_Christmas2018_Tee_053_M"):
		case joaat("MP_Christmas2018_Tee_053_F"):
			return 25085;
			break;
		
		case joaat("MP_Christmas2018_Tee_054_M"):
		case joaat("MP_Christmas2018_Tee_054_F"):
			return 25086;
			break;
		
		case joaat("MP_Christmas2018_Tee_055_M"):
		case joaat("MP_Christmas2018_Tee_055_F"):
			return 25087;
			break;
		
		case joaat("MP_Christmas2018_Tee_056_M"):
		case joaat("MP_Christmas2018_Tee_056_F"):
			return 25088;
			break;
		
		case joaat("MP_Christmas2018_Tee_057_M"):
		case joaat("MP_Christmas2018_Tee_057_F"):
			return 25089;
			break;
		
		case joaat("MP_Christmas2018_Tee_058_M"):
		case joaat("MP_Christmas2018_Tee_058_F"):
			return 25090;
			break;
		
		case joaat("MP_Christmas2018_Tee_059_M"):
		case joaat("MP_Christmas2018_Tee_059_F"):
			return 25091;
			break;
		
		case joaat("MP_Christmas2018_Tee_060_M"):
		case joaat("MP_Christmas2018_Tee_060_F"):
			return 25092;
			break;
		
		case joaat("MP_Christmas2018_Tee_061_M"):
		case joaat("MP_Christmas2018_Tee_061_F"):
			return 25093;
			break;
		
		case joaat("MP_Christmas2018_Tee_062_M"):
		case joaat("MP_Christmas2018_Tee_062_F"):
			return 25094;
			break;
		
		case joaat("MP_Christmas2018_Tee_063_M"):
		case joaat("MP_Christmas2018_Tee_063_F"):
			return 25095;
			break;
		
		case joaat("MP_Christmas2018_Tee_064_M"):
		case joaat("MP_Christmas2018_Tee_064_F"):
			return 25096;
			break;
		
		case joaat("MP_Christmas2018_Tee_065_M"):
		case joaat("MP_Christmas2018_Tee_065_F"):
			return 25097;
			break;
		
		case joaat("MP_Christmas2018_Tee_066_M"):
		case joaat("MP_Christmas2018_Tee_066_F"):
			return 25098;
			break;
		
		case joaat("MP_Christmas2018_Tee_067_M"):
		case joaat("MP_Christmas2018_Tee_067_F"):
			return 25099;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_ARENA_F_JBIB_16_0"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_0"):
			return 25022;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_1"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_1"):
			return 25023;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_2"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_2"):
			return 25024;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_3"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_3"):
			return 25025;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_4"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_4"):
			return 25026;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_5"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_5"):
			return 25027;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_6"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_6"):
			return 25028;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_7"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_7"):
			return 25019;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_8"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_8"):
			return 25029;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_9"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_9"):
			return 25021;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_10"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_10"):
			return 25018;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_11"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_11"):
			return 25020;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_12"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_12"):
			return 25030;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_13"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_13"):
			return 25031;
		
		default:
	}
	switch (iParam0)
	{
		case -1641688020:
			return 25002;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Battle_Clothing_000_M"):
		case joaat("MP_Battle_Clothing_000_F"):
			return 22108;
		
		case joaat("MP_Battle_Clothing_002_M"):
		case joaat("MP_Battle_Clothing_002_F"):
			return 9481;
		
		case joaat("MP_Battle_Clothing_003_M"):
		case joaat("MP_Battle_Clothing_003_F"):
			return 9470;
		
		case joaat("MP_Battle_Clothing_004_M"):
		case joaat("MP_Battle_Clothing_004_F"):
			return 9475;
		
		case joaat("MP_Battle_Clothing_005_M"):
		case joaat("MP_Battle_Clothing_005_F"):
			return 9472;
		
		case joaat("MP_Battle_Clothing_006_M"):
		case joaat("MP_Battle_Clothing_006_F"):
			return 9465;
		
		case joaat("MP_Battle_Clothing_007_M"):
		case joaat("MP_Battle_Clothing_007_F"):
			return 9463;
		
		case joaat("MP_Battle_Clothing_008_M"):
		case joaat("MP_Battle_Clothing_008_F"):
			return 9464;
		
		case joaat("MP_Battle_Clothing_009_M"):
		case joaat("MP_Battle_Clothing_009_F"):
			return 9468;
		
		case joaat("MP_Battle_Clothing_010_M"):
		case joaat("MP_Battle_Clothing_010_F"):
			return 9469;
		
		case joaat("MP_Battle_Clothing_011_M"):
		case joaat("MP_Battle_Clothing_011_F"):
			return 9479;
		
		case joaat("MP_Battle_Clothing_012_M"):
		case joaat("MP_Battle_Clothing_012_F"):
			return 9473;
		
		case joaat("MP_Battle_Clothing_013_M"):
		case joaat("MP_Battle_Clothing_013_F"):
			return 9480;
		
		case joaat("MP_Battle_Clothing_014_M"):
		case joaat("MP_Battle_Clothing_014_F"):
			return 9476;
		
		case joaat("MP_Battle_Clothing_015_M"):
		case joaat("MP_Battle_Clothing_015_F"):
			return 9477;
		
		case joaat("MP_Battle_Clothing_016_M"):
		case joaat("MP_Battle_Clothing_016_F"):
			return 9471;
		
		case joaat("MP_Battle_Clothing_017_M"):
		case joaat("MP_Battle_Clothing_017_F"):
			return 9474;
		
		case joaat("MP_Battle_Clothing_018_M"):
		case joaat("MP_Battle_Clothing_018_F"):
			return 9467;
		
		case joaat("MP_Battle_Clothing_019_M"):
		case joaat("MP_Battle_Clothing_019_F"):
			return 9478;
		
		case joaat("MP_Battle_Clothing_020_M"):
		case joaat("MP_Battle_Clothing_020_F"):
			return 9462;
		
		case joaat("MP_Battle_Clothing_021_M"):
		case joaat("MP_Battle_Clothing_021_F"):
			return 9466;
		
		case joaat("MP_Battle_Clothing_022_M"):
		case joaat("MP_Battle_Clothing_022_F"):
			return 22126;
		
		case joaat("MP_Battle_Clothing_023_M"):
		case joaat("MP_Battle_Clothing_023_F"):
			return 22127;
		
		case joaat("MP_Battle_Clothing_024_M"):
		case joaat("MP_Battle_Clothing_024_F"):
			return 22128;
		
		case joaat("MP_Battle_Clothing_025_M"):
		case joaat("MP_Battle_Clothing_025_F"):
			return 22124;
		
		case joaat("MP_Battle_Clothing_026_M"):
		case joaat("MP_Battle_Clothing_026_F"):
			return 22130;
		
		case joaat("MP_Battle_Clothing_027_M"):
		case joaat("MP_Battle_Clothing_027_F"):
			return 22125;
		
		case joaat("MP_Battle_Clothing_028_M"):
		case joaat("MP_Battle_Clothing_028_F"):
			return 22129;
		
		case joaat("MP_Battle_Clothing_029_M"):
		case joaat("MP_Battle_Clothing_029_F"):
			return 22131;
		
		case joaat("MP_Battle_Clothing_030_M"):
		case joaat("MP_Battle_Clothing_030_F"):
			return 22132;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Battle_Clothing_031_M"):
		case joaat("MP_Battle_Clothing_031_F"):
			return 22147;
		
		case joaat("MP_Battle_Clothing_032_M"):
		case joaat("MP_Battle_Clothing_032_F"):
			return 22148;
		
		case joaat("MP_Battle_Clothing_033_M"):
		case joaat("MP_Battle_Clothing_033_F"):
			return 22149;
		
		case joaat("MP_Battle_Clothing_034_M"):
		case joaat("MP_Battle_Clothing_034_F"):
			return 22150;
		
		case joaat("MP_Battle_Clothing_035_M"):
		case joaat("MP_Battle_Clothing_035_F"):
			return 22151;
		
		case joaat("MP_Battle_Clothing_036_M"):
		case joaat("MP_Battle_Clothing_036_F"):
			return 22152;
		
		case joaat("MP_Battle_Clothing_037_M"):
		case joaat("MP_Battle_Clothing_037_F"):
			return 22153;
		
		case joaat("MP_Battle_Clothing_038_M"):
		case joaat("MP_Battle_Clothing_038_F"):
			return 22154;
		
		case joaat("MP_Battle_Clothing_039_M"):
		case joaat("MP_Battle_Clothing_039_F"):
			return 22155;
		
		case joaat("MP_Battle_Clothing_040_M"):
		case joaat("MP_Battle_Clothing_040_F"):
			return 22156;
		
		case joaat("MP_Battle_Clothing_041_M"):
		case joaat("MP_Battle_Clothing_041_F"):
			return 22157;
		
		case joaat("MP_Battle_Clothing_042_M"):
		case joaat("MP_Battle_Clothing_042_F"):
			return 22158;
		
		case joaat("MP_Battle_Clothing_043_M"):
		case joaat("MP_Battle_Clothing_043_F"):
			return 22159;
		
		case joaat("MP_Battle_Clothing_044_M"):
		case joaat("MP_Battle_Clothing_044_F"):
			return 22160;
		
		case joaat("MP_Battle_Clothing_045_M"):
		case joaat("MP_Battle_Clothing_045_F"):
			return 22161;
		
		case joaat("MP_Battle_Clothing_046_M"):
		case joaat("MP_Battle_Clothing_046_F"):
			return 22162;
		
		case joaat("MP_Battle_Clothing_047_M"):
		case joaat("MP_Battle_Clothing_047_F"):
			return 22163;
		
		case joaat("MP_Battle_Clothing_048_M"):
		case joaat("MP_Battle_Clothing_048_F"):
			return 22164;
		
		case joaat("MP_Battle_Clothing_049_M"):
		case joaat("MP_Battle_Clothing_049_F"):
			return 22165;
		
		case joaat("MP_Battle_Clothing_050_M"):
		case joaat("MP_Battle_Clothing_050_F"):
			return 22166;
		
		case joaat("MP_Battle_Clothing_051_M"):
		case joaat("MP_Battle_Clothing_051_F"):
			return 22167;
		
		case joaat("MP_Battle_Clothing_052_M"):
		case joaat("MP_Battle_Clothing_052_F"):
			return 22168;
		
		case joaat("MP_Battle_Clothing_053_M"):
		case joaat("MP_Battle_Clothing_053_F"):
			return 22169;
		
		case joaat("MP_Battle_Clothing_054_M"):
		case joaat("MP_Battle_Clothing_054_F"):
			return 22170;
		
		case joaat("MP_Battle_Clothing_055_M"):
		case joaat("MP_Battle_Clothing_055_F"):
			return 22171;
		
		case joaat("MP_Battle_Clothing_056_M"):
		case joaat("MP_Battle_Clothing_056_F"):
			return 22172;
		
		case joaat("MP_Battle_Clothing_057_M"):
		case joaat("MP_Battle_Clothing_057_F"):
			return 22173;
		
		case joaat("MP_Battle_Clothing_058_M"):
		case joaat("MP_Battle_Clothing_058_F"):
			return 22174;
		
		case joaat("MP_Battle_Clothing_059_M"):
		case joaat("MP_Battle_Clothing_059_F"):
			return 22175;
		
		case joaat("MP_Battle_Clothing_060_M"):
		case joaat("MP_Battle_Clothing_060_F"):
			return 22176;
		
		case joaat("MP_Battle_Clothing_061_M"):
		case joaat("MP_Battle_Clothing_061_F"):
			return 22177;
		
		case joaat("MP_Battle_Clothing_062_M"):
		case joaat("MP_Battle_Clothing_062_F"):
			return 22178;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_LTS_M_OUTFIT_14"):
		case joaat("DLC_MP_LTS_F_OUTFIT_14"):
			return 18099;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_0"):
		case joaat("DLC_MP_X17_M_BERD_2_0"):
		case joaat("DLC_MP_X17_M_LEGS_1_0"):
		case joaat("DLC_MP_X17_M_FEET_1_0"):
		case joaat("DLC_MP_X17_M_JBIB_5_0"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_0"):
		case joaat("DLC_MP_X17_F_BERD_2_0"):
		case joaat("DLC_MP_X17_F_LEGS_1_0"):
		case joaat("DLC_MP_X17_F_FEET_1_0"):
		case joaat("DLC_MP_X17_F_JBIB_5_0"):
			return 18121;
		
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_1"):
		case joaat("DLC_MP_X17_M_BERD_2_1"):
		case joaat("DLC_MP_X17_M_LEGS_1_1"):
		case joaat("DLC_MP_X17_M_FEET_1_1"):
		case joaat("DLC_MP_X17_M_JBIB_5_1"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_1"):
		case joaat("DLC_MP_X17_F_BERD_2_1"):
		case joaat("DLC_MP_X17_F_LEGS_1_1"):
		case joaat("DLC_MP_X17_F_FEET_1_1"):
		case joaat("DLC_MP_X17_F_JBIB_5_1"):
			return 18122;
		
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_2"):
		case joaat("DLC_MP_X17_M_BERD_2_2"):
		case joaat("DLC_MP_X17_M_LEGS_1_2"):
		case joaat("DLC_MP_X17_M_FEET_1_2"):
		case joaat("DLC_MP_X17_M_JBIB_5_2"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_2"):
		case joaat("DLC_MP_X17_F_BERD_2_2"):
		case joaat("DLC_MP_X17_F_LEGS_1_2"):
		case joaat("DLC_MP_X17_F_FEET_1_2"):
		case joaat("DLC_MP_X17_F_JBIB_5_2"):
			return 18123;
		
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_3"):
		case joaat("DLC_MP_X17_M_BERD_2_3"):
		case joaat("DLC_MP_X17_M_LEGS_1_3"):
		case joaat("DLC_MP_X17_M_FEET_1_3"):
		case joaat("DLC_MP_X17_M_JBIB_5_3"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_3"):
		case joaat("DLC_MP_X17_F_BERD_2_3"):
		case joaat("DLC_MP_X17_F_LEGS_1_3"):
		case joaat("DLC_MP_X17_F_FEET_1_3"):
		case joaat("DLC_MP_X17_F_JBIB_5_3"):
			return 18124;
		
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_4"):
		case joaat("DLC_MP_X17_M_BERD_2_4"):
		case joaat("DLC_MP_X17_M_LEGS_1_4"):
		case joaat("DLC_MP_X17_M_FEET_1_4"):
		case joaat("DLC_MP_X17_M_JBIB_5_4"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_4"):
		case joaat("DLC_MP_X17_F_BERD_2_4"):
		case joaat("DLC_MP_X17_F_LEGS_1_4"):
		case joaat("DLC_MP_X17_F_FEET_1_4"):
		case joaat("DLC_MP_X17_F_JBIB_5_4"):
			return 18125;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_X17_M_BERD_10_0"):
		case joaat("DLC_MP_X17_F_BERD_10_0"):
			return 18134;
		
		case joaat("DLC_MP_X17_M_BERD_10_1"):
		case joaat("DLC_MP_X17_F_BERD_10_1"):
			return 18135;
		
		case joaat("DLC_MP_X17_M_BERD_10_2"):
		case joaat("DLC_MP_X17_F_BERD_10_2"):
			return 18136;
		
		case joaat("DLC_MP_X17_M_BERD_10_3"):
		case joaat("DLC_MP_X17_F_BERD_10_3"):
			return 18137;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
			return 15417;
		
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
			return 15418;
		
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
			return 15425;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_DECL_5_0"):
		case joaat("DLC_MP_GR_F_DECL_5_0"):
			return 15405;
		
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
			return 15393;
		
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
			return 15409;
		
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
			return 15396;
		
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
			return 15412;
		
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
			return 15403;
		
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
			return 15389;
		
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
			return 15398;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_PHEAD_6_0"):
		case joaat("DLC_MP_GR_F_PHEAD_6_0"):
		case joaat("DLC_MP_GR_M_PHEAD_7_0"):
		case joaat("DLC_MP_GR_F_PHEAD_7_0"):
			return 15400;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
			return 15408;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
			return 15411;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
			return 15397;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
			return 15413;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
			return 15391;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
			return 15388;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
			return 15401;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_000_M"):
		case joaat("MP_Gunrunning_Award_000_F"):
			return 15394;
		
		case joaat("MP_Gunrunning_Award_002_M"):
		case joaat("MP_Gunrunning_Award_002_F"):
			return 15406;
		
		case joaat("MP_Gunrunning_Award_003_M"):
		case joaat("MP_Gunrunning_Award_003_F"):
			return 15395;
		
		case joaat("MP_Gunrunning_Award_005_M"):
		case joaat("MP_Gunrunning_Award_005_F"):
			return 15410;
		
		case joaat("MP_Gunrunning_Award_006_M"):
		case joaat("MP_Gunrunning_Award_006_F"):
			return 15407;
		
		case joaat("MP_Gunrunning_Award_009_M"):
		case joaat("MP_Gunrunning_Award_009_F"):
			return 15414;
		
		case joaat("MP_Gunrunning_Award_010_M"):
		case joaat("MP_Gunrunning_Award_010_F"):
			return 15415;
		
		case joaat("MP_Gunrunning_Award_011_M"):
		case joaat("MP_Gunrunning_Award_011_F"):
			return 15399;
		
		case joaat("MP_Gunrunning_Award_012_M"):
		case joaat("MP_Gunrunning_Award_012_F"):
			return 15404;
		
		case joaat("MP_Gunrunning_Award_014_M"):
		case joaat("MP_Gunrunning_Award_014_F"):
			return 15392;
		
		case joaat("MP_Gunrunning_Award_015_M"):
		case joaat("MP_Gunrunning_Award_015_F"):
			return 15390;
		
		case joaat("MP_Gunrunning_Award_016_M"):
		case joaat("MP_Gunrunning_Award_016_F"):
			return 15402;
		
		case joaat("MP_Gunrunning_Award_017_M"):
		case joaat("MP_Gunrunning_Award_017_F"):
			return 15416;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_IE_M_BERD_7_0"):
		case joaat("DLC_MP_IE_F_BERD_7_0"):
			return 9443;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Biker_Tee_022_M"):
		case joaat("MP_Biker_Tee_022_F"):
			return 9366;
		
		case joaat("MP_Biker_Tee_023_M"):
		case joaat("MP_Biker_Tee_023_F"):
			return 9367;
		
		case joaat("MP_Biker_Tee_024_M"):
		case joaat("MP_Biker_Tee_024_F"):
			return 9369;
		
		case joaat("MP_Biker_Tee_025_M"):
		case joaat("MP_Biker_Tee_025_F"):
			return 9368;
		
		case joaat("MP_Biker_Tee_047_M"):
		case joaat("MP_Biker_Tee_047_F"):
			return 9365;
		
		case joaat("MP_Biker_Tee_048_M"):
		case joaat("MP_Biker_Tee_048_F"):
			return 9364;
		
		case joaat("MP_Biker_Tee_049_M"):
		case joaat("MP_Biker_Tee_049_F"):
			return 9363;
		
		case joaat("MP_Biker_Tee_050_M"):
		case joaat("MP_Biker_Tee_050_F"):
			return 9362;
		
		case joaat("MP_Biker_Tee_051_M"):
		case joaat("MP_Biker_Tee_051_F"):
			return 9370;
		
		case joaat("MP_Biker_Tee_052_M"):
		case joaat("MP_Biker_Tee_052_F"):
			return 9371;
		
		case joaat("MP_Biker_Tee_053_M"):
		case joaat("MP_Biker_Tee_053_F"):
			return 9372;
		
		case joaat("MP_Biker_Tee_054_M"):
		case joaat("MP_Biker_Tee_054_F"):
			return 9373;
		
		case joaat("MP_Biker_Tee_055_M"):
		case joaat("MP_Biker_Tee_055_F"):
			return 9374;
		
		case joaat("MP_Biker_Award_000_M"):
		case joaat("MP_Biker_Award_000_F"):
			return 9384;
		
		case joaat("MP_Biker_Award_001_M"):
		case joaat("MP_Biker_Award_001_F"):
			return 9385;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_BIKER_M_DECL_0_0"):
		case joaat("DLC_MP_BIKER_F_DECL_0_0"):
			return 9375;
		
		case joaat("DLC_MP_BIKER_M_DECL_0_1"):
		case joaat("DLC_MP_BIKER_F_DECL_0_1"):
			return 9376;
		
		case joaat("DLC_MP_BIKER_M_DECL_0_2"):
		case joaat("DLC_MP_BIKER_F_DECL_0_2"):
			return 9377;
		
		case joaat("DLC_MP_BIKER_M_DECL_0_3"):
		case joaat("DLC_MP_BIKER_F_DECL_0_3"):
			return 9378;
		
		case joaat("DLC_MP_BIKER_M_DECL_0_4"):
		case joaat("DLC_MP_BIKER_F_DECL_0_4"):
			return 9379;
		
		case joaat("DLC_MP_BIKER_M_DECL_0_5"):
		case joaat("DLC_MP_BIKER_F_DECL_0_5"):
			return 9380;
		
		case joaat("DLC_MP_BIKER_M_DECL_0_6"):
		case joaat("DLC_MP_BIKER_F_DECL_0_6"):
			return 9381;
		
		case joaat("DLC_MP_BIKER_M_DECL_0_7"):
		case joaat("DLC_MP_BIKER_F_DECL_0_7"):
			return 9382;
		
		case joaat("DLC_MP_BIKER_M_DECL_0_8"):
		case joaat("DLC_MP_BIKER_F_DECL_0_8"):
			return 9383;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_0"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_0"):
			return 7595;
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_1"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_1"):
			return 7596;
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_2"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_2"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_2"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_2"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_2"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_2"):
			return 7597;
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_3"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_3"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_3"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_3"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_3"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_3"):
			return 7599;
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_4"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_4"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_4"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_4"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_4"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_4"):
			return 7600;
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_5"):
		case joaat("DLC_MP_STUNT_M_PHEAD_13_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_14_0"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_5"):
		case joaat("DLC_MP_STUNT_F_PHEAD_13_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_14_0"):
			return 7598;
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_6"):
		case joaat("DLC_MP_STUNT_M_PHEAD_13_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_14_1"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_6"):
		case joaat("DLC_MP_STUNT_F_PHEAD_13_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_14_1"):
			return 7601;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_EXEC_F_JBIB_15_0"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_0"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_0"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_0"):
			return 7482;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_1"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_1"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_1"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_1"):
			return 7483;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_2"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_2"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_2"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_2"):
			return 7484;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_3"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_3"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_3"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_3"):
			return 7485;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_4"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_4"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_4"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_4"):
			return 7486;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_5"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_5"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_5"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_5"):
			return 7487;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_6"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_6"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_6"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_6"):
			return 7488;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_7"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_7"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_7"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_7"):
			return 7489;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_8"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_8"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_8"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_8"):
			return 7490;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_9"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_9"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_9"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_9"):
			return 7491;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_10"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_10"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_10"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_10"):
			return 7492;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_11"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_11"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_11"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_11"):
			return 7493;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_12"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_12"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_12"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_12"):
			return 7494;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_13"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_13"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_13"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_13"):
			return 7495;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_0"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_0"):
			return 7515;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_1"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_1"):
			return 7516;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_2"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_2"):
			return 7517;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_3"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_3"):
			return 7518;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_4"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_4"):
			return 7519;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_5"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_5"):
			return 7520;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_6"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_6"):
			return 7521;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_7"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_7"):
			return 7522;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_8"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_8"):
			return 7523;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_9"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_9"):
			return 7524;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_10"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_10"):
			return 7525;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_11"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_11"):
			return 7526;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_12"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_12"):
			return 7527;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_13"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_13"):
			return 7528;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_LOW_F_PHEAD_1_0"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_0"):
			return 4247;
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_1"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_1"):
			return 4248;
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_2"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_2"):
			return 4249;
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_3"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_3"):
			return 4250;
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_4"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_4"):
			return 4251;
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_5"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_5"):
			return 4252;
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_6"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_6"):
			return 4253;
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_7"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_7"):
			return 4254;
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_8"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_8"):
			return 4255;
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_9"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_9"):
			return 4256;
		
		case 1743008394:
		case 1084175393:
			return 110;
		
		case -1090232119:
		case 787255484:
			return 111;
		
		case -1133356123:
		case -566366372:
			return 112;
		
		default:
	}
	switch (iParam0)
	{
		case 1970268516:
		case 2026483804:
		case 1831101822:
		case 1411612772:
			return 4333;
		
		case 1875861023:
		case -1385031204:
		case -703154335:
		case 798340921:
			return 4334;
		
		case -1208373599:
		case 1656518170:
			return 4335;
		
		case -970054678:
		case -840010097:
			return 3750;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_IND_F_PHEAD_6_0"):
		case joaat("DLC_MP_IND_M_PHEAD_6_0"):
			return 3594;
		
		case joaat("DLC_MP_IND_F_PHEAD_6_1"):
		case joaat("DLC_MP_IND_M_PHEAD_6_1"):
			return 3595;
		
		case joaat("DLC_MP_IND_F_PHEAD_6_2"):
		case joaat("DLC_MP_IND_M_PHEAD_6_2"):
			return 3596;
		
		case joaat("DLC_MP_IND_F_PHEAD_6_3"):
		case joaat("DLC_MP_IND_M_PHEAD_6_3"):
			return 3597;
		
		case joaat("DLC_MP_IND_F_PHEAD_6_4"):
		case joaat("DLC_MP_IND_M_PHEAD_6_4"):
			return 3598;
		
		case joaat("DLC_MP_IND_F_PHEAD_6_5"):
		case joaat("DLC_MP_IND_M_PHEAD_6_5"):
			return 3599;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_LTS_M_BERD_2_0"):
		case joaat("DLC_MP_LTS_F_BERD_2_0"):
			return 3616;
		
		case joaat("FM_LTS_M_Tshirt_000"):
		case joaat("FM_LTS_F_Tshirt_000"):
			return 3615;
		
		case joaat("FM_Hip_M_Retro_010"):
		case joaat("FM_Hip_F_Retro_010"):
			return 9440;
		
		case joaat("FM_Hip_M_Retro_003"):
		case joaat("FM_Hip_F_Retro_003"):
			return 9430;
		
		case joaat("FM_Hip_M_Retro_000"):
		case joaat("FM_Hip_F_Retro_000"):
			return 9426;
		
		case joaat("FM_Hip_M_Retro_001"):
		case joaat("FM_Hip_F_Retro_001"):
			return 9427;
		
		case joaat("FM_Hip_M_Retro_002"):
		case joaat("FM_Hip_F_Retro_002"):
			return 9428;
		
		case joaat("FM_Hip_M_Retro_004"):
		case joaat("FM_Hip_F_Retro_004"):
			return 9431;
		
		case joaat("FM_Hip_M_Retro_005"):
		case joaat("FM_Hip_F_Retro_005"):
			return 9432;
		
		case joaat("FM_Hip_M_Retro_006"):
		case joaat("FM_Hip_F_Retro_006"):
			return 9433;
		
		case joaat("FM_Hip_M_Retro_007"):
		case joaat("FM_Hip_F_Retro_007"):
			return 9439;
		
		case joaat("FM_Hip_M_Retro_008"):
		case joaat("FM_Hip_F_Retro_008"):
			return 9434;
		
		case joaat("FM_Hip_M_Retro_009"):
		case joaat("FM_Hip_F_Retro_009"):
			return 9435;
		
		case joaat("FM_Hip_M_Retro_011"):
		case joaat("FM_Hip_F_Retro_011"):
			return 9436;
		
		case joaat("FM_Hip_M_Retro_012"):
		case joaat("FM_Hip_F_Retro_012"):
			return 9429;
		
		case joaat("FM_Hip_M_Retro_013"):
		case joaat("FM_Hip_F_Retro_013"):
			return 9437;
		
		case joaat("FM_Ind_M_Award_000"):
		case joaat("FM_Ind_F_Award_000"):
			return 3593;
		
		default:
	}
	return -1;
}

int func_934(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 >= 0 && iVar0 < 11)
	{
		if (func_935())
		{
			return Global_262145.f_31420[iVar0];
		}
		else
		{
			return Global_262145.f_31408[iVar0];
		}
	}
	return -1;
}

bool func_935()
{
	return func_936(unk_0x9E2D6C50374FCFA9());
}

int func_936(int iParam0)
{
	if (unk_0x15CAA6D7B11F1A7C(unk_0x407E03586628E458(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_937(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = -99;
	iVar2 = -1;
	iVar0 = func_934(iParam0);
	if (iVar0 == -1)
	{
		return 1;
	}
	if (func_935())
	{
		iVar3 = func_994(iVar0);
		if (iVar3 != -1)
		{
			iVar1 = func_991(joaat("mp_f_freemode_01"), iVar0, func_994(iVar0), 4);
		}
		iVar2 = func_990(iVar0, 4);
		if ((func_672(func_933(iVar0), -1) || (iVar2 != -1 && func_984(iVar2, -1))) || (iVar1 != -99 && func_938(joaat("mp_f_freemode_01"), func_994(iVar0), iVar1)))
		{
			return 1;
		}
	}
	else
	{
		iVar4 = func_994(iVar0);
		if (iVar4 != -1)
		{
			iVar1 = func_991(joaat("mp_m_freemode_01"), iVar0, func_994(iVar0), 3);
		}
		iVar2 = func_990(iVar0, 3);
		if ((func_672(func_933(iVar0), -1) || (iVar2 != -1 && func_984(iVar2, -1))) || (iVar1 != -99 && func_938(joaat("mp_m_freemode_01"), func_994(iVar0), iVar1)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_938(int iParam0, int iParam1, int iParam2)
{
	Global_77663[1 /*14*/] = { func_939(iParam0, iParam1, iParam2, -1) };
	return unk_0xE2D0C323A1AE5D85(Global_77663[1 /*14*/].f_6, 2);
}

struct<14> func_939(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_983();
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		func_967(iParam1, iParam2, iParam3);
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		func_940(iParam1, iParam2, iParam3);
	}
	return Global_77663[0 /*14*/];
}

void func_940(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 2:
			func_966(iParam1, iParam2);
			break;
		
		case 11:
			func_965(iParam1, iParam2);
			break;
		
		case 8:
			func_964(iParam1, iParam2);
			break;
		
		case 9:
			func_963(iParam1, iParam2);
			break;
		
		case 3:
			func_962(iParam1, iParam2);
			break;
		
		case 4:
			func_961(iParam1, iParam2);
			break;
		
		case 6:
			func_960(iParam1, iParam2);
			break;
		
		case 1:
			func_959(iParam1, iParam2);
			break;
		
		case 7:
			func_958(iParam1, iParam2);
			break;
		
		case 10:
			func_957(iParam1, iParam2);
			break;
		
		case 14:
			func_956(iParam1, iParam2);
			break;
		
		case 12:
			func_955(iParam1, iParam2);
			break;
		
		case 5:
			func_954(iParam1, iParam2);
			break;
		
		case 0:
			func_951(iParam1, iParam2);
			break;
		
		case 13:
			func_941(iParam1);
			break;
	}
}

void func_941(int iParam0)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
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
	switch (iParam0)
	{
		case 31:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 16:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 17:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 18:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 19:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 20:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 21:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 22:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 23:
			iVar3 = 0;
			iVar4 = 0;
			break;
	}
	func_942(&(Global_77663[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_942(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	int iVar0;
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
	uParam0->f_12 = func_950(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (unk_0x2E87280918B16506(sParam3) != unk_0x2E87280918B16506("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 5);
		}
		unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 1);
		unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 2);
		unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 6);
		if (func_949(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (unk_0x036D1EA7243F2CCC(Global_2883588, joaat("REBREATHER"), 0))
			{
				unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_947(Global_2883588, 1, 1, 1, -1))
			{
				unk_0xB0550BC91B0159D6(&(uParam0->f_6), 2);
			}
			if (!func_947(Global_2883588, 2, 1, 1, -1))
			{
				unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_947(Global_2883588, 1, 1, 1, -1))
			{
				unk_0xB0550BC91B0159D6(&(uParam0->f_6), 2);
			}
			if (!func_947(Global_2883588, 2, 1, 1, -1))
			{
				unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_947(Global_2883588, 1, 1, 1, -1))
			{
				unk_0xB0550BC91B0159D6(&(uParam0->f_6), 2);
			}
			if (!func_947(Global_2883588, 2, 1, 1, -1))
			{
				unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 0);
		unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 5);
		if (func_946(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 1);
		}
		if (func_946(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 2);
		}
		if (!func_946(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 4);
		}
	}
	else
	{
		unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_949(14))
			{
				return;
			}
			iVar0 = func_881(func_945(iParam1, uParam0->f_2), Global_77660, 0);
			if (unk_0xE2D0C323A1AE5D85(iVar0, uParam0->f_1))
			{
				unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 1);
			}
			iVar0 = func_881(func_944(iParam1, uParam0->f_2), Global_77660, 0);
			if (unk_0xE2D0C323A1AE5D85(iVar0, uParam0->f_1))
			{
				unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 2);
			}
			if (func_943(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_881(iVar1, Global_77660, 0);
				if (!unk_0xE2D0C323A1AE5D85(iVar0, uParam0->f_1))
				{
					unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 1);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 1);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 2);
		}
	}
}

bool func_943(int iParam0, int iParam1, var uParam2)
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

int func_944(int iParam0, int iParam1)
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

int func_945(int iParam0, int iParam1)
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

int func_946(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/][iParam3]), iParam4);
		}
		return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

int func_947(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_77660;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_948(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_881(iVar2, iVar0, 0);
		return unk_0xE2D0C323A1AE5D85(iVar3, iVar1);
	}
	return 0;
}

bool func_948(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	*uParam2 = 12597;
	if ((bParam4 && Global_4532516) || (!bParam4 && bParam5))
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
		if (Global_4532516)
		{
			iVar0 = unk_0xA713D1504E921B62(iParam0);
		}
		else
		{
			iVar0 = unk_0x033025C1430DD8E8(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0xA713D1504E921B62(iParam0);
	}
	else
	{
		iVar0 = unk_0x033025C1430DD8E8(iParam0);
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
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 231:
					*uParam2 = 10302;
					break;
				
				case 232:
					*uParam2 = 10303;
					break;
				
				case 233:
					*uParam2 = 10304;
					break;
				
				case 234:
					*uParam2 = 10305;
					break;
				
				case 235:
					*uParam2 = 10306;
					break;
				
				case 236:
					*uParam2 = 10307;
					break;
				
				case 237:
					*uParam2 = 10308;
					break;
				
				case 238:
					*uParam2 = 10309;
					break;
				
				case 239:
					*uParam2 = 10310;
					break;
				
				case 240:
					*uParam2 = 10311;
					break;
				
				case 241:
					*uParam2 = 10312;
					break;
				
				case 242:
					*uParam2 = 10313;
					break;
				
				case 243:
					*uParam2 = 10314;
					break;
				
				case 244:
					*uParam2 = 10315;
					break;
				
				case 245:
					*uParam2 = 10316;
					break;
				
				case 246:
					*uParam2 = 10317;
					break;
				
				case 247:
					*uParam2 = 10318;
					break;
				
				case 248:
					*uParam2 = 10319;
					break;
				
				case 249:
					*uParam2 = 10320;
					break;
				
				case 250:
					*uParam2 = 10321;
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
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 231:
					*uParam2 = 10322;
					break;
				
				case 232:
					*uParam2 = 10323;
					break;
				
				case 233:
					*uParam2 = 10324;
					break;
				
				case 234:
					*uParam2 = 10325;
					break;
				
				case 235:
					*uParam2 = 10326;
					break;
				
				case 236:
					*uParam2 = 10327;
					break;
				
				case 237:
					*uParam2 = 10328;
					break;
				
				case 238:
					*uParam2 = 10329;
					break;
				
				case 239:
					*uParam2 = 10330;
					break;
				
				case 240:
					*uParam2 = 10331;
					break;
				
				case 241:
					*uParam2 = 10332;
					break;
				
				case 242:
					*uParam2 = 10333;
					break;
				
				case 243:
					*uParam2 = 10334;
					break;
				
				case 244:
					*uParam2 = 10335;
					break;
				
				case 245:
					*uParam2 = 10336;
					break;
				
				case 246:
					*uParam2 = 10337;
					break;
				
				case 247:
					*uParam2 = 10338;
					break;
				
				case 248:
					*uParam2 = 10339;
					break;
				
				case 249:
					*uParam2 = 10340;
					break;
				
				case 250:
					*uParam2 = 10341;
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 12597;
}

bool func_949(int iParam0)
{
	return Global_42596 == iParam0;
}

int func_950(int iParam0)
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

void func_951(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	Global_77663[0 /*14*/].f_5 = 4;
	func_952(iVar0, iParam0, 0, iParam1);
}

void func_952(int iParam0, int iParam1, int iParam2, int iParam3)
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
	uVar1 = Global_77663[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar3 = (iParam1 - iParam2);
		if (iVar3 >= 0)
		{
			iVar4 = unk_0x30264A1C9ADAAE62(uVar1, 0);
			if (iVar4 > iVar3)
			{
				unk_0x43FFB630E515D7A1(iVar3, &Var2);
				Global_2883588 = Var2.f_1;
				Global_2883589 = Var2;
				func_942(&(Global_77663[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
				return;
			}
		}
	}
	else if (iParam0 == 13)
	{
		func_942(&(Global_77663[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		unk_0x1CF199D23D4DFAE4(&Var5);
		iVar7 = (iParam1 - iParam2);
		if (iVar7 >= 0)
		{
			iVar8 = unk_0xA188D1127A77C942(iVar1, 10, -1, 1, -1, -1);
			if (iVar8 > iVar7)
			{
				unk_0xC99CE91134872039(iVar7, &Var5);
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
				Global_2883588 = Var5.f_1;
				Global_2883589 = Var5;
				func_942(&(Global_77663[0 /*14*/]), iParam0, iParam1, &(Var5.f_9), Var5.f_3, Var5.f_4, Var5.f_5, unk_0x036D1EA7243F2CCC(Var5.f_1, joaat("OUTFIT_ONLY"), 0), iVar6, 2, Var5.f_1 != 0);
				return;
			}
		}
	}
	else
	{
		unk_0xB5ABDB2FA64E87F2(&Var9);
		if (iParam3 != -1 && Global_77833)
		{
			unk_0x37E8462BC2A63393(iParam3, &Var9);
			Global_2883588 = Var9.f_1;
			Global_2883589 = Var9;
			func_942(&(Global_77663[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, unk_0x036D1EA7243F2CCC(Var9.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var9.f_1 != 0);
			return;
		}
		iVar10 = (iParam1 - iParam2);
		if (iVar10 >= 0)
		{
			iVar11 = unk_0xA188D1127A77C942(iVar1, 10, -1, 0, -1, func_953(iParam0));
			if (iVar11 > iVar10)
			{
				unk_0xEA030AC498B5F181(iVar10, &Var9);
				Global_2883588 = Var9.f_1;
				Global_2883589 = Var9;
				func_942(&(Global_77663[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, unk_0x036D1EA7243F2CCC(Var9.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var9.f_1 != 0);
				return;
			}
		}
	}
}

int func_953(int iParam0)
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

void func_954(int iParam0, int iParam1)
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
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 7:
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 8:
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		default:
			Global_77663[0 /*14*/].f_5 = 4;
			func_952(iVar7, iParam0, 9, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "HA_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	func_942(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_955(int iParam0, int iParam1)
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
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S1", 16);
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S2", 16);
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S3", 16);
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S4", 16);
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S5", 16);
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S6", 16);
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S7", 16);
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S8", 16);
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P1", 16);
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P2", 16);
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P3", 16);
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P4", 16);
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P5", 16);
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P6", 16);
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P7", 16);
			break;
		
		case 16:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P8", 16);
			break;
		
		case 17:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P9", 16);
			break;
		
		case 18:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P10", 16);
			break;
		
		case 19:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B1", 16);
			break;
		
		case 20:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B2", 16);
			break;
		
		case 21:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B3", 16);
			break;
		
		case 22:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B4", 16);
			break;
		
		case 23:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B5", 16);
			break;
		
		case 24:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B6", 16);
			break;
		
		case 25:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B7", 16);
			break;
		
		case 26:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B8", 16);
			break;
		
		case 27:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B9", 16);
			break;
		
		default:
			Global_77663[0 /*14*/].f_5 = 4;
			func_952(iVar7, iParam0, 28, iParam1);
			return;
			break;
	}
	func_942(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_956(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
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
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	iVar8 = 0;
	switch (iParam0)
	{
		case 0:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "HT_FMF_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "HT_FMF_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 12:
			StringCopy(&Var2, "HT_FMF_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 85;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "HT_FMF_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 14:
			StringCopy(&Var2, "HT_FMF_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 235;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 15:
			StringCopy(&Var2, "HT_FMF_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 80;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 16:
			StringCopy(&Var2, "HT_FMF_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 85;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "HT_FMF_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 90;
			iVar5 = 0;
			iVar8 = 1;
			break;
	}
	switch (iParam0)
	{
		case 18:
			StringCopy(&Var2, "HT_FMF_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "HT_FMF_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "HT_FMF_2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 5000;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 21:
			StringCopy(&Var2, "HT_FMF_2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "HT_FMF_2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "HT_FMF_2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "HT_FMF_2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "HT_FMF_2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "HT_FMF_2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 27:
			StringCopy(&Var2, "HT_FMF_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 28:
			StringCopy(&Var2, "HT_FMF_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 29:
			StringCopy(&Var2, "HT_FMF_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "HT_FMF_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "HT_FMF_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "HT_FMF_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "HT_FMF_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "HT_FMF_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 120;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 35:
			StringCopy(&Var2, "HT_FMF_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 400;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 36:
			StringCopy(&Var2, "HT_FMF_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 37:
			StringCopy(&Var2, "HT_FMF_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 375;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 38:
			StringCopy(&Var2, "HT_FMF_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 39:
			StringCopy(&Var2, "HT_FMF_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 40:
			StringCopy(&Var2, "HT_FMF_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "HT_FMF_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 85;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 42:
			StringCopy(&Var2, "HT_FMF_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 325;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 43:
			StringCopy(&Var2, "HT_FMF_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "HT_FMF_5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "HT_FMF_5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "HT_FMF_5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 40;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 47:
			StringCopy(&Var2, "HT_FMF_5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 48:
			StringCopy(&Var2, "HT_FMF_5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "HT_FMF_5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 50:
			StringCopy(&Var2, "HT_FMF_5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 255;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 51:
			StringCopy(&Var2, "HT_FMF_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 360;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 52:
			StringCopy(&Var2, "HT_FMF_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 195;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 53:
			StringCopy(&Var2, "HT_FMF_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 3970;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 54:
			StringCopy(&Var2, "HT_FMF_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 135;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "HT_FMF_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 1355;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "HT_FMF_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 110;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 57:
			StringCopy(&Var2, "HT_FMF_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 58:
			StringCopy(&Var2, "HT_FMF_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 130;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 59:
			StringCopy(&Var2, "HT_FMF_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 230;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 60:
			StringCopy(&Var2, "HT_FMF_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 195;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "HT_FMF_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 515;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 62:
			StringCopy(&Var2, "HT_FMF_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 545;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 63:
			StringCopy(&Var2, "HT_FMF_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 195;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 64:
			StringCopy(&Var2, "HT_FMF_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 155;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 65:
			StringCopy(&Var2, "HT_FMF_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 155;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 66:
			StringCopy(&Var2, "HT_FMF_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 1440;
			iVar5 = 0;
			iVar8 = 1;
			break;
	}
	switch (iParam0)
	{
		case 67:
			StringCopy(&Var2, "HT_FMF_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "HT_FMF_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "HT_FMF_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "HT_FMF_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "HT_FMF_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "HT_FMF_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "HT_FMF_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "HT_FMF_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "HT_FMF_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 76:
			StringCopy(&Var2, "HT_FMF_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 25;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 77:
			StringCopy(&Var2, "HT_FMF_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 78:
			StringCopy(&Var2, "HT_FMF_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 25;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "HT_FMF_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 50;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 80:
			StringCopy(&Var2, "HT_FMF_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 40;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 81:
			StringCopy(&Var2, "HT_FMF_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 575;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 82:
			StringCopy(&Var2, "HT_FMF_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 605;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 83:
			StringCopy(&Var2, "HT_FMF_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "HT_FMF_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "HT_FMF_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "HT_FMF_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "HT_FMF_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "HT_FMF_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "HT_FMF_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "HT_FMF_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 285;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 91:
			StringCopy(&Var2, "HT_FMF_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "HT_FMF_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 2125;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 93:
			StringCopy(&Var2, "HT_FMF_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "HT_FMF_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "HT_FMF_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "HT_FMF_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 97:
			StringCopy(&Var2, "HT_FMF_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "HT_FMF_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "HT_FMF_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 100:
			StringCopy(&Var2, "HT_FMF_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 101:
			StringCopy(&Var2, "HT_FMF_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 102:
			StringCopy(&Var2, "HT_FMF_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "HT_FMF_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 104:
			StringCopy(&Var2, "HT_FMF_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 105:
			StringCopy(&Var2, "HT_FMF_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 106:
			StringCopy(&Var2, "HT_FMF_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 295;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 107:
			StringCopy(&Var2, "HT_FMF_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 195;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 108:
			StringCopy(&Var2, "HT_FMF_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 109:
			StringCopy(&Var2, "HT_FMF_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 160;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 110:
			StringCopy(&Var2, "HT_FMF_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 855;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 111:
			StringCopy(&Var2, "HT_FMF_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 1615;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 112:
			StringCopy(&Var2, "HT_FMF_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 1130;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 113:
			StringCopy(&Var2, "HT_FMF_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 165;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 114:
			StringCopy(&Var2, "HT_FMF_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 215;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 115:
			StringCopy(&Var2, "HT_FMF_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 145;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 116:
			StringCopy(&Var2, "HT_FMF_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 250;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 117:
			StringCopy(&Var2, "HT_FMF_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 110;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 118:
			StringCopy(&Var2, "HT_FMF_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 145;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 119:
			StringCopy(&Var2, "HT_FMF_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 105;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 120:
			StringCopy(&Var2, "HT_FMF_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 105;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 121:
			StringCopy(&Var2, "HT_FMF_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 115;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 122:
			StringCopy(&Var2, "HT_FMF_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 115;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 123:
			StringCopy(&Var2, "HT_FMF_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 390;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 124:
			StringCopy(&Var2, "HT_FMF_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 395;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "HT_FMF_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 595;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 126:
			StringCopy(&Var2, "HT_FMF_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 425;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 127:
			StringCopy(&Var2, "HT_FMF_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 600;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 128:
			StringCopy(&Var2, "HT_FMF_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 590;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 129:
			StringCopy(&Var2, "HT_FMF_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 595;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 130:
			StringCopy(&Var2, "HT_FMF_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 555;
			iVar5 = 0;
			iVar8 = 1;
			break;
	}
	switch (iParam0)
	{
		case 131:
			StringCopy(&Var2, "HE_FMF_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 1060;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 132:
			StringCopy(&Var2, "HE_FMF_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 1400;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 133:
			StringCopy(&Var2, "HE_FMF_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 1315;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 134:
			StringCopy(&Var2, "HE_FMF_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 1230;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 135:
			StringCopy(&Var2, "HE_FMF_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 1145;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 136:
			StringCopy(&Var2, "HE_FMF_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 8450;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 137:
			StringCopy(&Var2, "HE_FMF_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 675;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 138:
			StringCopy(&Var2, "HE_FMF_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 8750;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 139:
			StringCopy(&Var2, "HE_FMF_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 975;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 140:
			StringCopy(&Var2, "HE_FMF_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 750;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 141:
			StringCopy(&Var2, "HE_FMF_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 865;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 142:
			StringCopy(&Var2, "HE_FMF_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 890;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 143:
			StringCopy(&Var2, "HE_FMF_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 730;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 144:
			StringCopy(&Var2, "HE_FMF_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 650;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 145:
			StringCopy(&Var2, "HE_FMF_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 645;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 146:
			StringCopy(&Var2, "HE_FMF_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 755;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 147:
			StringCopy(&Var2, "HE_FMF_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 13850;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 148:
			StringCopy(&Var2, "HE_FMF_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 2900;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 149:
			StringCopy(&Var2, "HE_FMF_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 2895;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 150:
			StringCopy(&Var2, "HE_FMF_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 12500;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 151:
			StringCopy(&Var2, "HE_FMF_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 15000;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 152:
			StringCopy(&Var2, "HE_FMF_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 14750;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 153:
			StringCopy(&Var2, "HE_FMF_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 13150;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 154:
			StringCopy(&Var2, "HE_FMF_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 2925;
			iVar5 = 0;
			iVar8 = 2;
			break;
	}
	switch (iParam0)
	{
		case 155:
			StringCopy(&Var2, "G_FMF_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 156:
			StringCopy(&Var2, "G_FMF_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 157:
			StringCopy(&Var2, "G_FMF_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 158:
			StringCopy(&Var2, "G_FMF_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 159:
			StringCopy(&Var2, "G_FMF_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 160:
			StringCopy(&Var2, "G_FMF_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 80;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 161:
			StringCopy(&Var2, "G_FMF_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 162:
			StringCopy(&Var2, "G_FMF_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 90;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 163:
			StringCopy(&Var2, "CLO_EXF_G_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 820;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 164:
			StringCopy(&Var2, "CLO_EXF_G_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 435;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 165:
			StringCopy(&Var2, "CLO_EXF_G_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 500;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 166:
			StringCopy(&Var2, "G_FMF_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 160;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 167:
			StringCopy(&Var2, "G_FMF_1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 165;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 168:
			StringCopy(&Var2, "G_FMF_1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 170;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 169:
			StringCopy(&Var2, "G_FMF_1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 135;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 170:
			StringCopy(&Var2, "G_FMF_1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 120;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 171:
			StringCopy(&Var2, "G_FMF_1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 172:
			StringCopy(&Var2, "G_FMF_1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 173:
			StringCopy(&Var2, "G_FMF_1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 130;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 174:
			StringCopy(&Var2, "CLO_EXF_G_1_8", 16);
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 970;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 175:
			StringCopy(&Var2, "CLO_EXF_G_1_9", 16);
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 585;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 176:
			StringCopy(&Var2, "CLO_EXF_G_1_10", 16);
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 650;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "G_FMF_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 180;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "G_FMF_2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "G_FMF_2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 115;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "G_FMF_2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 120;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "G_FMF_2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 595;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "G_FMF_2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 160;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "G_FMF_2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 545;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "G_FMF_2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 590;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "CLO_EXF_G_2_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 1125;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "CLO_EXF_G_2_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 740;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "CLO_EXF_G_2_10", 16);
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 805;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "G_FMF_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 6250;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "G_FMF_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 4065;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "G_FMF_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 3585;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "G_FMF_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 4075;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "G_FMF_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 4935;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "G_FMF_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 130;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "G_FMF_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 5600;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "G_FMF_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 4790;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "CLO_EXF_G_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 2315;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "CLO_EXF_G_3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 1930;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "CLO_EXF_G_3_10", 16);
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 1995;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "G_FMF_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 2245;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "G_FMF_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 250;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "G_FMF_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 210;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "G_FMF_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 245;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "G_FMF_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 1205;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "G_FMF_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 205;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "G_FMF_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 2215;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "G_FMF_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 215;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "CLO_EXF_G_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 2835;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "CLO_EXF_G_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 2450;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 209:
			StringCopy(&Var2, "CLO_EXF_G_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 2515;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 210:
			StringCopy(&Var2, "G_FMF_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 211:
			StringCopy(&Var2, "G_FMF_5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 212:
			StringCopy(&Var2, "G_FMF_5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 213:
			StringCopy(&Var2, "G_FMF_5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 214:
			StringCopy(&Var2, "G_FMF_5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 215:
			StringCopy(&Var2, "G_FMF_5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 216:
			StringCopy(&Var2, "G_FMF_5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 217:
			StringCopy(&Var2, "G_FMF_5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 218:
			StringCopy(&Var2, "G_FMF_5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 219:
			StringCopy(&Var2, "G_FMF_5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 220:
			StringCopy(&Var2, "G_FMF_5_10", 16);
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 221:
			StringCopy(&Var2, "G_FMF_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 5000;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 222:
			StringCopy(&Var2, "G_FMF_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "G_FMF_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 224:
			StringCopy(&Var2, "G_FMF_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 225:
			StringCopy(&Var2, "G_FMF_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 226:
			StringCopy(&Var2, "G_FMF_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 227:
			StringCopy(&Var2, "G_FMF_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 228:
			StringCopy(&Var2, "G_FMF_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 229:
			StringCopy(&Var2, "CLO_EXF_G_6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 2820;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "CLO_EXF_G_6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 2435;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "CLO_EXF_G_6_10", 16);
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 2500;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "G_FMF_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 4815;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "G_FMF_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 4795;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "G_FMF_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 4305;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "G_FMF_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 4305;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "G_FMF_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 4965;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "G_FMF_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 480;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "G_FMF_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 465;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "G_FMF_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 4320;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "CLO_EXF_G_7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 2390;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "CLO_EXF_G_7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 2005;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "CLO_EXF_G_7_10", 16);
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 2070;
			iVar5 = 1;
			iVar8 = 3;
			break;
	}
	switch (iParam0)
	{
		case 243:
			StringCopy(&Var2, "G_FMF_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "G_FMF_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 245:
			StringCopy(&Var2, "G_FMF_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 246:
			StringCopy(&Var2, "G_FMF_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 247:
			StringCopy(&Var2, "G_FMF_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 248:
			StringCopy(&Var2, "G_FMF_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 249:
			StringCopy(&Var2, "G_FMF_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 250:
			StringCopy(&Var2, "G_FMF_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 251:
			StringCopy(&Var2, "CLO_EXF_G_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 645;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "CLO_EXF_G_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 260;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "CLO_EXF_G_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 325;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "G_FMF_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 70;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "G_FMF_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 60;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "G_FMF_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "G_FMF_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 570;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "G_FMF_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 525;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "G_FMF_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "G_FMF_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 261:
			StringCopy(&Var2, "G_FMF_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 90;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 262:
			StringCopy(&Var2, "CLO_EXF_G_9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 645;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 263:
			StringCopy(&Var2, "CLO_EXF_G_9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 260;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 264:
			StringCopy(&Var2, "CLO_EXF_G_9_10", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 325;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 265:
			StringCopy(&Var2, "G_FMF_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 4065;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 266:
			StringCopy(&Var2, "G_FMF_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 267:
			StringCopy(&Var2, "G_FMF_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 268:
			StringCopy(&Var2, "G_FMF_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 4275;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 269:
			StringCopy(&Var2, "G_FMF_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 270:
			StringCopy(&Var2, "G_FMF_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 80;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 271:
			StringCopy(&Var2, "G_FMF_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 272:
			StringCopy(&Var2, "G_FMF_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 90;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 273:
			StringCopy(&Var2, "CLO_EXF_G_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 2315;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 274:
			StringCopy(&Var2, "CLO_EXF_G_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 1930;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 275:
			StringCopy(&Var2, "CLO_EXF_G_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 1995;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 276:
			StringCopy(&Var2, "G_FMF_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 3660;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 277:
			StringCopy(&Var2, "G_FMF_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 4165;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 278:
			StringCopy(&Var2, "G_FMF_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 3670;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 279:
			StringCopy(&Var2, "G_FMF_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 135;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 280:
			StringCopy(&Var2, "G_FMF_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 3620;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 281:
			StringCopy(&Var2, "G_FMF_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 3610;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 282:
			StringCopy(&Var2, "G_FMF_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 4140;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 283:
			StringCopy(&Var2, "G_FMF_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 130;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 284:
			StringCopy(&Var2, "G_FMF_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 285:
			StringCopy(&Var2, "G_FMF_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 286:
			StringCopy(&Var2, "G_FMF_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 287:
			StringCopy(&Var2, "G_FMF_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 288:
			StringCopy(&Var2, "G_FMF_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 289:
			StringCopy(&Var2, "G_FMF_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 290:
			StringCopy(&Var2, "G_FMF_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 291:
			StringCopy(&Var2, "G_FMF_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 292:
			StringCopy(&Var2, "G_FMF_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 293:
			StringCopy(&Var2, "G_FMF_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 294:
			StringCopy(&Var2, "G_FMF_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 295:
			StringCopy(&Var2, "G_FMF_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 296:
			StringCopy(&Var2, "G_FMF_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 297:
			StringCopy(&Var2, "G_FMF_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 298:
			StringCopy(&Var2, "G_FMF_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 299:
			StringCopy(&Var2, "G_FMF_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 300:
			StringCopy(&Var2, "G_FMF_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 325;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 301:
			StringCopy(&Var2, "G_FMF_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 302:
			StringCopy(&Var2, "G_FMF_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 115;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 303:
			StringCopy(&Var2, "G_FMF_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 120;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 304:
			StringCopy(&Var2, "G_FMF_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 135;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 305:
			StringCopy(&Var2, "G_FMF_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 306:
			StringCopy(&Var2, "G_FMF_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 115;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 307:
			StringCopy(&Var2, "G_FMF_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 120;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 308:
			StringCopy(&Var2, "CLO_EXF_G_14_8", 16);
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 1490;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 309:
			StringCopy(&Var2, "CLO_EXF_G_14_9", 16);
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 1105;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 310:
			StringCopy(&Var2, "CLO_EXF_G_14_10", 16);
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 1170;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 311:
			StringCopy(&Var2, "G_FMF_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 312:
			StringCopy(&Var2, "G_FMF_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 313:
			StringCopy(&Var2, "G_FMF_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 314:
			StringCopy(&Var2, "G_FMF_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 315:
			StringCopy(&Var2, "G_FMF_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 316:
			StringCopy(&Var2, "G_FMF_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 317:
			StringCopy(&Var2, "G_FMF_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 318:
			StringCopy(&Var2, "G_FMF_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 319:
			StringCopy(&Var2, "W_FMF_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 320:
			StringCopy(&Var2, "W_FMF_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 321:
			StringCopy(&Var2, "W_FMF_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 322:
			StringCopy(&Var2, "W_FMF_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 323:
			StringCopy(&Var2, "W_FMF_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 825;
			iVar5 = 6;
			iVar8 = 4;
			break;
		
		case 324:
			StringCopy(&Var2, "W_FMF_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 325:
			StringCopy(&Var2, "W_FMF_1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 326:
			StringCopy(&Var2, "W_FMF_1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
	}
	if (iVar8 == 1)
	{
		iVar9 = (iParam0 - 10);
		if (iVar9 >= 0 && iVar9 < 121)
		{
			if (iVar9 > 8)
			{
				iVar9 = (iVar9 - 1);
			}
			iVar1 = round(((to_float(iVar1) * Global_262145.f_2043[iVar9]) * Global_294258.f_26));
		}
	}
	else if (iVar8 == 2)
	{
		iVar10 = (iParam0 - 131);
		if (iVar10 >= 0 && iVar10 < 24)
		{
			iVar1 = round(((to_float(iVar1) * Global_262145.f_2164[iVar10]) * Global_294258.f_27));
		}
	}
	else if (iVar8 == 3)
	{
		iVar11 = (iParam0 - 155);
		if (iVar11 >= 0 && iVar11 < 128)
		{
			iVar1 = round(((to_float(iVar1) * Global_262145.f_2189[iVar11]) * Global_294258.f_56));
		}
	}
	else if (iVar8 == 4)
	{
		iVar12 = (iParam0 - 319);
		if (iVar12 >= 0 && iVar12 < 10)
		{
			iVar1 = round(((to_float(iVar1) * Global_262145.f_2318[iVar12]) * Global_294258.f_28));
		}
	}
	if (iParam0 >= 327)
	{
		Global_77663[0 /*14*/].f_5 = 4;
		func_952(iVar7, iParam0, 327, iParam1);
		if (Global_77663[0 /*14*/].f_7 > 0)
		{
			if (unk_0x036D1EA7243F2CCC(Global_2883588, joaat("HAT"), 1))
			{
				Global_77663[0 /*14*/].f_7 = round((to_float(Global_77663[0 /*14*/].f_7) * Global_294258.f_26));
			}
			else if (unk_0x036D1EA7243F2CCC(Global_2883588, joaat("GLASSES"), 1))
			{
				Global_77663[0 /*14*/].f_7 = round((to_float(Global_77663[0 /*14*/].f_7) * Global_294258.f_56));
			}
			else if (unk_0x036D1EA7243F2CCC(Global_2883588, joaat("WATCH"), 1))
			{
				Global_77663[0 /*14*/].f_7 = round((to_float(Global_77663[0 /*14*/].f_7) * Global_294258.f_28));
			}
		}
	}
	else
	{
		func_942(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_957(int iParam0, int iParam1)
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
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "D_FMM_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 2:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 3:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 4:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 5:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		default:
			Global_77663[0 /*14*/].f_5 = 4;
			func_952(iVar7, iParam0, 6, iParam1);
			return;
			break;
	}
	func_942(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_958(int iParam0, int iParam1)
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
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			if (Global_262145.f_4140 != -1)
			{
				iVar1 = Global_262145.f_4140;
			}
			else
			{
				iVar1 = 310;
			}
			break;
		
		case 2:
			iVar3 = 1;
			iVar4 = 1;
			if (Global_262145.f_4141 != -1)
			{
				iVar1 = Global_262145.f_4141;
			}
			else
			{
				iVar1 = 125;
			}
			break;
		
		case 3:
			iVar3 = 1;
			iVar4 = 2;
			if (Global_262145.f_4142 != -1)
			{
				iVar1 = Global_262145.f_4142;
			}
			else
			{
				iVar1 = 145;
			}
			break;
		
		case 4:
			iVar3 = 1;
			iVar4 = 3;
			if (Global_262145.f_4143 != -1)
			{
				iVar1 = Global_262145.f_4143;
			}
			else
			{
				iVar1 = 130;
			}
			break;
		
		case 5:
			iVar3 = 1;
			iVar4 = 4;
			if (Global_262145.f_4144 != -1)
			{
				iVar1 = Global_262145.f_4144;
			}
			else
			{
				iVar1 = 265;
			}
			break;
		
		case 6:
			iVar3 = 1;
			iVar4 = 5;
			if (Global_262145.f_4145 != -1)
			{
				iVar1 = Global_262145.f_4145;
			}
			else
			{
				iVar1 = 280;
			}
			break;
		
		case 7:
			iVar3 = 2;
			iVar4 = 0;
			if (Global_262145.f_4146 != -1)
			{
				iVar1 = Global_262145.f_4146;
			}
			else
			{
				iVar1 = 295;
			}
			break;
		
		case 8:
			iVar3 = 2;
			iVar4 = 1;
			if (Global_262145.f_4147 != -1)
			{
				iVar1 = Global_262145.f_4147;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 9:
			iVar3 = 2;
			iVar4 = 2;
			if (Global_262145.f_4148 != -1)
			{
				iVar1 = Global_262145.f_4148;
			}
			else
			{
				iVar1 = 85;
			}
			break;
		
		case 10:
			iVar3 = 2;
			iVar4 = 3;
			if (Global_262145.f_4149 != -1)
			{
				iVar1 = Global_262145.f_4149;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 11:
			iVar3 = 2;
			iVar4 = 4;
			if (Global_262145.f_4150 != -1)
			{
				iVar1 = Global_262145.f_4150;
			}
			else
			{
				iVar1 = 105;
			}
			break;
		
		case 12:
			iVar3 = 2;
			iVar4 = 5;
			if (Global_262145.f_4151 != -1)
			{
				iVar1 = Global_262145.f_4151;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 13:
			iVar3 = 3;
			iVar4 = 0;
			if (Global_262145.f_4152 != -1)
			{
				iVar1 = Global_262145.f_4152;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 14:
			iVar3 = 3;
			iVar4 = 1;
			if (Global_262145.f_4153 != -1)
			{
				iVar1 = Global_262145.f_4153;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 15:
			iVar3 = 3;
			iVar4 = 2;
			if (Global_262145.f_4154 != -1)
			{
				iVar1 = Global_262145.f_4154;
			}
			else
			{
				iVar1 = 30;
			}
			break;
		
		case 16:
			iVar3 = 3;
			iVar4 = 3;
			if (Global_262145.f_4155 != -1)
			{
				iVar1 = Global_262145.f_4155;
			}
			else
			{
				iVar1 = 40;
			}
			break;
		
		case 17:
			iVar3 = 3;
			iVar4 = 4;
			if (Global_262145.f_4156 != -1)
			{
				iVar1 = Global_262145.f_4156;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 18:
			iVar3 = 3;
			iVar4 = 5;
			if (Global_262145.f_4157 != -1)
			{
				iVar1 = Global_262145.f_4157;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 19:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 21:
			iVar3 = 4;
			iVar4 = 2;
			if (Global_262145.f_4158 != -1)
			{
				iVar1 = Global_262145.f_4158;
			}
			else
			{
				iVar1 = 355;
			}
			break;
		
		case 22:
			iVar3 = 4;
			iVar4 = 3;
			if (Global_262145.f_4159 != -1)
			{
				iVar1 = Global_262145.f_4159;
			}
			else
			{
				iVar1 = 370;
			}
			break;
		
		case 23:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 24:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 25:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 26:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 28:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar3 = 5;
			iVar4 = 4;
			if (Global_262145.f_4160 != -1)
			{
				iVar1 = Global_262145.f_4160;
			}
			else
			{
				iVar1 = 110;
			}
			break;
		
		case 30:
			iVar3 = 5;
			iVar4 = 5;
			if (Global_262145.f_4161 != -1)
			{
				iVar1 = Global_262145.f_4161;
			}
			else
			{
				iVar1 = 160;
			}
			break;
		
		case 31:
			iVar3 = 6;
			iVar4 = 0;
			if (Global_262145.f_4162 != -1)
			{
				iVar1 = Global_262145.f_4162;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 32:
			iVar3 = 6;
			iVar4 = 1;
			if (Global_262145.f_4163 != -1)
			{
				iVar1 = Global_262145.f_4163;
			}
			else
			{
				iVar1 = 190;
			}
			break;
		
		case 33:
			iVar3 = 6;
			iVar4 = 2;
			if (Global_262145.f_4164 != -1)
			{
				iVar1 = Global_262145.f_4164;
			}
			else
			{
				iVar1 = 235;
			}
			break;
		
		case 34:
			iVar3 = 6;
			iVar4 = 3;
			if (Global_262145.f_4165 != -1)
			{
				iVar1 = Global_262145.f_4165;
			}
			else
			{
				iVar1 = 220;
			}
			break;
		
		case 35:
			iVar3 = 6;
			iVar4 = 4;
			if (Global_262145.f_4166 != -1)
			{
				iVar1 = Global_262145.f_4166;
			}
			else
			{
				iVar1 = 250;
			}
			break;
		
		case 36:
			iVar3 = 6;
			iVar4 = 5;
			if (Global_262145.f_4167 != -1)
			{
				iVar1 = Global_262145.f_4167;
			}
			else
			{
				iVar1 = 205;
			}
			break;
		
		case 37:
			iVar3 = 7;
			iVar4 = 0;
			if (Global_262145.f_4168 != -1)
			{
				iVar1 = Global_262145.f_4168;
			}
			else
			{
				iVar1 = 445;
			}
			break;
		
		case 38:
			iVar3 = 7;
			iVar4 = 1;
			if (Global_262145.f_4169 != -1)
			{
				iVar1 = Global_262145.f_4169;
			}
			else
			{
				iVar1 = 175;
			}
			break;
		
		case 39:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 49:
			iVar3 = 9;
			iVar4 = 0;
			if (Global_262145.f_4170 != -1)
			{
				iVar1 = Global_262145.f_4170;
			}
			else
			{
				iVar1 = 340;
			}
			break;
		
		case 50:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 51:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 52:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 53:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		default:
			Global_77663[0 /*14*/].f_5 = 4;
			func_952(iVar7, iParam0, 55, iParam1);
			if (Global_77663[0 /*14*/].f_7 > 0)
			{
				Global_77663[0 /*14*/].f_7 = round((to_float(Global_77663[0 /*14*/].f_7) * Global_294258.f_58));
			}
			return;
			break;
	}
	iVar1 = round((to_float(iVar1) * Global_294258.f_58));
	StringCopy(&Var2, "T_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	func_942(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_959(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 965;
			break;
		
		case 2:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 960;
			break;
		
		case 3:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 9500;
			break;
		
		case 4:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 975;
			break;
		
		case 5:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 1185;
			break;
		
		case 6:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 15000;
			break;
		
		case 7:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 1115;
			break;
		
		case 8:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 1105;
			break;
		
		case 9:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 25000;
			break;
		
		case 10:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 510;
			break;
		
		case 11:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 530;
			break;
		
		case 12:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 5500;
			break;
		
		case 13:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 535;
			break;
		
		case 14:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 1510;
			break;
		
		case 15:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 1530;
			break;
		
		case 16:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 14500;
			break;
		
		case 17:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 13000;
			break;
		
		case 18:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 8000;
			break;
		
		case 19:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 1265;
			break;
		
		case 20:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 8500;
			break;
		
		case 21:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 1210;
			break;
		
		case 22:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 2360;
			break;
		
		case 23:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 22500;
			break;
		
		case 24:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 2375;
			break;
		
		case 25:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 2485;
			break;
		
		default:
			Global_77663[0 /*14*/].f_5 = 4;
			func_952(iVar7, iParam0, 26, iParam1);
			if (Global_77663[0 /*14*/].f_7 > 0)
			{
				Global_77663[0 /*14*/].f_7 = round((to_float(Global_77663[0 /*14*/].f_7) * Global_294258.f_29));
			}
			return;
			break;
	}
	StringCopy(&Var2, "M_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	iVar8 = (iParam0 - 1);
	if (iVar8 >= 0 && iVar8 < 26)
	{
		iVar1 = round(((to_float(iVar1) * Global_262145.f_2016[iVar8]) * Global_294258.f_29));
	}
	func_942(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_960(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 1765;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 760;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 760;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 765;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 85;
			break;
		
		case 17:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 80;
			break;
		
		case 18:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 90;
			break;
		
		case 19:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 90;
			break;
		
		case 20:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 95;
			break;
		
		case 21:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 100;
			break;
		
		case 22:
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 60;
			break;
		
		case 23:
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 55;
			break;
		
		case 24:
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 100;
			break;
		
		case 25:
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 1255;
			break;
		
		case 26:
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 65;
			break;
		
		case 27:
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 1050;
			break;
		
		case 28:
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 1895;
			break;
		
		case 29:
			iVar3 = 1;
			iVar4 = 13;
			iVar1 = 185;
			break;
		
		case 30:
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 190;
			break;
		
		case 31:
			iVar3 = 1;
			iVar4 = 15;
			iVar1 = 115;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 415;
			break;
		
		case 33:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 34:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 135;
			break;
		
		case 35:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 125;
			break;
		
		case 36:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 105;
			break;
		
		case 37:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 130;
			break;
		
		case 38:
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 3530;
			break;
		
		case 39:
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 2610;
			break;
		
		case 40:
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 1295;
			break;
		
		case 41:
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 120;
			break;
		
		case 42:
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 160;
			break;
		
		case 43:
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 160;
			break;
		
		case 44:
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 145;
			break;
		
		case 45:
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 105;
			break;
		
		case 46:
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 115;
			break;
		
		case 47:
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 150;
			break;
		
		case 48:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 540;
			break;
		
		case 49:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 50:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 51:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 120;
			break;
		
		case 52:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 460;
			break;
		
		case 53:
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 120;
			break;
		
		case 54:
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 55:
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 415;
			break;
		
		case 56:
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 135;
			break;
		
		case 57:
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 140;
			break;
		
		case 58:
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 160;
			break;
		
		case 59:
			iVar3 = 3;
			iVar4 = 11;
			iVar1 = 120;
			break;
		
		case 60:
			iVar3 = 3;
			iVar4 = 12;
			iVar1 = 1025;
			break;
		
		case 61:
			iVar3 = 3;
			iVar4 = 13;
			iVar1 = 1560;
			break;
		
		case 62:
			iVar3 = 3;
			iVar4 = 14;
			iVar1 = 145;
			break;
		
		case 63:
			iVar3 = 3;
			iVar4 = 15;
			iVar1 = 120;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 365;
			break;
		
		case 65:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 100;
			break;
		
		case 66:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 65;
			break;
		
		case 67:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 68:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 50;
			break;
		
		case 81:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 35;
			break;
		
		case 82:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 91:
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 50;
			break;
		
		case 94:
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 2395;
			break;
		
		case 97:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 3675;
			break;
		
		case 98:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 320;
			break;
		
		case 99:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 3875;
			break;
		
		case 100:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 112:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 2050;
			break;
		
		case 113:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 375;
			break;
		
		case 114:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 2105;
			break;
		
		case 115:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 345;
			break;
		
		case 116:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 380;
			break;
		
		case 117:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 340;
			break;
		
		case 118:
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 385;
			break;
		
		case 119:
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 4135;
			break;
		
		case 120:
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 370;
			break;
		
		case 121:
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 375;
			break;
		
		case 122:
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 385;
			break;
		
		case 123:
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 365;
			break;
		
		case 124:
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 325;
			break;
		
		case 125:
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 325;
			break;
		
		case 126:
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 370;
			break;
		
		case 127:
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 1025;
			break;
		
		case 129:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 390;
			break;
		
		case 130:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 400;
			break;
		
		case 131:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 390;
			break;
		
		case 132:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 365;
			break;
		
		case 133:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 410;
			break;
		
		case 134:
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 4125;
			break;
		
		case 135:
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 4365;
			break;
		
		case 136:
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 5365;
			break;
		
		case 137:
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 6225;
			break;
		
		case 138:
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 3755;
			break;
		
		case 139:
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 405;
			break;
		
		case 140:
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 4115;
			break;
		
		case 141:
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 2240;
			break;
		
		case 142:
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 3850;
			break;
		
		case 143:
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 3110;
			break;
		
		case 144:
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 1950;
			break;
		
		case 145:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 455;
			break;
		
		case 146:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 405;
			break;
		
		case 147:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 410;
			break;
		
		case 148:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 149:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 150:
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 151:
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 152:
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 153:
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 154:
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 155:
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 415;
			break;
		
		case 156:
			iVar3 = 9;
			iVar4 = 12;
			iVar1 = 4425;
			break;
		
		case 157:
			iVar3 = 9;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 158:
			iVar3 = 9;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 159:
			iVar3 = 9;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 161:
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 65;
			break;
		
		case 162:
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 85;
			break;
		
		case 163:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 75;
			break;
		
		case 164:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 176:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 177:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 360;
			break;
		
		case 178:
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 135;
			break;
		
		case 179:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 175;
			break;
		
		case 180:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 187:
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 188:
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 192:
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 193:
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 197:
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 198:
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 200:
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 201:
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 202:
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 205:
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 675;
			break;
		
		case 209:
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 100;
			break;
		
		case 210:
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 400;
			break;
		
		case 211:
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 340;
			break;
		
		case 212:
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 195;
			break;
		
		case 213:
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 215;
			break;
		
		case 214:
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 215:
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 165;
			break;
		
		case 216:
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 100;
			break;
		
		case 217:
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 1040;
			break;
		
		case 218:
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 100;
			break;
		
		case 219:
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 120;
			break;
		
		case 220:
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 210;
			break;
		
		case 221:
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 205;
			break;
		
		case 222:
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 200;
			break;
		
		case 223:
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 100;
			break;
		
		case 224:
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 1420;
			break;
		
		case 225:
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 445;
			break;
		
		case 226:
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 435;
			break;
		
		case 227:
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 420;
			break;
		
		case 228:
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 425;
			break;
		
		case 229:
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 435;
			break;
		
		case 230:
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 425;
			break;
		
		case 231:
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 430;
			break;
		
		case 232:
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 3215;
			break;
		
		case 233:
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 3320;
			break;
		
		case 234:
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 440;
			break;
		
		case 235:
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 440;
			break;
		
		case 236:
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 445;
			break;
		
		case 237:
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 450;
			break;
		
		case 238:
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 450;
			break;
		
		case 239:
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 1255;
			break;
		
		case 240:
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 750;
			break;
		
		case 241:
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 165;
			break;
		
		case 242:
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 460;
			break;
		
		case 243:
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 190;
			break;
		
		case 244:
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 195;
			break;
		
		case 245:
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 200;
			break;
		
		case 246:
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 205;
			break;
		
		case 247:
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 210;
			break;
		
		case 248:
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 215;
			break;
		
		case 249:
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 220;
			break;
		
		case 250:
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 455;
			break;
		
		case 251:
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 175;
			break;
		
		case 252:
			iVar3 = 15;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 253:
			iVar3 = 15;
			iVar4 = 13;
			iVar1 = 790;
			break;
		
		case 254:
			iVar3 = 15;
			iVar4 = 14;
			iVar1 = 175;
			break;
		
		case 255:
			iVar3 = 15;
			iVar4 = 15;
			iVar1 = 190;
			break;
	}
	StringCopy(&Var2, "F_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	iVar8 = iParam0;
	if (iVar8 >= 0 && iVar8 < 256)
	{
		iVar1 = round(((to_float(iVar1) * Global_262145.f_1759[iVar8]) * Global_294258.f_25));
	}
	if (iParam0 >= 256)
	{
		Global_77663[0 /*14*/].f_5 = 4;
		func_952(iVar7, iParam0, 256, iParam1);
		if (Global_77663[0 /*14*/].f_7 > 0)
		{
			Global_77663[0 /*14*/].f_7 = round((to_float(Global_77663[0 /*14*/].f_7) * Global_294258.f_25));
		}
	}
	else
	{
		func_942(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_961(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 270;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 450;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 4875;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 1760;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 1090;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 2465;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 305;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 290;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 410;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 255;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 255;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 405;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 5000;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 4480;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 4335;
			break;
	}
	switch (iParam0)
	{
		case 16:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 375;
			break;
		
		case 17:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 265;
			break;
		
		case 18:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 275;
			break;
		
		case 19:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 280;
			break;
		
		case 20:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 300;
			break;
		
		case 21:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 265;
			break;
		
		case 22:
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 255;
			break;
		
		case 23:
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 250;
			break;
		
		case 24:
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 260;
			break;
		
		case 25:
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 250;
			break;
		
		case 26:
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 225;
			break;
		
		case 27:
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 230;
			break;
		
		case 28:
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 215;
			break;
		
		case 29:
			iVar3 = 1;
			iVar4 = 13;
			iVar1 = 650;
			break;
		
		case 30:
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 425;
			break;
		
		case 31:
			iVar3 = 1;
			iVar4 = 15;
			iVar1 = 345;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 33:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 110;
			break;
		
		case 34:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 250;
			break;
		
		case 35:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 39:
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 290;
			break;
		
		case 49:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 50:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 135;
			break;
		
		case 51:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 125;
			break;
		
		case 52:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 120;
			break;
		
		case 53:
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 130;
			break;
		
		case 54:
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 110;
			break;
		
		case 55:
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 525;
			break;
		
		case 56:
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 115;
			break;
		
		case 57:
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 535;
			break;
		
		case 58:
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 135;
			break;
		
		case 59:
			iVar3 = 3;
			iVar4 = 11;
			iVar1 = 120;
			break;
		
		case 60:
			iVar3 = 3;
			iVar4 = 12;
			iVar1 = 130;
			break;
		
		case 61:
			iVar3 = 3;
			iVar4 = 13;
			iVar1 = 140;
			break;
		
		case 62:
			iVar3 = 3;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 63:
			iVar3 = 3;
			iVar4 = 15;
			iVar1 = 520;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 215;
			break;
		
		case 65:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 220;
			break;
		
		case 66:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 225;
			break;
		
		case 67:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 245;
			break;
		
		case 68:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 215;
			break;
		
		case 69:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 630;
			break;
		
		case 70:
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 250;
			break;
		
		case 71:
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 260;
			break;
		
		case 72:
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 200;
			break;
		
		case 73:
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 225;
			break;
		
		case 74:
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 230;
			break;
		
		case 75:
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 725;
			break;
		
		case 76:
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 650;
			break;
		
		case 77:
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 230;
			break;
		
		case 78:
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 230;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 280;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 81:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 82:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 330;
			break;
		
		case 89:
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 320;
			break;
		
		case 95:
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 315;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 97:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 535;
			break;
		
		case 98:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 530;
			break;
		
		case 99:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 890;
			break;
		
		case 113:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 440;
			break;
		
		case 114:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 455;
			break;
		
		case 115:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 116:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 117:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 118:
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 119:
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 120:
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 121:
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 122:
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 123:
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 124:
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 125:
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 295;
			break;
		
		case 129:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 180;
			break;
		
		case 130:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 131:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 132:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 155;
			break;
		
		case 133:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 134:
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 205;
			break;
		
		case 135:
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 150;
			break;
		
		case 136:
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 950;
			break;
		
		case 137:
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 580;
			break;
		
		case 138:
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 200;
			break;
		
		case 139:
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 665;
			break;
		
		case 140:
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 780;
			break;
		
		case 141:
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 615;
			break;
		
		case 143:
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 250;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 495;
			break;
		
		case 145:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 435;
			break;
		
		case 146:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 420;
			break;
		
		case 147:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 485;
			break;
		
		case 149:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 380;
			break;
		
		case 150:
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 1295;
			break;
		
		case 151:
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 1135;
			break;
		
		case 152:
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 1425;
			break;
		
		case 153:
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 1645;
			break;
		
		case 154:
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 1925;
			break;
		
		case 155:
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 2250;
			break;
		
		case 156:
			iVar3 = 9;
			iVar4 = 12;
			iVar1 = 365;
			break;
		
		case 157:
			iVar3 = 9;
			iVar4 = 13;
			iVar1 = 360;
			break;
		
		case 158:
			iVar3 = 9;
			iVar4 = 14;
			iVar1 = 2245;
			break;
		
		case 159:
			iVar3 = 9;
			iVar4 = 15;
			iVar1 = 2170;
			break;
		
		case 160:
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 50;
			break;
		
		case 161:
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 100;
			break;
		
		case 162:
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 65;
			break;
		
		case 163:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 275;
			break;
		
		case 177:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 300;
			break;
		
		case 178:
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 145;
			break;
		
		case 179:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 180:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 110;
			break;
		
		case 181:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 95;
			break;
		
		case 182:
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 155;
			break;
		
		case 183:
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 155;
			break;
		
		case 184:
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 510;
			break;
		
		case 185:
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 165;
			break;
		
		case 186:
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 465;
			break;
		
		case 187:
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 250;
			break;
		
		case 188:
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 110;
			break;
		
		case 189:
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 470;
			break;
		
		case 190:
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 480;
			break;
		
		case 191:
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 155;
			break;
		
		case 192:
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 275;
			break;
		
		case 193:
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 395;
			break;
		
		case 194:
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 285;
			break;
		
		case 195:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 560;
			break;
		
		case 196:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 595;
			break;
		
		case 197:
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 295;
			break;
		
		case 198:
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 230;
			break;
		
		case 199:
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 215;
			break;
		
		case 200:
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 270;
			break;
		
		case 201:
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 295;
			break;
		
		case 202:
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 285;
			break;
		
		case 203:
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 215;
			break;
		
		case 204:
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 210;
			break;
		
		case 205:
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 290;
			break;
		
		case 206:
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 230;
			break;
		
		case 207:
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 215;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 209:
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 210:
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 211:
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 218:
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 220:
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 221:
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 222:
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 223:
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 224:
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 90;
			break;
		
		case 225:
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 105;
			break;
		
		case 226:
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 227:
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 228:
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 229:
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 230:
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 231:
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 232:
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 100;
			break;
		
		case 233:
			iVar3 = 14;
			iVar4 = 9;
			break;
}