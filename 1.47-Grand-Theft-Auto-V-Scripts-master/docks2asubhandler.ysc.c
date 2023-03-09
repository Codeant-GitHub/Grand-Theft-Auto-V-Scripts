#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	float fVar0;
	
	if (unk_0x9EC5BDC006623C42(19))
	{
		func_1();
	}
	iLocal_0 = ScriptParam_3;
	iLocal_1 = ScriptParam_3.f_1;
	while (!unk_0x0E4018692D92041D(iLocal_2, 1))
	{
		if (!unk_0x0E4018692D92041D(iLocal_2, 0))
		{
			if (unk_0x765F6FEEFF39224F(iLocal_0))
			{
				if (unk_0x91D5C8283D19AF49(iLocal_0, 0))
				{
					unk_0x0D21E1FDE062ED99(iLocal_0, false, 1);
					unk_0xF70578F5CD9822CB(iLocal_0, true);
					unk_0x4D5F3407F1F37E28(iLocal_0, true, true, true, true, true, 0, 0, 0);
					if (unk_0x765F6FEEFF39224F(iLocal_1))
					{
						unk_0x0D21E1FDE062ED99(iLocal_1, false, 1);
						unk_0xF70578F5CD9822CB(iLocal_1, true);
						unk_0x4D5F3407F1F37E28(iLocal_1, true, true, true, true, true, 0, 0, 0);
					}
					unk_0x8950ED5730F62EE8(&iLocal_2, 0);
				}
			}
		}
		else if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			if (unk_0x91D5C8283D19AF49(iLocal_0, 0))
			{
				fVar0 = vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0xFBB1F99A825CAB09(iLocal_0, true));
				if (fVar0 > 90000f)
				{
					unk_0x8950ED5730F62EE8(&iLocal_2, 1);
				}
				else if (fVar0 > 40000f && !unk_0x3F219400E5FE4B69(iLocal_0))
				{
					unk_0x8950ED5730F62EE8(&iLocal_2, 1);
				}
			}
			else
			{
				unk_0x8950ED5730F62EE8(&iLocal_2, 1);
			}
		}
		wait(0);
	}
	func_1();
}

void func_1()
{
	unk_0x65F544B458249682(&iLocal_0);
	unk_0x4955686EF8308B47(&iLocal_1);
	unk_0x5894DC159447E10A();
}

