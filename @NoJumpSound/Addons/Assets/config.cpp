class CfgPatches
{
	class NoJumpSound
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
	class jump_male_SoundVoice_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\Characters\voice\male\jump_1",
				1
			},
			
			{
				"DZ\sounds\Characters\voice\male\jump_2",
				1
			},
			
			{
				"DZ\sounds\Characters\voice\male\jump_3",
				1
			},
			
			{
				"DZ\sounds\Characters\voice\male\jump_4",
				1
			},
			
			{
				"DZ\sounds\Characters\voice\male\jump_5",
				1
			}
		};
		volume=0;
	};
	class jump_female_SoundVoice_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\Characters\voice\female\jump_1",
				1
			},
			
			{
				"DZ\sounds\Characters\voice\female\jump_2",
				1
			},
			
			{
				"DZ\sounds\Characters\voice\female\jump_3",
				1
			},
			
			{
				"DZ\sounds\Characters\voice\female\jump_4",
				1
			},
			
			{
				"DZ\sounds\Characters\voice\female\jump_5",
				1
			}
		};
		volume=0;
	};
};
