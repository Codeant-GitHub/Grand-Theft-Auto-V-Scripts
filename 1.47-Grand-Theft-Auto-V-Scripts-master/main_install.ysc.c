#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	iLocal_0 = -1;
	unk_0x84CFE9237092E41B();
	unk_0x7E3B06742E797067("prologue06_int");
	unk_0x7E3B06742E797067("prologue01");
	unk_0x7E3B06742E797067("prologue02");
	unk_0x7E3B06742E797067("prologue03");
	unk_0x7E3B06742E797067("prologue04");
	unk_0x7E3B06742E797067("prologue05");
	unk_0x7E3B06742E797067("prologue06");
	unk_0x7E3B06742E797067("prologuerd");
	unk_0x7E3B06742E797067("Prologue01c");
	unk_0x7E3B06742E797067("Prologue01d");
	unk_0x7E3B06742E797067("Prologue01e");
	unk_0x7E3B06742E797067("Prologue01f");
	unk_0x7E3B06742E797067("Prologue01g");
	unk_0x7E3B06742E797067("prologue01h");
	unk_0x7E3B06742E797067("prologue01i");
	unk_0x7E3B06742E797067("prologue01j");
	unk_0x7E3B06742E797067("prologue01k");
	unk_0x7E3B06742E797067("prologue01z");
	unk_0x7E3B06742E797067("prologue03b");
	unk_0x7E3B06742E797067("prologue04b");
	unk_0x7E3B06742E797067("prologue05b");
	unk_0x7E3B06742E797067("prologue06b");
	unk_0x7E3B06742E797067("prologuerdb");
	unk_0x7E3B06742E797067("prologue_occl");
	unk_0x7E3B06742E797067("DES_ProTree_start");
	unk_0x7E3B06742E797067("DES_ProTree_start_lod");
	unk_0x7E3B06742E797067("prologue04_cover");
	unk_0x7E3B06742E797067("prologue03_grv_fun");
	unk_0xCA569B59B8B12D63("prologue03_grv_dug");
	unk_0xCA569B59B8B12D63("prologue_grv_torch");
	unk_0x1300552655DA73DE("prologue", 1);
	unk_0xB815670C37E03CDE(joaat("csb_prolsec"));
	while (!unk_0x5D98D654CDC2165A(joaat("csb_prolsec")))
	{
		wait(0);
	}
	unk_0x080B98C6DEDFC3F8(unk_0x95B959F18401C09A(), joaat("csb_prolsec"));
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		unk_0xBEADAF07D2339505(unk_0x33CD235DF1E6A94E(), 5313.8f, -5207.2f, 83.5f, 1, false, 0, 1);
		unk_0x3C990C409B3845DE(unk_0x33CD235DF1E6A94E(), 169.2f);
	}
	unk_0xDFF589A2149528CE(false);
	unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), false, 0);
	unk_0x1F6A09AE9372AE6C(5312.996f, -5208.671f, 83.90526f, 10f, 0);
	iVar0 = unk_0xE3903F59E2F22150() + 10000;
	while (!unk_0x4E1190A8D88ABDB7() && unk_0xE3903F59E2F22150() < iVar0)
	{
		wait(0);
	}
	unk_0xA929C97A4A431A79();
	unk_0xDEFB5E2E5CBD460A("MISSION_FAILED_SCENE");
	unk_0xACCDA78123DB57B0(2500);
	unk_0x4ABB9EF39DA515D7();
	unk_0x2EE8D1440C9060EF("NG_INSTALL", 0);
	while (true)
	{
		if (!unk_0x73DA1542B2F0C458())
		{
			unk_0xACCDA78123DB57B0(0);
		}
		unk_0x5263FF82360FF7E2(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
		unk_0x5263FF82360FF7E2(0.5f, 0.5f, 0.8f, 0.8f, 20, 20, 20, 255, 0);
		unk_0xC56FB1634FB1F447(0.5f, 0.5f);
		unk_0x2775439F06235586(1);
		if (timera() > 10000 && unk_0x8A7F864DAB908749(0))
		{
			iLocal_0 = unk_0x9EC3B269A34A2BEE(0, 5);
			if ((iLocal_0 - iLocal_1) != 0)
			{
				iLocal_1 = iLocal_0;
				settimera(0);
			}
		}
		else
		{
			switch (iLocal_0)
			{
				case 0:
					func_1(0.5f, 0.4f, "NG_INST_TT_1", 0);
					break;
				
				case 1:
					func_1(0.5f, 0.4f, "NG_INST_TT_2", 0);
					break;
				
				case 2:
					func_1(0.5f, 0.4f, "NG_INST_TT_3", 0);
					break;
				
				case 3:
					func_1(0.5f, 0.4f, "NG_INST_TT_4", 0);
					break;
				
				case 4:
					func_1(0.5f, 0.4f, "NG_INST_TT_5", 0);
					break;
				}
		}
		unk_0xA584E193C941898B();
		if (unk_0xBFCFB1538684EF55())
		{
			unk_0x7F76E751C3C67971();
			return;
		}
		wait(0);
	}
}

void func_1(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0xAA70163B3B48EEE4(sParam2);
	unk_0xCCA49CAF391D1A15(fParam0, fParam1, iParam3);
}

