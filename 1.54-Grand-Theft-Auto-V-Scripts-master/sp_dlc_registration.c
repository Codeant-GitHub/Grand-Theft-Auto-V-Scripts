void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	
	MISC::START_SAVE_DATA(&Global_2621548, 1, true);
	MISC::REGISTER_INT_TO_SAVE(&Global_2621548, "aFakeSavedInt");
	MISC::STOP_SAVE_DATA();
	MISC::SET_BIT(&Global_4271882, 0);
	iVar0 = 1;
	iVar1 = MISC::GET_SIZE_OF_SAVE_DATA(true);
	if (iVar0 != iVar1)
	{
	}
}

