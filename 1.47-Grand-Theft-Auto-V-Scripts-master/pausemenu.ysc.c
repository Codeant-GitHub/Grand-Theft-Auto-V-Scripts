#region Local Var
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void __EntryFunction__()
{
	switch (ScriptParam_0)
	{
		case 3:
			while (true)
			{
				wait(5000);
			}
			break;
		
		case 2:
			if (ScriptParam_0.f_1 == -1029820160)
			{
			}
			break;
		
		case 0:
		case 1:
			if (ScriptParam_0.f_1 == -1931845307)
			{
				func_2(1, 0, -1029819160, 0, 1, "PM_PANE_AUD");
				func_2(1, 1, -1029819160, 1, 0, "PM_PANE_DIS");
				func_1(1);
			}
			if (ScriptParam_0.f_1 == -1029820160)
			{
			}
			break;
	}
	unk_0x5894DC159447E10A();
}

void func_1(int iParam0)
{
	if (unk_0xF0508C5B5E0B2722("DISPLAY_DATA_SLOT"))
	{
		unk_0x4D9DA18AB3C2A466(iParam0);
		unk_0x818901B332D5541D();
	}
}

void func_2(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, char* sParam5)
{
	if (unk_0xF0508C5B5E0B2722("SET_DATA_SLOT"))
	{
		unk_0x4D9DA18AB3C2A466(iParam0);
		unk_0x4D9DA18AB3C2A466(iParam1);
		unk_0x4D9DA18AB3C2A466(iParam2);
		unk_0x4D9DA18AB3C2A466(iParam3);
		unk_0x4D9DA18AB3C2A466(0);
		unk_0x4D9DA18AB3C2A466(0);
		if (bParam4)
		{
			unk_0x4D9DA18AB3C2A466(1);
		}
		else
		{
			unk_0x4D9DA18AB3C2A466(0);
		}
		func_3(sParam5);
		unk_0x818901B332D5541D();
	}
}

void func_3(char* sParam0)
{
	unk_0x713FEBE56D2BD403(sParam0);
	unk_0x36F3AA9FFAAF8606();
}

