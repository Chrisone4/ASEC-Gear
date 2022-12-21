class CfgPatches
{
	class ASEC_Drybag
	{
		magazines[]={};
		ammo[]={};
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Characters_F",
			"A3_Characters_F_BLUFOR",
			"Extended_EventHandlers"
		};
	};
};
class CfgVehicles
{
	class Bag_Base;
	class Backpack_Base: Bag_Base
	{
		scope=1;
		scopeCurator=0;
		author="Lip";
		DLC="SOCOM";
		displayName="";
		picture="";
		isbackpack=1;
		model="";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		maximumLoad=500;
		mass=30;
	};
	class TFL_Drybag: Backpack_Base
	{
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[ASEC] Dry Bag (BLK)";
		model="ASEC_Drypack\Models\Drybag.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		DLC="SOCOM";
	};
};