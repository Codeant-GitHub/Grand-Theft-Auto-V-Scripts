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
	vector3 vLocal_19[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_20[2] = { 0f, 0f };
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
	if (unk_0x9EC5BDC006623C42(3))
	{
		func_1();
	}
	unk_0xC48A4BABDFAAB2B9(1);
	unk_0xB815670C37E03CDE(joaat("cuban800"));
	while (!unk_0x5D98D654CDC2165A(joaat("cuban800")))
	{
		wait(0);
	}
	vLocal_19[0 /*3*/] = { 1169.976f, 3592.572f, 32.6481f };
	vLocal_19[1 /*3*/] = { 1215.738f, 3586.608f, 33.5131f };
	fLocal_20[0] = 277.7043f;
	fLocal_20[1] = 77.1113f;
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		unk_0xBEADAF07D2339505(unk_0x33CD235DF1E6A94E(), 1220.202f, 3596.281f, 33.259f, 1, false, 0, 1);
	}
	unk_0x340F713A0F70CAE2(1220.202f, 3596.281f, 33.259f);
	iLocal_18 = unk_0xC651C43AB13A15E5(joaat("cuban800"), vLocal_19[0 /*3*/], fLocal_20[0], true, true, false);
	unk_0x1B2303F9DC2D90D5(iLocal_18, 1084227584);
	unk_0x71CA80D41E1338B4(joaat("cuban800"));
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		unk_0x094626C0798AE1F8(unk_0x33CD235DF1E6A94E(), iLocal_18, -1);
	}
	while (true)
	{
		func_1();
		wait(0);
	}
}

void func_1()
{
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		unk_0x31826EF4A8BC8E9F(unk_0x33CD235DF1E6A94E());
	}
	if (unk_0x765F6FEEFF39224F(iLocal_18))
	{
		unk_0x7AC8DF0B83EB4C6B(&iLocal_18);
	}
	unk_0x71CA80D41E1338B4(joaat("cuban800"));
	unk_0x5894DC159447E10A();
}

