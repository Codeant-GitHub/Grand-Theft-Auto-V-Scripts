#region Local Var
	int iLocal_0 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 5;
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
	if (unk_0x1BCDA92AD0A7835B(joaat("wp_partyboombox")) > 1)
	{
		unk_0x5894DC159447E10A();
	}
	if (unk_0x9EC5BDC006623C42(18))
	{
		func_1();
	}
	while (true)
	{
		wait(0);
		if (!unk_0xA80721FDC3BDCCDB())
		{
			iLocal_0 = 3;
		}
		switch (iLocal_0)
		{
			case 0:
				if (unk_0x13348E86D5B8A052() >= 22 || unk_0x13348E86D5B8A052() <= 4)
				{
					iLocal_0 = 1;
				}
				else
				{
					func_1();
				}
				break;
			
			case 1:
				if (!unk_0x00771EA747B50636("ID2_21_G_Night"))
				{
					unk_0x7E3B06742E797067("ID2_21_G_Night");
					iLocal_0 = 2;
				}
				break;
			
			case 2:
				break;
			
			case 3:
				if (!unk_0xE980BAFD70E8A4B3() && !unk_0x71EC91BA8C88BCE0())
				{
					func_1();
				}
				break;
		}
	}
}

void func_1()
{
	if (unk_0x00771EA747B50636("ID2_21_G_Night"))
	{
		unk_0xCA569B59B8B12D63("ID2_21_G_Night");
	}
	unk_0x5894DC159447E10A();
}

