class CfgPatches
{
	class T1DSoundVolume
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Sounds_Effects"
		};
	};
};
class CfgSoundShaders
{
	class baseCharacter_SoundShader
	{
		range=50;
	};
	class T1D_baseCharacter_SoundShaderFootsteps: baseCharacter_SoundShader
	{
		range=100;
	};
	class walkErc_asphalt_ext_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.2";
		frequency=1;
	};
	class walkErc_asphalt_ext_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.2";
		frequency=1.1;
	};
	class walkErc_asphalt_ext_asphalt_ext_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.2";
		frequency=1;
	};
	class runErc_asphalt_ext_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.3";
		frequency=1;
	};
	class runErc_asphalt_ext_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.3";
		frequency=1.1;
	};
	class runErc_asphalt_ext_asphalt_ext_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.3";
		frequency=1;
	};
	class sprintErc_asphalt_ext_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.4";
		frequency=1;
	};
	class sprintErc_asphalt_ext_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.4";
		frequency=1.1;
	};
	class sprintErc_asphalt_ext_asphalt_ext_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.43";
		frequency=1;
	};
	class walkErc_asphalt_ext_bare_concrete_ext_walkErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.16";
		frequency=1;
	};
	class walkErc_asphalt_ext_bare_concrete_ext_walkErc_thump_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.16";
		frequency=1;
	};
	class walkErc_asphalt_ext_bare_concrete_ext_walkErc_toe_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.05";
		frequency=1;
	};
	class runErc_asphalt_ext_bare_concrete_ext_runErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.05";
		frequency=1;
	};
	class runErc_asphalt_ext_bare_concrete_ext_walkErc_thump_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.3";
		frequency=0.89999998;
	};
	class runErc_asphalt_ext_bare_concrete_ext_walkErc_toe_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.06";
		frequency=1.05;
	};
	class sprintErc_asphalt_ext_bare_concrete_ext_runErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.09";
		frequency=1;
	};
	class sprintErc_asphalt_ext_bare_concrete_ext_walkErc_thump_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.6";
		frequency=0.80000001;
	};
	class sprintErc_asphalt_ext_bare_concrete_ext_walkErc_toe_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.08";
		frequency=1.1;
	};
	class walkErc_asphalt_felt_ext_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.3";
		frequency=1;
	};
	class walkErc_asphalt_felt_ext_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.3";
		frequency=1.1;
	};
	class walkErc_asphalt_felt_ext_asphalt_felt_ext_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.3";
		frequency=1;
	};
	class runErc_asphalt_felt_ext_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.4";
		frequency=1;
	};
	class runErc_asphalt_felt_ext_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.4";
		frequency=1.1;
	};
	class runErc_asphalt_felt_ext_asphalt_felt_ext_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.4";
		frequency=1;
	};
	class sprintErc_asphalt_felt_ext_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.6";
		frequency=1;
	};
	class sprintErc_asphalt_felt_ext_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.6";
		frequency=1.1;
	};
	class sprintErc_asphalt_felt_ext_asphalt_felt_ext_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.6";
		frequency=1;
	};
	class walkErc_asphalt_felt_ext_bare_concrete_ext_walkErc_toe_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.05";
		frequency=1;
	};
	class walkErc_asphalt_felt_ext_bare_textile_carpet_ext_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.065";
		frequency=1;
	};
	class runErc_asphalt_felt_ext_bare_concrete_ext_walkErc_toe_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.06";
		frequency=1.05;
	};
	class runErc_asphalt_felt_ext_bare_textile_carpet_ext_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.08";
		frequency=1;
	};
	class sprintErc_asphalt_felt_ext_bare_concrete_ext_walkErc_toe_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.01";
		frequency=1.1;
	};
	class sprintErc_asphalt_felt_ext_bare_textile_carpet_ext_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.1";
		frequency=0.85000002;
	};
	class walkErc_concrete_ext_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.28";
		frequency=1;
	};
	class walkErc_concrete_ext_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.28";
		frequency=1.1;
	};
	class walkErc_concrete_ext_concrete_ext_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.2";
		frequency=1;
	};
	class runErc_concrete_ext_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.38";
		frequency=1;
	};
	class runErc_concrete_ext_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.5";
		frequency=1.1;
	};
	class runErc_concrete_ext_concrete_ext_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.3";
		frequency=1;
	};
	class sprintErc_concrete_ext_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.53";
		frequency=1;
	};
	class sprintErc_concrete_ext_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.63";
		frequency=1.1;
	};
	class sprintErc_concrete_ext_concrete_ext_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.35";
		frequency=1;
	};
	class walkErc_concrete_ext_bare_concrete_ext_walkErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.16";
		frequency=1;
	};
	class walkErc_concrete_ext_bare_concrete_ext_walkErc_thump_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.16";
		frequency=1;
	};
	class walkErc_concrete_ext_bare_concrete_ext_walkErc_toe_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.05";
		frequency=1;
	};
	class runErc_concrete_ext_bare_concrete_ext_runErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.05";
		frequency=1;
	};
	class runErc_concrete_ext_bare_concrete_ext_walkErc_thump_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.3";
		frequency=0.89999998;
	};
	class runErc_concrete_ext_bare_concrete_ext_walkErc_toe_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.06";
		frequency=1.05;
	};
	class sprintErc_concrete_ext_bare_concrete_ext_runErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.09";
		frequency=1;
	};
	class sprintErc_concrete_ext_bare_concrete_ext_walkErc_thump_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.6";
		frequency=0.80000001;
	};
	class sprintErc_concrete_ext_bare_concrete_ext_walkErc_toe_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.08";
		frequency=1.1;
	};
	class walkErc_dirt_ext_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.2";
		frequency=1;
	};
	class walkErc_dirt_ext_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.2";
		frequency=1.1;
	};
	class walkErc_dirt_ext_dirt_ext_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.1";
		frequency=1;
	};
	class walkErc_dirt_ext_gravel_small_ext_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.05";
		frequency=1;
	};
	class runErc_dirt_ext_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.35";
		frequency=1;
	};
	class runErc_dirt_ext_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.3";
		frequency=1.1;
	};
	class runErc_dirt_ext_dirt_ext_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.2";
		frequency=1;
	};
	class runErc_dirt_ext_gravel_small_ext_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.15";
		frequency=1;
	};
	class sprintErc_dirt_ext_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.4";
		frequency=1;
	};
	class sprintErc_dirt_ext_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.4";
		frequency=1.1;
	};
	class sprintErc_dirt_ext_dirt_ext_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.3";
		frequency=1;
	};
	class sprintErc_dirt_ext_gravel_small_ext_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.2";
		frequency=1;
	};
	class walkErc_dirt_ext_bare_dirt_ext_walkErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.05";
		frequency=1;
	};
	class walkErc_dirt_ext_bare_dirt_ext_walkErc_toe_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.05";
		frequency=1;
	};
	class runErc_dirt_ext_bare_dirt_ext_walkErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.06";
		frequency=1;
	};
	class runErc_dirt_ext_bare_dirt_ext_runErc_thump_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.2";
		frequency=0.89999998;
	};
	class runErc_dirt_ext_bare_dirt_ext_runErc_toe_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.05";
		frequency=1.05;
	};
	class sprintErc_dirt_ext_bare_dirt_ext_walkErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.07";
		frequency=1;
	};
	class sprintErc_dirt_ext_bare_dirt_ext_runErc_thump_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.55";
		frequency=1;
	};
	class sprintErc_dirt_ext_bare_dirt_ext_runErc_toe_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.03";
		frequency=1.1;
	};
	class walkErc_gravel_small_ext_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.1";
		frequency=1;
	};
	class walkErc_gravel_small_ext_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.1";
		frequency=1.1;
	};
	class walkErc_gravel_small_ext_gravel_small_ext_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.2";
		frequency=1;
	};
	class runErc_gravel_small_ext_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.2";
		frequency=1;
	};
	class runErc_gravel_small_ext_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.2";
		frequency=1.1;
	};
	class runErc_gravel_small_ext_gravel_small_ext_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.3";
		frequency=1;
	};
	class sprintErc_gravel_small_ext_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.3";
		frequency=1;
	};
	class sprintErc_gravel_small_ext_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.3";
		frequency=1.1;
	};
	class sprintErc_gravel_small_ext_gravel_small_ext_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.4";
		frequency=1;
	};
	class walkErc_gravel_small_ext_bare_gravel_small_ext_runErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.08";
		frequency=0.89999998;
	};
	class walkErc_gravel_small_ext_gravel_small_ext_walkErc_rocks_Char_SoundShader: baseCharacter_SoundShader
	{
		volume=0.059999999;
		frequency=1;
	};
	class runErc_gravel_small_ext_bare_gravel_small_ext_runErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.12";
		frequency=1;
	};
	class runErc_gravel_small_ext_bare_dirt_ext_runErc_thump_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.08";
		frequency=1;
	};
	class runErc_gravel_small_ext_gravel_small_ext_walkErc_rocks_Char_SoundShader: baseCharacter_SoundShader
	{
		volume=0.02;
		frequency=1;
	};
	class sprintErc_gravel_small_ext_bare_gravel_small_ext_runErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.25";
		frequency=1.1;
	};
	class sprintErc_gravel_small_ext_bare_dirt_ext_runErc_thump_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.09";
		frequency=1;
	};
	class sprintErc_gravel_small_ext_gravel_small_ext_walkErc_rocks_Char_SoundShader: baseCharacter_SoundShader
	{
		volume=0.029999999;
		frequency=1.1;
	};
	class walkErc_grass_dry_ext_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.1";
		frequency=1;
	};
	class walkErc_grass_dry_ext_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.1";
		frequency=1.1;
	};
	class walkErc_grass_dry_ext_grass_dry_ext_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.2";
		frequency=1;
	};
	class runErc_grass_dry_ext_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.2";
		frequency=1;
	};
	class runErc_grass_dry_ext_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.2";
		frequency=1.1;
	};
	class runErc_grass_dry_ext_grass_dry_ext_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.3";
		frequency=1;
	};
	class sprintErc_grass_dry_ext_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.3";
		frequency=1;
	};
	class sprintErc_grass_dry_ext_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.3";
		frequency=1.1;
	};
	class sprintErc_grass_dry_ext_grass_dry_ext_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.4";
		frequency=1;
	};
	class walkErc_grass_dry_ext_bare_grass_dry_ext_walkErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.08";
		frequency=0.89999998;
	};
	class runErc_grass_dry_ext_bare_grass_dry_ext_runErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.08";
		frequency=0.89999998;
	};
	class runErc_grass_dry_ext_bare_grass_dry_ext_runErc_thump_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.1";
		frequency=0.89999998;
	};
	class sprintErc_grass_dry_ext_bare_grass_dry_ext_runErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.1";
		frequency=0.89999998;
	};
	class sprintErc_grass_dry_ext_bare_grass_dry_ext_runErc_thump_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.15";
		frequency=0.89999998;
	};
	class sprintErc_grass_dry_ext_bare_dirt_ext_runErc_thump_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.2";
		frequency=1;
	};
	class walkErc_cp_grass_tall_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.1";
		frequency=1;
	};
	class walkErc_cp_grass_tall_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.1";
		frequency=1.1;
	};
	class walkErc_cp_grass_tall_cp_grass_tall_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.2";
		frequency=1;
	};
	class runErc_cp_grass_tall_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.2";
		frequency=1;
	};
	class runErc_cp_grass_tall_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.2";
		frequency=1.1;
	};
	class runErc_cp_grass_tall_cp_grass_tall_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.3";
		frequency=1;
	};
	class sprintErc_cp_grass_tall_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.3";
		frequency=1;
	};
	class sprintErc_cp_grass_tall_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.3";
		frequency=1.1;
	};
	class sprintErc_cp_grass_tall_cp_grass_tall_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.4";
		frequency=1;
	};
	class walkErc_cp_grass_tall_bare_grass_dry_ext_walkErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.1";
		frequency=0.89999998;
	};
	class runErc_cp_grass_tall_bare_grass_dry_ext_runErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.16";
		frequency=0.89999998;
	};
	class runErc_cp_grass_tall_bare_grass_dry_ext_runErc_thump_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.1";
		frequency=0.89999998;
	};
	class sprintErc_cp_grass_tall_bare_grass_dry_ext_runErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.35";
		frequency=1;
	};
	class sprintErc_cp_grass_tall_bare_grass_dry_ext_runErc_thump_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.25";
		frequency=1.1;
	};
	class sprintErc_cp_grass_tall_bare_dirt_ext_runErc_thump_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.2";
		frequency=1;
	};
	class walkErc_wood_parquet_ext_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.3";
		frequency=1;
	};
	class walkErc_wood_parquet_ext_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.3";
		frequency=1.1;
	};
	class walkErc_wood_parquet_ext_wood_parquet_ext_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.3";
		frequency=1;
	};
	class runErc_wood_parquet_ext_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.4";
		frequency=1;
	};
	class runErc_wood_parquet_ext_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.4";
		frequency=1.1;
	};
	class runErc_wood_parquet_ext_wood_parquet_ext_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.4";
		frequency=1;
	};
	class sprintErc_wood_parquet_ext_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.55";
		frequency=1;
	};
	class sprintErc_wood_parquet_ext_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.55";
		frequency=1.1;
	};
	class sprintErc_wood_parquet_ext_wood_parquet_ext_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.55";
		frequency=1;
	};
	class walkErc_wood_parquet_ext_bare_wood_parquet_ext_walkErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.1";
		frequency=1;
	};
	class walkErc_wood_parquet_ext_bare_wood_parquet_ext_walkErc_thump_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.04";
		frequency=0.80000001;
	};
	class walkErc_wood_parquet_ext_bare_wood_parquet_ext_walkErc_toe_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.05";
		frequency=1;
	};
	class runErc_wood_parquet_ext_bare_concrete_ext_walkErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.15";
		frequency=1;
	};
	class runErc_wood_parquet_ext_bare_wood_parquet_ext_walkErc_thump_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.1";
		frequency=0.89999998;
	};
	class runErc_wood_parquet_ext_bare_wood_parquet_ext_walkErc_toe_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.05";
		frequency=1;
	};
	class sprintErc_wood_parquet_ext_bare_concrete_ext_walkErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.2";
		frequency=1;
	};
	class sprintErc_wood_parquet_ext_bare_wood_parquet_ext_walkErc_thump_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.12";
		frequency=1;
	};
	class sprintErc_wood_parquet_ext_bare_wood_parquet_ext_walkErc_toe_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.05";
		frequency=1;
	};
	class walkErc_wood_planks_ext_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.3";
		frequency=1;
	};
	class walkErc_wood_planks_ext_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.3";
		frequency=1.1;
	};
	class walkErc_wood_planks_ext_wood_planks_ext_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.3";
		frequency=1;
	};
	class runErc_wood_planks_ext_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.4";
		frequency=1;
	};
	class runErc_wood_planks_ext_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.4";
		frequency=1.1;
	};
	class runErc_wood_planks_ext_wood_planks_ext_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.4";
		frequency=1;
	};
	class sprintErc_wood_planks_ext_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.55";
		frequency=1;
	};
	class sprintErc_wood_planks_ext_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.55";
		frequency=1.1;
	};
	class sprintErc_wood_planks_ext_wood_planks_ext_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.55";
		frequency=1;
	};
	class walkErc_wood_planks_ext_bare_wood_parquet_ext_walkErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.1";
		frequency=1;
	};
	class walkErc_wood_planks_ext_bare_wood_parquet_ext_walkErc_thump_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.05";
		frequency=0.80000001;
	};
	class walkErc_wood_planks_ext_bare_wood_parquet_ext_walkErc_toe_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.03";
		frequency=1;
	};
	class walkErc_wood_planks_ext_wood_planks_ext_walkErc_creak_Char_SoundShader: baseCharacter_SoundShader
	{
		volume=0.050000001;
		frequency=0.80000001;
	};
	class runErc_wood_planks_ext_bare_concrete_ext_walkErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.15";
		frequency=1;
	};
	class runErc_wood_planks_ext_bare_wood_parquet_ext_walkErc_thump_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.1";
		frequency=0.89999998;
	};
	class runErc_wood_planks_ext_bare_wood_parquet_ext_walkErc_toe_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.05";
		frequency=1;
	};
	class runErc_wood_planks_ext_wood_planks_ext_walkErc_creak_Char_SoundShader: baseCharacter_SoundShader
	{
		volume=0.050000001;
		frequency=0.89999998;
	};
	class sprintErc_wood_planks_ext_bare_concrete_ext_walkErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.2";
		frequency=1;
	};
	class sprintErc_wood_planks_ext_bare_wood_parquet_ext_walkErc_thump_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.12";
		frequency=1;
	};
	class sprintErc_wood_planks_ext_bare_wood_parquet_ext_walkErc_toe_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.05";
		frequency=1;
	};
	class sprintErc_wood_planks_ext_wood_planks_ext_walkErc_creak_Char_SoundShader: baseCharacter_SoundShader
	{
		volume=0.050000001;
		frequency=1.1;
	};
	class walkErc_ceramic_tiles_ext_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.4";
		frequency=1;
	};
	class walkErc_ceramic_tiles_ext_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.4";
		frequency=1.1;
	};
	class walkErc_ceramic_tiles_ext_ceramic_tiles_ext_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.3";
		frequency=1;
	};
	class runErc_ceramic_tiles_ext_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.5";
		frequency=1;
	};
	class runErc_ceramic_tiles_ext_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.5";
		frequency=1.1;
	};
	class runErc_ceramic_tiles_ext_ceramic_tiles_ext_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.4";
		frequency=1;
	};
	class sprintErc_ceramic_tiles_ext_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.6";
		frequency=1;
	};
	class sprintErc_ceramic_tiles_ext_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.6";
		frequency=1.1;
	};
	class sprintErc_ceramic_tiles_ext_ceramic_tiles_ext_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.55";
		frequency=1;
	};
	class walkErc_ceramic_tiles_ext_bare_wood_parquet_ext_walkErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.08";
		frequency=0.80000001;
	};
	class walkErc_ceramic_tiles_ext_bare_ceramic_tiles_ext_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.06";
		frequency=1;
	};
	class runErc_ceramic_tiles_ext_bare_wood_parquet_ext_walkErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.12";
		frequency=0.89999998;
	};
	class runErc_ceramic_tiles_ext_bare_ceramic_tiles_ext_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.08";
		frequency=1;
	};
	class sprintErc_ceramic_tiles_ext_bare_wood_parquet_ext_walkErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.1";
		frequency=1;
	};
	class sprintErc_ceramic_tiles_ext_bare_ceramic_tiles_ext_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.25";
		frequency=1;
	};
	class walkErc_metal_thick_ext_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.3";
		frequency=1;
	};
	class walkErc_metal_thick_ext_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.3";
		frequency=1.1;
	};
	class walkErc_metal_thick_ext_metal_thick_ext_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.3";
		frequency=1;
	};
	class runErc_metal_thick_ext_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.4";
		frequency=1;
	};
	class runErc_metal_thick_ext_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.4";
		frequency=1.1;
	};
	class runErc_metal_thick_ext_metal_thick_ext_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.4";
		frequency=1;
	};
	class sprintErc_metal_thick_ext_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.6";
		frequency=1;
	};
	class sprintErc_metal_thick_ext_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.6";
		frequency=1.1;
	};
	class sprintErc_metal_thick_ext_metal_thick_ext_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.6";
		frequency=1;
	};
	class walkErc_metal_thick_ext_bare_metal_thick_ext_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.1";
		frequency=1;
	};
	class runErc_metal_thick_ext_bare_metal_thick_ext_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.12";
		frequency=1;
	};
	class sprintErc_metal_thick_ext_bare_metal_thick_ext_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.2";
		frequency=1;
	};
	class walkErc_metal_thin_ext_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.3";
		frequency=1;
	};
	class walkErc_metal_thin_ext_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.3";
		frequency=1.1;
	};
	class walkErc_metal_thin_ext_metal_thin_ext_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.4";
		frequency=1;
	};
	class runErc_metal_thin_ext_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.4";
		frequency=1;
	};
	class runErc_metal_thin_ext_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.4";
		frequency=1.1;
	};
	class runErc_metal_thin_ext_metal_thin_ext_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.5";
		frequency=1;
	};
	class sprintErc_metal_thin_ext_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.6";
		frequency=1;
	};
	class sprintErc_metal_thin_ext_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.6";
		frequency=1.1;
	};
	class sprintErc_metal_thin_ext_metal_thin_ext_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.6";
		frequency=1;
	};
	class walkErc_metal_thin_ext_bare_metal_thin_ext_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.092";
		frequency=1;
	};
	class walkErc_metal_thin_ext_bare_metal_thin_mesh_ext_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.035";
		frequency=1;
	};
	class runErc_metal_thin_ext_bare_metal_thin_ext_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.18";
		frequency=1;
	};
	class runErc_metal_thin_ext_bare_metal_thin_mesh_ext_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.06";
		frequency=1;
	};
	class sprintErc_metal_thin_ext_bare_metal_thin_ext_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.35";
		frequency=1;
	};
	class sprintErc_metal_thin_ext_bare_metal_thin_mesh_ext_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.05";
		frequency=1;
	};
	class walkErc_metal_thin_mesh_ext_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.3";
		frequency=1;
	};
	class walkErc_metal_thin_mesh_ext_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.3";
		frequency=1.1;
	};
	class walkErc_metal_thin_mesh_ext_metal_thin_mesh_ext_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.4";
		frequency=1;
	};
	class runErc_metal_thin_mesh_ext_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.4";
		frequency=1;
	};
	class runErc_metal_thin_mesh_ext_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.4";
		frequency=1.1;
	};
	class runErc_metal_thin_mesh_ext_metal_thin_mesh_ext_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.5";
		frequency=1;
	};
	class sprintErc_metal_thin_mesh_ext_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.6";
		frequency=1;
	};
	class sprintErc_metal_thin_mesh_ext_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.6";
		frequency=1.1;
	};
	class sprintErc_metal_thin_mesh_ext_metal_thin_mesh_ext_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.6";
		frequency=1;
	};
	class walkErc_metal_thin_mesh_ext_bare_metal_thin_mesh_ext_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.092";
		frequency=1;
	};
	class walkErc_metal_thin_mesh_ext_bare_metal_thin_ext_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.035";
		frequency=1;
	};
	class runErc_metal_thin_mesh_ext_bare_metal_thin_mesh_ext_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.18";
		frequency=1;
	};
	class runErc_metal_thin_mesh_ext_bare_metal_thin_ext_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.06";
		frequency=1;
	};
	class sprintErc_metal_thin_mesh_ext_bare_metal_thin_mesh_ext_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.35";
		frequency=1;
	};
	class sprintErc_metal_thin_mesh_ext_bare_metal_thin_ext_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.05";
		frequency=1;
	};
	class walkErc_sand_ext_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.15";
		frequency=1;
	};
	class walkErc_sand_ext_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.15";
		frequency=1.1;
	};
	class walkErc_sand_ext_sand_ext_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.15";
		frequency=1;
	};
	class runErc_sand_ext_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.25";
		frequency=1;
	};
	class runErc_sand_ext_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.25";
		frequency=1.1;
	};
	class runErc_sand_ext_sand_ext_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.25";
		frequency=1;
	};
	class sprintErc_sand_ext_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.45";
		frequency=1;
	};
	class sprintErc_sand_ext_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.45";
		frequency=1.1;
	};
	class sprintErc_sand_ext_sand_ext_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.45";
		frequency=1;
	};
	class walkErc_sand_ext_bare_dirt_ext_walkErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.045";
		frequency=1;
	};
	class walkErc_sand_ext_bare_sand_ext_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.045";
		frequency=1;
	};
	class runErc_sand_ext_bare_dirt_ext_runErc_thump_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.07";
		frequency=1;
	};
	class runErc_sand_ext_bare_sand_ext_runErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.04";
		frequency=1;
	};
	class runErc_sand_ext_bare_sand_ext_runErc_toe_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.07";
		frequency=1;
	};
	class sprintErc_sand_ext_bare_dirt_ext_runErc_thump_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.12";
		frequency=1;
	};
	class sprintErc_sand_ext_bare_sand_ext_runErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.10";
		frequency=1.1;
	};
	class sprintErc_sand_ext_bare_sand_ext_runErc_toe_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.08";
		frequency=1.1;
	};
	class walkErc_textile_carpet_ext_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.3";
		frequency=1;
	};
	class walkErc_textile_carpet_ext_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.3";
		frequency=1.1;
	};
	class walkErc_textile_carpet_ext_textile_carpet_ext_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.3";
		frequency=1;
	};
	class runErc_textile_carpet_ext_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.4";
		frequency=1;
	};
	class runErc_textile_carpet_ext_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.4";
		frequency=1.1;
	};
	class runErc_textile_carpet_ext_textile_carpet_ext_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.4";
		frequency=1;
	};
	class sprintErc_textile_carpet_ext_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.6";
		frequency=1;
	};
	class sprintErc_textile_carpet_ext_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.6";
		frequency=1.1;
	};
	class sprintErc_textile_carpet_ext_textile_carpet_ext_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.6";
		frequency=1;
	};
	class walkErc_textile_carpet_ext_bare_textile_carpet_ext_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.06";
		frequency=1;
	};
	class runErc_textile_carpet_ext_bare_textile_carpet_ext_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.075";
		frequency=1;
	};
	class sprintErc_textile_carpet_ext_bare_textile_carpet_ext_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.1";
		frequency=0.85000002;
	};
	class walkErc_cp_broadleaf_dense1_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.1";
		frequency=1;
	};
	class walkErc_cp_broadleaf_dense1_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.1";
		frequency=1.1;
	};
	class walkErc_cp_broadleaf_dense1_cp_broadleaf_dense1_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.1";
		frequency=1;
	};
	class walkErc_cp_broadleaf_dense1_grass_dry_ext_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.007";
		frequency=1;
	};
	class runErc_cp_broadleaf_dense1_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.18";
		frequency=1;
	};
	class runErc_cp_broadleaf_dense1_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.18";
		frequency=1.1;
	};
	class runErc_cp_broadleaf_dense1_cp_broadleaf_dense1_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.18";
		frequency=1;
	};
	class runErc_cp_broadleaf_dense1_grass_dry_ext_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.14";
		frequency=1;
	};
	class sprintErc_cp_broadleaf_dense1_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.28";
		frequency=1;
	};
	class sprintErc_cp_broadleaf_dense1_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.28";
		frequency=1.1;
	};
	class sprintErc_cp_broadleaf_dense1_cp_broadleaf_dense1_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.28";
		frequency=1;
	};
	class sprintErc_cp_broadleaf_dense1_grass_dry_ext_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.23";
		frequency=1;
	};
	class walkErc_cp_broadleaf_dense1_bare_cp_broadleaf_dense1_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.05";
		frequency=1;
	};
	class walkErc_cp_broadleaf_dense1_cp_broadleaf_dense1_walkErc_creak_Char_SoundShader: baseCharacter_SoundShader
	{
		volume=0.0125;
		frequency=1;
	};
	class runErc_cp_broadleaf_dense1_bare_cp_broadleaf_dense1_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.08";
		frequency=1;
	};
	class runErc_cp_broadleaf_dense1_cp_broadleaf_dense1_walkErc_creak_Char_SoundShader: baseCharacter_SoundShader
	{
		volume=0.025;
		frequency=1;
	};
	class sprintErc_cp_broadleaf_dense1_bare_cp_broadleaf_dense1_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.1";
		frequency=0.85000002;
	};
	class sprintErc_cp_broadleaf_dense1_cp_broadleaf_dense1_walkErc_creak_Char_SoundShader: baseCharacter_SoundShader
	{
		volume=0.025;
		frequency=1;
	};
	class walkErc_asphalt_int_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.2";
		frequency=1;
	};
	class walkErc_asphalt_int_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.2";
		frequency=1.1;
	};
	class walkErc_asphalt_int_asphalt_int_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.2";
		frequency=1;
	};
	class runErc_asphalt_int_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.3";
		frequency=1;
	};
	class runErc_asphalt_int_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.3";
		frequency=1.1;
	};
	class runErc_asphalt_int_asphalt_int_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.3";
		frequency=1;
	};
	class sprintErc_asphalt_int_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.4";
		frequency=1;
	};
	class sprintErc_asphalt_int_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.4";
		frequency=1.1;
	};
	class sprintErc_asphalt_int_asphalt_int_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.43";
		frequency=1;
	};
	class walkErc_asphalt_int_bare_concrete_int_walkErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.16";
		frequency=1;
	};
	class walkErc_asphalt_int_bare_concrete_int_walkErc_thump_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.16";
		frequency=1;
	};
	class walkErc_asphalt_int_bare_concrete_int_walkErc_toe_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.05";
		frequency=1;
	};
	class runErc_asphalt_int_bare_concrete_int_runErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.05";
		frequency=1;
	};
	class runErc_asphalt_int_bare_concrete_int_walkErc_thump_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.3";
		frequency=0.89999998;
	};
	class runErc_asphalt_int_bare_concrete_int_walkErc_toe_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.06";
		frequency=1.05;
	};
	class sprintErc_asphalt_int_bare_concrete_int_runErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.09";
		frequency=1;
	};
	class sprintErc_asphalt_int_bare_concrete_int_walkErc_thump_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.6";
		frequency=0.80000001;
	};
	class sprintErc_asphalt_int_bare_concrete_int_walkErc_toe_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.08";
		frequency=1.1;
	};
	class walkErc_asphalt_felt_int_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.3";
		frequency=1;
	};
	class walkErc_asphalt_felt_int_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.3";
		frequency=1.1;
	};
	class walkErc_asphalt_felt_int_asphalt_felt_int_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.3";
		frequency=1;
	};
	class runErc_asphalt_felt_int_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.4";
		frequency=1;
	};
	class runErc_asphalt_felt_int_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.4";
		frequency=1.1;
	};
	class runErc_asphalt_felt_int_asphalt_felt_int_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.4";
		frequency=1;
	};
	class sprintErc_asphalt_felt_int_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.6";
		frequency=1;
	};
	class sprintErc_asphalt_felt_int_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.6";
		frequency=1.1;
	};
	class sprintErc_asphalt_felt_int_asphalt_felt_int_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.6";
		frequency=1;
	};
	class walkErc_asphalt_felt_int_bare_concrete_int_walkErc_toe_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.05";
		frequency=1;
	};
	class walkErc_asphalt_felt_int_bare_textile_carpet_int_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.065";
		frequency=1;
	};
	class runErc_asphalt_felt_int_bare_concrete_int_walkErc_toe_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.06";
		frequency=1.05;
	};
	class runErc_asphalt_felt_int_bare_textile_carpet_int_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.08";
		frequency=1;
	};
	class sprintErc_asphalt_felt_int_bare_concrete_int_walkErc_toe_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.01";
		frequency=1.1;
	};
	class sprintErc_asphalt_felt_int_bare_textile_carpet_int_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.1";
		frequency=0.85000002;
	};
	class walkErc_concrete_int_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.28";
		frequency=1;
	};
	class walkErc_concrete_int_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.28";
		frequency=1.1;
	};
	class walkErc_concrete_int_concrete_int_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.2";
		frequency=1;
	};
	class runErc_concrete_int_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.38";
		frequency=1;
	};
	class runErc_concrete_int_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.5";
		frequency=1.1;
	};
	class runErc_concrete_int_concrete_int_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.3";
		frequency=1;
	};
	class sprintErc_concrete_int_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.53";
		frequency=1;
	};
	class sprintErc_concrete_int_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.63";
		frequency=1.1;
	};
	class sprintErc_concrete_int_concrete_int_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.35";
		frequency=1;
	};
	class walkErc_concrete_int_bare_concrete_int_walkErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.16";
		frequency=1;
	};
	class walkErc_concrete_int_bare_concrete_int_walkErc_thump_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.16";
		frequency=1;
	};
	class walkErc_concrete_int_bare_concrete_int_walkErc_toe_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.05";
		frequency=1;
	};
	class runErc_concrete_int_bare_concrete_int_runErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.05";
		frequency=1;
	};
	class runErc_concrete_int_bare_concrete_int_walkErc_thump_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.3";
		frequency=0.89999998;
	};
	class runErc_concrete_int_bare_concrete_int_walkErc_toe_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.06";
		frequency=1.05;
	};
	class sprintErc_concrete_int_bare_concrete_int_runErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.09";
		frequency=1;
	};
	class sprintErc_concrete_int_bare_concrete_int_walkErc_thump_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.6";
		frequency=0.80000001;
	};
	class sprintErc_concrete_int_bare_concrete_int_walkErc_toe_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.08";
		frequency=1.1;
	};
	class walkErc_dirt_int_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.1";
		frequency=1;
	};
	class walkErc_dirt_int_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.1";
		frequency=1.1;
	};
	class walkErc_dirt_int_dirt_int_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.15";
		frequency=1;
	};
	class walkErc_dirt_int_gravel_small_int_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.05";
		frequency=1;
	};
	class runErc_dirt_int_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.25";
		frequency=1;
	};
	class runErc_dirt_int_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.25";
		frequency=1.1;
	};
	class runErc_dirt_int_dirt_int_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.4";
		frequency=1;
	};
	class runErc_dirt_int_gravel_small_int_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.15";
		frequency=1;
	};
	class sprintErc_dirt_int_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.35";
		frequency=1;
	};
	class sprintErc_dirt_int_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.35";
		frequency=1.1;
	};
	class sprintErc_dirt_int_dirt_int_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.6";
		frequency=1;
	};
	class sprintErc_dirt_int_gravel_small_int_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.2";
		frequency=1;
	};
	class walkErc_dirt_int_bare_dirt_int_walkErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.05";
		frequency=1;
	};
	class walkErc_dirt_int_bare_dirt_int_walkErc_toe_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.05";
		frequency=1;
	};
	class runErc_dirt_int_bare_dirt_int_walkErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.06";
		frequency=1;
	};
	class runErc_dirt_int_bare_dirt_int_runErc_thump_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.2";
		frequency=0.89999998;
	};
	class runErc_dirt_int_bare_dirt_int_runErc_toe_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.05";
		frequency=1.05;
	};
	class sprintErc_dirt_int_bare_dirt_int_walkErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.07";
		frequency=1;
	};
	class sprintErc_dirt_int_bare_dirt_int_runErc_thump_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.55";
		frequency=1;
	};
	class sprintErc_dirt_int_bare_dirt_int_runErc_toe_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.03";
		frequency=1.1;
	};
	class walkErc_gravel_small_int_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.1";
		frequency=1;
	};
	class walkErc_gravel_small_int_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.1";
		frequency=1.1;
	};
	class walkErc_gravel_small_int_gravel_small_int_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.15";
		frequency=1;
	};
	class runErc_gravel_small_int_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.2";
		frequency=1;
	};
	class runErc_gravel_small_int_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.2";
		frequency=1.1;
	};
	class runErc_gravel_small_int_gravel_small_int_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.2";
		frequency=1;
	};
	class sprintErc_gravel_small_int_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.3";
		frequency=1;
	};
	class sprintErc_gravel_small_int_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.3";
		frequency=1.1;
	};
	class sprintErc_gravel_small_int_gravel_small_int_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.3";
		frequency=1;
	};
	class walkErc_gravel_small_int_bare_gravel_small_int_runErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.08";
		frequency=0.89999998;
	};
	class walkErc_gravel_small_int_gravel_small_int_walkErc_rocks_Char_SoundShader: baseCharacter_SoundShader
	{
		volume=0.059999999;
		frequency=1;
	};
	class runErc_gravel_small_int_bare_gravel_small_int_runErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.12";
		frequency=1;
	};
	class runErc_gravel_small_int_bare_dirt_int_runErc_thump_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.08";
		frequency=1;
	};
	class runErc_gravel_small_int_gravel_small_int_walkErc_rocks_Char_SoundShader: baseCharacter_SoundShader
	{
		volume=0.02;
		frequency=1;
	};
	class sprintErc_gravel_small_int_bare_gravel_small_int_runErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.25";
		frequency=1.1;
	};
	class sprintErc_gravel_small_int_bare_dirt_int_runErc_thump_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.09";
		frequency=1;
	};
	class sprintErc_gravel_small_int_gravel_small_int_walkErc_rocks_Char_SoundShader: baseCharacter_SoundShader
	{
		volume=0.029999999;
		frequency=1.1;
	};
	class walkErc_grass_dry_int_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.1";
		frequency=1;
	};
	class walkErc_grass_dry_int_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.1";
		frequency=1.1;
	};
	class walkErc_grass_dry_int_grass_dry_int_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.2";
		frequency=1;
	};
	class runErc_grass_dry_int_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.2";
		frequency=1;
	};
	class runErc_grass_dry_int_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.2";
		frequency=1.1;
	};
	class runErc_grass_dry_int_grass_dry_int_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.3";
		frequency=1;
	};
	class sprintErc_grass_dry_int_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.3";
		frequency=1;
	};
	class sprintErc_grass_dry_int_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.3";
		frequency=1.1;
	};
	class sprintErc_grass_dry_int_grass_dry_int_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.4";
		frequency=1;
	};
	class walkErc_grass_dry_int_bare_grass_dry_int_walkErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.08";
		frequency=0.89999998;
	};
	class runErc_grass_dry_int_bare_grass_dry_int_runErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.08";
		frequency=0.89999998;
	};
	class runErc_grass_dry_int_bare_grass_dry_int_runErc_thump_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.1";
		frequency=0.89999998;
	};
	class sprintErc_grass_dry_int_bare_grass_dry_int_runErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.1";
		frequency=0.89999998;
	};
	class sprintErc_grass_dry_int_bare_grass_dry_int_runErc_thump_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.15";
		frequency=0.89999998;
	};
	class sprintErc_grass_dry_int_bare_dirt_int_runErc_thump_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.2";
		frequency=1;
	};
	class walkErc_wood_parquet_int_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.3";
		frequency=1;
	};
	class walkErc_wood_parquet_int_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.3";
		frequency=1.1;
	};
	class walkErc_wood_parquet_int_wood_parquet_int_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.3";
		frequency=1;
	};
	class runErc_wood_parquet_int_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.4";
		frequency=1;
	};
	class runErc_wood_parquet_int_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.4";
		frequency=1.1;
	};
	class runErc_wood_parquet_int_wood_parquet_int_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.4";
		frequency=1;
	};
	class sprintErc_wood_parquet_int_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.55";
		frequency=1;
	};
	class sprintErc_wood_parquet_int_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.55";
		frequency=1.1;
	};
	class sprintErc_wood_parquet_int_wood_parquet_int_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.55";
		frequency=1;
	};
	class walkErc_wood_parquet_int_bare_wood_parquet_int_walkErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.1";
		frequency=1;
	};
	class walkErc_wood_parquet_int_bare_wood_parquet_int_walkErc_thump_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.04";
		frequency=0.80000001;
	};
	class walkErc_wood_parquet_int_bare_wood_parquet_int_walkErc_toe_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.05";
		frequency=1;
	};
	class runErc_wood_parquet_int_bare_concrete_int_walkErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.15";
		frequency=1;
	};
	class runErc_wood_parquet_int_bare_wood_parquet_int_walkErc_thump_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.1";
		frequency=0.89999998;
	};
	class runErc_wood_parquet_int_bare_wood_parquet_int_walkErc_toe_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.05";
		frequency=1;
	};
	class sprintErc_wood_parquet_int_bare_concrete_int_walkErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.2";
		frequency=1;
	};
	class sprintErc_wood_parquet_int_bare_wood_parquet_int_walkErc_thump_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.12";
		frequency=1;
	};
	class sprintErc_wood_parquet_int_bare_wood_parquet_int_walkErc_toe_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.05";
		frequency=1;
	};
	class walkErc_wood_planks_int_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.3";
		frequency=1;
	};
	class walkErc_wood_planks_int_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.3";
		frequency=1.1;
	};
	class walkErc_wood_planks_int_wood_planks_int_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.3";
		frequency=1;
	};
	class runErc_wood_planks_int_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.4";
		frequency=1;
	};
	class runErc_wood_planks_int_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.4";
		frequency=1.1;
	};
	class runErc_wood_planks_int_wood_planks_int_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.4";
		frequency=1;
	};
	class sprintErc_wood_planks_int_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.55";
		frequency=1;
	};
	class sprintErc_wood_planks_int_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.55";
		frequency=1.1;
	};
	class sprintErc_wood_planks_int_wood_planks_int_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.55";
		frequency=1;
	};
	class walkErc_wood_planks_int_bare_wood_parquet_int_walkErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.1";
		frequency=1;
	};
	class walkErc_wood_planks_int_bare_wood_parquet_int_walkErc_thump_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.05";
		frequency=0.80000001;
	};
	class walkErc_wood_planks_int_bare_wood_parquet_int_walkErc_toe_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.03";
		frequency=1;
	};
	class walkErc_wood_planks_int_wood_planks_int_walkErc_creak_Char_SoundShader: baseCharacter_SoundShader
	{
		volume=0.050000001;
		frequency=0.80000001;
	};
	class runErc_wood_planks_int_bare_concrete_int_walkErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.15";
		frequency=1;
	};
	class runErc_wood_planks_int_bare_wood_parquet_int_walkErc_thump_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.1";
		frequency=0.89999998;
	};
	class runErc_wood_planks_int_bare_wood_parquet_int_walkErc_toe_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.05";
		frequency=1;
	};
	class runErc_wood_planks_int_wood_planks_int_walkErc_creak_Char_SoundShader: baseCharacter_SoundShader
	{
		volume=0.050000001;
		frequency=0.89999998;
	};
	class sprintErc_wood_planks_int_bare_concrete_int_walkErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.2";
		frequency=1;
	};
	class sprintErc_wood_planks_int_bare_wood_parquet_int_walkErc_thump_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.12";
		frequency=1;
	};
	class sprintErc_wood_planks_int_bare_wood_parquet_int_walkErc_toe_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.05";
		frequency=1;
	};
	class sprintErc_wood_planks_int_wood_planks_int_walkErc_creak_Char_SoundShader: baseCharacter_SoundShader
	{
		volume=0.050000001;
		frequency=1.1;
	};
	class walkErc_ceramic_tiles_int_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.3";
		frequency=1;
	};
	class walkErc_ceramic_tiles_int_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.3";
		frequency=1.1;
	};
	class walkErc_ceramic_tiles_int_ceramic_tiles_int_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.3";
		frequency=1;
	};
	class runErc_ceramic_tiles_int_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.4";
		frequency=1;
	};
	class runErc_ceramic_tiles_int_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.4";
		frequency=1.1;
	};
	class runErc_ceramic_tiles_int_ceramic_tiles_int_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.4";
		frequency=1;
	};
	class sprintErc_ceramic_tiles_int_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.55";
		frequency=1;
	};
	class sprintErc_ceramic_tiles_int_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.55";
		frequency=1.1;
	};
	class sprintErc_ceramic_tiles_int_ceramic_tiles_int_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.55";
		frequency=1;
	};
	class walkErc_ceramic_tiles_int_bare_wood_parquet_int_walkErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.08";
		frequency=0.80000001;
	};
	class walkErc_ceramic_tiles_int_bare_ceramic_tiles_int_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.06";
		frequency=1;
	};
	class runErc_ceramic_tiles_int_bare_wood_parquet_int_walkErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.12";
		frequency=0.89999998;
	};
	class runErc_ceramic_tiles_int_bare_ceramic_tiles_int_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.08";
		frequency=1;
	};
	class sprintErc_ceramic_tiles_int_bare_wood_parquet_int_walkErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.1";
		frequency=1;
	};
	class sprintErc_ceramic_tiles_int_bare_ceramic_tiles_int_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.25";
		frequency=1;
	};
	class walkErc_metal_thick_int_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.3";
		frequency=1;
	};
	class walkErc_metal_thick_int_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.3";
		frequency=1.1;
	};
	class walkErc_metal_thick_int_metal_thick_int_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.3";
		frequency=1;
	};
	class runErc_metal_thick_int_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.4";
		frequency=1;
	};
	class runErc_metal_thick_int_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.4";
		frequency=1.1;
	};
	class runErc_metal_thick_int_metal_thick_int_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.4";
		frequency=1;
	};
	class sprintErc_metal_thick_int_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.6";
		frequency=1;
	};
	class sprintErc_metal_thick_int_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.6";
		frequency=1.1;
	};
	class sprintErc_metal_thick_int_metal_thick_int_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.6";
		frequency=1;
	};
	class walkErc_metal_thick_int_bare_metal_thick_int_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.1";
		frequency=1;
	};
	class runErc_metal_thick_int_bare_metal_thick_int_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.12";
		frequency=1;
	};
	class sprintErc_metal_thick_int_bare_metal_thick_int_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.2";
		frequency=1;
	};
	class walkErc_metal_thin_int_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.3";
		frequency=1;
	};
	class walkErc_metal_thin_int_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.3";
		frequency=1.1;
	};
	class walkErc_metal_thin_int_metal_thin_int_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.4";
		frequency=1;
	};
	class runErc_metal_thin_int_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.4";
		frequency=1;
	};
	class runErc_metal_thin_int_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.4";
		frequency=1.1;
	};
	class runErc_metal_thin_int_metal_thin_int_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.5";
		frequency=1;
	};
	class sprintErc_metal_thin_int_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.6";
		frequency=1;
	};
	class sprintErc_metal_thin_int_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.6";
		frequency=1.1;
	};
	class sprintErc_metal_thin_int_metal_thin_int_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.6";
		frequency=1;
	};
	class walkErc_metal_thin_int_bare_metal_thin_int_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.092";
		frequency=1;
	};
	class walkErc_metal_thin_int_bare_metal_thin_mesh_int_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.035";
		frequency=1;
	};
	class runErc_metal_thin_int_bare_metal_thin_int_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.18";
		frequency=1;
	};
	class runErc_metal_thin_int_bare_metal_thin_mesh_int_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.06";
		frequency=1;
	};
	class sprintErc_metal_thin_int_bare_metal_thin_int_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.35";
		frequency=1;
	};
	class sprintErc_metal_thin_int_bare_metal_thin_mesh_int_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.05";
		frequency=1;
	};
	class walkErc_metal_thin_mesh_int_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.3";
		frequency=1;
	};
	class walkErc_metal_thin_mesh_int_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.3";
		frequency=1.1;
	};
	class walkErc_metal_thin_mesh_int_metal_thin_mesh_int_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.4";
		frequency=1;
	};
	class runErc_metal_thin_mesh_int_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.4";
		frequency=1;
	};
	class runErc_metal_thin_mesh_int_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.4";
		frequency=1.1;
	};
	class runErc_metal_thin_mesh_int_metal_thin_mesh_int_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.5";
		frequency=1;
	};
	class sprintErc_metal_thin_mesh_int_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.6";
		frequency=1;
	};
	class sprintErc_metal_thin_mesh_int_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.6";
		frequency=1.1;
	};
	class sprintErc_metal_thin_mesh_int_metal_thin_mesh_int_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.6";
		frequency=1;
	};
	class walkErc_metal_thin_mesh_int_bare_metal_thin_mesh_int_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.092";
		frequency=1;
	};
	class walkErc_metal_thin_mesh_int_bare_metal_thin_int_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.035";
		frequency=1;
	};
	class runErc_metal_thin_mesh_int_bare_metal_thin_mesh_int_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.18";
		frequency=1;
	};
	class runErc_metal_thin_mesh_int_bare_metal_thin_int_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.06";
		frequency=1;
	};
	class sprintErc_metal_thin_mesh_int_bare_metal_thin_mesh_int_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.35";
		frequency=1;
	};
	class sprintErc_metal_thin_mesh_int_bare_metal_thin_int_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.05";
		frequency=1;
	};
	class walkErc_sand_int_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.15";
		frequency=1;
	};
	class walkErc_sand_int_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.15";
		frequency=1.1;
	};
	class walkErc_sand_int_sand_int_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.15";
		frequency=1;
	};
	class runErc_sand_int_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.25";
		frequency=1;
	};
	class runErc_sand_int_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.25";
		frequency=1.1;
	};
	class runErc_sand_int_sand_int_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.25";
		frequency=1;
	};
	class sprintErc_sand_int_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.45";
		frequency=1;
	};
	class sprintErc_sand_int_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.45";
		frequency=1.1;
	};
	class sprintErc_sand_int_sand_int_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.45";
		frequency=1;
	};
	class walkErc_sand_int_bare_dirt_int_walkErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.045";
		frequency=1;
	};
	class walkErc_sand_int_bare_sand_int_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.045";
		frequency=1;
	};
	class runErc_sand_int_bare_dirt_int_runErc_thump_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.07";
		frequency=1;
	};
	class runErc_sand_int_bare_sand_int_runErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.04";
		frequency=1;
	};
	class runErc_sand_int_bare_sand_int_runErc_toe_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.07";
		frequency=1;
	};
	class sprintErc_sand_int_bare_dirt_int_runErc_thump_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.12";
		frequency=1;
	};
	class sprintErc_sand_int_bare_sand_int_runErc_heel_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.10";
		frequency=1.1;
	};
	class sprintErc_sand_int_bare_sand_int_runErc_toe_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.08";
		frequency=1.1;
	};
	class walkErc_textile_carpet_int_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.3";
		frequency=1;
	};
	class walkErc_textile_carpet_int_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.3";
		frequency=1.1;
	};
	class walkErc_textile_carpet_int_textile_carpet_int_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.3";
		frequency=1;
	};
	class runErc_textile_carpet_int_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.4";
		frequency=1;
	};
	class runErc_textile_carpet_int_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.4";
		frequency=1.1;
	};
	class runErc_textile_carpet_int_textile_carpet_int_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.4";
		frequency=1;
	};
	class sprintErc_textile_carpet_int_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.6";
		frequency=1;
	};
	class sprintErc_textile_carpet_int_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.6";
		frequency=1.1;
	};
	class sprintErc_textile_carpet_int_textile_carpet_int_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="(1 - bare) * 0.6";
		frequency=1;
	};
	class walkErc_textile_carpet_int_bare_textile_carpet_int_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.06";
		frequency=1;
	};
	class runErc_textile_carpet_int_bare_textile_carpet_int_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.075";
		frequency=1;
	};
	class sprintErc_textile_carpet_int_bare_textile_carpet_int_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.1";
		frequency=0.85000002;
	};
	class scuffErc_asphalt_ext_bare_asphalt_ext_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.25";
		frequency=1;
	};
	class scuffErc_asphalt_int_bare_asphalt_int_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.25";
		frequency=1;
	};
	class scuffErc_asphalt_felt_ext_bare_asphalt_felt_ext_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.25";
		frequency=1;
	};
	class scuffErc_asphalt_felt_int_bare_asphalt_felt_int_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.25";
		frequency=1;
	};
	class scuffErc_ceramic_tiles_ext_bare_ceramic_tiles_ext_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.25";
		frequency=1;
	};
	class scuffErc_ceramic_tiles_int_bare_ceramic_tiles_int_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.25";
		frequency=1;
	};
	class scuffErc_concrete_ext_bare_concrete_ext_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.25";
		frequency=1;
	};
	class scuffErc_concrete_int_bare_concrete_int_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.25";
		frequency=1;
	};
	class scuffErc_cp_broadleaf_dense1_bare_cp_broadleaf_dense1_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.25";
		frequency=1;
	};
	class scuffErc_cp_grass_tall_bare_cp_grass_tall_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.25";
		frequency=1;
	};
	class scuffErc_dirt_ext_bare_dirt_ext_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.25";
		frequency=1;
	};
	class scuffErc_dirt_int_bare_dirt_int_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.25";
		frequency=1;
	};
	class scuffErc_grass_dry_ext_bare_grass_dry_ext_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.25";
		frequency=1;
	};
	class scuffErc_grass_dry_int_bare_grass_dry_int_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.25";
		frequency=1;
	};
	class scuffErc_gravel_small_ext_bare_gravel_small_ext_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.25";
		frequency=1;
	};
	class scuffErc_gravel_small_int_bare_gravel_small_int_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.25";
		frequency=1;
	};
	class scuffErc_metal_thick_ext_bare_metal_thick_ext_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.25";
		frequency=1;
	};
	class scuffErc_metal_thick_int_bare_metal_thick_int_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.25";
		frequency=1;
	};
	class scuffErc_metal_thin_ext_bare_metal_thin_ext_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.25";
		frequency=1;
	};
	class scuffErc_metal_thin_int_bare_metal_thin_int_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.25";
		frequency=1;
	};
	class scuffErc_metal_thin_mesh_ext_bare_metal_thin_mesh_ext_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.25";
		frequency=1;
	};
	class scuffErc_metal_thin_mesh_int_bare_metal_thin_mesh_int_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.25";
		frequency=1;
	};
	class scuffErc_sand_ext_bare_sand_ext_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.25";
		frequency=1;
	};
	class scuffErc_sand_int_bare_sand_int_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.25";
		frequency=1;
	};
	class scuffErc_textile_carpet_ext_bare_textile_carpet_ext_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.25";
		frequency=1;
	};
	class scuffErc_textile_carpet_int_bare_textile_carpet_int_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.25";
		frequency=1;
	};
	class scuffErc_wood_parquet_ext_bare_wood_parquet_ext_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.25";
		frequency=1;
	};
	class scuffErc_wood_parquet_int_bare_wood_parquet_int_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.25";
		frequency=1;
	};
	class scuffErc_wood_planks_ext_bare_wood_planks_ext_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.25";
		frequency=1;
	};
	class scuffErc_wood_planks_int_bare_wood_planks_int_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.25";
		frequency=1;
	};
	class scuffErc_asphalt_ext_boots_asphalt_ext_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.35";
		frequency=1;
	};
	class scuffErc_asphalt_int_boots_asphalt_int_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.35";
		frequency=1;
	};
	class scuffErc_asphalt_felt_ext_boots_asphalt_felt_ext_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.25";
		frequency=1;
	};
	class scuffErc_asphalt_felt_int_boots_asphalt_felt_int_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.25";
		frequency=1;
	};
	class scuffErc_ceramic_tiles_ext_boots_ceramic_tiles_ext_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.25";
		frequency=1;
	};
	class scuffErc_ceramic_tiles_int_boots_ceramic_tiles_int_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.25";
		frequency=1;
	};
	class scuffErc_concrete_ext_boots_concrete_ext_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.25";
		frequency=1;
	};
	class scuffErc_concrete_int_boots_concrete_int_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.25";
		frequency=1;
	};
	class scuffErc_cp_broadleaf_dense1_boots_cp_broadleaf_dense1_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.25";
		frequency=1;
	};
	class scuffErc_cp_grass_tall_boots_cp_grass_tall_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.25";
		frequency=1;
	};
	class scuffErc_dirt_ext_boots_dirt_ext_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.25";
		frequency=1;
	};
	class scuffErc_dirt_int_boots_dirt_int_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.25";
		frequency=1;
	};
	class scuffErc_grass_dry_ext_boots_grass_dry_ext_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.25";
		frequency=1;
	};
	class scuffErc_grass_dry_int_boots_grass_dry_int_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.25";
		frequency=1;
	};
	class scuffErc_gravel_small_ext_boots_gravel_small_ext_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.25";
		frequency=1;
	};
	class scuffErc_gravel_small_int_boots_gravel_small_int_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.25";
		frequency=1;
	};
	class scuffErc_metal_thick_ext_boots_metal_thick_ext_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.25";
		frequency=1;
	};
	class scuffErc_metal_thick_int_boots_metal_thick_int_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.25";
		frequency=1;
	};
	class scuffErc_metal_thin_ext_boots_metal_thin_ext_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.25";
		frequency=1;
	};
	class scuffErc_metal_thin_int_boots_metal_thin_int_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.25";
		frequency=1;
	};
	class scuffErc_metal_thin_mesh_ext_boots_metal_thin_mesh_ext_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.25";
		frequency=1;
	};
	class scuffErc_metal_thin_mesh_int_boots_metal_thin_mesh_int_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.25";
		frequency=1;
	};
	class scuffErc_sand_ext_boots_sand_ext_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.25";
		frequency=1;
	};
	class scuffErc_sand_int_boots_sand_int_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.25";
		frequency=1;
	};
	class scuffErc_textile_carpet_ext_boots_textile_carpet_ext_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.25";
		frequency=1;
	};
	class scuffErc_textile_carpet_int_boots_textile_carpet_int_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.25";
		frequency=1;
	};
	class scuffErc_wood_parquet_ext_boots_wood_parquet_ext_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.25";
		frequency=1;
	};
	class scuffErc_wood_parquet_int_boots_wood_parquet_int_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.25";
		frequency=1;
	};
	class scuffErc_wood_planks_ext_boots_wood_planks_ext_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.25";
		frequency=1;
	};
	class scuffErc_wood_planks_int_boots_wood_planks_int_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.25";
		frequency=1;
	};
	class scuffErc_asphalt_ext_sneakers_asphalt_ext_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.35";
		frequency=1;
	};
	class scuffErc_asphalt_int_sneakers_asphalt_int_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.35";
		frequency=1;
	};
	class scuffErc_asphalt_felt_ext_sneakers_asphalt_felt_ext_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.25";
		frequency=1;
	};
	class scuffErc_asphalt_felt_int_sneakers_asphalt_felt_int_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.25";
		frequency=1;
	};
	class scuffErc_ceramic_tiles_ext_sneakers_ceramic_tiles_ext_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.25";
		frequency=1;
	};
	class scuffErc_ceramic_tiles_int_sneakers_ceramic_tiles_int_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.25";
		frequency=1;
	};
	class scuffErc_concrete_ext_sneakers_concrete_ext_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.25";
		frequency=1;
	};
	class scuffErc_concrete_int_sneakers_concrete_int_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.25";
		frequency=1;
	};
	class scuffErc_cp_broadleaf_dense1_sneakers_cp_broadleaf_dense1_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.25";
		frequency=1;
	};
	class scuffErc_cp_grass_tall_sneakers_cp_grass_tall_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.25";
		frequency=1;
	};
	class scuffErc_dirt_ext_sneakers_dirt_ext_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.25";
		frequency=1;
	};
	class scuffErc_dirt_int_sneakers_dirt_int_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.25";
		frequency=1;
	};
	class scuffErc_grass_dry_ext_sneakers_grass_dry_ext_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.25";
		frequency=1;
	};
	class scuffErc_grass_dry_int_sneakers_grass_dry_int_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.25";
		frequency=1;
	};
	class scuffErc_gravel_small_ext_sneakers_gravel_small_ext_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.25";
		frequency=1;
	};
	class scuffErc_gravel_small_int_sneakers_gravel_small_int_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.25";
		frequency=1;
	};
	class scuffErc_metal_thick_ext_sneakers_metal_thick_ext_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.25";
		frequency=1;
	};
	class scuffErc_metal_thick_int_sneakers_metal_thick_int_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.25";
		frequency=1;
	};
	class scuffErc_metal_thin_ext_sneakers_metal_thin_ext_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.25";
		frequency=1;
	};
	class scuffErc_metal_thin_int_sneakers_metal_thin_int_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.25";
		frequency=1;
	};
	class scuffErc_metal_thin_mesh_ext_sneakers_metal_thin_mesh_ext_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.25";
		frequency=1;
	};
	class scuffErc_metal_thin_mesh_int_sneakers_metal_thin_mesh_int_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.25";
		frequency=1;
	};
	class scuffErc_sand_ext_sneakers_sand_ext_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.25";
		frequency=1;
	};
	class scuffErc_sand_int_sneakers_sand_int_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.25";
		frequency=1;
	};
	class scuffErc_textile_carpet_ext_sneakers_textile_carpet_ext_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.25";
		frequency=1;
	};
	class scuffErc_textile_carpet_int_sneakers_textile_carpet_int_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.25";
		frequency=1;
	};
	class scuffErc_wood_parquet_ext_sneakers_wood_parquet_ext_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.25";
		frequency=1;
	};
	class scuffErc_wood_parquet_int_sneakers_wood_parquet_int_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.25";
		frequency=1;
	};
	class scuffErc_wood_planks_ext_sneakers_wood_planks_ext_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.25";
		frequency=1;
	};
	class scuffErc_wood_planks_int_sneakers_wood_planks_int_scuffErc_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="sneakers * 0.25";
		frequency=1;
	};
	class landFeetErc_asphalt_ext_bare_asphalt_ext_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="bare * 1";
		frequency=1;
	};
	class landFeetErc_asphalt_int_bare_asphalt_int_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="bare * 1";
		frequency=1;
	};
	class landFeetErc_asphalt_felt_ext_bare_asphalt_felt_ext_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="bare * 1";
		frequency=1;
	};
	class landFeetErc_asphalt_felt_int_bare_asphalt_felt_int_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="bare * 1";
		frequency=1;
	};
	class landFeetErc_ceramic_tiles_ext_bare_ceramic_tiles_ext_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="bare * 1";
		frequency=1;
	};
	class landFeetErc_ceramic_tiles_int_bare_ceramic_tiles_int_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="bare * 1";
		frequency=1;
	};
	class landFeetErc_concrete_ext_bare_concrete_ext_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="bare * 1";
		frequency=1;
	};
	class landFeetErc_concrete_int_bare_concrete_int_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="bare * 1";
		frequency=1;
	};
	class landFeetErc_cp_broadleaf_dense1_bare_cp_broadleaf_dense1_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="bare * 1";
		frequency=1;
	};
	class landFeetErc_cp_grass_tall_bare_cp_grass_tall_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="bare * 1";
		frequency=1;
	};
	class landFeetErc_dirt_ext_bare_dirt_ext_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="bare * 1";
		frequency=1;
	};
	class landFeetErc_dirt_int_bare_dirt_int_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="bare * 1";
		frequency=1;
	};
	class landFeetErc_grass_dry_ext_bare_grass_dry_ext_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="bare * 1";
		frequency=1;
	};
	class landFeetErc_grass_dry_int_bare_grass_dry_int_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="bare * 1";
		frequency=1;
	};
	class landFeetErc_gravel_small_ext_bare_gravel_small_ext_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="bare * 1";
		frequency=1;
	};
	class landFeetErc_gravel_small_int_bare_gravel_small_int_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="bare * 1";
		frequency=1;
	};
	class landFeetErc_metal_thick_ext_bare_metal_thick_ext_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="bare * 1";
		frequency=1;
	};
	class landFeetErc_metal_thick_int_bare_metal_thick_int_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="bare * 1";
		frequency=1;
	};
	class landFeetErc_metal_thin_ext_bare_metal_thin_ext_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="bare * 1";
		frequency=1;
	};
	class landFeetErc_metal_thin_int_bare_metal_thin_int_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="bare * 1";
		frequency=1;
	};
	class landFeetErc_metal_thin_mesh_ext_bare_metal_thin_mesh_ext_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="bare * 1";
		frequency=1;
	};
	class landFeetErc_metal_thin_mesh_int_bare_metal_thin_mesh_int_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="bare * 1";
		frequency=1;
	};
	class landFeetErc_sand_ext_bare_sand_ext_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="bare * 1";
		frequency=1;
	};
	class landFeetErc_sand_int_bare_sand_int_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="bare * 1";
		frequency=1;
	};
	class landFeetErc_textile_carpet_ext_bare_textile_carpet_ext_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="bare * 1";
		frequency=1;
	};
	class landFeetErc_textile_carpet_int_bare_textile_carpet_int_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="bare * 1";
		frequency=1;
	};
	class landFeetErc_wood_parquet_ext_bare_wood_parquet_ext_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="bare * 1";
		frequency=1;
	};
	class landFeetErc_wood_parquet_int_bare_wood_parquet_int_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="bare * 1";
		frequency=1;
	};
	class landFeetErc_wood_planks_ext_bare_wood_planks_ext_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="bare * 1";
		frequency=1;
	};
	class landFeetErc_wood_planks_int_bare_wood_planks_int_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="bare * 1";
		frequency=1;
	};
	class landFeetErc_asphalt_ext_boots_asphalt_ext_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_asphalt_int_boots_asphalt_int_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_asphalt_felt_ext_boots_asphalt_felt_ext_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_asphalt_felt_int_boots_asphalt_felt_int_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_ceramic_tiles_ext_boots_ceramic_tiles_ext_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_ceramic_tiles_int_boots_ceramic_tiles_int_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_concrete_ext_boots_concrete_ext_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_concrete_int_boots_concrete_int_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_cp_broadleaf_dense1_boots_cp_broadleaf_dense1_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_cp_grass_tall_boots_cp_grass_tall_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_dirt_ext_boots_dirt_ext_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_dirt_int_boots_dirt_int_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_grass_dry_ext_boots_grass_dry_ext_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_grass_dry_int_boots_grass_dry_int_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_gravel_small_ext_boots_gravel_small_ext_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_gravel_small_int_boots_gravel_small_int_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_metal_thick_ext_boots_metal_thick_ext_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_metal_thick_int_boots_metal_thick_int_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_metal_thin_ext_boots_metal_thin_ext_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_metal_thin_int_boots_metal_thin_int_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_metal_thin_mesh_ext_boots_metal_thin_mesh_ext_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_metal_thin_mesh_int_boots_metal_thin_mesh_int_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_sand_ext_boots_sand_ext_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_sand_int_boots_sand_int_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_textile_carpet_ext_boots_textile_carpet_ext_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_textile_carpet_int_boots_textile_carpet_int_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_wood_parquet_ext_boots_wood_parquet_ext_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_wood_parquet_int_boots_wood_parquet_int_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_wood_planks_ext_boots_wood_planks_ext_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_wood_planks_int_boots_wood_planks_int_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_asphalt_ext_sneakers_asphalt_ext_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_asphalt_int_sneakers_asphalt_int_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_asphalt_felt_ext_sneakers_asphalt_felt_ext_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_asphalt_felt_int_sneakers_asphalt_felt_int_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_ceramic_tiles_ext_sneakers_ceramic_tiles_ext_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_ceramic_tiles_int_sneakers_ceramic_tiles_int_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_concrete_ext_sneakers_concrete_ext_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_concrete_int_sneakers_concrete_int_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_cp_broadleaf_dense1_sneakers_cp_broadleaf_dense1_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_cp_grass_tall_sneakers_cp_grass_tall_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_dirt_ext_sneakers_dirt_ext_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_dirt_int_sneakers_dirt_int_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_grass_dry_ext_sneakers_grass_dry_ext_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_grass_dry_int_sneakers_grass_dry_int_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_gravel_small_ext_sneakers_gravel_small_ext_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_gravel_small_int_sneakers_gravel_small_int_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_metal_thick_ext_sneakers_metal_thick_ext_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_metal_thick_int_sneakers_metal_thick_int_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_metal_thin_ext_sneakers_metal_thin_ext_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_metal_thin_int_sneakers_metal_thin_int_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_metal_thin_mesh_ext_sneakers_metal_thin_mesh_ext_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_metal_thin_mesh_int_sneakers_metal_thin_mesh_int_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_sand_ext_sneakers_sand_ext_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_sand_int_sneakers_sand_int_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_textile_carpet_ext_sneakers_textile_carpet_ext_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_textile_carpet_int_sneakers_textile_carpet_int_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_wood_parquet_ext_sneakers_wood_parquet_ext_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_wood_parquet_int_sneakers_wood_parquet_int_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_wood_planks_ext_sneakers_wood_planks_ext_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_wood_planks_int_sneakers_wood_planks_int_landFeetErc_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume="sneakers * 0.7";
		frequency=1;
	};
	class walkProne_asphalt_ext_Char_SoundShader: baseCharacter_SoundShader
	{
		volume=0.30000001;
	};
	class walkProne_dirt_ext_Char_SoundShader: baseCharacter_SoundShader
	{
		volume=0.30000001;
	};
	class walkProne_cp_broadleaf_dense1_Char_SoundShader: baseCharacter_SoundShader
	{
		volume=0.30000001;
	};
	class walkProne_grass_dry_ext_Char_SoundShader: baseCharacter_SoundShader
	{
		volume=0.30000001;
	};
	class walkProne_gravel_small_ext_Char_SoundShader: baseCharacter_SoundShader
	{
		volume=0.30000001;
	};
	class walkProne_gravel_large_ext_Char_SoundShader: baseCharacter_SoundShader
	{
		volume=0.30000001;
	};
	class walkProne_wood_planks_ext_Char_SoundShader: baseCharacter_SoundShader
	{
		volume=0.30000001;
	};
	class walkErc_water_Char_SoundShader: baseCharacter_SoundShader
	{
		volume=0.23999999;
	};
	class runErc_water_Char_SoundShader: baseCharacter_SoundShader
	{
		volume=0.23999999;
	};
	class sprintErc_water_Char_SoundShader: baseCharacter_SoundShader
	{
		volume=0.23999999;
	};
	class scuffErc_water_Char_SoundShader: baseCharacter_SoundShader
	{
		volume=0.23999999;
	};
	class walkProne_water_Char_SoundShader: baseCharacter_SoundShader
	{
		volume=0.2;
	};
	class landFeetErc_water_Char_SoundShader: T1D_baseCharacter_SoundShaderFootsteps
	{
		volume=0.2;
	};
	class boots_ladder_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="boots * 0.75";
	};
	class bare_ladder_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="bare * 0.75";
	};
	class sneakers_ladder_Char_SoundShader: baseCharacter_SoundShader
	{
		volume=0.75;
	};
	class hand_ladder_Char_SoundShader: baseCharacter_SoundShader
	{
		volume=0.18000001;
	};
	class slide_ladder_Char_SoundShader: baseCharacter_SoundShader
	{
		volume=0.40000001;
	};
	class staminaDownLight_male_SoundVoice_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="0.5 * male";
	};
	class staminaDownHeavy_male_SoundVoice_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="0.5 * male";
	};
	class staminaUpHeavy_male_SoundVoice_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="0.5 * male";
	};
	class staminaUpLight_male_SoundVoice_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="0.5 * male";
	};
	class staminaUpEnd_male_SoundVoice_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="0.5 * male";
	};
	class meleeAttack_male_SoundVoice_Char_SoundShader: baseCharacter_SoundShader
	{
		volume=0;
	};
	class jump_male_SoundVoice_Char_SoundShader: baseCharacter_SoundShader
	{
		volume=0;
	};
	class staminaDownLight_female_SoundVoice_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="0.4 * female";
	};
	class staminaDownHeavy_female_SoundVoice_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="0.4 * female";
	};
	class staminaUpHeavy_female_SoundVoice_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="0.4 * female";
	};
	class staminaUpLight_female_SoundVoice_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="0.4 * female";
	};
	class staminaUpEnd_female_SoundVoice_Char_SoundShader: baseCharacter_SoundShader
	{
		volume="0.4 * female";
	};
	class meleeAttack_female_SoundVoice_Char_SoundShader: baseCharacter_SoundShader
	{
		volume=0;
	};
	class jump_female_SoundVoice_Char_SoundShader: baseCharacter_SoundShader
	{
		volume=0;
	};
	class WindForestLight_SoundShader
	{
		volume="(0.25 * 1.4 * ((windy factor[0.3, 0.55]) * (windy factor[0.9, 0.6]))) * (( 1.6 * trees ) / ( trees + 0.6 )) * (((1 - (rain factor [0.25, 1]))) max (0.8)) * 0.5";
	};
	class WindForestHeavy_SoundShader
	{
		volume="(windy factor[0.55, 1]) * (( 1.6 * trees ) / ( trees + 0.6 )) * (((1 - (rain factor [0.25, 1]))) max (0.8)) * 0.5";
	};
	class WindHousesLight_SoundShader
	{
		volume="(0.25 * 1.4 * ((windy factor[0.3, 0.55]) * (windy factor[0.9, 0.6]))) * ( 1 - (( 1.6 * trees ) / ( trees + 0.6 ))) * (((1 - (rain factor [0.25, 1]))) max (0.8)) * 0.7 * (1-0.75*(waterDepth factor[10,20])) * 0.5";
	};
	class WindHousesHeavy_SoundShader
	{
		volume="(windy factor[0.55, 1]) * ( 1 - (( 1.6 * trees ) / ( trees + 0.6 ))) * (((1 - (rain factor [0.25, 1]))) max (0.8)) * 0.8 * (1-0.75*(waterDepth factor[10,20])) * 0.5";
	};
	class WindHills_SoundShader
	{
		volume="(windy factor[0.6,1]) * (hills factor[0.5,1]) * 0.3";
	};
	class WindTreeCreak_SoundShader
	{
		volume="(trees factor[0.6,1]) * (windy factor[0.6,1]) * 0.3";
	};
	class WindObjectInner0SpotWoodSqueak_SoundShader
	{
		volume="((windy factor[0.1,1])/(windy + 0.4)) * 1.4 * (rain factor[2,0.5]) * 0.5";
		range=20;
	};
	class WindObjectInner0SpotRopeSqueak_SoundShader
	{
		volume="((windy factor[0.1,1])/(windy + 0.4)) * 1.4 * (rain factor[2,0.5]) * 0.5";
		range=20;
	};
	class WindObjectInner1SpotMetalSqueak_SoundShader
	{
		volume="((windy factor[0.1,1])/(windy + 0.4)) * 0.8";
		range=30;
	};
	class WindObjectInner1Metal2_Low_SoundShader
	{
		volume="((windy factor[0.1,1])/(windy + 0.4)) * 1.4 * (windy factor[0.05,0.1]) * (windy factor[0.30,0.25]) * 0.5";
		range=15;
	};
	class WindObjectInner1Metal2_Mid_SoundShader
	{
		volume="((windy factor[0.1,1])/(windy + 0.4)) * 1.4 * (windy factor[0.3,0.35]) * (windy factor[0.75,0.7]) * 0.5";
		range=15;
	};
	class WindObjectInner1Metal2_Hi_SoundShader
	{
		volume="((windy factor[0.1,1])/(windy + 0.4)) * 1.4 * (windy factor[0.75,1]) * 0.5";
		range=15;
	};
	class WindObjectInner3Metal1_Low_SoundShader
	{
		volume="((windy factor[0.1,1])/(windy + 0.4)) * 1.4 * (windy factor[0.05,0.1]) * (windy factor[0.30,0.25]) * 0.5";
		range=15;
	};
	class WindObjectInner3Metal1_Mid_SoundShader
	{
		volume="((windy factor[0.1,1])/(windy + 0.4)) * 1.4 * (windy factor[0.3,0.35]) * (windy factor[0.75,0.7]) * 0.5";
		range=15;
	};
	class WindObjectInner3Metal1_Hi_SoundShader
	{
		volume="((windy factor[0.1,1])/(windy + 0.4)) * 1.4 * (windy factor[0.75,1]) * 0.5";
		range=15;
	};
	class WindObjectInner3Metal2_Low_SoundShader
	{
		volume="((windy factor[0.1,1])/(windy + 0.4)) * 1.4 * (windy factor[0.05,0.1]) * (windy factor[0.30,0.25]) * 0.5";
		range=15;
	};
	class WindObjectInner3Metal2_Mid_SoundShader
	{
		volume="((windy factor[0.1,1])/(windy + 0.4)) * 1.4 * (windy factor[0.3,0.35]) * (windy factor[0.75,0.7]) * 0.5";
		range=15;
	};
	class WindObjectInner3Metal2_Hi_SoundShader
	{
		volume="((windy factor[0.1,1])/(windy + 0.4)) * 1.4 * (windy factor[0.75,1]) * 0.5";
		range=15;
	};
	class WindObjectInner4Metal1_Low_SoundShader
	{
		volume="((windy factor[0.1,1])/(windy + 0.4)) * 1.4 * (windy factor[0.05,0.1]) * (windy factor[0.30,0.25]) * 0.5";
		range=15;
	};
	class WindObjectInner4Metal1_Mid_SoundShader
	{
		volume="((windy factor[0.1,1])/(windy + 0.4)) * 1.4 * (windy factor[0.3,0.35]) * (windy factor[0.75,0.7]) * 0.5";
		range=15;
	};
	class WindObjectInner4Metal1_Hi_SoundShader
	{
		volume="((windy factor[0.1,1])/(windy + 0.4)) * 1.4 * (windy factor[0.75,1]) * 0.5";
		range=15;
	};
	class WindObjectInner4Metal2_Low_SoundShader
	{
		volume="((windy factor[0.1,1])/(windy + 0.4)) * 1.4 * (windy factor[0.05,0.1]) * (windy factor[0.30,0.25]) * 0.5";
		range=15;
	};
	class WindObjectInner4Metal2_Mid_SoundShader
	{
		volume="((windy factor[0.1,1])/(windy + 0.4)) * 1.4 * (windy factor[0.3,0.35]) * (windy factor[0.75,0.7]) * 0.5";
		range=15;
	};
	class WindObjectInner4Metal2_Hi_SoundShader
	{
		volume="((windy factor[0.1,1])/(windy + 0.4)) * 1.4 * (windy factor[0.75,1]) * 0.5";
		range=15;
	};
	class WindObjectInner5Metal1_Low_SoundShader
	{
		volume="((windy factor[0.1,1])/(windy + 0.4)) * 0.8";
		range=16;
	};
	class WindObjectInner5Metal1_Mid_SoundShader: WindObjectInner5Metal1_Low_SoundShader
	{
		volume="((windy factor[0.1,1])/(windy + 0.4)) * 1.4 * (windy factor[0.3,0.35]) * (windy factor[0.75,0.7]) * 0.5";
	};
	class WindObjectInner5Metal1_Hi_SoundShader: WindObjectInner5Metal1_Low_SoundShader
	{
		volume="((windy factor[0.1,1])/(windy + 0.4)) * 1.4 * (windy factor[0.75,1]) * 0.5";
	};
	class WindObjectInner5Metal2_Low_SoundShader
	{
		volume="((windy factor[0.1,1])/(windy + 0.4)) * 1.4 * (windy factor[0.05,0.1]) * (windy factor[0.30,0.25]) * 0.5";
		range=16;
	};
	class WindObjectInner5Metal2_Mid_SoundShader: WindObjectInner5Metal2_Low_SoundShader
	{
		volume="((windy factor[0.1,1])/(windy + 0.4)) * 1.4 * (windy factor[0.3,0.35]) * (windy factor[0.75,0.7]) * 0.5";
	};
	class WindObjectInner5Metal2_Hi_SoundShader: WindObjectInner5Metal2_Low_SoundShader
	{
		volume="((windy factor[0.1,1])/(windy + 0.4)) * 1.4 * (windy factor[0.75,1]) * 0.5";
	};
	class WindObjectInner7Metal2_Low_SoundShader
	{
		volume="((windy factor[0.1,1])/(windy + 0.4)) * 1.4 * (windy factor[0.05,0.1]) * (windy factor[0.30,0.25]) * 0.5";
		range=16;
	};
	class WindObjectInner7Metal2_Mid_SoundShader: WindObjectInner7Metal2_Low_SoundShader
	{
		volume="((windy factor[0.1,1])/(windy + 0.4)) * 1.4 * (windy factor[0.3,0.35]) * (windy factor[0.75,0.7]) * 0.5";
	};
	class WindObjectInner7Metal2_Hi_SoundShader: WindObjectInner7Metal2_Low_SoundShader
	{
		volume="((windy factor[0.1,1])/(windy + 0.4)) * 1.4 * (windy factor[0.75,1]) * 0.5";
	};
	class WindObjectInner8Metal2_Low_SoundShader
	{
		volume="((windy factor[0.1,1])/(windy + 0.4)) * 1.4 * (windy factor[0.05,0.1]) * (windy factor[0.30,0.25]) * 0.5";
		range=16;
	};
	class WindObjectInner8Metal2_Mid_SoundShader: WindObjectInner8Metal2_Low_SoundShader
	{
		volume="((windy factor[0.1,1])/(windy + 0.4)) * 1.4 * (windy factor[0.3,0.35]) * (windy factor[0.75,0.7]) * 0.5";
	};
	class WindObjectInner8Metal2_Hi_SoundShader: WindObjectInner8Metal2_Low_SoundShader
	{
		volume="((windy factor[0.1,1])/(windy + 0.4)) * 1.4 * (windy factor[0.75,1]) * 0.5";
	};
	class WindBush_SoundShader
	{
		volume="(windy factor[0,0.95]) * (windy factor[0.3,0.4]) * (rain factor[0.4,0.3]) * 0.5";
		range=10;
	};
	class WindTreeSmallLeaves_SoundShader
	{
		volume="(windy factor[0,0.95]) * (windy factor[0.3,0.4]) * (rain factor[0.4,0.3]) * 0.5";
		range=10;
	};
	class WindTreeMediumLeaves_SoundShader
	{
		volume="(windy factor[0,0.95]) * (windy factor[0.3,0.4]) * (rain factor[0.4,0.3]) * 0.5";
		range=17;
	};
	class WindTreeLargeLeaves_SoundShader
	{
		volume="(windy factor[0,0.95]) * (windy factor[0.3,0.4]) * (rain factor[0.4,0.3]) * 0.5";
		range=25;
	};
	class WindTreeSmallEvergreen_SoundShader
	{
		volume="(windy factor[0,0.95]) * (windy factor[0.3,0.4]) * (rain factor[0.4,0.3]) * 0.5";
		range=10;
	};
	class WindTreeMediumEvergreen_SoundShader
	{
		volume="(windy factor[0,0.95]) * (windy factor[0.3,0.4]) * (rain factor[0.4,0.3]) * 0.5";
		range=17;
	};
	class WindTreeLargeEvergreen_SoundShader
	{
		volume="(windy factor[0,0.95]) * (windy factor[0.3,0.4]) * (rain factor[0.4,0.3]) * 0.5";
		range=25;
	};
	class WindTreeNoLeaves_SoundShader
	{
		volume="(windy factor[0,0.95]) * (windy factor[0.3,0.4]) * (rain factor[0.4,0.3]) * 0.5";
		range=17;
	};
	class WindTreeSmallNoLeaves_SoundShader
	{
		volume="(windy factor[0,0.95]) * (windy factor[0.3,0.4]) * (rain factor[0.4,0.3]) * 0.5";
		range=17;
	};
};