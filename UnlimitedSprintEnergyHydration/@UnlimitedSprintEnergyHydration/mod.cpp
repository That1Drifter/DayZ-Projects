class CfgMods UnlimitedSprintEnergyHydration
{
	class UnlimitedSprintEnergyHydration
	{
		dir = "UnlimitedSprintEnergyHydration";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "UnlimitedSprintEnergyHydration";
		credits = "That1Drifter";
		author = "Drifter";
		authorID = "0"; 
		version = "1.0"; 
		extra = 0;
		type = "mod";
		
		dependencies[] = {"World"};
		
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"UnlimitedSprintEnergyHydration/Scripts/4_World"};
			};
		}
	};
};
