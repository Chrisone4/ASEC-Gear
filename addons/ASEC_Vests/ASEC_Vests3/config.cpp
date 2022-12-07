class CfgPatches
{
	class vmnd_x
	{
		units[]={};
		weapons[]=
		{
			"vmnd_x"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F"
		};
	};
};
class cfgWeapons
{
	class VestItem;
	class HeadgearItem;
	class UniformItem;
	class Binocular;
	class NVGoggles: Binocular
	{
	};
	class V_PlateCarrier1_rgr;
	class mbav_cb: V_PlateCarrier1_rgr
	{
		author="Vielmond";
		scope=0;
		displayName="[ASEC] MBAV [CB]";
		picture="";
		model="\vmnd\model\mbav.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\vmnd\data\mbav\mbav_main_co.paa",
			"\vmnd\data\mbav\mbav_side_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\vmnd\model\mbav.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"\vmnd\data\mbav\mbav_main_mc_co.paa",
				"\vmnd\data\mbav\mbav_side_mc_co.paa"
			};
			containerClass="Supply130";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=18;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=18;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=18;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=18;
					passThrough=0.2;
				};
			};
		};
	};
	class mbav_mc: V_PlateCarrier1_rgr
	{
		author="Vielmond";
		scope=0;
		displayName="[ASEC] MBAV [MC]";
		picture="";
		model="\vmnd\model\mbav.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\vmnd\data\mbav\mbav_main_mc_co.paa",
			"\vmnd\data\mbav\mbav_side_mc_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\vmnd\model\mbav.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"\vmnd\data\mbav\mbav_main_mc_co.paa",
				"\vmnd\data\mbav\mbav_side_mc_co.paa"
			};
			containerClass="Supply130";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=18;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=18;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=18;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=18;
					passThrough=0.2;
				};
			};
		};
	};
	class mbav_mc_chestrig: V_PlateCarrier1_rgr
	{
		author="Vielmond";
		scope=0;
		displayName="[ASEC] MBAV [Chestrig]";
		picture="";
		model="\vmnd\model\mbav_2.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\vmnd\data\mbav\mbav_main_mc_co.paa",
			"\vmnd\data\mbav\mbav_side_mc_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\vmnd\model\mbav_2.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"\vmnd\data\mbav\mbav_main_mc_co.paa",
				"\vmnd\data\mbav\mbav_side_mc_co.paa"
			};
			containerClass="Supply130";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=18;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=18;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=18;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=18;
					passThrough=0.2;
				};
			};
		};
	};
	class jpc_base_mc: V_PlateCarrier1_rgr
	{
		author="Vielmond";
		scope=0;
		displayName="[ASEC] JPC Base [MC]";
		picture="";
		model="\vmnd\model\jpc_base.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\vmnd\data\jpc\mc\jpc_mc_co.paa",
			"\vmnd\data\jpc\mc\jpc_band_mc_co.paa",
			"\vmnd\data\jpc\mc\jpc_hyp_mc_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\vmnd\model\jpc_base.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
				"\vmnd\data\jpc\mc\jpc_mc_co.paa",
				"\vmnd\data\jpc\mc\jpc_band_mc_co.paa",
				"\vmnd\data\jpc\mc\jpc_hyp_mc_co.paa"
			};
			containerClass="Supply130";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=18;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=18;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=18;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=18;
					passThrough=0.2;
				};
			};
		};
	};
	class jpc_loadout_01_mc: V_PlateCarrier1_rgr
	{
		author="Vielmond";
		scope=0;
		displayName="[ASEC] JPC Loadout 01 [MC]";
		picture="";
		model="\vmnd\model\jpc_loadout_01.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\vmnd\data\jpc\mc\jpc_mc_co.paa",
			"\vmnd\data\jpc\mc\jpc_band_mc_co.paa",
			"\vmnd\data\jpc\mc\jpc_hyp_mc_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\vmnd\model\jpc_loadout_01.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
				"\vmnd\data\jpc\mc\jpc_mc_co.paa",
				"\vmnd\data\jpc\mc\jpc_band_mc_co.paa",
				"\vmnd\data\jpc\mc\jpc_hyp_mc_co.paa"
			};
			containerClass="Supply130";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=18;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=18;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=18;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=18;
					passThrough=0.2;
				};
			};
		};
	};
	class jpc_loadout_02_mc: V_PlateCarrier1_rgr
	{
		author="Vielmond";
		scope=0;
		displayName="[ASEC] JPC Loadout 02 [MC]";
		picture="";
		model="\vmnd\model\jpc_loadout_02.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\vmnd\data\jpc\mc\jpc_mc_co.paa",
			"\vmnd\data\jpc\mc\jpc_band_mc_co.paa",
			"\vmnd\data\jpc\mc\jpc_hyp_mc_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\vmnd\model\jpc_loadout_02.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
				"\vmnd\data\jpc\mc\jpc_mc_co.paa",
				"\vmnd\data\jpc\mc\jpc_band_mc_co.paa",
				"\vmnd\data\jpc\mc\jpc_hyp_mc_co.paa"
			};
			containerClass="Supply130";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=18;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=18;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=18;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=18;
					passThrough=0.2;
				};
			};
		};
	};
	class jpc_loadout_03_mc: V_PlateCarrier1_rgr
	{
		author="Vielmond";
		scope=0;
		displayName="[ASEC] JPC Loadout 03 [MC]";
		picture="";
		model="\vmnd\model\jpc_loadout_03.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\vmnd\data\jpc\mc\jpc_mc_co.paa",
			"\vmnd\data\jpc\mc\jpc_band_mc_co.paa",
			"\vmnd\data\jpc\mc\jpc_hyp_mc_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\vmnd\model\jpc_loadout_03.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
				"\vmnd\data\jpc\mc\jpc_mc_co.paa",
				"\vmnd\data\jpc\mc\jpc_band_mc_co.paa",
				"\vmnd\data\jpc\mc\jpc_hyp_mc_co.paa"
			};
			containerClass="Supply130";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=18;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=18;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=18;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=18;
					passThrough=0.2;
				};
			};
		};
	};
	class lv119_mc: V_PlateCarrier1_rgr
	{
		author="Vielmond";
		scope=0;
		displayName="[ASEC] LV-119 LOADOUT-ONE [MC]";
		picture="";
		model="\vmnd\model\lv119.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\vmnd\data\lv119\mc\lv119_mc_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\vmnd\model\lv119.p3d";
			hiddenSelections[]=
			{
				"Camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\vmnd\data\lv119\mc\lv119_mc_co.paa"
			};
			containerClass="Supply130";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=18;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=18;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=18;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=18;
					passThrough=0.2;
				};
			};
		};
	};
	class lv119_mc_01: V_PlateCarrier1_rgr
	{
		author="Vielmond";
		scope=0;
		displayName="[ASEC] LV-119 LOADOUT-TWO [MC]";
		picture="";
		model="\vmnd\model\lv119_01.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\vmnd\data\lv119\mc\lv119_mc_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\vmnd\model\lv119_01.p3d";
			hiddenSelections[]=
			{
				"Camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\vmnd\data\lv119\mc\lv119_mc_co.paa"
			};
			containerClass="Supply130";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=18;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=18;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=18;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=18;
					passThrough=0.2;
				};
			};
		};
	};
	class jpc_comms_BPRE: V_PlateCarrier1_rgr
	{
		author="Vielmond";
		scope=0;
		displayName="[ASEC] JPC Comms [BPRE]";
		picture="";
		model="\vmnd\model\jpc_base_bpre.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="\vmnd\model\jpc_base_bpre.p3d";
			containerClass="Supply130";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=18;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=18;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=18;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=18;
					passThrough=0.2;
				};
			};
		};
	};
};
class cfgMods
{
	author="";
	timepacked="1594055569";
};
