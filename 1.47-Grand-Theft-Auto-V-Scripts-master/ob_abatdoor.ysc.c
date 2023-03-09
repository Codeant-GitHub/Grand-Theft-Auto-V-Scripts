#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	vector3 vLocal_4 = { 0f, 0f, 0f };
	vector3 vLocal_5 = { 0f, 0f, 0f };
	int iLocal_6 = 0;
#endregion

void __EntryFunction__()
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (unk_0x9EC5BDC006623C42(2))
	{
		func_4();
	}
	if (unk_0x765F6FEEFF39224F(iScriptParam_6))
	{
		unk_0xF70578F5CD9822CB(iScriptParam_6, true);
		vLocal_4 = { unk_0xFBB1F99A825CAB09(iScriptParam_6, true) };
		vLocal_5 = { unk_0x60B5C1FD066CB864(iScriptParam_6, 2) };
	}
	while (true)
	{
		wait(0);
		if (unk_0x765F6FEEFF39224F(iScriptParam_6))
		{
			if (unk_0x68135A7434393CC1(iScriptParam_6))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0x11D8E875F068E371(iScriptParam_6))
						{
							unk_0xB815670C37E03CDE(joaat("p_abat_roller_1_col"));
							if (unk_0x5D98D654CDC2165A(joaat("p_abat_roller_1_col")))
							{
								if (!func_3(vLocal_4, 0f, 0f, 0f, 0))
								{
									iLocal_3 = unk_0x7CA67831169E8AA6(joaat("p_abat_roller_1_col"), vLocal_4, true, true, false);
									unk_0x1C8705F667F673EA(iLocal_3, vLocal_5, 2, 1);
									iLocal_2 = 1;
								}
							}
						}
						break;
					
					case 1:
						if (unk_0x11D8E875F068E371(iScriptParam_6))
						{
							if (unk_0x1BCDA92AD0A7835B(joaat("michael2")) > 0)
							{
								unk_0x0483D0035D6E46FD("map_objects");
								if (unk_0xE9CCF312047EBEE0("map_objects"))
								{
									iLocal_2 = 2;
								}
							}
						}
						break;
					
					case 2:
						if (unk_0x11D8E875F068E371(iScriptParam_6))
						{
							if (unk_0x1BCDA92AD0A7835B(joaat("michael2")) > 0)
							{
								if (Global_90143)
								{
									if (unk_0xE9CCF312047EBEE0("map_objects"))
									{
										unk_0x1BE9DE786D9E5DF3(iScriptParam_6, "P_Abat_roller_1_open", "map_objects", 1f, 0, 1, 0, 0f, 0);
										iLocal_2 = 3;
									}
								}
							}
						}
						break;
					
					case 3:
						fVar3 = 0.35f;
						vVar0 = { vLocal_4 + Vector(3.45f, 0f, 0f) };
						if (unk_0x765F6FEEFF39224F(iLocal_3))
						{
							vVar1 = { unk_0xFBB1F99A825CAB09(iLocal_3, true) };
							if (!func_2(vVar1, vVar0, 0.1f, 0))
							{
								vVar2 = { vVar0 - vVar1 };
								unk_0xBEADAF07D2339505(iLocal_3, vVar1 + func_1(vVar2) * FtoV(unk_0x7C475FA8D877007F()) * Vector(fVar3, fVar3, fVar3), 1, false, 0, 1);
							}
							else
							{
								Global_90144 = 1;
								iLocal_2 = 4;
							}
						}
						break;
					
					case 4:
						break;
				}
			}
			else
			{
				func_4();
			}
		}
		else
		{
			func_4();
		}
	}
}

Vector3 func_1(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

int func_2(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0x7EECA16E87982278((vParam0.x - vParam1.x)) <= fParam2)
		{
			if (unk_0x7EECA16E87982278((vParam0.y - vParam1.y)) <= fParam2)
			{
				if (unk_0x7EECA16E87982278((vParam0.z - vParam1.z)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x7EECA16E87982278((vParam0.x - vParam1.x)) <= fParam2)
	{
		if (unk_0x7EECA16E87982278((vParam0.y - vParam1.y)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

bool func_3(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_4()
{
	if (unk_0x765F6FEEFF39224F(iLocal_3))
	{
		unk_0xEC26F4BFC9942A0C(&iLocal_3);
	}
	unk_0x71CA80D41E1338B4(joaat("p_abat_roller_1_col"));
	func_5("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x5894DC159447E10A();
}

void func_5(char* sParam0)
{
	func_6(sParam0);
}

void func_6(char* sParam0)
{
	if (unk_0xCE3CFF625BEBAA04(sParam0, sParam0))
	{
	}
}

