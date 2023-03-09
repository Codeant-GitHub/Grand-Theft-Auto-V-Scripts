void __EntryFunction__()
{
	unk_0x84CFE9237092E41B();
	func_1("main_install", 1424);
}

void func_1(char* sParam0, int iParam1)
{
	unk_0x8F59DE352CFE248B(sParam0);
	while (!unk_0x07AB0925A06BD5AD(sParam0))
	{
		wait(0);
		unk_0x8F59DE352CFE248B(sParam0);
	}
	start_new_script(sParam0, iParam1);
}

