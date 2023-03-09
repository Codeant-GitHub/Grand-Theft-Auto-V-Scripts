void __EntryFunction__()
{
	unk_0x84CFE9237092E41B();
	while (true)
	{
		wait(0);
		func_1();
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_105217)
	{
		if (Global_105217[iVar0 /*28*/].f_21 != 0)
		{
			iVar1 = iVar0;
			if (unk_0xE3903F59E2F22150() > Global_105217[iVar0 /*28*/].f_21 && Global_105217[iVar0 /*28*/].f_21 != -1)
			{
				if (func_3(iVar0))
				{
					unk_0x3E282335477723EC(iVar1, 0);
				}
				func_2(iVar0);
			}
			else if (func_3(iVar0))
			{
				if (Global_105217[iVar0 /*28*/].f_21 != -1)
				{
					if (!unk_0x0E4018692D92041D(Global_105217[iVar0 /*28*/].f_27, 0))
					{
						Global_105217[iVar0 /*28*/].f_21 = (Global_105217[iVar0 /*28*/].f_21 + round((unk_0x7C475FA8D877007F() * 1000f)));
						if (unk_0x532174348D7ABDB1(iVar1))
						{
							unk_0x8950ED5730F62EE8(&(Global_105217[iVar0 /*28*/].f_27), 0);
						}
					}
				}
				if (Global_105217[iVar0 /*28*/].f_24.f_2 != 9999f)
				{
					if (Global_105217[iVar0 /*28*/].f_23 != 0)
					{
						if (!unk_0xD62C4419A41F106A(Global_105217[iVar0 /*28*/].f_23, 0))
						{
							if (!unk_0x0E4018692D92041D(Global_105217[iVar0 /*28*/].f_27, 3))
							{
								unk_0x24794947E27C3E6D(iVar1, unk_0x2CA911E7569D12EA(Global_105217[iVar0 /*28*/].f_23, Global_105217[iVar0 /*28*/].f_24));
							}
							else
							{
								unk_0x0BAB024E81CB73E1(iVar1, Global_105217[iVar0 /*28*/].f_23, Global_105217[iVar0 /*28*/].f_24, Global_105217[iVar0 /*28*/].f_24.f_1);
							}
						}
					}
					else if ((Global_105217[iVar0 /*28*/].f_24 != 0f || Global_105217[iVar0 /*28*/].f_24.f_1 != 0f) || Global_105217[iVar0 /*28*/].f_24.f_2 != 0f)
					{
						unk_0x24794947E27C3E6D(iVar1, Global_105217[iVar0 /*28*/].f_24);
					}
				}
				else
				{
					unk_0x9AEE135CB539B737(iVar1, Global_105217[iVar0 /*28*/].f_24, Global_105217[iVar0 /*28*/].f_24.f_1);
				}
			}
			else if ((unk_0xE3903F59E2F22150() - Global_105217[iVar0 /*28*/].f_22) > 1000)
			{
				func_2(iVar0);
			}
		}
		iVar0++;
	}
}

void func_2(int iParam0)
{
	Global_105217[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_105217[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_105217[iParam0 /*28*/].f_4), "", 64);
	Global_105217[iParam0 /*28*/].f_23 = 0;
	Global_105217[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_105217[iParam0 /*28*/].f_27 = 0;
	Global_105217[iParam0 /*28*/].f_20 = 0;
	Global_105217[iParam0 /*28*/].f_22 = 0;
}

int func_3(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!unk_0xCE3CFF625BEBAA04(&(Global_105217[iParam0 /*28*/]), "") && !unk_0x6D2E2622CA149402(&(Global_105217[iParam0 /*28*/])))
	{
		if (unk_0x0E4018692D92041D(Global_105217[iParam0 /*28*/].f_27, 1))
		{
			if (unk_0x0E4018692D92041D(Global_105217[iParam0 /*28*/].f_27, 2))
			{
				return func_7(iVar0, &(Global_105217[iParam0 /*28*/]), &(Global_105217[iParam0 /*28*/].f_4), Global_105217[iParam0 /*28*/].f_20);
			}
			else
			{
				return func_6(iVar0, &(Global_105217[iParam0 /*28*/]), &(Global_105217[iParam0 /*28*/].f_4));
			}
		}
		else if (unk_0x0E4018692D92041D(Global_105217[iParam0 /*28*/].f_27, 2))
		{
			return func_5(iVar0, &(Global_105217[iParam0 /*28*/]), Global_105217[iParam0 /*28*/].f_20);
		}
		else
		{
			return func_4(iVar0, &(Global_105217[iParam0 /*28*/]));
		}
	}
	return 0;
}

int func_4(int iParam0, char* sParam1)
{
	unk_0x6D39881CA5436178(sParam1);
	return unk_0xA32C2C4DF096C08A((1 + iParam0));
}

int func_5(int iParam0, char* sParam1, int iParam2)
{
	unk_0x6D39881CA5436178(sParam1);
	unk_0xE800DC85FDF60F85(iParam2);
	return unk_0xA32C2C4DF096C08A((1 + iParam0));
}

int func_6(int iParam0, char* sParam1, int iParam2)
{
	unk_0x6D39881CA5436178(sParam1);
	unk_0xFA6BEE2B1507FF1E(iParam2);
	return unk_0xA32C2C4DF096C08A((1 + iParam0));
}

int func_7(int iParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0x6D39881CA5436178(sParam1);
	unk_0xFA6BEE2B1507FF1E(iParam2);
	unk_0xE800DC85FDF60F85(iParam3);
	return unk_0xA32C2C4DF096C08A((1 + iParam0));
}

