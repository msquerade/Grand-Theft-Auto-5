#region Local Var
	auto uLocal_0 = 0;
	auto uLocal_1 = 0;
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
	auto uLocal_12 = 0;
	auto uLocal_13 = 0;
	float fLocal_14 = 0;
	auto uLocal_15 = 0;
	auto uLocal_16 = 0;
	int iLocal_17 = 0;
	char* sLocal_18 = 0;
	auto uLocal_19 = 0;
	auto uLocal_20 = 0;
	float fLocal_21 = 0;
	auto uLocal_22 = 0;
	auto uLocal_23 = 0;
	auto uLocal_24 = 0;
	float fLocal_25 = 0;
	float fLocal_26 = 0;
	auto uLocal_27 = 0;
	int iLocal_28 = 0;
	auto uLocal_29 = 0;
	auto uLocal_30 = 0;
	float fLocal_31 = 0;
	float fLocal_32 = 0;
	float fLocal_33 = 0;
	auto uLocal_34 = 0;
	auto uLocal_35 = 0;
	auto uLocal_36 = 0;
	auto uLocal_37 = 0;
	auto uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	auto uLocal_43 = 0;
	auto uLocal_44 = 0;
	auto uLocal_45 = 0;
	auto uLocal_46 = 0;
	auto uLocal_47 = 0;
	auto uLocal_48 = 0;
	auto uLocal_49 = 0;
	auto uLocal_50 = 0;
	auto uLocal_51 = 0;
	auto uLocal_52 = 0;
	auto uLocal_53 = 0;
	auto uLocal_54 = 0;
	auto uLocal_55 = 0;
	auto uLocal_56 = 0;
	Vector3 vLocal_57 = 0;
	Vector3 vLocal_60 = 0;
	int iLocal_63 = 0;
	auto uLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	auto uLocal_67 = 16;
	auto uLocal_68 = 0;
	auto uLocal_69 = 0;
	auto uLocal_70 = 0;
	auto uLocal_71 = 0;
	auto uLocal_72 = 0;
	auto uLocal_73 = 0;
	auto uLocal_74 = 0;
	auto uLocal_75 = 0;
	auto uLocal_76 = 0;
	auto uLocal_77 = 0;
	auto uLocal_78 = 0;
	auto uLocal_79 = 0;
	auto uLocal_80 = 0;
	auto uLocal_81 = 0;
	auto uLocal_82 = 0;
	auto uLocal_83 = 0;
	auto uLocal_84 = 0;
	auto uLocal_85 = 0;
	auto uLocal_86 = 0;
	auto uLocal_87 = 0;
	auto uLocal_88 = 0;
	auto uLocal_89 = 0;
	auto uLocal_90 = 0;
	auto uLocal_91 = 0;
	auto uLocal_92 = 0;
	auto uLocal_93 = 0;
	auto uLocal_94 = 0;
	auto uLocal_95 = 0;
	auto uLocal_96 = 0;
	auto uLocal_97 = 0;
	auto uLocal_98 = 0;
	auto uLocal_99 = 0;
	auto uLocal_100 = 0;
	auto uLocal_101 = 0;
	auto uLocal_102 = 0;
	auto uLocal_103 = 0;
	auto uLocal_104 = 0;
	auto uLocal_105 = 0;
	auto uLocal_106 = 0;
	auto uLocal_107 = 0;
	auto uLocal_108 = 0;
	auto uLocal_109 = 0;
	auto uLocal_110 = 0;
	auto uLocal_111 = 0;
	auto uLocal_112 = 0;
	auto uLocal_113 = 0;
	auto uLocal_114 = 0;
	auto uLocal_115 = 0;
	auto uLocal_116 = 0;
	auto uLocal_117 = 0;
	auto uLocal_118 = 0;
	auto uLocal_119 = 0;
	auto uLocal_120 = 0;
	auto uLocal_121 = 0;
	auto uLocal_122 = 0;
	auto uLocal_123 = 0;
	auto uLocal_124 = 0;
	auto uLocal_125 = 0;
	auto uLocal_126 = 0;
	auto uLocal_127 = 0;
	auto uLocal_128 = 0;
	auto uLocal_129 = 0;
	auto uLocal_130 = 0;
	auto uLocal_131 = 0;
	auto uLocal_132 = 0;
	auto uLocal_133 = 0;
	auto uLocal_134 = 0;
	auto uLocal_135 = 0;
	auto uLocal_136 = 0;
	auto uLocal_137 = 0;
	auto uLocal_138 = 0;
	auto uLocal_139 = 0;
	auto uLocal_140 = 0;
	auto uLocal_141 = 0;
	auto uLocal_142 = 0;
	auto uLocal_143 = 0;
	auto uLocal_144 = 0;
	auto uLocal_145 = 0;
	auto uLocal_146 = 0;
	auto uLocal_147 = 0;
	auto uLocal_148 = 0;
	auto uLocal_149 = 0;
	auto uLocal_150 = 0;
	auto uLocal_151 = 0;
	auto uLocal_152 = 0;
	auto uLocal_153 = 0;
	auto uLocal_154 = 0;
	auto uLocal_155 = 0;
	auto uLocal_156 = 0;
	auto uLocal_157 = 0;
	auto uLocal_158 = 0;
	auto uLocal_159 = 0;
	auto uLocal_160 = 0;
	auto uLocal_161 = 0;
	auto uLocal_162 = 0;
	auto uLocal_163 = 0;
	auto uLocal_164 = 0;
	auto uLocal_165 = 0;
	auto uLocal_166 = 0;
	auto uLocal_167 = 0;
	auto uLocal_168 = 0;
	auto uLocal_169 = 0;
	auto uLocal_170 = 0;
	auto uLocal_171 = 0;
	auto uLocal_172 = 0;
	auto uLocal_173 = 0;
	auto uLocal_174 = 0;
	auto uLocal_175 = 0;
	auto uLocal_176 = 0;
	auto uLocal_177 = 0;
	auto uLocal_178 = 0;
	auto uLocal_179 = 0;
	auto uLocal_180 = 0;
	auto uLocal_181 = 0;
	auto uLocal_182 = 0;
	auto uLocal_183 = 0;
	auto uLocal_184 = 0;
	auto uLocal_185 = 0;
	auto uLocal_186 = 0;
	auto uLocal_187 = 0;
	auto uLocal_188 = 0;
	auto uLocal_189 = 0;
	auto uLocal_190 = 0;
	auto uLocal_191 = 0;
	auto uLocal_192 = 0;
	auto uLocal_193 = 0;
	auto uLocal_194 = 0;
	auto uLocal_195 = 0;
	auto uLocal_196 = 0;
	auto uLocal_197 = 0;
	auto uLocal_198 = 0;
	auto uLocal_199 = 0;
	auto uLocal_200 = 0;
	auto uLocal_201 = 0;
	auto uLocal_202 = 0;
	auto uLocal_203 = 0;
	auto uLocal_204 = 0;
	auto uLocal_205 = 0;
	auto uLocal_206 = 0;
	auto uLocal_207 = 0;
	auto uLocal_208 = 0;
	auto uLocal_209 = 0;
	auto uLocal_210 = 0;
	auto uLocal_211 = 0;
	auto uLocal_212 = 0;
	auto uLocal_213 = 0;
	auto uLocal_214 = 0;
	auto uLocal_215 = 0;
	auto uLocal_216 = 0;
	auto uLocal_217 = 0;
	auto uLocal_218 = 0;
	auto uLocal_219 = 0;
	auto uLocal_220 = 0;
	auto uLocal_221 = 0;
	auto uLocal_222 = 0;
	auto uLocal_223 = 0;
	auto uLocal_224 = 0;
	auto uLocal_225 = 0;
	auto uLocal_226 = 0;
	auto uLocal_227 = 0;
	auto uLocal_228 = 0;
	auto uLocal_229 = 0;
	auto uLocal_230 = 0;
	auto uLocal_231 = 0;
	int iLocal_232 = 0;
	int[] iLocal_233 = new int[2];
	int[] iLocal_236 = new int[2];
	int[] iLocal_239 = new int[2];
	int[] iLocal_242 = new int[2];
	int[] iLocal_245 = new int[2];
	int iLocal_248 = 0;
	int[] iLocal_249 = new int[2];
	int[] iLocal_252 = new int[2];
	Vector3[] vLocal_255 = new Vector3[2];
	Vector3[] vLocal_262 = new Vector3[2];
	Vector3 vLocal_269 = 0;
	Vector3 fLocal_272 = 0;
	Vector3[] vLocal_273 = new Vector3[2];
	Vector3[] vLocal_280 = new Vector3[2];
	Vector3[] fLocal_287 = new Vector3[2];
	float[] fLocal_290 = new float[2];
	char* sLocal_293 = 0;
	auto uLocal_294 = 0;
	auto uLocal_295 = 0;
	auto uLocal_296 = 0;
	auto uLocal_297 = 0;
	auto uLocal_298 = 0;
	auto uLocal_299 = 0;
	auto uLocal_300 = 0;
	auto uLocal_301 = 0;
	auto uLocal_302 = 0;
	auto uLocal_303 = 0;
	auto uLocal_304 = 0;
	auto uLocal_305 = 0;
	auto uLocal_306 = 0;
	auto uLocal_307 = 0;
	auto uLocal_308 = 0;
	char* sLocal_309 = 0;
	auto uLocal_310 = 0;
	auto uLocal_311 = 0;
	auto uLocal_312 = 0;
	auto uLocal_313 = 0;
	auto uLocal_314 = 0;
	auto uLocal_315 = 0;
	auto uLocal_316 = 0;
	auto uLocal_317 = 0;
	auto uLocal_318 = 0;
	auto uLocal_319 = 0;
	auto uLocal_320 = 0;
	auto uLocal_321 = 0;
	auto uLocal_322 = 0;
	auto uLocal_323 = 0;
	auto uLocal_324 = 0;
	char* sLocal_325 = 0;
	auto uLocal_326 = 0;
	auto uLocal_327 = 0;
	auto uLocal_328 = 0;
	auto uLocal_329 = 0;
	auto uLocal_330 = 0;
	auto uLocal_331 = 0;
	auto uLocal_332 = 0;
	auto uLocal_333 = 0;
	auto uLocal_334 = 0;
	auto uLocal_335 = 0;
	auto uLocal_336 = 0;
	auto uLocal_337 = 0;
	auto uLocal_338 = 0;
	auto uLocal_339 = 0;
	auto uLocal_340 = 0;
	struct<16> Local_341 = 0;
	struct<16>[] Local_357 = new struct<16>[2];
	struct<16>[] Local_390 = new struct<16>[2];
	struct<16>[] Local_423 = new struct<16>[2];
	struct<16>[] Local_456 = new struct<16>[2];
	struct<16>[] Local_489 = new struct<16>[2];
	struct<16>[] Local_522 = new struct<16>[2];
	struct<16>[] Local_555 = new struct<16>[2];
	struct<16>[] Local_588 = new struct<16>[2];
	struct<16>[] Local_621 = new struct<16>[2];
	struct<16>[] Local_654 = new struct<16>[2];
	struct<16>[] Local_687 = new struct<16>[2];
	int iLocal_720 = 0;
	struct<4> Local_721 = 0;
	float fLocal_725 = 0;
	int iLocal_726 = 0;
	int iLocal_727 = 0;
#endregion

void main()
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	vLocal_57 = {0f, 0f, 0f};
	vLocal_60 = {0f, 0f, 0f};
	iLocal_63 = -1;
	iLocal_66 = 318;
	iLocal_232 = 1;
	iLocal_720 = -1;
	StringCopy(&Local_721, "", 16);
	fLocal_725 = 0f;
	iLocal_727 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_52();
	}
	wait(0);
	func_42();
	func_41();
	func_37();
	while (iLocal_232 && func_33(4, 0))
	{
		wait(0);
		switch (iLocal_65)
		{
			case 0:
				if (func_32())
				{
					iLocal_65 = 1;
				}
				break;
			
			case 1:
				if (func_30())
				{
					iLocal_65 = 2;
				}
				break;
			
			case 2:
				if (func_2())
				{
					iLocal_65 = 3;
				}
				break;
			
			case 3:
				func_1();
				break;
		}
	}
	func_52();
}

void func_1()
{
	iLocal_232 = 0;
}

bool func_2()
{
	int iVar0;
	float fVar1;
	Vector3 vVar2;
	Vector3 vVar5;
	
	iVar0 = 0;
	while (iVar0 < iLocal_233)
	{
		func_20(iLocal_233[iVar0], iVar0);
		iVar0++;
	}
	if (is_synchronized_scene_running(Global_88941))
	{
		fVar1 = get_synchronized_scene_phase(Global_88941);
		if (!is_string_null_or_empty(&Local_721))
		{
			if (!iLocal_726)
			{
				if (fVar1 < fLocal_725)
				{
				}
				else if (func_3(&uLocal_67, "PRSAUD", &Local_721, 3, 0, 0, 0))
				{
					iLocal_726 = 1;
				}
			}
		}
	}
	vVar2 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)};
	if (vdist(vVar2, vLocal_269) < 100f)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_233)
	{
		if (!PED::IS_PED_INJURED(iLocal_233[iVar0]))
		{
			vVar5 = {ENTITY::GET_ENTITY_COORDS(iLocal_233[iVar0], 1)};
			if (vdist(vVar2, vVar5) < 100f)
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

int func_3(auto uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_19(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15719 = 0;
	Global_15721 = 0;
	Global_15726 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_2621441 = 0;
	return func_4(sParam2, iParam3, 0);
}

bool func_4(char* sParam0, int iParam1, int iParam2)
{
	Global_15713 = 0;
	if (Global_15712 == 0 || Global_15714 == 2)
	{
		if (Global_15712 != 0)
		{
			if (iParam1 > Global_15714)
			{
				if (Global_15719 == 0)
				{
					stop_scripted_conversation(false);
					Global_14413.f_1 = 3;
					Global_15712 = 0;
					Global_15713 = 1;
					Global_15765 = 0;
					Global_15708 = 0;
					Global_15709 = 0;
					Global_15723 = 0;
					Global_15722 = 0;
					Global_14412 = 0;
				}
				else
				{
					func_18();
					return false;
				}
			}
			else
			{
				return false;
			}
		}
		if (is_scripted_conversation_ongoing())
		{
			return false;
		}
		if (func_17(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_16();
		Global_15001 = {Global_15166};
		Global_15718 = Global_15719;
		Global_15725 = Global_15726;
		Global_2621442 = Global_2621441;
		Global_15727 = {Global_15743};
		Global_15720 = Global_15721;
		Global_16702 = Global_16703;
		Global_16710 = {Global_16716};
		Global_16704 = Global_16705;
		Global_16706 = Global_16707;
		Global_16708 = Global_16709;
		Global_15331.f_370 = Global_16701;
		Global_15331.f_368 = Global_16699;
		Global_15331.f_369 = Global_16700;
		Global_15708 = Global_15709;
		if (Global_15718)
		{
			GAMEPLAY::CLEAR_BIT(&Global_2283, 20);
			GAMEPLAY::CLEAR_BIT(&Global_2284, 17);
			GAMEPLAY::CLEAR_BIT(&Global_2285, false);
			if (iParam2)
			{
				func_9();
				if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return false;
					}
				}
				if (Global_14413.f_1 > 3)
				{
					return false;
				}
			}
			if (Global_14379 == 1)
			{
				return false;
			}
			if (is_player_playing(player_id()))
			{
				if (is_ped_in_melee_combat(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (func_8())
				{
					return false;
				}
				if (is_ped_sprinting(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (is_ped_in_parachute_free_fall(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (get_is_ped_gadget_equipped(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return false;
				}
				if (!Global_69489)
				{
					if (is_entity_in_water(PLAYER::PLAYER_PED_ID()))
					{
						return false;
					}
					if (is_player_climbing(player_id()))
					{
						return false;
					}
					if (is_ped_planting_bomb(PLAYER::PLAYER_PED_ID()))
					{
						return false;
					}
					if (is_special_ability_active(player_id()))
					{
						return false;
					}
				}
			}
			if (func_7())
			{
				return false;
			}
			else
			{
				switch (Global_14413.f_1)
				{
					case 7:
						return false;
						break;
					
					case 8:
						return false;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (GAMEPLAY::IS_BIT_SET(Global_2283, 9))
				{
					return false;
				}
			}
			func_6();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_5();
		return true;
	}
	if (Global_15712 == 5)
	{
		return false;
	}
	if (iParam1 < Global_15714 || iParam1 == Global_15714)
	{
		return false;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_18();
	}
	return false;
}

void func_5()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	stop_scripted_conversation(false);
	Global_15712 = 1;
}

void func_6()
{
	Global_15765 = Global_15764;
	Global_15759 = Global_15760;
	Global_15806 = {Global_15794};
	Global_15812 = {Global_15800};
	Global_15767 = Global_15766;
	Global_15836 = {Global_15818};
	Global_15842 = {Global_15824};
	Global_15848 = {Global_15830};
	Global_15854 = {Global_15860};
	Global_1598 = Global_1599;
	Global_1600 = Global_1601;
	Global_15723 = Global_15724;
	Global_15725 = Global_15726;
	Global_15727 = {Global_15743};
	Global_15716 = Global_15717;
	Global_16728 = 0;
	Global_15761 = 0;
	Global_15762 = 0;
	GAMEPLAY::CLEAR_BIT(&Global_2284, 16);
}

bool func_7()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_8()
{
	int iVar0;
	int iVar1;
	
	if (Global_69489)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (is_player_playing(player_id()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (is_aim_cam_active() && iVar0 == 1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (is_player_playing(player_id()))
	{
		if (get_ped_config_flag(PLAYER::PLAYER_PED_ID(), 78, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_9()
{
	if (func_15(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_101154.f_32575[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_101154.f_32575[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_101154.f_32575[2 /*29*/])
			{
				Global_14413 = 2;
			}
			else
			{
				Global_14413 = 0;
			}
		}
	}
	else
	{
		Global_14413 = func_10();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69489)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

auto func_10()
{
	func_11();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_11()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_14(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_13(PLAYER::PLAYER_PED_ID());
			if (func_12(iVar0) && (!func_15(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_12(Global_101154.f_1826.f_539.f_3549))
				{
					Global_101154.f_1826.f_539.f_3550 = Global_101154.f_1826.f_539.f_3549;
				}
				Global_101154.f_1826.f_539.f_3551 = iVar0;
				Global_101154.f_1826.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101154.f_1826.f_539.f_3549 != 145)
			{
				Global_101154.f_1826.f_539.f_3551 = Global_101154.f_1826.f_539.f_3549;
			}
			return;
		}
	}
	Global_101154.f_1826.f_539.f_3549 = 145;
}

int func_12(int iParam0)
{
	return iParam0 < 3;
}

int func_13(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_14(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_14(int iParam0)
{
	if (func_12(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_15(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_16()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15001[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15001[iVar0 /*10*/].f_1), "", 24);
		Global_15001[iVar0 /*10*/].f_7 = 0;
		Global_15001[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15001.f_161 = -99;
	Global_15001.f_162 = {0f, 0f, 0f};
}

int func_17(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338622.f_203[iParam1];
			}
			break;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1338622.f_949, iParam0);
}

void func_18()
{
	restart_scripted_conversation();
	Global_16723 = 0;
	if ((is_mobile_phone_call_ongoing() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		stop_scripted_conversation(false);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(true);
		Global_15712 = 6;
		return;
	}
}

void func_19(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, auto uParam5)
{
	Global_15166 = {*uParam0};
	Global_1599 = iParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = uParam5;
	if (iParam3 == 0)
	{
		Global_16699 = 1;
		Global_16697 = 0;
	}
	else
	{
		Global_16699 = 0;
		Global_16697 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16700 = 1;
		Global_16698 = 0;
	}
	else
	{
		Global_16700 = 0;
		Global_16698 = 1;
	}
}

void func_20(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	Vector3 vVar5;
	int iVar8;
	int iVar9;
	int iVar10;
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
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		switch (iLocal_236[iParam1])
		{
			case 0:
				if (is_entity_playing_anim(iParam0, &Local_341, &(Local_390[iParam1 /*16*/]), 2))
				{
					fVar0 = -1f;
					fVar1 = -1f;
					if (find_anim_event_phase(&Local_341, &(Local_390[iParam1 /*16*/]), "WalkInterruptible", &fVar0, &fVar1) || func_29(&Local_341, &(Local_390[iParam1 /*16*/]), "WalkInterruptible", &fVar0, &fVar1))
					{
						fVar2 = get_synchronized_scene_phase(Global_88941);
						if (fVar2 > fVar0)
						{
							AI::CLEAR_PED_TASKS(iParam0);
							stop_synchronized_entity_anim(iParam0, -8f, 1);
							set_ped_move_anims_blend_out(iParam0);
							fVar3 = 1f;
							iVar4 = -668482597;
							if (iLocal_66 == 263)
							{
								fVar3 = 2f;
								iVar4 = -530524;
								func_27(iParam0, "GENERIC_FRIGHTENED_HIGH", "A_M_O_TRAMP_01_BLACK_FULL_01", 24);
							}
							if (iLocal_66 == 244)
							{
								fVar3 = 2f;
								iVar4 = -530524;
							}
							task_follow_nav_mesh_to_coord(iParam0, vLocal_269 + vLocal_280[iParam1 /*3*/], fVar3, -1, fLocal_290[iParam1] * 0.1f, 0, 1193033728);
							force_ped_motion_state(iParam0, iVar4, false, 0, 0);
							_0x2208438012482A1A(iParam0, 0, 0);
							iLocal_236[iParam1] = 1;
							return;
						}
					}
				}
				else
				{
					AI::CLEAR_PED_TASKS(iParam0);
					if (is_string_null_or_empty(&(Local_423[iParam1 /*16*/])))
					{
						if (func_26(vLocal_280[iParam1 /*3*/], 0f, 0f, 0f, 0))
						{
							vVar5 = {ENTITY::GET_ENTITY_COORDS(iParam0, 1)};
							vLocal_280[iParam1 /*3*/] = {vVar5 - vLocal_269 * Vector(4f, 4f, 4f)};
						}
						if (!is_string_null_or_empty(&(Local_687[iParam1 /*16*/])))
						{
							set_ped_movement_clipset(iParam0, &(Local_687[iParam1 /*16*/]), 0.25f);
						}
						task_follow_nav_mesh_to_coord(iParam0, vLocal_269 + vLocal_280[iParam1 /*3*/], 1f, -1, 0.25f, 0, 1193033728);
						iLocal_236[iParam1] = 1;
					}
					else
					{
						if (!is_synchronized_scene_running(iLocal_720))
						{
							iLocal_720 = create_synchronized_scene(vLocal_269, 0f, 0f, fLocal_272, 2);
							set_synchronized_scene_looped(iLocal_720, true);
						}
						iVar8 = 5;
						iVar9 = 144;
						iVar10 = 0;
						if (iLocal_252[0] == joaat("p_trev_rope_01_s") || iLocal_252[1] == joaat("p_trev_rope_01_s"))
						{
							if (!func_25(iVar8, 4))
							{
								func_24(&iVar8, 4);
							}
							if (!func_25(iVar8, 1))
							{
								func_24(&iVar8, 1);
							}
							if (!func_25(iVar9, 16))
							{
								func_24(&iVar9, 16);
							}
							if (!func_25(iVar9, 128))
							{
								func_24(&iVar9, 128);
							}
							if (!func_25(iVar10, 0))
							{
								func_24(&iVar10, 0);
							}
							set_blocking_of_non_temporary_events(iLocal_233[iParam1], true);
							set_ped_can_be_targetted(iLocal_233[iParam1], false);
							set_ped_can_ragdoll_from_player_impact(iLocal_233[iParam1], 0);
							set_entity_max_health(iLocal_233[iParam1], 1000);
							ENTITY::SET_ENTITY_HEALTH(iLocal_233[iParam1], get_entity_max_health(iLocal_233[iParam1]));
							set_ped_suffers_critical_hits(iLocal_233[iParam1], 0);
							set_ped_reset_flag(iLocal_233[iParam1], 64, true);
							set_ped_reset_flag(iLocal_233[iParam1], 249, true);
							set_ped_reset_flag(iLocal_233[iParam1], 335, true);
							iVar11 = 0;
							while (iVar11 < iLocal_249)
							{
								set_entity_can_be_damaged(iLocal_249[iVar11], 0);
								set_object_targettable(iLocal_249[iVar11], 0);
								iVar11++;
							}
						}
						if (!func_25(iVar9, 16))
						{
							set_ped_can_ragdoll_from_player_impact(iLocal_233[iParam1], 0);
						}
						task_synchronized_scene(iLocal_233[iParam1], iLocal_720, &Local_341, &(Local_423[iParam1 /*16*/]), 1000f, -1000f, iVar8, iVar9, 1000f, iVar10);
						iVar11 = 0;
						while (iVar11 < iLocal_249)
						{
							if (iLocal_252[iVar11] != 0)
							{
								if (!is_string_null_or_empty(&(Local_588[iVar11 /*16*/])))
								{
									play_synchronized_entity_anim(iLocal_249[iVar11], iLocal_720, &(Local_588[iVar11 /*16*/]), &Local_341, 8f, 8f, 0, 1000f);
								}
							}
							iVar11++;
						}
						vLocal_280[iParam1 /*3*/] = {vLocal_273[iParam1 /*3*/]};
						iLocal_236[iParam1] = 10;
					}
				}
				break;
			
			case 1:
				if (!is_ped_group_member(iLocal_233[iParam1], iLocal_248))
				{
					if (!does_group_exist(iLocal_248))
					{
						iLocal_248 = create_group(0);
					}
					if (iParam1 == 0)
					{
						set_ped_as_group_leader(iLocal_233[iParam1], iLocal_248);
					}
					else
					{
						set_ped_as_group_member(iLocal_233[iParam1], iLocal_248);
					}
				}
				if (AI::GET_SCRIPT_TASK_STATUS(iParam0, 713668775) != 1)
				{
					if (fLocal_290[iParam1] == 0f)
					{
						fLocal_290[iParam1] = vmag(vLocal_280[iParam1 /*3*/]) * 0.75f;
					}
					task_wander_in_area(iParam0, vLocal_269 + vLocal_280[iParam1 /*3*/], fLocal_290[iParam1], 3f, 6f);
					iLocal_236[iParam1] = 2;
					break;
				}
				if (func_23(iParam0))
				{
					iLocal_236[iParam1] = 3;
					break;
				}
				break;
			
			case 2:
				if (func_23(iParam0))
				{
					iLocal_236[iParam1] = 3;
					break;
				}
				break;
			
			case 3:
				iVar12 = 0;
				while (iVar12 < iLocal_236)
				{
					if (iParam1 != iVar12)
					{
						if (iLocal_236[iVar12] != 3 && iLocal_236[iVar12] != 4)
						{
							iLocal_236[iVar12] = 3;
						}
					}
					iVar12++;
				}
				AI::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
				set_ped_keep_task(iParam0, true);
				iLocal_236[iParam1] = 4;
				break;
			
			case 4:
				if (AI::GET_SCRIPT_TASK_STATUS(iParam0, 1805844857) != 1)
				{
					iLocal_236[iParam1] = 1;
				}
				break;
			
			case 10:
				if (func_22(iParam0))
				{
					iLocal_236[iParam1] = 1;
					break;
				}
				set_ped_reset_flag(iLocal_233[iParam1], 64, true);
				set_ped_reset_flag(iLocal_233[iParam1], 249, true);
				set_ped_reset_flag(iLocal_233[iParam1], 335, true);
				if (is_entity_playing_anim(iLocal_233[iParam1], &Local_341, &(Local_423[iParam1 /*16*/]), 2))
				{
					if (iLocal_66 == 288)
					{
						if (iLocal_727 <= 0)
						{
							iLocal_727 = GAMEPLAY::GET_GAME_TIMER() + get_random_int_in_range(10000, 15000);
						}
						if (is_any_speech_playing(iParam0))
						{
							iLocal_727 = -1;
						}
						if (iLocal_727 > 0)
						{
							if (GAMEPLAY::GET_GAME_TIMER() > iLocal_727)
							{
								func_21(&uLocal_67, 3, iLocal_233[iParam1], "PIERWOMAN", 0, 1);
								if (func_3(&uLocal_67, "PRSAUD", "TRVS_STRUG", 3, 0, 0, 0))
								{
									iLocal_727 = -1;
								}
							}
						}
					}
				}
				else
				{
					iVar13 = 0;
					iVar14 = 0;
					iVar15 = 0;
					if (iLocal_252[0] == joaat("p_trev_rope_01_s") || iLocal_252[1] == joaat("p_trev_rope_01_s"))
					{
						if (!func_25(iVar13, 4))
						{
							func_24(&iVar13, 4);
						}
						if (!func_25(iVar13, 1))
						{
							func_24(&iVar13, 1);
						}
						if (!func_25(iVar14, 16))
						{
							func_24(&iVar14, 16);
						}
						if (!func_25(iVar14, 128))
						{
							func_24(&iVar14, 128);
						}
						if (!func_25(iVar15, 0))
						{
							func_24(&iVar15, 0);
						}
						set_blocking_of_non_temporary_events(iLocal_233[iParam1], true);
						set_ped_can_be_targetted(iLocal_233[iParam1], false);
						set_ped_can_ragdoll_from_player_impact(iLocal_233[iParam1], 0);
					}
					task_synchronized_scene(iLocal_233[iParam1], iLocal_720, &Local_341, &(Local_423[iParam1 /*16*/]), 1000f, -1000f, iVar13, iVar14, 1000f, iVar15);
					iVar16 = 0;
					while (iVar16 < iLocal_249)
					{
						if (iLocal_252[iVar16] != 0)
						{
							if (!is_string_null_or_empty(&(Local_588[iVar16 /*16*/])))
							{
								play_synchronized_entity_anim(iLocal_249[iVar16], iLocal_720, &(Local_588[iVar16 /*16*/]), &Local_341, 8f, 8f, 0, 1000f);
							}
						}
						iVar16++;
					}
				}
				switch (iLocal_242[iParam1])
				{
					case -1:
						break;
					
					case 0:
						iVar17 = get_random_int_in_range(1500, 4000);
						task_look_at_entity(iLocal_233[iParam1], PLAYER::PLAYER_PED_ID(), iVar17, 0, 2);
						iLocal_245[iParam1] = GAMEPLAY::GET_GAME_TIMER() + iVar17 + get_random_int_in_range(500, 2000);
						iLocal_242[iParam1] = 1;
						break;
					
					case 1:
						if (GAMEPLAY::GET_GAME_TIMER() > iLocal_245[iParam1])
						{
							iLocal_245[iParam1] = 0;
							iLocal_242[iParam1] = 0;
						}
						break;
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_233[iParam1], PLAYER::PLAYER_PED_ID(), 1))
				{
				}
				iVar18 = false;
				if (get_entity_health(iLocal_233[iParam1]) < get_entity_max_health(iLocal_233[iParam1]))
				{
					iVar18 = true;
				}
				if (is_entity_on_fire(iLocal_233[iParam1]))
				{
					iVar18 = true;
				}
				if (iVar18)
				{
					set_synchronized_scene_phase(iLocal_720, 0f);
					_0x394B9CD12435C981(iLocal_720, true);
					set_synchronized_scene_looped(iLocal_720, false);
					iVar19 = 4;
					iVar20 = 4276;
					iVar21 = 0;
					task_synchronized_scene(iLocal_233[iParam1], iLocal_720, &Local_341, &(Local_456[iParam1 /*16*/]), 8f, -1000f, iVar19, iVar20, 8f, iVar21);
					set_entity_can_be_damaged(iLocal_233[iParam1], 0);
					_set_ped_ragdoll_flag(iLocal_233[iParam1], iVar20);
					PED::SET_PED_CONFIG_FLAG(iLocal_233[iParam1], 208, true);
					iVar22 = 0;
					while (iVar22 < iLocal_249)
					{
						if (iLocal_252[iVar22] != 0)
						{
							if (!is_string_null_or_empty(&(Local_621[iVar22 /*16*/])))
							{
								play_synchronized_entity_anim(iLocal_249[iVar22], iLocal_720, &(Local_621[iVar22 /*16*/]), &Local_341, 8f, 8f, 0, 1000f);
								set_entity_can_be_damaged(iLocal_249[iVar22], 0);
							}
						}
						iVar22++;
					}
					iLocal_236[iParam1] = 11;
					break;
				}
				break;
			
			case 11:
				iVar23 = true;
				if (!is_synchronized_scene_running(iLocal_720))
				{
					iVar23 = false;
				}
				else if (get_synchronized_scene_phase(iLocal_720) >= 0.99f)
				{
					iVar23 = false;
				}
				if (!iVar23)
				{
					if (!is_synchronized_scene_running(iLocal_720))
					{
						iLocal_720 = create_synchronized_scene(vLocal_269, 0f, 0f, fLocal_272, 2);
					}
					_0x394B9CD12435C981(iLocal_720, false);
					set_synchronized_scene_looped(iLocal_720, true);
					iVar24 = 0;
					iVar25 = 180;
					iVar26 = 0;
					task_synchronized_scene(iLocal_233[iParam1], iLocal_720, &Local_341, &(Local_489[iParam1 /*16*/]), 1000f, -1000f, iVar24, iVar25, 1000f, iVar26);
					iVar27 = 0;
					while (iVar27 < iLocal_249)
					{
						if (iLocal_252[iVar27] != 0)
						{
							if (!is_string_null_or_empty(&(Local_654[iVar27 /*16*/])))
							{
								play_synchronized_entity_anim(iLocal_249[iVar27], iLocal_720, &(Local_654[iVar27 /*16*/]), &Local_341, 8f, 8f, 0, 1000f);
							}
						}
						iVar27++;
					}
					iLocal_236[iParam1] = 12;
					break;
				}
				break;
			
			case 12:
				set_ped_reset_flag(iLocal_233[iParam1], 64, true);
				set_ped_reset_flag(iLocal_233[iParam1], 249, true);
				set_ped_reset_flag(iLocal_233[iParam1], 335, true);
				if (!is_entity_playing_anim(iLocal_233[iParam1], &Local_341, &(Local_489[iParam1 /*16*/]), 2))
				{
					if (!is_synchronized_scene_running(iLocal_720))
					{
						iLocal_720 = create_synchronized_scene(vLocal_269, 0f, 0f, fLocal_272, 2);
					}
					task_synchronized_scene(iLocal_233[iParam1], iLocal_720, &Local_341, &(Local_489[iParam1 /*16*/]), 1000f, -1000f, 0, 0, 1000f, 0);
					iVar28 = 0;
					while (iVar28 < iLocal_249)
					{
						if (iLocal_252[iVar28] != 0)
						{
							if (!is_string_null_or_empty(&(Local_654[iVar28 /*16*/])))
							{
								play_synchronized_entity_anim(iLocal_249[iVar28], iLocal_720, &(Local_654[iVar28 /*16*/]), &Local_341, 8f, 8f, 0, 1000f);
							}
						}
						iVar28++;
					}
				}
				break;
			
			default:
				break;
		}
	}
	else
	{
		iLocal_236[iParam1] = -1;
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			iVar29 = 0;
			while (iVar29 < iLocal_249)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_249[iVar29]))
				{
					stop_synchronized_entity_anim(iLocal_249[iVar29], -8f, 1);
					freeze_entity_position(iLocal_249[iVar29], false);
					set_entity_dynamic(iLocal_249[iVar29], 1);
					set_object_as_no_longer_needed(&(iLocal_249[iVar29]));
				}
				iVar29++;
			}
		}
	}
}

void func_21(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if (*(uParam0[iParam1 /*10*/]).f_7 == 1)
	{
	}
	*uParam0[iParam1 /*10*/] = iParam2;
	StringCopy(uParam0[iParam1 /*10*/].f_1, sParam3, 24);
	*(uParam0[iParam1 /*10*/]).f_7 = 1;
	*(uParam0[iParam1 /*10*/]).f_8 = iParam4;
	*(uParam0[iParam1 /*10*/]).f_9 = iParam5;
	if (!Global_69489)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if (*(uParam0[iParam1 /*10*/]).f_8 == 0)
			{
				set_ped_can_play_ambient_anims(iParam2, 0);
			}
			else
			{
				set_ped_can_play_ambient_anims(iParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if (*(uParam0[iParam1 /*10*/]).f_9 == 0)
			{
				set_ped_can_use_auto_conversation_lookat(iParam2, 0);
			}
			else
			{
				set_ped_can_use_auto_conversation_lookat(iParam2, 1);
			}
		}
	}
}

bool func_22(int iParam0)
{
	int iVar0;
	
	if (iLocal_252[0] == joaat("p_trev_rope_01_s") || iLocal_252[1] == joaat("p_trev_rope_01_s"))
	{
		return false;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
	{
		return true;
	}
	if (is_player_targetting_entity(player_id(), iParam0))
	{
		return true;
	}
	if (is_ped_in_combat(iParam0, PLAYER::PLAYER_PED_ID()))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_233)
	{
		if (iParam0 != iLocal_233[iVar0])
		{
			if (iLocal_236[iVar0] < 0 && ENTITY::DOES_ENTITY_EXIST(iLocal_233[iVar0]))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_23(int iParam0)
{
	int iVar0;
	float fVar1;
	
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
	{
		return true;
	}
	if (is_player_targetting_entity(player_id(), iParam0))
	{
		return true;
	}
	if (is_ped_in_combat(iParam0, PLAYER::PLAYER_PED_ID()))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_233)
	{
		if (iParam0 != iLocal_233[iVar0])
		{
			if (iLocal_236[iVar0] < 0 && ENTITY::DOES_ENTITY_EXIST(iLocal_233[iVar0]))
			{
				return true;
			}
		}
		iVar0++;
	}
	if (iLocal_66 == 237)
	{
		fVar1 = vdist2(ENTITY::GET_ENTITY_COORDS(iParam0, 0), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0));
		if (fVar1 < 10f * 10f)
		{
			return true;
		}
	}
	return false;
}

void func_24(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_25(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_26(Vector3 vParam0, Vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_27(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	_play_ambient_speech_with_voice(iParam0, sParam1, sParam2, func_28(iParam3), 0);
}

int func_28(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

bool func_29(char* sParam0, char* sParam1, char* sParam2, float fParam3, float fParam4)
{
	if (are_strings_equal(sParam2, "WalkInterruptible"))
	{
		if (are_strings_equal(sParam0, "SWITCH@TREVOR@SCARES_TRAMP"))
		{
			if (are_strings_equal(sParam1, "trev_scares_tramp_exit_tramp"))
			{
				*fParam3 = 0.8f;
				*fParam4 = 1f;
				return true;
			}
		}
		if (are_strings_equal(sParam0, "SWITCH@TREVOR@CHASE_STRIPPERS"))
		{
			if (are_strings_equal(sParam1, "EXIT_STRIPPER_01") || are_strings_equal(sParam1, "EXIT_STRIPPER_02"))
			{
				*fParam3 = 0.4f;
				*fParam4 = 1f;
				return true;
			}
		}
		if (are_strings_equal(sParam0, "SWITCH@TREVOR@THROW_FOOD"))
		{
			if (are_strings_equal(sParam1, "EXIT_Ped"))
			{
				*fParam3 = 0.7f;
				*fParam4 = 1f;
				return true;
			}
		}
	}
	return false;
}

bool func_30()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	
	if (!func_31())
	{
		if (is_synchronized_scene_running(Global_88941))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_233)
			{
				if (!PED::IS_PED_INJURED(iLocal_233[iVar0]))
				{
					fVar1 = -1000f;
					iVar2 = 0;
					iVar3 = 0;
					fVar4 = 1000f;
					iVar5 = 0;
					fVar6 = -1f;
					fVar7 = -1f;
					if (find_anim_event_phase(&Local_341, &(Local_390[iVar0 /*16*/]), "WalkInterruptible", &fVar6, &fVar7) || func_29(&Local_341, &(Local_390[iVar0 /*16*/]), "WalkInterruptible", &fVar6, &fVar7))
					{
						fVar1 = -8f;
						iVar2 = 2;
						iVar3 = 0;
						fVar4 = 8f;
						iVar5 = 0;
					}
					task_synchronized_scene(iLocal_233[iVar0], Global_88941, &Local_341, &(Local_390[iVar0 /*16*/]), 1000f, fVar1, iVar2, iVar3, fVar4, iVar5);
					iLocal_236[iVar0] = 0;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < iLocal_249)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_249[iVar0]))
				{
					if (!is_string_null_or_empty(&(Local_555[iVar0 /*16*/])))
					{
						play_synchronized_entity_anim(iLocal_249[iVar0], Global_88941, &(Local_555[iVar0 /*16*/]), &Local_341, 8f, -1000f, 0, 1000f);
					}
				}
				iVar0++;
			}
			_0xCD9CC7E200A52A6F(Global_88941);
			return true;
		}
	}
	return false;
}

bool func_31()
{
	if (!is_player_switch_in_progress() || get_player_switch_type() == 3)
	{
		return false;
	}
	if (get_player_switch_state() > 8)
	{
		if (get_player_switch_state() != 11)
		{
			return false;
		}
		if (get_player_switch_state() == 11)
		{
			if (set_player_inverted_up() > 0)
			{
				if (_0x5B48A06DD0E792A5() > 100)
				{
					return false;
				}
			}
		}
	}
	return true;
}

bool func_32()
{
	int iVar0;
	
	if (is_synchronized_scene_running(Global_88940))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_233)
		{
			if (!PED::IS_PED_INJURED(iLocal_233[iVar0]))
			{
				task_synchronized_scene(iLocal_233[iVar0], Global_88940, &Local_341, &(Local_357[iVar0 /*16*/]), 8f, -1000f, 0, 0, 1000f, 0);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_249)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_249[iVar0]))
			{
				if (!is_string_null_or_empty(&(Local_522[iVar0 /*16*/])))
				{
					play_synchronized_entity_anim(iLocal_249[iVar0], Global_88940, &(Local_522[iVar0 /*16*/]), &Local_341, 8f, -1000f, 0, 1000f);
				}
			}
			iVar0++;
		}
		if (!is_string_null_or_empty(&Local_721))
		{
			func_21(&uLocal_67, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			func_21(&uLocal_67, 7, iLocal_233[0], "STRIPPER1", 0, 1);
			func_21(&uLocal_67, 8, iLocal_233[1], "STRIPPER2", 0, 1);
		}
		return true;
	}
	return false;
}

bool func_33(int iParam0, int iParam1)
{
	Vector3 vVar0;
	Vector3 fVar3;
	
	if (is_player_switch_in_progress())
	{
		if (get_player_switch_type() != 3)
		{
			if (get_player_switch_state() <= 2 && get_player_switch_state() != 1)
			{
				return true;
			}
		}
	}
	if (!is_player_switch_in_progress())
	{
		if (func_15(14))
		{
			return false;
		}
		if (_0x9689123E3F213AA5())
		{
			return false;
		}
		if (!func_35(iParam0, func_36()))
		{
			return false;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			vVar0 = {ENTITY::GET_ENTITY_COORDS(iParam1, 0)};
			fVar3 = vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), vVar0);
			if (fVar3 > 250f)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
				{
					if (!is_entity_on_screen(iParam1))
					{
						return false;
					}
				}
				else if (!CAM::IS_SPHERE_VISIBLE(vVar0, 1.5f))
				{
					return false;
				}
			}
		}
		else if (iParam1 == func_34(Global_91064) && iParam1 != 0)
		{
			Global_91064 = 0;
		}
	}
	return true;
}

auto func_34(auto uParam0)
{
	return uParam0;
}

int func_35(auto uParam0, auto uParam1)
{
	return (uParam0 && uParam1) != 0;
}

int func_36()
{
	func_11();
	switch (Global_101154.f_1826.f_539.f_3549)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

void func_37()
{
	if (!is_player_switch_in_progress())
	{
		if (is_screen_faded_out())
		{
			func_40();
		}
		return;
	}
	if (get_player_switch_type() == 3)
	{
		func_40();
		return;
	}
	func_38();
	if (Global_91066 > 0)
	{
		return;
	}
	_0x74DE2E8739086740();
}

void func_38()
{
	func_39(Global_91066 - 1);
}

void func_39(int iParam0)
{
	Global_91066 = iParam0;
}

void func_40()
{
	func_39(0);
}

void func_41()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar2 = false;
	while (!iVar2 && iVar1 < 400)
	{
		iVar2 = true;
		iVar0 = 0;
		while (iVar0 < iLocal_239)
		{
			if (iLocal_239[iVar0] != 0)
			{
				STREAMING::REQUEST_MODEL(iLocal_239[iVar0]);
				if (!STREAMING::HAS_MODEL_LOADED(iLocal_239[iVar0]))
				{
					iVar2 = false;
					STREAMING::REQUEST_MODEL(iLocal_239[iVar0]);
				}
			}
			if (!is_string_null_or_empty(&(Local_687[iVar0 /*16*/])))
			{
				request_clip_set(&(Local_687[iVar0 /*16*/]));
				if (!has_clip_set_loaded(&(Local_687[iVar0 /*16*/])))
				{
					iVar2 = false;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_252)
		{
			if (iLocal_252[iVar0] != 0)
			{
				STREAMING::REQUEST_MODEL(iLocal_252[iVar0]);
				if (!STREAMING::HAS_MODEL_LOADED(iLocal_252[iVar0]))
				{
					iVar2 = false;
					STREAMING::REQUEST_MODEL(iLocal_252[iVar0]);
				}
			}
			iVar0++;
		}
		request_anim_dict(&Local_341);
		if (!has_anim_dict_loaded(&Local_341))
		{
			iVar2 = false;
			request_anim_dict(&Local_341);
		}
		if (!iVar2)
		{
			iVar1++;
		}
		wait(0);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_233)
	{
		if (iLocal_239[iVar0] != 0)
		{
			iLocal_233[iVar0] = PED::CREATE_PED(26, iLocal_239[iVar0], vLocal_269 + vLocal_273[iVar0 /*3*/], 0, 1, true);
			set_entity_heading(iLocal_233[iVar0], fLocal_272 + fLocal_287[iVar0]);
			set_ped_random_component_variation(iLocal_233[iVar0], 0);
			if (iLocal_239[iVar0] == joaat("a_f_y_beach_01"))
			{
				if (iLocal_66 == 288)
				{
					set_ped_component_variation(iLocal_233[iVar0], 8, true, false, 0);
				}
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_233[iVar0], 13, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_233[iVar0], 17, true);
			AI::TASK_PLAY_ANIM(iLocal_233[iVar0], &Local_341, &(Local_357[iVar0 /*16*/]), 8f, -8f, -1, 1, 0f, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_249)
	{
		if (iLocal_252[iVar0] != 0)
		{
			iLocal_249[iVar0] = create_object(iLocal_252[iVar0], vLocal_269 + vLocal_273[iVar0 /*3*/] + vLocal_255[iVar0 /*3*/], 1, true, false);
			set_entity_rotation(iLocal_249[iVar0], Vector(fLocal_272 + fLocal_287[iVar0], 0f, 0f) + vLocal_262[iVar0 /*3*/], 2, 1);
			if (!is_string_null_or_empty(&(Local_522[iVar0 /*16*/])))
			{
				play_entity_anim(iLocal_249[iVar0], &(Local_522[iVar0 /*16*/]), &Local_341, 8f, true, 0, 0, 0f, 0);
			}
		}
		iVar0++;
	}
}

void func_42()
{
	char* sVar0;
	auto uVar8;
	auto uVar9;
	int iVar10;
	
	iLocal_66 = Global_90746;
	func_45(iLocal_66, &vLocal_269, &fLocal_272, &sVar0);
	func_43(iLocal_66, &sLocal_293, &sLocal_309, &sLocal_325, &uVar8, &uVar9);
	StringCopy(&(Local_687[0 /*16*/]), "", 64);
	StringCopy(&(Local_687[1 /*16*/]), "", 64);
	iLocal_252[0] = 0;
	iLocal_252[1] = 0;
	switch (iLocal_66)
	{
		case 237:
			StringCopy(&Local_341, "SWITCH@TREVOR@CHASE_STRIPPERS", 64);
			StringCopy(&(Local_357[0 /*16*/]), "LOOP_STRIPPER_01", 64);
			StringCopy(&(Local_390[0 /*16*/]), "EXIT_STRIPPER_01", 64);
			StringCopy(&(Local_423[0 /*16*/]), "", 64);
			StringCopy(&(Local_357[1 /*16*/]), "LOOP_STRIPPER_02", 64);
			StringCopy(&(Local_390[1 /*16*/]), "EXIT_STRIPPER_02", 64);
			StringCopy(&(Local_423[1 /*16*/]), "", 64);
			StringCopy(&Local_721, "TRVS_IG_35", 16);
			fLocal_725 = 0.15f;
			vLocal_273[0 /*3*/] = {get_random_float_in_range(-10f, 10f), get_random_float_in_range(-10f, 10f), 0f};
			vLocal_273[1 /*3*/] = {get_random_float_in_range(-10f, 10f), get_random_float_in_range(-10f, 10f), 0f};
			vLocal_280[0 /*3*/] = {8.2284f, -35.8652f, -1.0334f};
			vLocal_280[1 /*3*/] = {28.4066f, -23.8848f, -0.7887f};
			fLocal_287[0] = get_random_float_in_range(-180f, 180f);
			fLocal_287[1] = get_random_float_in_range(-180f, 180f);
			fLocal_290[0] = 50f;
			fLocal_290[1] = 50f;
			iLocal_239[0] = joaat("s_f_y_stripper_01");
			iLocal_239[1] = joaat("s_f_y_stripper_01");
			iLocal_242[0] = -1;
			iLocal_242[1] = -1;
			break;
		
		case 235:
			StringCopy(&Local_341, "SWITCH@TREVOR@MOCKS_LAPDANCE", 64);
			StringCopy(&(Local_357[0 /*16*/]), "001443_01_TRVS_28_IDLE_STRIPPER", 64);
			StringCopy(&(Local_390[0 /*16*/]), "001443_01_TRVS_28_EXIT_STRIPPER", 64);
			StringCopy(&(Local_423[0 /*16*/]), "001443_01_TRVS_28_IDLE_STRIPPER", 64);
			StringCopy(&(Local_357[1 /*16*/]), "001443_01_TRVS_28_IDLE_MAN", 64);
			StringCopy(&(Local_390[1 /*16*/]), "001443_01_TRVS_28_EXIT_MAN", 64);
			StringCopy(&(Local_423[1 /*16*/]), "001443_01_TRVS_28_IDLE_MAN", 64);
			vLocal_273[0 /*3*/] = {-1.5421f, 0.8274f, -1.0288f};
			vLocal_273[1 /*3*/] = {-0.9636f, 1.1757f, -1.0243f};
			vLocal_280[0 /*3*/] = {0f, 0f, 0f};
			vLocal_280[1 /*3*/] = {0f, 0f, 0f};
			fLocal_287[0] = -130f;
			fLocal_287[1] = -130f;
			fLocal_290[0] = 0f;
			fLocal_290[1] = 0f;
			iVar10 = TIME::GET_CLOCK_HOURS();
			if (iVar10 < 8 || iVar10 > 20)
			{
				iLocal_239[0] = joaat("s_f_y_stripper_02");
			}
			else
			{
				iLocal_239[0] = joaat("s_f_y_stripper_01");
			}
			iLocal_239[1] = joaat("a_m_y_hipster_01");
			iLocal_242[0] = -1;
			iLocal_242[1] = 0;
			break;
		
		case 247:
			StringCopy(&Local_341, "SWITCH@TREVOR@ANNOYS_SUNBATHERS", 64);
			StringCopy(&(Local_357[0 /*16*/]), "trev_annoys_sunbathers_loop_girl", 64);
			StringCopy(&(Local_390[0 /*16*/]), "trev_annoys_sunbathers_exit_girl", 64);
			StringCopy(&(Local_423[0 /*16*/]), "", 64);
			StringCopy(&(Local_687[0 /*16*/]), "move_f@scared", 64);
			StringCopy(&(Local_357[1 /*16*/]), "trev_annoys_sunbathers_loop_guy", 64);
			StringCopy(&(Local_390[1 /*16*/]), "trev_annoys_sunbathers_exit_guy", 64);
			StringCopy(&(Local_423[1 /*16*/]), "", 64);
			StringCopy(&(Local_687[1 /*16*/]), "move_m@hurry_Butch@A", 64);
			vLocal_273[0 /*3*/] = {-0.3866f, 0.1726f, 1f};
			vLocal_273[1 /*3*/] = {-0.0726f, -0.4742f, 1f};
			vLocal_280[0 /*3*/] = {Vector(1.5806f, -1719.606f, -1291.475f) - vLocal_269};
			vLocal_280[1 /*3*/] = {vLocal_280[0 /*3*/]};
			fLocal_287[0] = 0f;
			fLocal_287[1] = 0f;
			fLocal_290[0] = 20f;
			fLocal_290[1] = fLocal_290[0];
			iLocal_239[0] = joaat("a_f_y_beach_01");
			iLocal_239[1] = joaat("a_m_y_beach_01");
			iLocal_242[0] = -1;
			iLocal_242[1] = -1;
			iLocal_252[0] = joaat("prop_cs_beachtowel_01");
			vLocal_255[0 /*3*/] = {0f, 0f, -1f};
			vLocal_262[0 /*3*/] = {0f, 0f, 2.16f};
			iLocal_252[1] = joaat("prop_cs_beachtowel_01");
			vLocal_255[1 /*3*/] = {0f, 0f, -1f};
			vLocal_262[1 /*3*/] = {0f, 0f, -4.32f};
			break;
		
		case 286:
			StringCopy(&Local_341, "SWITCH@TREVOR@RUDE_AT_CAFE", 64);
			StringCopy(&(Local_357[0 /*16*/]), "001218_03_TRVS_23_RUDE_AT_CAFE_IDLE_FEMALE", 64);
			StringCopy(&(Local_390[0 /*16*/]), "001218_03_TRVS_23_RUDE_AT_CAFE_EXIT_FEMALE", 64);
			StringCopy(&(Local_423[0 /*16*/]), "", 64);
			vLocal_273[0 /*3*/] = {4.261f, -2.388f, 0.5f};
			vLocal_280[0 /*3*/] = {10.5918f, -34.5146f, 0f};
			fLocal_287[0] = 57.695f;
			fLocal_290[0] = 30f;
			iLocal_239[0] = joaat("a_f_y_hipster_03");
			iLocal_242[0] = -1;
			StringCopy(&(Local_357[1 /*16*/]), "", 64);
			StringCopy(&(Local_390[1 /*16*/]), "", 64);
			StringCopy(&(Local_423[1 /*16*/]), "", 64);
			vLocal_280[1 /*3*/] = {0f, 0f, 0f};
			fLocal_290[1] = 0f;
			iLocal_239[1] = 0;
			iLocal_242[1] = -1;
			break;
		
		case 263:
			StringCopy(&Local_341, "SWITCH@TREVOR@SCARES_TRAMP", 64);
			StringCopy(&(Local_357[0 /*16*/]), "trev_scares_tramp_idle_tramp", 64);
			StringCopy(&(Local_390[0 /*16*/]), "trev_scares_tramp_exit_tramp", 64);
			StringCopy(&(Local_423[0 /*16*/]), "", 64);
			vLocal_273[0 /*3*/] = {2.0921f, -1.5872f, 0f};
			vLocal_280[0 /*3*/] = {Vector(10.9545f, -1419.537f, -605.8271f) - vLocal_269};
			fLocal_287[0] = get_random_float_in_range(-180f, 180f);
			fLocal_290[0] = 40f;
			iLocal_239[0] = joaat("a_m_o_tramp_01");
			iLocal_242[0] = -1;
			StringCopy(&(Local_357[1 /*16*/]), "", 64);
			StringCopy(&(Local_390[1 /*16*/]), "", 64);
			StringCopy(&(Local_423[1 /*16*/]), "", 64);
			vLocal_280[1 /*3*/] = {0f, 0f, 0f};
			fLocal_290[1] = 0f;
			iLocal_239[1] = 0;
			iLocal_242[1] = -1;
			break;
		
		case 244:
			StringCopy(&Local_341, "SWITCH@TREVOR@THROW_FOOD", 64);
			StringCopy(&(Local_357[0 /*16*/]), "LOOP_Ped", 64);
			StringCopy(&(Local_390[0 /*16*/]), "EXIT_Ped", 64);
			StringCopy(&(Local_423[0 /*16*/]), "", 64);
			vLocal_273[0 /*3*/] = {get_random_float_in_range(-5f, 5f), get_random_float_in_range(-5f, 5f), 0f};
			vLocal_280[0 /*3*/] = {Vector(28.2925f, -1451.728f, 507.6885f) - vLocal_269};
			fLocal_287[0] = get_random_float_in_range(-180f, 180f);
			fLocal_290[0] = 40f;
			iLocal_239[0] = joaat("a_m_y_stlat_01");
			iLocal_242[0] = -1;
			StringCopy(&(Local_357[1 /*16*/]), "", 64);
			StringCopy(&(Local_390[1 /*16*/]), "", 64);
			StringCopy(&(Local_423[1 /*16*/]), "", 64);
			vLocal_280[1 /*3*/] = {0f, 0f, 0f};
			fLocal_290[1] = 0f;
			iLocal_239[1] = 0;
			iLocal_242[1] = -1;
			break;
		
		case 288:
			StringCopy(&Local_341, "SWITCH@TREVOR@UNDER_PIER", 64);
			StringCopy(&(Local_357[0 /*16*/]), "LOOP_Ped", 64);
			StringCopy(&(Local_390[0 /*16*/]), "EXIT_Ped", 64);
			StringCopy(&(Local_423[0 /*16*/]), "EXIT_LOOP_Ped", 64);
			StringCopy(&(Local_456[0 /*16*/]), "DEATH_Ped", 64);
			StringCopy(&(Local_489[0 /*16*/]), "DEATH_LOOP_Ped", 64);
			vLocal_273[0 /*3*/] = {get_random_float_in_range(-10f, 10f), get_random_float_in_range(-10f, 10f), 0f};
			vLocal_280[0 /*3*/] = {0f, 0f, 0f};
			fLocal_287[0] = get_random_float_in_range(-180f, 180f);
			fLocal_290[0] = 0f;
			iLocal_239[0] = joaat("a_m_m_business_01");
			iLocal_242[0] = -1;
			iLocal_252[0] = joaat("p_trev_rope_01_s");
			vLocal_255[0 /*3*/] = {0f, 0f, 0f};
			StringCopy(&(Local_522[0 /*16*/]), "LOOP_Rope", 64);
			StringCopy(&(Local_555[0 /*16*/]), "EXIT_Rope", 64);
			StringCopy(&(Local_588[0 /*16*/]), "EXIT_LOOP_Rope", 64);
			StringCopy(&(Local_621[0 /*16*/]), "DEATH_Rope", 64);
			StringCopy(&(Local_654[0 /*16*/]), "DEATH_LOOP_Rope", 64);
			iLocal_252[1] = joaat("prop_rolled_sock_01");
			vLocal_255[1 /*3*/] = {0f, 0f, 0f};
			StringCopy(&(Local_522[1 /*16*/]), "LOOP_Sock", 64);
			StringCopy(&(Local_555[1 /*16*/]), "EXIT_Sock", 64);
			StringCopy(&(Local_588[1 /*16*/]), "EXIT_LOOP_Sock", 64);
			StringCopy(&(Local_621[1 /*16*/]), "DEATH_Sock", 64);
			StringCopy(&(Local_654[1 /*16*/]), "DEATH_LOOP_Sock", 64);
			StringCopy(&(Local_357[1 /*16*/]), "", 64);
			StringCopy(&(Local_390[1 /*16*/]), "", 64);
			StringCopy(&(Local_423[1 /*16*/]), "", 64);
			vLocal_280[1 /*3*/] = {0f, 0f, 0f};
			fLocal_290[1] = 0f;
			iLocal_239[1] = 0;
			iLocal_242[1] = -1;
			break;
		
		default:
			StringCopy(&Local_341, "", 64);
			StringCopy(&(Local_357[0 /*16*/]), "", 64);
			StringCopy(&(Local_390[0 /*16*/]), "", 64);
			StringCopy(&(Local_423[0 /*16*/]), "", 64);
			StringCopy(&(Local_357[1 /*16*/]), "", 64);
			StringCopy(&(Local_390[1 /*16*/]), "", 64);
			StringCopy(&(Local_423[1 /*16*/]), "", 64);
			vLocal_273[0 /*3*/] = {get_random_float_in_range(-10f, 10f), get_random_float_in_range(-10f, 10f), 0f};
			vLocal_273[1 /*3*/] = {get_random_float_in_range(-10f, 10f), get_random_float_in_range(-10f, 10f), 0f};
			fLocal_287[0] = get_random_float_in_range(-180f, 180f);
			fLocal_287[1] = get_random_float_in_range(-180f, 180f);
			iLocal_239[0] = joaat("a_m_y_musclbeac_01");
			iLocal_239[1] = joaat("a_m_y_musclbeac_01");
			iLocal_242[0] = -1;
			iLocal_242[1] = -1;
			break;
	}
}

bool func_43(int iParam0, char* sParam1, char* sParam2, char* sParam3, auto uParam4, auto uParam5)
{
	*uParam4 = 9;
	*uParam5 = 0;
	switch (iParam0)
	{
		case 11:
			StringCopy(sParam1, "SWITCH@FRANKLIN@STRIPCLUB", 64);
			StringCopy(sParam2, "002113_02_FRAS_15_STRIPCLUB_IDLE", 64);
			StringCopy(sParam3, "002113_02_FRAS_15_STRIPCLUB_EXIT", 64);
			return true;
			break;
		
		case 124:
			StringCopy(sParam1, "SWITCH@MICHAEL@WASH_FACE", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return true;
			break;
		
		case 234:
			StringCopy(sParam1, "SWITCH@TREVOR@ON_TOILET", 64);
			StringCopy(sParam2, "trev_on_toilet_loop", 64);
			StringCopy(sParam3, "trev_on_toilet_exit", 64);
			*uParam4 = 1545;
			*uParam5 = 1544;
			return true;
			break;
		
		case 316:
			StringCopy(sParam1, "SWITCH@TREVOR@JERKING_OFF", 64);
			StringCopy(sParam2, "trev_jerking_off_loop", 64);
			StringCopy(sParam3, "trev_jerking_off_exit", 64);
			*uParam4 = 1545;
			*uParam5 = 1544;
			return true;
			break;
		
		case 77:
			StringCopy(sParam1, "SWITCH@MICHAEL@BEDROOM", 64);
			StringCopy(sParam2, "BED_LOOP_Michael", 64);
			StringCopy(sParam3, "BED_EXIT_Michael", 64);
			return true;
			break;
		
		case 78:
			StringCopy(sParam1, "SWITCH@MICHAEL@BEDROOM2", 64);
			StringCopy(sParam2, "BED_LOOP_Michael", 64);
			StringCopy(sParam3, "BED_EXIT_Michael", 64);
			return true;
			break;
		
		case 79:
			StringCopy(sParam1, "SAFE@MICHAEL@IG_3", 64);
			StringCopy(sParam2, "BASE_MICHAEL", 64);
			StringCopy(sParam3, "EXIT_MICHAEL", 64);
			return true;
			break;
		
		case 80:
			StringCopy(sParam1, "SWITCH@MICHAEL@SITTING", 64);
			StringCopy(sParam2, "IDLE", 64);
			StringCopy(sParam3, "EXIT_FORWARD", 64);
			return true;
			break;
		
		case 82:
			StringCopy(sParam1, "SWITCH@MICHAEL@WAKES_UP_SCREAMING", 64);
			StringCopy(sParam2, "001671_02_MICS2_1_WAKES_UP_SCREAMING_IDLE", 64);
			StringCopy(sParam3, "001671_02_MICS2_1_WAKES_UP_SCREAMING_EXIT", 64);
			return true;
			break;
		
		case 84:
			StringCopy(sParam1, "SAVECountryside@", 64);
			StringCopy(sParam2, "M_Sleep_Loop_countryside", 64);
			StringCopy(sParam3, "M_GetOut_countryside", 64);
			return true;
			break;
		
		case 83:
			StringCopy(sParam1, "SWITCH@MICHAEL@WAKES_UP_SCARED", 64);
			StringCopy(sParam2, "001672_02_MICS2_1_WAKES_UP_SCARED_IDLE", 64);
			StringCopy(sParam3, "001672_02_MICS2_1_WAKES_UP_SCARED_EXIT", 64);
			return true;
			break;
		
		case 85:
			StringCopy(sParam1, "SWITCH@MICHAEL@WATCHING_TV", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return true;
			break;
		
		case 291:
			StringCopy(sParam1, "SWITCH@TREVOR@WATCHING_TV", 64);
			StringCopy(sParam2, "LOOP", 64);
			StringCopy(sParam3, "EXIT", 64);
			return true;
			break;
		
		case 128:
			StringCopy(sParam1, "SWITCH@MICHAEL@SITTING", 64);
			StringCopy(sParam2, "IDLE", 64);
			StringCopy(sParam3, "EXIT_FORWARD", 64);
			return true;
			break;
		
		case 86:
			StringCopy(sParam1, "SWITCH@MICHAEL@ON_SOFA", 64);
			StringCopy(sParam2, "BASE_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return true;
			break;
		
		case 87:
		case 88:
		case 184:
		case 185:
			StringCopy(sParam1, "SWITCH@MICHAEL@SUNLOUNGER", 64);
			StringCopy(sParam2, "SunLounger_Idle", 64);
			StringCopy(sParam3, "SunLounger_GetUp", 64);
			*uParam4 = 1545;
			*uParam5 = 1544;
			return true;
			break;
		
		case 89:
		case 90:
			StringCopy(sParam1, "SWITCH@MICHAEL@SLEEP_IN_CAR", 64);
			StringCopy(sParam2, "BASE_MICHAEL", 64);
			StringCopy(sParam3, "SLEEP_IN_CAR_MICHAEL", 64);
			return true;
			break;
		
		case 127:
			StringCopy(sParam1, "SWITCH@MICHAEL@SLEEP_IN_CAR", 64);
			StringCopy(sParam2, "BASE_PREMIER_MICHAEL", 64);
			StringCopy(sParam3, "SLEEP_IN_CAR_PREMIER_MICHAEL", 64);
			return true;
			break;
		
		case 91:
		case 92:
		case 93:
		case 104:
		case 81:
		case 126:
			StringCopy(sParam1, "SWITCH@MICHAEL@SMOKING2", 64);
			StringCopy(sParam2, "LOOP", 64);
			StringCopy(sParam3, "EXIT", 64);
			*uParam4 |= 1536;
			*uParam5 |= 1536;
			return true;
			break;
		
		case 94:
			StringCopy(sParam1, "SWITCH@MICHAEL@CAFE", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return true;
			break;
		
		case 95:
			StringCopy(sParam1, "SWITCH@MICHAEL@EXIT_RESTAURANT", 64);
			StringCopy(sParam2, "mic_exit_restaurant_loop", 64);
			StringCopy(sParam3, "mic_exit_restaurant_exit", 64);
			return true;
			break;
		
		case 134:
			StringCopy(sParam1, "SWITCH@MICHAEL@DRUNK_BAR", 64);
			StringCopy(sParam2, "Drunk_Idle_PED", 64);
			StringCopy(sParam3, "Drunk_Exit_PED", 64);
			return true;
			break;
		
		case 108:
		case 109:
			StringCopy(sParam1, "SWITCH@MICHAEL@PARKBENCH_SMOKE_RANGER", 64);
			StringCopy(sParam2, "parkbench_smoke_ranger_loop", 64);
			StringCopy(sParam3, "parkbench_smoke_ranger_exit", 64);
			return true;
			break;
		
		case 112:
		case 113:
		case 123:
			StringCopy(sParam1, "SWITCH@MICHAEL@SITTING_ON_CAR_BONNET", 64);
			StringCopy(sParam2, "sitting_on_car_bonnet_loop", 64);
			StringCopy(sParam3, "sitting_on_car_bonnet_exit", 64);
			*uParam4 |= 1536;
			*uParam5 |= 1536;
			return true;
			break;
		
		case 41:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
			StringCopy(sParam1, "SWITCH@MICHAEL@SITTING_ON_CAR_PREMIERE", 64);
			StringCopy(sParam2, "SITTING_ON_CAR_PREMIERE_LOOP_PLAYER", 64);
			StringCopy(sParam3, "SITTING_ON_CAR_PREMIERE_EXIT_PLAYER", 64);
			*uParam4 |= 1536;
			*uParam5 |= 1536;
			return true;
			break;
		
		case 114:
			StringCopy(sParam1, "SWITCH@MICHAEL@PHARMACY", 64);
			StringCopy(sParam2, "mics1_ig_11_loop", 64);
			StringCopy(sParam3, "mics1_ig_11_exit", 64);
			return true;
			break;
		
		case 105:
			StringCopy(sParam1, "SWITCH@MICHAEL@STUCKINTRAFFIC", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "StuckInTraffic_Aggitated", 64);
			*uParam5 |= 32;
			return true;
			break;
		
		case 106:
			StringCopy(sParam1, "SWITCH@MICHAEL@STUCKINTRAFFIC", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "StuckInTraffic_HitWheel", 64);
			*uParam5 |= 32;
			return true;
			break;
		
		case 107:
			StringCopy(sParam1, "SWITCH@MICHAEL@STUCKINTRAFFIC", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "StuckInTraffic_HitHorn", 64);
			*uParam5 |= 32;
			return true;
			break;
		
		case 98:
			StringCopy(sParam1, "SWITCH@MICHAEL@AMANDA_EXITS_CAR", 64);
			StringCopy(sParam2, "000606_02_MICS1_5_AMANDA_EXITS_CAR_IDLE_MIC", 64);
			StringCopy(sParam3, "000606_02_MICS1_5_AMANDA_EXITS_CAR_EXIT_MIC", 64);
			return true;
			break;
		
		case 170:
			StringCopy(sParam1, "SWITCH@MICHAEL@OPENS_DOOR_FOR_AMA", 64);
			StringCopy(sParam2, "001895_02_MICS3_17_OPENS_DOOR_FOR_AMA_IDLE_MIC", 64);
			StringCopy(sParam3, "001895_02_MICS3_17_OPENS_DOOR_FOR_AMA_EXIT_MIC", 64);
			return true;
			break;
		
		case 171:
			StringCopy(sParam1, "SWITCH@MICHAEL@DROPPING_OFF_JMY", 64);
			StringCopy(sParam2, "001839_02_MICS3_20_DROPPING_OFF_JMY_IDLE_MIC", 64);
			StringCopy(sParam3, "001839_02_MICS3_20_DROPPING_OFF_JMY_EXIT_MIC", 64);
			return true;
			break;
		
		case 172:
			StringCopy(sParam1, "SWITCH@MICHAEL@TRACY_EXITS_CAR", 64);
			StringCopy(sParam2, "001840_01_MICS3_IG_21_TRACY_EXITS_CAR_IDLE_MIC", 64);
			StringCopy(sParam3, "001840_01_MICS3_IG_21_TRACY_EXITS_CAR_MIC", 64);
			return true;
			break;
		
		case 103:
			StringCopy(sParam1, "SWITCH@MICHAEL@PIER", 64);
			StringCopy(sParam2, "pier_lean_smoke_idle", 64);
			StringCopy(sParam3, "pier_lean_smoke_outro", 64);
			*uParam5 |= 68;
			return true;
			break;
		
		case 121:
			StringCopy(sParam1, "SWITCH@MICHAEL@MARINA", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "exit", 64);
			return true;
			break;
		
		case 122:
			StringCopy(sParam1, "SWITCH@MICHAEL@ARGUE_WITH_AMANDA", 64);
			StringCopy(sParam2, "argue_with_amanda_loop_michael", 64);
			StringCopy(sParam3, "argue_with_amanda_exit_michael", 64);
			return true;
			break;
		
		case 125:
			StringCopy(sParam1, "SWITCH@MICHAEL@WALK_AND_TALK", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "Im_A_Married_Man_Michael", 64);
			return true;
			break;
		
		case 115:
		case 116:
		case 117:
		case 97:
		case 162:
			StringCopy(sParam1, "SWITCH@MICHAEL@CAFE", 64);
			StringCopy(sParam2, "Cafe_Idle_PED", 64);
			StringCopy(sParam3, "Cafe_Exit_PED", 64);
			return true;
			break;
		
		case 110:
		case 111:
		case 131:
		case 132:
			StringCopy(sParam1, "SWITCH@MICHAEL@BENCH", 64);
			StringCopy(sParam2, "bench_on_phone_idle", 64);
			StringCopy(sParam3, "EXIT_FORWARD", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1026;
			return true;
			break;
		
		case 129:
			StringCopy(sParam1, "SWITCH@MICHAEL@ON_CLUBCHAIR", 64);
			StringCopy(sParam2, "Switch_ON_CLUBCHAIR_BASE", 64);
			StringCopy(sParam3, "Switch_ON_CLUBCHAIR", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return true;
			break;
		
		case 130:
			StringCopy(sParam1, "SAFE@MICHAEL@IG_5", 64);
			StringCopy(sParam2, "BASE_MICHAEL", 64);
			StringCopy(sParam3, "EXIT_1_MICHAEL", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return true;
			break;
		
		case 150:
			StringCopy(sParam1, "SWITCH@MICHAEL@RONEX_IG_5_P2", 64);
			StringCopy(sParam2, "BASE_MICHAEL", 64);
			StringCopy(sParam3, "RONEX_IG5_P2_MICHAEL", 64);
			return true;
			break;
		
		case 151:
			StringCopy(sParam1, "SWITCH@MICHAEL@RESTAURANT", 64);
			StringCopy(sParam2, "001510_02_GC_MICS3_IG_1_BASE_MICHAEL", 64);
			StringCopy(sParam3, "001510_02_GC_MICS3_IG_1_EXIT_MICHAEL", 64);
			return true;
			break;
		
		case 152:
			StringCopy(sParam1, "SWITCH@MICHAEL@LOUNGE_CHAIRS", 64);
			StringCopy(sParam2, "001523_01_MICS3_9_LOUNGE_CHAIRS_IDLE_MIC", 64);
			StringCopy(sParam3, "001523_01_MICS3_9_LOUNGE_CHAIRS_EXIT_MIC", 64);
			return true;
			break;
		
		case 153:
			StringCopy(sParam1, "SWITCH@MICHAEL@GOODBYE_TO_SOLOMAN", 64);
			StringCopy(sParam2, "001400_01_MICS3_5_BYE_TO_SOLOMAN_IDLE", 64);
			StringCopy(sParam3, "001400_01_MICS3_5_BYE_TO_SOLOMAN_EXIT", 64);
			return true;
			break;
		
		case 154:
			StringCopy(sParam1, "SWITCH@MICHAEL@GOODBYE_TO_SOLOMAN", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return true;
			break;
		
		case 155:
			StringCopy(sParam1, "SWITCH@MICHAEL@AMA_TENNIS", 64);
			StringCopy(sParam2, "001833_01_MICS3_18_AMA_TENNIS_IDLE_MIC", 64);
			StringCopy(sParam3, "001833_01_MICS3_18_AMA_TENNIS_EXIT_MIC", 64);
			return true;
			break;
		
		case 156:
			StringCopy(sParam1, "SWITCH@MICHAEL@AROUND_THE_TABLE_SELFISH", 64);
			StringCopy(sParam2, "AROUND_THE_TABLE_SELFISH_BASE_Michael", 64);
			StringCopy(sParam3, "AROUND_THE_TABLE_SELFISH_Michael", 64);
			return true;
			break;
		
		case 157:
			StringCopy(sParam1, "SWITCH@MICHAEL@REJECTED_ENTRY", 64);
			StringCopy(sParam2, "001396_01_MICS3_6_REJECTED_ENTRY_IDLE_MIC", 64);
			StringCopy(sParam3, "001396_01_MICS3_6_REJECTED_ENTRY_EXIT_MIC", 64);
			return true;
			break;
		
		case 159:
			StringCopy(sParam1, "SWITCH@MICHAEL@EXITS_BARBER", 64);
			StringCopy(sParam2, "001406_01_MICS3_7_EXITS_BARBER_IDLE", 64);
			StringCopy(sParam3, "001406_01_MICS3_7_EXITS_BARBER_EXIT", 64);
			return true;
			break;
		
		case 160:
			StringCopy(sParam1, "SWITCH@MICHAEL@EXITS_FANCYSHOP", 64);
			StringCopy(sParam2, "001405_01_MICS3_8_EXITS_FANCYSHOP_IDLE", 64);
			StringCopy(sParam3, "001405_01_MICS3_8_EXITS_FANCYSHOP_EXIT", 64);
			return true;
			break;
		
		case 161:
			StringCopy(sParam1, "SWITCH@MICHAEL@SMOKING", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return true;
			break;
		
		case 163:
			StringCopy(sParam1, "SWITCH@MICHAEL@GETS_READY", 64);
			StringCopy(sParam2, "001520_02_MICS3_14_GETS_READY_IDLE_MIC", 64);
			StringCopy(sParam3, "001520_02_MICS3_14_GETS_READY_EXIT_MIC", 64);
			return true;
			break;
		
		case 164:
			StringCopy(sParam1, "SWITCH@MICHAEL@READS_SCRIPT", 64);
			StringCopy(sParam2, "001404_01_MICS3_16_READS_SCRIPT_IDLE", 64);
			StringCopy(sParam3, "001404_01_MICS3_16_READS_SCRIPT_EXIT", 64);
			return true;
			break;
		
		case 165:
			StringCopy(sParam1, "SWITCH@MICHAEL@BAR_EMPLOYEE_CONVO", 64);
			StringCopy(sParam2, "001387_03_MICS3_2_BAR_EMPLOYEE_CONVO_IDLE_MIC", 64);
			StringCopy(sParam3, "001387_03_MICS3_2_BAR_EMPLOYEE_CONVO_EXIT_MIC", 64);
			return true;
			break;
		
		case 158:
			StringCopy(sParam1, "SWITCH@MICHAEL@PROSTITUTE", 64);
			StringCopy(sParam2, "BASE_MICHAEL", 64);
			StringCopy(sParam3, "EXIT_MICHAEL", 64);
			return true;
			break;
		
		case 166:
			StringCopy(sParam1, "SWITCH@MICHAEL@TALKS_TO_GUARD", 64);
			StringCopy(sParam2, "001393_02_MICS3_3_TALKS_TO_GUARD_IDLE_MIC", 64);
			StringCopy(sParam3, "001393_02_MICS3_3_TALKS_TO_GUARD_EXIT_MIC", 64);
			return true;
			break;
		
		case 167:
			StringCopy(sParam1, "SWITCH@MICHAEL@ON_SET_W_JMY", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "001513_03_GC_MICS3_IG_4_ON_SET_W_JMY_EXIT_MIC", 64);
			return true;
			break;
		
		case 168:
			StringCopy(sParam1, "SWITCH@MICHAEL@TV_W_KIDS", 64);
			StringCopy(sParam2, "001520_02_MICS3_14_TV_W_KIDS_IDLE_MIC", 64);
			StringCopy(sParam3, "001520_02_MICS3_14_TV_W_KIDS_EXIT_MIC", 64);
			return true;
			break;
		
		case 173:
			StringCopy(sParam1, "SWITCH@MICHAEL@BIKING_WITH_JIMMY", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return true;
			break;
		
		case 169:
			StringCopy(sParam1, "SWITCH@MICHAEL@GAMING_W_JMY", 64);
			StringCopy(sParam2, "001518_02_MICS3_11_GAMING_W_JMY_IDLE_MIC", 64);
			StringCopy(sParam3, "001518_02_MICS3_11_GAMING_W_JMY_EXIT_MIC", 64);
			return true;
			break;
	}
	switch (iParam0)
	{
		case 186:
			StringCopy(sParam1, "SWITCH@FRANKLIN@CLEANING_APT", 64);
			StringCopy(sParam2, "001918_01_FRAS_V2_1_CLEANING_APT_IDLE", 64);
			StringCopy(sParam3, "001918_01_FRAS_V2_1_CLEANING_APT_EXIT", 64);
			return true;
			break;
		
		case 187:
			StringCopy(sParam1, "SWITCH@FRANKLIN@ON_CELL", 64);
			StringCopy(sParam2, "001914_01_FRAS_V2_2_ON_CELL_IDLE", 64);
			StringCopy(sParam3, "001914_01_FRAS_V2_2_ON_CELL_EXIT", 64);
			return true;
			break;
		
		case 188:
			StringCopy(sParam1, "SWITCH@FRANKLIN@SNACKING", 64);
			StringCopy(sParam2, "001922_01_FRAS_V2_3_SNACKING_IDLE", 64);
			StringCopy(sParam3, "001922_01_FRAS_V2_3_SNACKING_EXIT", 64);
			return true;
			break;
		
		case 189:
			StringCopy(sParam1, "SWITCH@FRANKLIN@ON_LAPTOP", 64);
			StringCopy(sParam2, "001927_01_FRAS_V2_4_ON_LAPTOP_IDLE", 64);
			StringCopy(sParam3, "001927_01_FRAS_V2_4_ON_LAPTOP_EXIT", 64);
			return true;
			break;
		
		case 190:
			StringCopy(sParam1, "SWITCH@FRANKLIN@IRONING", 64);
			StringCopy(sParam2, "001947_01_GC_FRAS_V2_IG_6_BASE", 64);
			StringCopy(sParam3, "001947_01_GC_FRAS_V2_IG_6_EXIT", 64);
			return true;
			break;
		
		case 191:
			StringCopy(sParam1, "SWITCH@FRANKLIN@WATCHING_TV", 64);
			StringCopy(sParam2, "001915_01_FRAS_V2_8_WATCHING_TV_IDLE", 64);
			StringCopy(sParam3, "001915_01_FRAS_V2_8_WATCHING_TV_EXIT", 64);
			return true;
			break;
		
		case 175:
		case 176:
			StringCopy(sParam1, "SWITCH@FRANKLIN@BED", 64);
			StringCopy(sParam2, "Sleep_LOOP", 64);
			StringCopy(sParam3, "Sleep_GetUp_RubEyes", 64);
			return true;
			break;
		
		case 177:
			StringCopy(sParam1, "SWITCH@FRANKLIN@NAPPING", 64);
			StringCopy(sParam2, "002333_01_FRAS_V2_10_NAPPING_IDLE", 64);
			StringCopy(sParam3, "002333_01_FRAS_V2_10_NAPPING_EXIT", 64);
			return true;
			break;
		
		case 178:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GETTING_READY", 64);
			StringCopy(sParam2, "002334_02_FRAS_V2_11_GETTING_DRESSED_IDLE", 64);
			StringCopy(sParam3, "002334_02_FRAS_V2_11_GETTING_DRESSED_EXIT", 64);
			return true;
			break;
		
		case 179:
		case 180:
			StringCopy(sParam1, "SWITCH@FRANKLIN@BED", 64);
			StringCopy(sParam2, "Bed_Reading_LOOP", 64);
			StringCopy(sParam3, "Bed_Reading_GetUp", 64);
			return true;
			break;
		
		case 181:
		case 182:
		case 183:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PRESS_UPS", 64);
			StringCopy(sParam2, "PressUps_LOOP", 64);
			StringCopy(sParam3, "PressUps_OUT", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return true;
			break;
		
		case 192:
			StringCopy(sParam1, "SWITCH@FRANKLIN@002110_04_MAGD_3_WEED_EXCHANGE", 64);
			StringCopy(sParam2, "002110_04_MAGD_3_WEED_EXCHANGE_SHOPKEEPER", 64);
			StringCopy(sParam3, "002110_04_MAGD_3_WEED_EXCHANGE_FRANKLIN", 64);
			return true;
			break;
		
		case 193:
			StringCopy(sParam1, "SWITCH@FRANKLIN@DISPENSARY", 64);
			StringCopy(sParam2, "exit_dispensary_idle", 64);
			StringCopy(sParam3, "exit_dispensary_outro_ped", 64);
			return true;
			break;
		
		case 194:
			StringCopy(sParam1, "SWITCH@FRANKLIN@DISPENSARY", 64);
			StringCopy(sParam2, "exit_dispensary_idle", 64);
			StringCopy(sParam3, "exit_dispensary_outro", 64);
			return true;
			break;
		
		case 195:
			StringCopy(sParam1, "SWITCH@FRANKLIN@DISPENSARY", 64);
			StringCopy(sParam2, "exit_dispensary_idle", 64);
			StringCopy(sParam3, "exit_dispensary_outro", 64);
			return true;
			break;
		
		case 198:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GARBAGE", 64);
			StringCopy(sParam2, "Garbage_Idle_PLYR", 64);
			StringCopy(sParam3, "Garbage_Toss_PLYR", 64);
			return true;
			break;
		
		case 199:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GARBAGE_B", 64);
			StringCopy(sParam2, "Garbage_Idle_PLYR", 64);
			StringCopy(sParam3, "Garbage_Toss_PLYR", 64);
			return true;
			break;
		
		case 200:
			StringCopy(sParam1, "SWITCH@FRANKLIN@THROW_CUP", 64);
			StringCopy(sParam2, "throw_cup_loop", 64);
			StringCopy(sParam3, "throw_cup_exit", 64);
			return true;
			break;
		
		case 201:
			StringCopy(sParam1, "SWITCH@FRANKLIN@HIT_CUP_HAND", 64);
			StringCopy(sParam2, "hit_cup_hand_loop", 64);
			StringCopy(sParam3, "hit_cup_hand_exit", 64);
			return true;
			break;
		
		case 202:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GYM", 64);
			StringCopy(sParam2, "001942_02_GC_FRAS_IG_5_BASE", 64);
			StringCopy(sParam3, "001942_02_GC_FRAS_IG_5_EXIT", 64);
			return true;
			break;
		
		case 203:
		case 206:
		case 207:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PLAYS_W_DOG", 64);
			StringCopy(sParam2, "001916_01_FRAS_V2_9_PLAYS_W_DOG_IDLE", 64);
			StringCopy(sParam3, "001916_01_FRAS_V2_9_PLAYS_W_DOG_EXIT", 64);
			return true;
			break;
		
		case 204:
		case 205:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PLAYS_W_DOG", 64);
			StringCopy(sParam2, "001916_01_FRAS_V2_9_PLAYS_W_DOG_IDLE", 64);
			StringCopy(sParam3, "001916_01_FRAS_V2_9_PLAYS_W_DOG_EXIT", 64);
			return true;
			break;
		
		case 211:
		case 213:
		case 216:
		case 217:
			StringCopy(sParam1, "SWITCH@FRANKLIN@ADMIRE_MOTORCYCLE", 64);
			StringCopy(sParam2, "BASE_FRANKLIN", 64);
			StringCopy(sParam3, "EXIT_FRANKLIN", 64);
			return true;
			break;
		
		case 212:
		case 214:
			StringCopy(sParam1, "SWITCH@FRANKLIN@CLEANING_CAR", 64);
			StringCopy(sParam2, "001946_01_GC_FRAS_V2_IG_5_BASE", 64);
			StringCopy(sParam3, "001946_01_GC_FRAS_V2_IG_5_EXIT", 64);
			return true;
			break;
		
		case 196:
			StringCopy(sParam1, "SWITCH@FRANKLIN@TANISHA_ARGUE", 64);
			StringCopy(sParam2, "BASE_Franklin", 64);
			StringCopy(sParam3, "Tanisha_Argue_Franklin", 64);
			return true;
			break;
		
		case 197:
			StringCopy(sParam1, "SWITCH@FRANKLIN@WALK_AROUND_HOUSE", 64);
			StringCopy(sParam2, "IDLE_FRANKLIN", 64);
			StringCopy(sParam3, "EXIT_FRANKLIN", 64);
			return true;
			break;
		
		case 215:
			StringCopy(sParam1, "SWITCH@FRANKLIN@BYE_TAXI", 64);
			StringCopy(sParam2, "001938_01_FRAS_V2_7_BYE_TAXI_IDLE_FRA", 64);
			StringCopy(sParam3, "001938_01_FRAS_V2_7_BYE_TAXI_EXIT_FRA", 64);
			return true;
			break;
		
		case 221:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PICKUP_LINE", 64);
			StringCopy(sParam2, "base_Franklin", 64);
			StringCopy(sParam3, "switch_P1_Franklin", 64);
			return true;
			break;
		
		case 222:
			StringCopy(sParam1, "SWITCH@FRANKLIN@CHOPSHOP", 64);
			StringCopy(sParam2, "BASE", 64);
			StringCopy(sParam3, "CheckShoe", 64);
			return true;
			break;
		
		case 223:
			StringCopy(sParam1, "SWITCH@FRANKLIN@CHOPSHOP", 64);
			StringCopy(sParam2, "BASE", 64);
			StringCopy(sParam3, "WipeHands", 64);
			return true;
			break;
		
		case 224:
			StringCopy(sParam1, "SWITCH@FRANKLIN@CHOPSHOP", 64);
			StringCopy(sParam2, "BASE", 64);
			StringCopy(sParam3, "WipeRight", 64);
			return true;
			break;
		
		case 226:
		case 227:
		case 230:
			StringCopy(sParam1, "SWITCH@FRANKLIN@EXIT_BUILDING", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "switch_01", 64);
			return true;
			break;
		
		case 228:
		case 229:
			StringCopy(sParam1, "SWITCH@FRANKLIN@EXIT_BUILDING", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "switch_02", 64);
			return true;
			break;
		
		case 218:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P1", 64);
			StringCopy(sParam2, "gang_taunt_loop_franklin", 64);
			StringCopy(sParam3, "gang_taunt_exit_franklin", 64);
			return true;
			break;
		
		case 219:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P3", 64);
			StringCopy(sParam2, "gang_taunt_with_lamar_loop_frank", 64);
			StringCopy(sParam3, "gang_taunt_with_lamar_exit_frank", 64);
			return true;
			break;
		
		case 220:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P5", 64);
			StringCopy(sParam2, "fras_ig_6_p5_loop_frank", 64);
			StringCopy(sParam3, "fras_ig_6_p5_exit_frank", 64);
			return true;
			break;
		
		case 225:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P3", 64);
			StringCopy(sParam2, "fras_ig_10_p3_loop_frank", 64);
			StringCopy(sParam3, "fras_ig_10_p3_exit_frank", 64);
			return true;
			break;
		
		case 232:
		case 233:
			StringCopy(sParam1, "missheist_agency2aig_9", 64);
			StringCopy(sParam2, "Franklin_call_Michael_IDLE_PLAYER", 64);
			StringCopy(sParam3, "Franklin_call_Michael_EXIT_PLAYER", 64);
			return true;
			break;
		
		case 235:
			StringCopy(sParam1, "SWITCH@TREVOR@MOCKS_LAPDANCE", 64);
			StringCopy(sParam2, "001443_01_TRVS_28_IDLE_TRV", 64);
			StringCopy(sParam3, "001443_01_TRVS_28_EXIT_TRV", 64);
			return true;
			break;
		
		case 236:
			StringCopy(sParam1, "SWITCH@TREVOR@BAR", 64);
			StringCopy(sParam2, "LOOP_Trevor", 64);
			StringCopy(sParam3, "EXIT_Trevor", 64);
			return true;
			break;
		
		case 237:
			StringCopy(sParam1, "SWITCH@TREVOR@CHASE_STRIPPERS", 64);
			StringCopy(sParam2, "LOOP_Trevor", 64);
			StringCopy(sParam3, "EXIT_Trevor", 64);
			return true;
			break;
		
		case 238:
			StringCopy(sParam1, "SWITCH@TREVOR@STRIPCLUB", 64);
			StringCopy(sParam2, "trev_leave_stripclub_idle", 64);
			StringCopy(sParam3, "trev_leave_stripclub_outro", 64);
			return true;
			break;
		
		case 239:
			StringCopy(sParam1, "SWITCH@TREVOR@ESCORTED_OUT", 64);
			StringCopy(sParam2, "001215_02_TRVS_12_ESCORTED_OUT_IDLE_TRV", 64);
			StringCopy(sParam3, "001215_02_TRVS_12_ESCORTED_OUT_EXIT_TRV", 64);
			return true;
			break;
		
		case 273:
		case 274:
			StringCopy(sParam1, "SWITCH@TREVOR@PUKING_INTO_FOUNTAIN", 64);
			StringCopy(sParam2, "trev_fountain_puke_loop", 64);
			StringCopy(sParam3, "trev_fountain_puke_exit", 64);
			return true;
			break;
		
		case 245:
		case 40:
			StringCopy(sParam1, "SWITCH@TREVOR@TREV_SMOKING_METH", 64);
			StringCopy(sParam2, "TREV_SMOKING_METH_LOOP", 64);
			StringCopy(sParam3, "TREV_SMOKING_METH_EXIT", 64);
			*uParam4 = 1545;
			*uParam5 = 1544;
			return true;
			break;
		
		case 315:
			StringCopy(sParam1, "SWITCH@TREVOR@HEAD_IN_SINK", 64);
			StringCopy(sParam2, "trev_sink_idle", 64);
			StringCopy(sParam3, "trev_sink_exit", 64);
			*uParam4 = 1545;
			*uParam5 = 1544;
			return true;
			break;
		
		case 250:
		case 251:
		case 252:
		case 253:
			StringCopy(sParam1, "SWITCH@TREVOR@AT_THE_DOCKS", 64);
			StringCopy(sParam2, "001209_01_TRVS_3_AT_THE_DOCKS_IDLE", 64);
			StringCopy(sParam3, "001209_01_TRVS_3_AT_THE_DOCKS_EXIT", 64);
			return true;
			break;
		
		case 262:
			StringCopy(sParam1, "SWITCH@TREVOR@KO_NEIGHBOUR", 64);
			StringCopy(sParam2, "001500_03_TRVS_19_KO_NEIGHBOUR_LOOP_TRV", 64);
			StringCopy(sParam3, "001500_03_TRVS_19_KO_NEIGHBOUR_EXIT_TRV", 64);
			return true;
			break;
		
		case 243:
			StringCopy(sParam1, "SWITCH@TREVOR@GARBAGE_FOOD", 64);
			StringCopy(sParam2, "LOOP_Trevor", 64);
			StringCopy(sParam3, "EXIT_Trevor", 64);
			return true;
			break;
		
		case 244:
			StringCopy(sParam1, "SWITCH@TREVOR@THROW_FOOD", 64);
			StringCopy(sParam2, "LOOP_Trevor", 64);
			StringCopy(sParam3, "EXIT_Trevor", 64);
			return true;
			break;
		
		case 271:
		case 272:
		case 265:
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
		case 279:
		case 240:
		case 241:
		case 242:
			StringCopy(sParam1, "SWITCH@TREVOR@SLOUCHED_GET_UP", 64);
			StringCopy(sParam2, "TREV_SLOUCHED_GET_UP_IDLE", 64);
			StringCopy(sParam3, "TREV_SLOUCHED_GET_UP_EXIT", 64);
			return true;
			break;
		
		case 280:
			StringCopy(sParam1, "SWITCH@TREVOR@NAKED_ISLAND", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "exit", 64);
			return true;
			break;
		
		case 246:
			StringCopy(sParam1, "SWITCH@TREVOR@PUSHES_BODYBUILDER", 64);
			StringCopy(sParam2, "001426_03_TRVS_5_PUSHES_BODYBUILDER_IDLE_TRV", 64);
			StringCopy(sParam3, "001426_03_TRVS_5_PUSHES_BODYBUILDER_EXIT_TRV", 64);
			return true;
			break;
		
		case 286:
			StringCopy(sParam1, "SWITCH@TREVOR@RUDE_AT_CAFE", 64);
			StringCopy(sParam2, "001218_03_TRVS_23_RUDE_AT_CAFE_IDLE_TRV", 64);
			StringCopy(sParam3, "001218_03_TRVS_23_RUDE_AT_CAFE_EXIT_TRV", 64);
			return true;
			break;
		
		case 247:
			StringCopy(sParam1, "SWITCH@TREVOR@ANNOYS_SUNBATHERS", 64);
			StringCopy(sParam2, "trev_annoys_sunbathers_loop_trevor", 64);
			StringCopy(sParam3, "trev_annoys_sunbathers_exit_trevor", 64);
			return true;
			break;
		
		case 263:
			StringCopy(sParam1, "SWITCH@TREVOR@SCARES_TRAMP", 64);
			StringCopy(sParam2, "TREV_SCARES_TRAMP_IDLE_TREVOR", 64);
			StringCopy(sParam3, "TREV_SCARES_TRAMP_EXIT_TREVOR", 64);
			return true;
			break;
		
		case 278:
			StringCopy(sParam1, "SWITCH@TREVOR@NAKED_ON_BRIDGE", 64);
			StringCopy(sParam2, "002055_01_TRVS_17_NAKED_ON_BRIDGE_IDLE", 64);
			StringCopy(sParam3, "002055_01_TRVS_17_NAKED_ON_BRIDGE_EXIT", 64);
			return true;
			break;
		
		case 264:
			StringCopy(sParam1, "SWITCH@TREVOR@DUMPSTER", 64);
			StringCopy(sParam2, "002002_01_TRVS_14_DUMPSTER_IDLE", 64);
			StringCopy(sParam3, "002002_01_TRVS_14_DUMPSTER_EXIT", 64);
			return true;
			break;
		
		case 255:
			StringCopy(sParam1, "SWITCH@TREVOR@FUNERAL_HOME", 64);
			StringCopy(sParam2, "trvs_ig_11_loop", 64);
			StringCopy(sParam3, "trvs_ig_11_exit", 64);
			return true;
			break;
		
		case 285:
			StringCopy(sParam1, "SWITCH@TREVOR@BRIDGE", 64);
			StringCopy(sParam2, "HOLD_LOOP_trevor", 64);
			StringCopy(sParam3, "THROW_EXIT_trevor", 64);
			return true;
			break;
		
		case 259:
			StringCopy(sParam1, "SWITCH@TREVOR@YELLS_AT_DOORMAN", 64);
			StringCopy(sParam2, "001430_01_TRVS_21_YELLS_AT_DOORMAN_IDLE_TRV", 64);
			StringCopy(sParam3, "001430_01_TRVS_21_YELLS_AT_DOORMAN_EXIT_TRV", 64);
			return true;
			break;
		
		case 248:
			StringCopy(sParam1, "SWITCH@TREVOR@BLOCK_CAMERA", 64);
			StringCopy(sParam2, "001220_03_GC_TRVS_IG_7_BASE_TREVOR", 64);
			StringCopy(sParam3, "001220_03_GC_TRVS_IG_7_EXIT_TREVOR", 64);
			return true;
			break;
		
		case 249:
			StringCopy(sParam1, "SWITCH@TREVOR@GUITAR_BEATDOWN", 64);
			StringCopy(sParam2, "001370_02_TRVS_8_GUITAR_BEATDOWN_IDLE_TRV", 64);
			StringCopy(sParam3, "001370_02_TRVS_8_GUITAR_BEATDOWN_EXIT_TRV", 64);
			return true;
			break;
		
		case 254:
			StringCopy(sParam1, "SWITCH@TREVOR@LINGERIE_SHOP", 64);
			StringCopy(sParam2, "trev_exit_lingerie_shop_idle", 64);
			StringCopy(sParam3, "trev_exit_lingerie_shop_outro", 64);
			return true;
			break;
		
		case 287:
			StringCopy(sParam1, "SWITCH@TREVOR@RAND_TEMPLE", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "TAI_CHI_Trevor", 64);
			return true;
			break;
		
		case 288:
			StringCopy(sParam1, "SWITCH@TREVOR@UNDER_PIER", 64);
			StringCopy(sParam2, "LOOP_Trevor", 64);
			StringCopy(sParam3, "EXIT_Trevor", 64);
			return true;
			break;
		
		case 289:
			StringCopy(sParam1, "SWITCH@TREVOR@DRUNK_HOWLING", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "exit", 64);
			return true;
			break;
		
		case 290:
			StringCopy(sParam1, "SWITCH@TREVOR@DRUNK_HOWLING_SC", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "exit", 64);
			return true;
			break;
		
		case 292:
		case 295:
			StringCopy(sParam1, "SWITCH@TREVOR@BED", 64);
			StringCopy(sParam2, "Bed_Sleep_TREVOR", 64);
			StringCopy(sParam3, "Bed_GetUp_1_TREVOR", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return true;
			break;
		
		case 293:
		case 294:
			StringCopy(sParam1, "SWITCH@TREVOR@BED", 64);
			StringCopy(sParam2, "Bed_Sleep_TREVOR", 64);
			StringCopy(sParam3, "Bed_GetUp_2_TREVOR", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return true;
			break;
		
		case 299:
			StringCopy(sParam1, "SWITCH@TREVOR@FLOYD_CRYING", 64);
			StringCopy(sParam2, "Console_LOOP_TREVOR", 64);
			StringCopy(sParam3, "Console_Wasnt_Fun_TREVOR", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return true;
			break;
		
		case 300:
		case 301:
		case 302:
		case 303:
			StringCopy(sParam1, "SWITCH@TREVOR@FLOYD_CRYING", 64);
			StringCopy(sParam2, "Console_LOOP_TREVOR", 64);
			StringCopy(sParam3, "Console_Get_Along_TREVOR", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return true;
			break;
		
		case 296:
			StringCopy(sParam1, "SWITCH@TREVOR@BEAR_IN_FLOYDS_FACE", 64);
			StringCopy(sParam2, "bear_in_floyds_face_loop_trev", 64);
			StringCopy(sParam3, "bear_in_floyds_face_exit_trev", 64);
			return true;
			break;
		
		case 297:
			StringCopy(sParam1, "SWITCH@TREVOR@BEAR_FLOYDS_FACE_SMELL", 64);
			StringCopy(sParam2, "bear_floyds_face_smell_loop_trev", 64);
			StringCopy(sParam3, "bear_floyds_face_smell_exit_trev", 64);
			return true;
			break;
		
		case 298:
			StringCopy(sParam1, "SWITCH@TREVOR@PINEAPPLE", 64);
			StringCopy(sParam2, "Pineapple_LOOP_TREVOR", 64);
			StringCopy(sParam3, "Pineapple_EXIT_TREVOR", 64);
			return true;
			break;
		
		case 304:
			StringCopy(sParam1, "SWITCH@MICHAEL@SMOKING2", 64);
			StringCopy(sParam2, "LOOP", 64);
			StringCopy(sParam3, "EXIT", 64);
			*uParam4 |= 1536;
			*uParam5 |= 1536;
			return true;
			break;
		
		case 305:
			func_44(iParam0, sParam1, sParam2, sParam3);
			return true;
			break;
		
		case 310:
			StringCopy(sParam1, "SWITCH@TREVOR@DIGGING", 64);
			StringCopy(sParam2, "001433_01_TRVS_26_DIGGING_IDLE", 64);
			StringCopy(sParam3, "001433_01_TRVS_26_DIGGING_EXIT", 64);
			*uParam5 |= 32768;
			return true;
			break;
		
		case 311:
			StringCopy(sParam1, "SWITCH@TREVOR@FLUSHES_FOOT", 64);
			StringCopy(sParam2, "002057_03_TRVS_27_FLUSHES_FOOT_IDLE", 64);
			StringCopy(sParam3, "002057_03_TRVS_27_FLUSHES_FOOT_EXIT", 64);
			*uParam5 |= 32768;
			return true;
			break;
		
		default:
			StringCopy(sParam1, "NULL", 64);
			StringCopy(sParam2, "NULL", 64);
			StringCopy(sParam3, "NULL", 64);
			return false;
			break;
	}
	StringCopy(sParam1, "NULL", 64);
	StringCopy(sParam2, "NULL", 64);
	StringCopy(sParam3, "NULL", 64);
	return false;
}

void func_44(int iParam0, char* sParam1, char* sParam2, char* sParam3)
{
	StringCopy(sParam1, "AMB@WORLD_HUMAN_SMOKING@MALE@MALE_A@IDLE_A", 64);
	StringCopy(sParam2, "IDLE_A", 64);
	StringCopy(sParam3, "IDLE_A", 64);
}

bool func_45(int iParam0, auto uParam1, auto uParam2, char* sParam3)
{
	int iVar0;
	
	if (func_47(iParam0, uParam2, sParam3))
	{
		switch (iParam0)
		{
			case 0:
				return false;
				break;
			
			case 1:
				func_46(&iVar0);
				if (iVar0 < 5)
				{
					*uParam1 = {Global_86814[iVar0 /*9*/].f_3};
					*uParam2 = Global_86814[iVar0 /*9*/].f_6;
					StringCopy(sParam3, "", 32);
					return true;
				}
				else
				{
					*uParam1 = {Global_86814[0 /*9*/].f_3};
					*uParam2 = Global_86814[0 /*9*/].f_6;
					StringCopy(sParam3, "", 32);
					return true;
				}
				break;
			
			case 2:
				*uParam1 = {Global_89454[0 /*109*/].f_4};
				*uParam2 = Global_89454[0 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return true;
				break;
			
			case 3:
				*uParam1 = {Global_89454[1 /*109*/].f_4};
				*uParam2 = Global_89454[1 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return true;
				break;
			
			case 4:
				*uParam1 = {Global_89454[2 /*109*/].f_4};
				*uParam2 = Global_89454[2 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return true;
				break;
			
			case 5:
				*uParam1 = {Global_101154.f_1826.f_539.f_1528[0 /*3*/] + Vector(-1f, 0f, 0f)};
				*uParam2 = Global_101154.f_1826.f_539.f_1538[0];
				StringCopy(sParam3, "", 32);
				return true;
				break;
			
			case 6:
				*uParam1 = {Global_101154.f_1826.f_539.f_1528[1 /*3*/] + Vector(-1f, 0f, 0f)};
				*uParam2 = Global_101154.f_1826.f_539.f_1538[1];
				StringCopy(sParam3, "", 32);
				return true;
				break;
			
			case 7:
				*uParam1 = {Global_101154.f_1826.f_539.f_1528[2 /*3*/] + Vector(-1f, 0f, 0f)};
				*uParam2 = Global_101154.f_1826.f_539.f_1538[2];
				StringCopy(sParam3, "", 32);
				return true;
				break;
		}
		*uParam1 = {Global_89782[iParam0 /*3*/]};
		return true;
	}
	return false;
}

int func_46(auto uParam0)
{
	auto uVar0;
	Vector3 vVar1;
	Vector3 fVar4;
	int iVar5;
	Vector3 vVar6;
	Vector3 fVar9;
	
	uVar0 = Global_101154.f_1826.f_539.f_3551;
	vVar1 = {Global_101154.f_1826.f_539.f_1528[uVar0 /*3*/]};
	if (func_26(vVar1, 0f, 0f, 0f, 0))
	{
		vVar1 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)};
	}
	*uParam0 = 5;
	fVar4 = 9999999f;
	iVar5 = 0;
	while (iVar5 < 5)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_101154.f_5919.f_11[iVar5], false))
		{
			vVar6 = {Global_86814[iVar5 /*9*/].f_3};
			fVar9 = vdist(vVar1, vVar6);
			if (fVar9 > 150f)
			{
				if (fVar9 < fVar4)
				{
					*uParam0 = iVar5;
					fVar4 = fVar9;
				}
			}
		}
		iVar5++;
	}
	return *uParam0 != 5;
}

int func_47(int iParam0, auto uParam1, char* sParam2)
{
	Vector3 vVar0;
	int iVar3;
	auto uVar4;
	float fVar7;
	Vector3 vVar8;
	Vector3 vVar11;
	Vector3 vVar14;
	Vector3 vVar17;
	
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			func_46(&iVar3);
			if (iVar3 < 5)
			{
				*uParam1 = Global_86814[iVar3 /*9*/].f_6;
				StringCopy(sParam2, "", 32);
				return 1;
			}
			else
			{
				*uParam1 = Global_86814[0 /*9*/].f_6;
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 2:
			*uParam1 = Global_89454[0 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 3:
			*uParam1 = Global_89454[1 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 4:
			*uParam1 = Global_89454[2 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 5:
			*uParam1 = Global_101154.f_1826.f_539.f_1538[0];
			StringCopy(sParam2, func_51(Global_101154.f_1826.f_539.f_1542[0]), 32);
			return 1;
			break;
		
		case 6:
			*uParam1 = Global_101154.f_1826.f_539.f_1538[1];
			StringCopy(sParam2, func_51(Global_101154.f_1826.f_539.f_1542[1]), 32);
			return 1;
			break;
		
		case 7:
			*uParam1 = Global_101154.f_1826.f_539.f_1538[2];
			StringCopy(sParam2, func_51(Global_101154.f_1826.f_539.f_1542[2]), 32);
			return 1;
			break;
		
		case 11:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "v_strip3", 32);
				return 1;
			}
			break;
		
		case 8:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 9:
			return func_47(8, uParam1, sParam2);
			break;
		
		case 10:
			return func_47(8, uParam1, sParam2);
			break;
		
		case 13:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 14:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 15:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 12:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 16:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 17:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 18:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 19:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 20:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 21:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 22:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 74:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 23:
			return func_47(208, uParam1, sParam2);
			break;
		
		case 24:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 67:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 25:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 26:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 27:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 28:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 29:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 30:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 31:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 32:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 33:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 34:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 35:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 36:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 37:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 58:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 59:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 60:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 38:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 39:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 40:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "v_trailer", 32);
				return 1;
			}
			break;
		
		case 41:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 42:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 43:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 44:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 45:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 46:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 47:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 49:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 48:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 124:
			vVar0 = {-803.734f, 168.148f, 76.3542f};
			*uParam1 = 105f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 50:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 51:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 52:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 66:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 53:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 54:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 55:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 56:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 57:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 61:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 62:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 63:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 68:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 69:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 64:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 65:
			if (func_50(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 70:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 71:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 72:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 73:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 234:
			*uParam1 = 122.69f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 316:
			*uParam1 = -60.31f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 315:
			*uParam1 = 41.654f - 180f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 75:
			*uParam1 = -172.697f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 76:
			*uParam1 = 181.8927f - 180f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 77:
			*uParam1 = -158f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 78:
			*uParam1 = -152f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 79:
			*uParam1 = 20.353f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 80:
			*uParam1 = -48.53f + 180f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 81:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 82:
			*uParam1 = -113.748f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 83:
			*uParam1 = -173.748f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 84:
			*uParam1 = 32.7938f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 85:
			*uParam1 = -56f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 86:
			*uParam1 = 13f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 87:
			*uParam1 = 166.32f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 88:
			*uParam1 = 21f;
			*uParam1 = -132f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 89:
			*uParam1 = -84.8108f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 90:
			*uParam1 = -90.5046f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 91:
			*uParam1 = 105.0795f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 92:
			*uParam1 = -54.347f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 93:
			*uParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 94:
			*uParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 95:
			*uParam1 = 70f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 96:
			*uParam1 = 34.621f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 97:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 98:
			*uParam1 = -150.6148f + 0.0095f;
			*uParam1 += 0.0004f;
			*uParam1 += 0.0015f;
			*uParam1 += 0.0002f;
			*uParam1 += -0.0009f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 99:
			*uParam1 = -57f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 100:
			*uParam1 = 84.6073f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 101:
			*uParam1 = 249.0753f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 102:
			*uParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 103:
			*uParam1 = 143.4931f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 104:
			*uParam1 = 123f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 105:
			*uParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 106:
			*uParam1 = 63.4995f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 107:
			*uParam1 = -159f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 108:
			*uParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 109:
			*uParam1 = 99f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 110:
			*uParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 111:
			*uParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 112:
			*uParam1 = -162.311f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 113:
			*uParam1 = 172f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 135:
			*uParam1 = -59.25f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 136:
			*uParam1 = 82.254f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 137:
			*uParam1 = -152.965f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 138:
			*uParam1 = -10.099f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 139:
			*uParam1 = 158.5974f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 140:
			*uParam1 = 99.18f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 141:
			*uParam1 = 218.4774f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 142:
			*uParam1 = 125.6193f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 143:
			*uParam1 = 142.373f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 144:
			*uParam1 = -34.878f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 145:
			*uParam1 = -172.419f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 146:
			*uParam1 = -107.439f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 147:
			*uParam1 = 157.311f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 148:
			*uParam1 = -68.812f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 149:
			*uParam1 = 4.693f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 150:
			*uParam1 = 78.65f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 114:
			*uParam1 = 8f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 115:
			*uParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 116:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 117:
			*uParam1 = -74.7818f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 118:
			*uParam1 = -48.36f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 119:
			*uParam1 = 144.178f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 120:
			*uParam1 = 288f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 121:
			*uParam1 = 101.5f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 122:
			*uParam1 = 99.72f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 123:
			*uParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 125:
			*uParam1 = -3f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 126:
			*uParam1 = -158.0894f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 127:
			*uParam1 = -76.3681f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 128:
			*uParam1 = 30f + 180f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 129:
			*uParam1 = -80.6f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 130:
			*uParam1 = -9.1673f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 131:
			*uParam1 = -86.0894f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 132:
			*uParam1 = -161.0894f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 133:
			*uParam1 = 226.5579f - 270f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 134:
			*uParam1 = -33.128f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 151:
			*uParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 152:
			*uParam1 = 72f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 153:
			*uParam1 = -176.25f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 154:
			*uParam1 = -147.192f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 155:
			*uParam1 = 59.082f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 156:
			*uParam1 = 26.087f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 157:
			*uParam1 = 37.27f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 158:
			*uParam1 = -13.8153f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 159:
			*uParam1 = -62.5f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 160:
			*uParam1 = 119f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 161:
			*uParam1 = 86.3776f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 162:
			*uParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 163:
			*uParam1 = -164f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 164:
			*uParam1 = 88f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 165:
			*uParam1 = -144.622f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 166:
			*uParam1 = -61.2262f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 167:
			*uParam1 = -22.32f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 168:
			if (func_48(0, 25, &uVar4, &fVar7))
			{
				*uParam1 = fVar7 + 222.8314f;
				StringCopy(sParam2, "v_michael", 32);
				return 1;
			}
			break;
		
		case 169:
			*uParam1 = 112.841f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 170:
			*uParam1 = -103.8158f + 180f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 171:
			*uParam1 = -28.0926f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 173:
			*uParam1 = -0.0301f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 172:
			*uParam1 = -30.185f;
			*uParam1 += 0.003f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 174:
			*uParam1 = 14.98f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 175:
			*uParam1 = -179.653f;
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		
		case 176:
			*uParam1 = -147f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 177:
			*uParam1 = -81f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 178:
			*uParam1 = -95.4016f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 179:
			*uParam1 = -16.0627f + 180f;
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		
		case 180:
			*uParam1 = 129f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 181:
			*uParam1 = -86.613f;
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		
		case 182:
			*uParam1 = -63f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 183:
			*uParam1 = 111.688f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 184:
			*uParam1 = 143.7974f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 185:
			*uParam1 = 143.792f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 186:
			*uParam1 = 4.6834f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 187:
			*uParam1 = -108f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 188:
			*uParam1 = 69f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 189:
			*uParam1 = -172.2207f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 190:
			*uParam1 = 0f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 191:
			*uParam1 = -12.5158f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 196:
			*uParam1 = -1.5f;
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		
		case 197:
			*uParam1 = 27f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 192:
			*uParam1 = 107.981f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 193:
			*uParam1 = 172.9187f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 194:
			*uParam1 = -67.608f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 195:
			*uParam1 = 74.1158f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 198:
			*uParam1 = 1.0411f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 199:
			*uParam1 = -152.203f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 200:
			*uParam1 = 310.879f - 180f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 201:
			*uParam1 = 130.879f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 202:
			*uParam1 = 35.604f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 203:
			*uParam1 = -93f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 204:
			*uParam1 = -119.3944f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 205:
			*uParam1 = 121.9322f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 206:
			*uParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 207:
			*uParam1 = -95.588f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 208:
			*uParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 209:
			*uParam1 = 230.78f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 210:
			*uParam1 = 165.7751f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 211:
			*uParam1 = -179f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 212:
			*uParam1 = 1.2709f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 213:
			*uParam1 = 84f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 214:
			*uParam1 = -117.03f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 215:
			*uParam1 = -49.0324f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 216:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 217:
			*uParam1 = 153f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 221:
			*uParam1 = 84.96f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 222:
			*uParam1 = -59.3848f;
			StringCopy(sParam2, "v_chopshop", 32);
			return 1;
			break;
		
		case 223:
			*uParam1 = 43.82f;
			StringCopy(sParam2, "v_chopshop", 32);
			return 1;
			break;
		
		case 224:
			return func_47(222, uParam1, sParam2);
			break;
		
		case 226:
			*uParam1 = 160f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 227:
			*uParam1 = -14.749f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 228:
			*uParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 229:
			*uParam1 = 96.0116f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 230:
			*uParam1 = -43.6661f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 218:
			*uParam1 = -70.4124f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 219:
			*uParam1 = -12f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 220:
			*uParam1 = -117.356f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 225:
			*uParam1 = -83.8f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 231:
			*uParam1 = 350.3382f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 232:
			*uParam1 = 109.0206f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 233:
			*uParam1 = 109.0206f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 235:
			*uParam1 = -112f;
			StringCopy(sParam2, "v_strip3", 32);
			return 1;
			break;
		
		case 236:
			*uParam1 = 114f;
			StringCopy(sParam2, "v_strip3", 32);
			return 1;
			break;
		
		case 237:
			*uParam1 = 30f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 238:
			*uParam1 = -164f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 239:
			*uParam1 = -122f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 240:
			*uParam1 = -4.124f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 241:
			*uParam1 = 108f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 242:
			*uParam1 = 13.7207f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 245:
			*uParam1 = 27.746f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 243:
			*uParam1 = 18f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 244:
			*uParam1 = -51f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 246:
			*uParam1 = -165f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 247:
			*uParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 248:
			*uParam1 = 10.77f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 249:
			*uParam1 = 138f - 180f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 250:
			*uParam1 = 87f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 251:
			*uParam1 = -42.8529f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 252:
			*uParam1 = 2.6497f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 253:
			*uParam1 = 135f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 254:
			*uParam1 = -40f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 255:
			*uParam1 = 30.24f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 264:
			*uParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 265:
			*uParam1 = -144.274f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 266:
			*uParam1 = 68.8227f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 267:
			*uParam1 = 56.2037f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 268:
			*uParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 269:
			*uParam1 = -106.6605f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 270:
			*uParam1 = -102f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 271:
			*uParam1 = 26.3597f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 272:
			*uParam1 = -83.3175f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 273:
			*uParam1 = -153f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 274:
			*uParam1 = 9f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 275:
			*uParam1 = 277.613f - 360f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 276:
			*uParam1 = -4.7459f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 277:
			*uParam1 = -98.56f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 278:
			*uParam1 = -33.77f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 279:
			*uParam1 = 155.68f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 280:
			*uParam1 = -49.56f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 281:
			*uParam1 = -5.8739f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 282:
			*uParam1 = 70.1627f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 283:
			*uParam1 = 158.979f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 284:
			*uParam1 = -67.1851f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 285:
			*uParam1 = 47.054f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 256:
			*uParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 257:
			*uParam1 = 171.253f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 258:
			*uParam1 = 10.247f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 259:
			*uParam1 = -32.488f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 260:
			*uParam1 = -29.093f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 261:
			*uParam1 = 229.6085f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 286:
			*uParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 287:
			*uParam1 = -81f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 288:
			*uParam1 = 12f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 262:
			*uParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 263:
			*uParam1 = -171f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 289:
			*uParam1 = -11.5018f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 290:
			*uParam1 = -129f;
			StringCopy(sParam2, "v_strip3", 32);
			return 1;
			break;
		
		case 291:
			*uParam1 = -147f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 292:
			*uParam1 = 28.7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 293:
			*uParam1 = 28.7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 294:
			return func_47(293, uParam1, sParam2);
			break;
		
		case 295:
			return func_47(292, uParam1, sParam2);
			break;
		
		case 299:
			*uParam1 = 34.661f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 300:
			return func_47(303, uParam1, sParam2);
			break;
		
		case 301:
			return func_47(303, uParam1, sParam2);
			break;
		
		case 302:
			return func_47(303, uParam1, sParam2);
			break;
		
		case 303:
			*uParam1 = 32f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 296:
			*uParam1 = 116.742f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 297:
			*uParam1 = 100.46f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 298:
			*uParam1 = 102f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 304:
			*uParam1 = -152.0894f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 305:
			*uParam1 = 122.5269f;
			StringCopy(sParam2, "v_methlab", 32);
			return 1;
			break;
		
		case 306:
			vVar8 = {-7.4998f, 7.4995f, -0.5258f};
			*uParam1 = get_heading_from_vector_2d(-vVar8.x, -vVar8.y);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 307:
			vVar11 = {10.6345f, 0.7246f, 1.2508f};
			*uParam1 = get_heading_from_vector_2d(-vVar11.x, -vVar11.y);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 308:
			vVar14 = {-3.4271f, -13.6787f, -1.4107f};
			*uParam1 = get_heading_from_vector_2d(-vVar14.x, -vVar14.y);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 309:
			vVar17 = {-19.6582f, 7.896f, 0.1334f};
			*uParam1 = get_heading_from_vector_2d(-vVar17.x, -vVar17.y);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 310:
			*uParam1 = -87.7215f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 311:
			*uParam1 = -145f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 312:
			*uParam1 = 103.2841f + 88.7571f / 2f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 313:
			*uParam1 = -177f + 180f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 314:
			*uParam1 = 327.7746f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
	}
	*uParam1 = 0f;
	StringCopy(sParam2, "", 32);
	return 0;
}

int func_48(int iParam0, int iParam1, auto uParam2, auto uParam3)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					*uParam2 = {13.904f, 1.193f, 0.7f};
					*uParam3 = -144f;
					return 1;
					break;
				
				case 1:
					if (func_48(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = {*uParam2 + Vector(0f, -1.1731f, 0.809f)};
						*uParam3 += 456.7661f - 360f;
						return 1;
					}
					break;
				
				case 2:
					*uParam2 = {Vector(71.8356f, 180.5483f, -796.9911f) - Vector(71.1531f, 179.5117f, -812.0607f)};
					*uParam3 = 16f - 222.8314f + 360f;
					return 1;
					break;
			}
			return 0;
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					*uParam2 = {10.9793f, -5.9f, 4.6f};
					*uParam3 = 163.0716f;
					return 1;
					break;
				
				case 1:
					if (func_48(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = {*uParam2 + Vector(0f, 0.25f, -0.6f)};
						*uParam3 += 0f;
						return 1;
					}
					break;
				
				case 2:
					if (func_48(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = {*uParam2 + Vector(0f, -0.5f, -1.2f)};
						*uParam3 += 0f;
						return 1;
					}
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					*uParam2 = {Vector(71.835f, 180.548f, -796.991f) - Vector(71.1531f, 179.5117f, -812.0607f)};
					*uParam3 = 16f + 90f - 222.8314f + 360f;
					return 1;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					*uParam2 = {6.8878f, -5.5247f, 1.5228f};
					*uParam3 = 160f;
					return 1;
					break;
			}
			break;
		
		case 18:
			switch (iParam0)
			{
				case 0:
					*uParam2 = {4.1937f, -9.0309f, 4.5877f};
					*uParam3 = 255f;
					return 1;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 0:
					*uParam2 = {4.4577f, -9.6399f, 4.5876f};
					*uParam3 = 252f;
					return 1;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 0:
					*uParam2 = {3.799f, -9.41f, 4.5877f};
					*uParam3 = 273f;
					return 1;
					break;
			}
			break;
		
		case 21:
			switch (iParam0)
			{
				case 0:
					if (func_48(0, 5, uParam2, uParam3))
					{
						*uParam2 = {*uParam2 + Vector(0f, 0f, 0f)};
						*uParam3 += 0f;
						return 1;
					}
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					*uParam2 = {12.552f, 4.373f, 4.6f + 1f};
					*uParam3 = 318f;
					return 1;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 0:
					*uParam2 = {-0.4395f, -11.0022f, 0.0747f};
					*uParam3 = 306f;
					return 1;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					*uParam2 = {5.5001f, -12.4406f, 4.6f};
					*uParam3 = 0f;
					return 1;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 0:
					*uParam2 = {3.5f, -9.1f, 4.6f};
					*uParam3 = 330f;
					return 1;
					break;
			}
			break;
		
		case 11:
			switch (iParam0)
			{
				case 0:
					*uParam2 = {0.849f, 1.575f, 0f};
					*uParam3 = 272.857f;
					return 1;
					break;
			}
			break;
		
		case 12:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = {8.183f, -3.0467f, 5.5876f};
					*uParam3 = 158f;
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = {9.383f, -3.3887f, 5.73f};
					*uParam3 = 339f;
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = {Vector(76.89f, 176.176f, -802.702f) - Vector(71.1531f, 179.5117f, -812.0607f)};
					*uParam3 = -159.23f - 222.8314f + 360f;
					return 1;
					break;
			}
			break;
		
		case 15:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = {Vector(76.89f, 176.176f, -802.702f) - Vector(71.1531f, 179.5117f, -812.0607f)};
					*uParam3 = -159.23f - 222.8314f + 360f;
					return 1;
					break;
			}
			break;
		
		case 16:
			switch (iParam0)
			{
				case 0:
					*uParam2 = {4.488f, -9.098f, 5.4864f};
					*uParam3 = 147f;
					return 1;
					break;
			}
			break;
		
		case 17:
			switch (iParam0)
			{
				case 0:
					*uParam2 = {9.04f, 5.71f, 1.44f};
					*uParam3 = 159.3182f;
					return 1;
					break;
			}
			break;
		
		case 20:
			switch (iParam0)
			{
				case 0:
					*uParam2 = {3.25f, -9.53f, 4.588f};
					*uParam3 = 333f;
					return 1;
					break;
			}
			break;
		
		case 22:
			switch (iParam0)
			{
				case 0:
					*uParam2 = {Vector(0f, -11.0022f, -0.4395f) + Vector(0f, get_random_float_in_range(-0.5f, 0.5f), get_random_float_in_range(-0.5f, 0.5f))};
					*uParam3 = 306f + get_random_float_in_range(10f, 10f);
					return 1;
					break;
			}
			break;
		
		case 23:
			switch (iParam0)
			{
				case 0:
					*uParam2 = {Vector(60.2063f, 141.5129f, -863.5425f) - Vector(71.1531f, 179.5117f, -812.0607f) - Vector(1f, 0f, 0f)};
					*uParam2 = {*uParam2 * Vector(0.95f, 0.95f, 0.95f)};
					*uParam3 = get_heading_from_vector_2d(*uParam2, *uParam2.f_1);
					return 1;
					break;
			}
			break;
		
		case 24:
			switch (iParam0)
			{
				case 0:
					*uParam2 = {Vector(71.8266f, 180.4725f, -796.7593f) - Vector(71.1531f, 179.5117f, -812.0607f)};
					*uParam3 = 26.087f - 222.8314f + 360f;
					return 1;
					break;
			}
			break;
		
		case 19:
			switch (iParam0)
			{
				case 0:
					*uParam2 = {Vector(72.6876f, 173.987f, -805.173f) - Vector(71.1531f, 179.5117f, -812.0607f)};
					*uParam3 = 13f - 222.8314f + 360f;
					return 1;
					break;
			}
			break;
		
		case 25:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = {Vector(72.8447f, 172.4196f, -803.1823f) - Vector(71.1531f, 179.5117f, -812.0607f)};
					*uParam3 = -28.7112f - 222.8314f + 360f;
					return 1;
					break;
			}
			break;
		
		case 26:
			switch (iParam0)
			{
				case 1:
					*uParam2 = {27.9648f, 8.3766f, 0.7f};
					*uParam3 = 319f;
					return 1;
					break;
			}
			break;
		
		case 32:
			switch (iParam0)
			{
				case 1:
					*uParam2 = {Vector(0.6f, -6.5f, 10.3f) + Vector(0.1f, 0f, 0f)};
					*uParam3 = 78f;
					return 1;
					break;
			}
			break;
		
		case 27:
			switch (iParam0)
			{
				case 1:
					*uParam2 = {-0.3142f, -10.9926f, 0.0747f};
					*uParam3 = 304.1026f;
					return 1;
					break;
			}
			break;
		
		case 41:
			switch (iParam0)
			{
				case 1:
					*uParam2 = {10.3f, -6.5f, 4.6f};
					*uParam3 = 180f;
					return 1;
					break;
			}
			break;
		
		case 33:
			switch (iParam0)
			{
				case 1:
					if (func_48(1, 32, uParam2, uParam3))
					{
						*uParam2 = {*uParam2 + Vector(0f, 0f, 0f)};
						*uParam3 += 0f;
						return 1;
					}
					break;
			}
			break;
		
		case 38:
			switch (iParam0)
			{
				case 1:
					*uParam2 = {8.505f, -10.9717f, 4.6019f};
					*uParam3 = 228f;
					return 1;
					break;
			}
			break;
		
		case 31:
			switch (iParam0)
			{
				case 1:
					*uParam2 = {12.7165f, 4.7109f, 4.6f + 1f};
					*uParam3 = 310.6696f;
					return 1;
					break;
			}
			break;
		
		case 34:
			switch (iParam0)
			{
				case 1:
					*uParam2 = {9.0529f, -8.9175f, 1.6907f};
					*uParam3 = 102.156f;
					return 1;
					break;
			}
			break;
		
		case 35:
			switch (iParam0)
			{
				case 1:
					*uParam2 = {8.4799f, -7.5315f, 0.682f};
					*uParam3 = 264f;
					return 1;
					break;
			}
			break;
		
		case 37:
			switch (iParam0)
			{
				case 1:
					*uParam2 = {9.352f, -3.356f, 5.7338f};
					*uParam3 = 338f;
					return 1;
					break;
			}
			break;
		
		case 39:
			switch (iParam0)
			{
				case 1:
					*uParam2 = {8.3003f, -10.3127f, 4.5874f};
					*uParam3 = 262.789f;
					return 1;
					break;
			}
			break;
		
		case 40:
			switch (iParam0)
			{
				case 1:
					*uParam2 = {10.76f, -5.95f, 4.59f};
					*uParam3 = 177.6766f;
					return 1;
					break;
			}
			break;
		
		case 36:
			switch (iParam0)
			{
				case 1:
					*uParam2 = {9.6691f, -7.6405f, 0.6817f};
					*uParam3 = 159.156f;
					return 1;
					break;
			}
			break;
		
		case 28:
			switch (iParam0)
			{
				case 1:
					*uParam2 = {1.228f, 4.044f, 0.7665f};
					*uParam3 = 165f;
					return 1;
					break;
			}
			break;
		
		case 42:
			switch (iParam0)
			{
				case 1:
					*uParam2 = {10.2365f, -7.6073f, 6.2761f};
					*uParam3 = 157.0716f;
					return 1;
					break;
			}
			break;
		
		case 43:
			switch (iParam0)
			{
				case 1:
					*uParam2 = {8.161f, -7.562f, 2.17f};
					*uParam3 = 78f;
					return 1;
					break;
			}
			break;
		
		case 29:
		case 30:
		case 44:
			switch (iParam0)
			{
				case 1:
					*uParam2 = {10.7668f, -7.8757f, 5.5559f};
					*uParam3 = 144.6939f;
					return 1;
					break;
			}
			break;
		
		case 45:
			switch (iParam0)
			{
				case 1:
					*uParam2 = {10.6257f, -9.4927f, 5.5876f};
					*uParam3 = 257.4583f;
					return 1;
					break;
			}
			break;
		
		case 46:
			return func_48(iParam0, 26, uParam2, uParam3);
			break;
		
		case 47:
			switch (iParam0)
			{
				case 2:
				case 3:
					*uParam2 = {8.4451f, 3.1568f, 1.47f};
					*uParam3 = 159f;
					return 1;
					break;
			}
			break;
		
		case 48:
		case 68:
			switch (iParam0)
			{
				case 2:
					*uParam2 = {9.0477f, -7.9397f, 0.6817f};
					*uParam3 = 88.5686f;
					return 1;
					break;
			}
			break;
		
		case 49:
			switch (iParam0)
			{
				case 2:
					*uParam2 = {0f, 0f, 0f};
					*uParam3 = 0f;
					return 0;
					break;
			}
			break;
		
		case 50:
		case 69:
			switch (iParam0)
			{
				case 2:
					*uParam2 = {21.7f, 9f, 1.7029f};
					*uParam3 = 0f;
					return 1;
					break;
			}
			break;
		
		case 51:
			switch (iParam0)
			{
				case 2:
					*uParam2 = {1.3278f, 1.534f, 0f};
					*uParam3 = 159.72f;
					return 1;
					break;
			}
			break;
		
		case 52:
		case 67:
			switch (iParam0)
			{
				case 2:
					*uParam2 = {-3.0265f, 1.7627f, 0.1273f};
					*uParam3 = 338.5f;
					return 1;
					break;
			}
			break;
		
		case 53:
			switch (iParam0)
			{
				case 2:
					*uParam2 = {15.2374f, 8.723f, 1.4495f};
					*uParam3 = 205.677f;
					return 1;
					break;
			}
			break;
		
		case 54:
		case 70:
			switch (iParam0)
			{
				case 2:
					*uParam2 = {28.7f, 8.8241f, 0.6f};
					*uParam3 = 39f;
					return 1;
					break;
			}
			break;
		
		case 55:
		case 71:
			switch (iParam0)
			{
				case 2:
					*uParam2 = {Vector(1.1936f, -9.0107f, 9.0567f) + Vector(0.03f - 0.02f, 0f, 0f)};
					*uParam3 = 94.2086f;
					return 1;
					break;
			}
			break;
		
		case 64:
			switch (iParam0)
			{
				case 2:
					*uParam2 = {Vector(5.2891f, 2.0403f, -2.8213f) + Vector(0.03f - 0.05f, 0f, 0f)};
					*uParam3 = 336f;
					return 1;
					break;
			}
			break;
		
		case 56:
			switch (iParam0)
			{
				case 2:
				case 0:
					*uParam2 = {5.5782f, 5.7755f, 3.84f};
					*uParam3 = 311.4f;
					return 1;
					break;
			}
			break;
		
		case 57:
			switch (iParam0)
			{
				case 2:
				case 0:
					*uParam2 = {5.5782f, 5.7755f, 3.8418f};
					*uParam3 = 306.6f;
					return 1;
					break;
			}
			break;
		
		case 58:
			switch (iParam0)
			{
				case 2:
				case 1:
					*uParam2 = {5.8092f, 5.7965f, 3.85f};
					*uParam3 = 337.4f;
					return 1;
					break;
			}
			break;
		
		case 59:
		case 72:
			switch (iParam0)
			{
				case 2:
					*uParam2 = {13.3221f, 0.0684f, 0.6817f};
					*uParam3 = 277.317f;
					return 1;
					break;
			}
			break;
		
		case 60:
			if (func_48(iParam0, 59, uParam2, uParam3))
			{
				*uParam2 = {*uParam2 + Vector(0f, get_random_float_in_range(-1f, 1f), get_random_float_in_range(-1f, 1f))};
				*uParam3 += get_random_float_in_range(-10f, 10f);
				return 1;
			}
			break;
		
		case 61:
		case 62:
		case 63:
			switch (iParam0)
			{
				case 2:
					*uParam2 = {-2.235f, 1.725f, 4.5877f};
					*uParam3 = 172.714f;
					return 1;
					break;
			}
			break;
		
		case 65:
			switch (iParam0)
			{
				case 2:
					*uParam2 = {Vector(75.7407f, 181.264f, -814.246f) - Vector(71.1531f, 179.5117f, -812.0607f)};
					*uParam3 = -158f - 222.8314f + 360f;
					return 1;
					break;
			}
			break;
		
		case 66:
			switch (iParam0)
			{
				case 2:
					*uParam2 = {Vector(76.7233f, 181.114f, -812.896f) - Vector(71.1531f, 179.5117f, -812.0607f)};
					*uParam3 = -164f - 222.8314f + 360f;
					return 1;
					break;
			}
			break;
		
		case 73:
			switch (iParam0)
			{
				case 2:
					*uParam2 = {7.394f, 5.368f, 1.451f};
					*uParam3 = 235.0656f;
					return 1;
					break;
			}
			break;
		
		case 74:
			switch (iParam0)
			{
				case 2:
				case 1:
					*uParam2 = {1.0704f, -1.4624f, 0.999f};
					*uParam3 = 157.44f;
					return 1;
					break;
			}
			break;
		
		case 75:
		case 84:
			switch (iParam0)
			{
				case 3:
					*uParam2 = {14.8186f, 6.8253f, 0.5f};
					*uParam3 = 87.3368f;
					return 1;
					break;
			}
			break;
		
		case 76:
		case 78:
		case 85:
			switch (iParam0)
			{
				case 3:
					*uParam2 = {13.6486f, 6.2253f, 0.45f};
					*uParam3 = 262.32f;
					return 1;
					break;
			}
			break;
		
		case 77:
			if (func_48(iParam0, 47, uParam2, uParam3))
			{
				*uParam2 = {*uParam2 + Vector(0f, 0f, 0f)};
				*uParam3 += 0f;
				return 1;
			}
			break;
		
		case 79:
		case 86:
			switch (iParam0)
			{
				case 3:
					*uParam2 = {16.319f, -1.375f, 0.6817f};
					*uParam3 = 334.126f;
					return 1;
					break;
			}
			break;
		
		case 80:
			switch (iParam0)
			{
				case 3:
					*uParam2 = {-0.39f, 3.27f, 0f};
					*uParam3 = 154.126f;
					return 1;
					break;
			}
			break;
		
		case 81:
			switch (iParam0)
			{
				case 3:
					*uParam2 = {15.0213f, 6.9622f, 1.39f};
					*uParam3 = 142.889f;
					return 1;
					break;
			}
			break;
		
		case 82:
		case 83:
			switch (iParam0)
			{
				case 3:
					*uParam2 = {15.128f, 6.842f, 0.4524f};
					*uParam3 = 54f;
					return 1;
					break;
			}
			break;
		
		case 87:
			switch (iParam0)
			{
				case 4:
					*uParam2 = {-10.9019f, -23.8349f, -2.1f};
					*uParam3 = 339f;
					return 1;
					break;
			}
			break;
		
		case 88:
			switch (iParam0)
			{
				case 4:
					*uParam2 = {-10.9937f, -24.9005f, -2.18f};
					*uParam3 = 314.2132f;
					return 1;
					break;
			}
			break;
		
		case 89:
			switch (iParam0)
			{
				case 4:
					*uParam2 = {31.7401f, -1.0943f, 0.6822f};
					*uParam3 = 147f;
					return 1;
					break;
			}
			break;
		
		case 90:
			switch (iParam0)
			{
				case 4:
					*uParam2 = {-27.1728f, -3.75f, -1.626f};
					*uParam3 = 147f + 90f;
					return 1;
					break;
			}
			break;
		
		case 91:
			switch (iParam0)
			{
				case 4:
					*uParam2 = {14.7722f, -10.9336f, -0.537f};
					*uParam3 = 110.8505f;
					return 1;
					break;
			}
			break;
		
		case 92:
			switch (iParam0)
			{
				case 4:
					*uParam2 = {-17.2536f, 2.451f, -0.6f};
					*uParam3 = 0f;
					return 1;
					break;
			}
			break;
		
		case 93:
			switch (iParam0)
			{
				case 4:
					*uParam2 = {23.9716f, -20.3533f, -3.18f};
					*uParam3 = 324f;
					return 1;
					break;
			}
			break;
		
		case 94:
			switch (iParam0)
			{
				case 5:
					*uParam2 = {3.1416f, -2.0799f, -0.0145f};
					*uParam3 = 33f;
					return 1;
					break;
			}
			break;
		
		case 95:
			switch (iParam0)
			{
				case 5:
					*uParam2 = {3.2746f, -4.1995f, -0.0144f};
					*uParam3 = 69f;
					return 1;
					break;
			}
			break;
		
		case 96:
		case 98:
			switch (iParam0)
			{
				case 5:
					*uParam2 = {2.983f, -4.094f, 0.4629f};
					*uParam3 = 33f;
					return 1;
					break;
			}
			break;
		
		case 97:
			switch (iParam0)
			{
				case 5:
					*uParam2 = {5.5235f, 2.9133f, 0.7288f};
					*uParam3 = 71f;
					return 1;
					break;
			}
			break;
		
		case 99:
			switch (iParam0)
			{
				case 6:
					*uParam2 = {Vector(30.7131f, -1454.676f, -42.2059f) - Vector(30.116f, -1435.997f, -14.3064f)};
					*uParam3 = 84.7009f - 188.5817f;
					return 1;
					break;
				
				case 7:
					*uParam2 = {Vector(30.6803f, -1455.848f, -40.7478f) - Vector(30.116f, -1435.997f, -14.3064f)};
					*uParam3 = 90.6417f - 188.5817f;
					return 1;
					break;
			}
			break;
		
		case 100:
			switch (iParam0)
			{
				case 10:
					*uParam2 = {2.0126f, 0.3422f, -0.0086f};
					*uParam3 = 354f;
					return 1;
					break;
			}
			break;
		
		case 101:
			switch (iParam0)
			{
				case 10:
					*uParam2 = {1.2931f, 1.4476f, 1.0127f};
					*uParam3 = 61.7525f;
					return 1;
					break;
			}
			break;
		
		case 102:
		case 103:
			switch (iParam0)
			{
				case 10:
					*uParam2 = {0.0158f, 1.4182f, 0.9913f};
					*uParam3 = 119.008f;
					return 1;
					break;
			}
			break;
		
		case 104:
			switch (iParam0)
			{
				case 10:
					*uParam2 = {-3.467f, 0.074f, 0f};
					*uParam3 = 30f;
					return 1;
					break;
			}
			break;
		
		case 105:
			switch (iParam0)
			{
				case 10:
					*uParam2 = {-2.1014f, -5.4089f, -0.013f};
					*uParam3 = 123.753f;
					return 1;
					break;
			}
			break;
		
		case 106:
			switch (iParam0)
			{
				case 10:
					*uParam2 = {-2.802f, -6.3295f, -0.01f};
					*uParam3 = 42.757f;
					return 1;
					break;
			}
			break;
		
		case 107:
			switch (iParam0)
			{
				case 8:
					*uParam2 = {-2.156f, -4.9564f, 1.4886f};
					*uParam3 = 136.309f;
					return 1;
					break;
			}
			break;
		
		case 108:
			switch (iParam0)
			{
				case 8:
					*uParam2 = {7.2656f, 3.022f, -0.9061f};
					*uParam3 = 92.8891f;
					return 1;
					break;
			}
			break;
		
		case 109:
			switch (iParam0)
			{
				case 8:
					*uParam2 = {0.5066f, 1.6992f, 0.0168f};
					*uParam3 = 115.77f;
					return 1;
					break;
			}
			break;
		
		case 110:
		case 111:
			switch (iParam0)
			{
				case 8:
					*uParam2 = {-0.2121f, -6.2791f, -0.0089f};
					*uParam3 = 114.3391f;
					return 1;
					break;
			}
			break;
		
		case 116:
			switch (iParam0)
			{
				case 9:
				case 11:
					*uParam2 = {8.2458f, -0.7136f, -0.2503f};
					*uParam3 = 252.2687f;
					return 1;
					break;
			}
			break;
		
		case 117:
			switch (iParam0)
			{
				case 9:
				case 11:
					*uParam2 = {2.334f, 1.6889f, 0.586f};
					*uParam3 = 109f;
					return 1;
					break;
			}
			break;
		
		case 112:
			switch (iParam0)
			{
				case 9:
					*uParam2 = {-0.6331f, 1.2093f, -0.0086f};
					*uParam3 = 137.1861f;
					return 1;
					break;
			}
			break;
		
		case 113:
			switch (iParam0)
			{
				case 9:
					*uParam2 = {-3.887f, -0.166f, 0f};
					*uParam3 = 30f;
					return 1;
					break;
			}
			break;
		
		case 114:
			switch (iParam0)
			{
				case 9:
					*uParam2 = {3.5179f, 9.1355f, -1f};
					*uParam3 = 141.79f;
					return 1;
					break;
			}
			break;
		
		case 115:
			switch (iParam0)
			{
				case 9:
					*uParam2 = {Vector(0.15f, -1.9326f, -6.013f) + Vector(1f, 0f, 0f)};
					*uParam3 = 121.6591f;
					return 1;
					break;
			}
			break;
		
		case 118:
			switch (iParam0)
			{
				case 10:
					*uParam2 = {10.2823f, 2.2595f, -1.0742f};
					*uParam3 = 170.2796f - 180f;
					return 1;
					break;
			}
			break;
		
		case 119:
			switch (iParam0)
			{
				case 10:
					*uParam2 = {1.077f, -5.1446f, 0.9904f};
					*uParam3 = 107.1399f;
					return 1;
					break;
			}
			break;
		
		case 120:
			switch (iParam0)
			{
				case 10:
					*uParam2 = {-12.903f, -6.623f, -0.0406f};
					*uParam3 = 63.48f;
					return 1;
					break;
			}
			break;
		
		case 121:
			switch (iParam0)
			{
				case 10:
					*uParam2 = {10.5514f, 5.393f, -0.0998f};
					*uParam3 = 327.483f;
					return 1;
					break;
			}
			break;
		
		case 122:
			switch (iParam0)
			{
				case 11:
					*uParam2 = {0.9794f, -0.3043f, 0f};
					*uParam3 = 179.7612f;
					return 1;
					break;
			}
			break;
		
		case 123:
			switch (iParam0)
			{
				case 11:
					*uParam2 = {11.9759f, 1f, -1.0728f};
					*uParam3 = 238.9422f;
					return 1;
					break;
			}
			break;
		
		case 124:
			switch (iParam0)
			{
				case 11:
				case 8:
					*uParam2 = {-0.576f, 1.671f, 0.601f};
					*uParam3 = 296f;
					return 1;
					break;
			}
			break;
		
		case 125:
			switch (iParam0)
			{
				case 12:
					*uParam2 = {-0.6532f, 0.9556f, -0.0087f};
					*uParam3 = 121.0556f;
					return 1;
					break;
			}
			break;
		
		case 126:
			switch (iParam0)
			{
				case 13:
					*uParam2 = {-0.18f, -4.173f, 0.9981f};
					*uParam3 = 216.61f;
					return 1;
					break;
			}
			break;
		
		case 127:
			switch (iParam0)
			{
				case 13:
					*uParam2 = {6.5937f, 0.3521f, 1f};
					*uParam3 = 119.4f;
					return 1;
					break;
			}
			break;
		
		case 128:
			switch (iParam0)
			{
				case 13:
					if (Global_101154.f_17223[2] == 299)
					{
						*uParam2 = {Vector(9.6327f, -1521.394f, -1158.133f) - Vector(9.6346f, -1517.601f, -1152.571f)};
						*uParam3 = 34.661f - 90.6729f;
						return 1;
					}
					else if (((Global_101154.f_17223[2] == 300 || Global_101154.f_17223[2] == 301) || Global_101154.f_17223[2] == 302) || Global_101154.f_17223[2] == 303)
					{
						*uParam2 = {Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.571f)};
						*uParam3 = 32f - 90.6729f;
						return 1;
					}
					if (func_49())
					{
						*uParam2 = {Vector(9.6327f, -1521.394f, -1158.133f) - Vector(9.6346f, -1517.601f, -1152.571f)};
						*uParam3 = 34.661f - 90.6729f;
						return 1;
					}
					else
					{
						*uParam2 = {Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.571f)};
						*uParam3 = 32f - 90.6729f;
						return 1;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam0)
			{
				case 13:
					*uParam2 = {Vector(10.6327f, -1519.561f, -1156.422f) - Vector(9.6346f, -1517.601f, -1152.571f)};
					*uParam3 = 102f - 90.6729f;
					return 1;
					break;
			}
			break;
		
		case 130:
			switch (iParam0)
			{
				case 13:
					*uParam2 = {-2.8352f, 0.0552f, 0f};
					*uParam3 = 334.44f;
					return 1;
					break;
			}
			break;
		
		case 131:
			switch (iParam0)
			{
				case 13:
					if (func_48(iParam0, 130, uParam2, uParam3))
					{
						*uParam2 = {*uParam2 + Vector(0f, get_random_float_in_range(-1f, 1f), get_random_float_in_range(-1f, 1f))};
						*uParam3 += get_random_float_in_range(-10f, 10f);
						return 1;
					}
					break;
			}
			break;
		
		case 132:
			switch (iParam0)
			{
				case 13:
					*uParam2 = {-7.213f, -1.4536f, 0.9981f};
					*uParam3 = 42.6f;
					return 1;
					break;
			}
			break;
		
		case 133:
			switch (iParam0)
			{
				case 13:
					*uParam2 = {Vector(9.6327f + 1f, -1518.736f, -1148.466f) - Vector(9.6346f, -1517.601f, -1152.571f)};
					*uParam3 = get_random_float_in_range(0f, 360f);
					return 1;
					break;
			}
			break;
		
		case 134:
			switch (iParam0)
			{
				case 13:
					*uParam2 = {5.24f, 6.217f, 0.998f};
					*uParam3 = 315.72f;
					return 1;
					break;
			}
			break;
		
		case 135:
			switch (iParam0)
			{
				case 13:
					*uParam2 = {6.6447f, 0.7635f, 1.0507f};
					*uParam3 = 296.683f;
					return 1;
					break;
			}
			break;
		
		case 136:
			switch (iParam0)
			{
				case 13:
					*uParam2 = {3.968f, -1.04f, 0f};
					*uParam3 = 214.92f;
					return 1;
					break;
				
				case 14:
					*uParam2 = {4.617f, -1.1314f, 0f};
					*uParam3 = 39.4085f;
					return 1;
					break;
			}
			break;
		
		case 137:
		case 138:
			*uParam2 = {0f, 0f, 0f};
			*uParam3 = 0f;
			return 0;
			break;
		
		case 140:
		case 141:
			*uParam2 = {0f, 0f, 0f};
			*uParam3 = 0f;
			return 0;
			break;
		
		default:
			*uParam2 = {get_random_float_in_range(-10f, 10f), get_random_float_in_range(-10f, 10f), 0f};
			*uParam3 = get_random_float_in_range(0f, 360f);
			return 0;
			break;
	}
	*uParam2 = {get_random_float_in_range(-10f, 10f), get_random_float_in_range(-10f, 10f), 0f};
	*uParam3 = get_random_float_in_range(0f, 360f);
	return 0;
}

bool func_49()
{
	if (GAMEPLAY::IS_BIT_SET(get_random_int_in_range(false, 65535), false))
	{
		return true;
	}
	return false;
}

int func_50(int iParam0, auto uParam1, auto uParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = {115.1569f, -1286.684f, 28.2613f};
			*uParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = {-90.0089f, -1324.195f, 28.3203f};
			*uParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_50(8, uParam1, uParam2);
			break;
		
		case 10:
			return func_50(8, uParam1, uParam2);
			break;
		
		case 13:
			*uParam1 = {-807.2979f, -48.4004f, 36.8173f};
			*uParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = {1432.34f, -1887.383f, 70.5768f};
			*uParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = {1666.204f, 1967.25f, 143.3213f};
			*uParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = {-1440.22f, -127.02f, 50f};
			*uParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = {135.055f, -1759.64f, 27.8957f};
			*uParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = {687.6992f, -1744.03f, 28.3624f};
			*uParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = {56.5117f, -744.6122f, 43.1356f};
			*uParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = {506.485f, -1884.967f, 24.764f};
			*uParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = {1555.958f, 953.6136f, 77.2063f};
			*uParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = {0f, 0f, 0f};
			*uParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = {220.72f, -64.4177f, 68.2922f};
			*uParam2 = 250.4535f - 360f;
			return 1;
			break;
		
		case 74:
			*uParam1 = {2048.07f, 3840.84f, 34.2238f};
			*uParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = {-464.22f, -1592.98f, 38.73f};
			*uParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = {744.79f + 0.0186f, -465.86f - 0.0114f, 36.6399f};
			*uParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = {-9f, 508.1f, 173.6278f};
			*uParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = {72.2278f, -1464.68f, 28.2915f};
			*uParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = {763f, -906f, 24.2312f};
			*uParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = {257.9167f, -1120.786f, 28.3684f};
			*uParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = {422.5858f, -978.6332f, 69.7073f};
			*uParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = {0f, 0f, 0f};
			*uParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = {0f, 0f, 0f};
			*uParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = {0f, 0f, 0f};
			*uParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = {0f, 0f, 0f};
			*uParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = {0f, 0f, 0f};
			*uParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = {0f, 0f, 0f};
			*uParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = {0f, 0f, 0f};
			*uParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = {0f, 0f, 0f};
			*uParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = {0f, 0f, 0f};
			*uParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = {294.8521f, 882.9366f, 197.8527f};
			*uParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = {-1771.802f, 794.4316f, 138.4211f};
			*uParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = {1495.595f, -1848.821f, 70.2075f};
			*uParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = {2897.554f, 4032.241f, 50.1419f};
			*uParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = {1973.355f, 3818.204f, 32.005f};
			*uParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = {1973.355f, 3818.204f, 32.005f};
			*uParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = {1397f, 3725.8f, 33.0673f};
			*uParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = {Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f)};
			*uParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = {709.0244f, -2916.479f, 5.0589f};
			*uParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = {643.5248f, -2917.325f, 5.1337f};
			*uParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = {595.2742f, -2819.183f, 5.0559f};
			*uParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = {0f, 0f, 0f};
			*uParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = {314.4171f, 965.207f, 208.4024f};
			*uParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = {3321.537f, 4975.455f, 25.9097f};
			*uParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = {-111.1318f, 6316.479f, 30.4904f};
			*uParam2 = 42f + 180f;
			return 1;
			break;
		
		case 50:
			*uParam1 = {-731.3261f, 106.68f, 54.7169f};
			*uParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = {-1257.5f, -526.9999f, 30.2361f};
			*uParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = {736.9869f, -2050.678f, 28.2718f};
			*uParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = {262.5499f, -2540.15f, 4.8433f};
			*uParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = {0f, 0f, 0f};
			*uParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = {-315.7789f, 6201.355f, 30.4322f};
			*uParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = {118.0988f, -1264.916f, 32.3637f};
			*uParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = {37.5988f, -1351.52f, 28.2954f};
			*uParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = {-558.2693f, 261.1167f, 82.07f};
			*uParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = {-196.9999f, 507.9999f, 132.477f};
			*uParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = {1312.01f, -1645.87f, 51.2f};
			*uParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = {0f, 0f, 0f};
			*uParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = {-818.7374f, 6.4824f, 41.2432f};
			*uParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = {2091.258f, 4714.852f, 40.1936f};
			*uParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = {1762.59f, 3247.212f, 40.735f};
			*uParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = {1764.013f, 3252.902f, 40.735f};
			*uParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = {0f, 0f, 0f};
			*uParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = {0f, 0f, 0f};
			*uParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = {0f, 0f, 0f};
			*uParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = {0f, 0f, 0f};
			*uParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

char* func_51(int iParam0)
{
	switch (iParam0)
	{
		case 2014101067:
			return "v_chopshop";
			break;
		
		case 551019620:
			return "v_franklins";
			break;
		
		case 223682799:
			return "v_franklinshouse";
			break;
		
		case 2081281344:
			return "v_methlab";
			break;
		
		case -1021412233:
			return "v_michael";
			break;
		
		case 1314234446:
			return "v_strip3";
			break;
		
		case 1681413451:
			return "v_trailer";
			break;
		
		case 1724779208:
			return "v_Trevors";
			break;
	}
	return "";
}

void func_52()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_239)
	{
		if (iLocal_239[iVar0] != 0)
		{
			set_model_as_no_longer_needed(iLocal_239[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_252)
	{
		if (iLocal_252[iVar0] != 0)
		{
			set_model_as_no_longer_needed(iLocal_252[iVar0]);
		}
		iVar0++;
	}
	remove_anim_dict(&Local_341);
	if (does_group_exist(iLocal_248))
	{
		remove_group(iLocal_248);
	}
	set_game_paused(false);
	terminate_this_thread();
}

