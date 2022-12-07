class CfgPatches
{
	class aceax_compat_tfl_headgear
	{
		name="compat_tfl_headgear";
		units[]={};
		weapons[]={};
		requiredVersion=1.88;
		requiredAddons[]=
		{
			"tfl_headgear",
			"TFL_Headgear_Functions"
		};
		author="wanoO";
		version="0.1.0.0";
		versionStr="0.1.0.0";
		versionAr[]={0,1,0,0};
	};
};
class XtdGearModels
{
	class CamoBase;
	class CfgWeapons
	{
		class tfl_airframe
		{
			label="[TFL] Crye Airframe";
			author="Louetta";
			options[]=
			{
				"camo",
				"Cover",
				"Loadout",
				"headset_type",
				"headset_state"
			};
			class camo: CamoBase
			{
				values[]=
				{
					"blk",
					"od",
					"cb",
					"tan",
					"wht"
				};
				class cb
				{
					label="CB";
					description="Coyote Brown";
					image="aceax_compat_tfl_headgear\data\cb.paa";
				};
			};
			class Loadout
			{
				values[]=
				{
					"A",
					"B",
					"C",
					"D",
					"E",
					"F",
					"G",
					"H",
					"I",
					"J",
					"K",
					"L"
				};
			};
			class Cover: CamoBase
			{
				label="Cover";
				values[]=
				{
					"None",
					"mc",
					"mcal",
					"mcb",
					"aor1",
					"aor2",
					"od",
					"blk"
				};
				class mcal
				{
					label="MCAL";
					description="MC Alpine";
					image="aceax_compat_tfl_headgear\data\mcal.paa";
				};
			};
			class headset_type
			{
				label="Headset Model";
				values[]=
				{
					"Comtac 3",
					"Comtac 3 Arc",
					"Comtac 4",
					"Comtac 4 Arc"
				};
			};
			class headset_state
			{
				label="Headset (ACE)";
				changeingame=1;
				values[]=
				{
					"On",
					"Off"
				};
				class On
				{
					label="On";
					description="Headset On";
					icon="aceax_compat_tfl_headgear\data\headset.paa";
					actionlabel="Wear Headset";
				};
				class Off
				{
					label="Off";
					description="Headset Off";
					icon="aceax_compat_tfl_headgear\data\noheadset.paa";
					actionlabel="Fold/Remove Headset";
				};
			};
		};
		class tfl_mt: tfl_airframe
		{
			label="[TFL] FAST MT";
			author="Louetta";
			options[]=
			{
				"camo",
				"Cover",
				"arc_rail",
				"Loadout",
				"headset_type",
				"headset_state"
			};
			class camo: CamoBase
			{
				values[]=
				{
					"mc",
					"aor1",
					"aor2",
					"ut",
					"blk",
					"wht"
				};
				class ut
				{
					label="UT";
					description="Urban Tan";
					image="aceax_compat_tfl_headgear\data\ut.paa";
				};
			};
			class arc_rail
			{
				label="Arc Rail";
				values[]=
				{
					"On",
					"Off"
				};
			};
			class headset_type
			{
				label="Headset Model";
				values[]=
				{
					"Comtac 3",
					"Comtac 3 Arc",
					"Comtac 4",
					"Comtac 4 Arc",
					"AMP"
				};
			};
		};
		class tfl_xp: tfl_airframe
		{
			label="[TFL] FAST XP";
			options[]=
			{
				"camo",
				"Loadout",
				"headset_type",
				"headset_state"
			};
			class camo: CamoBase
			{
				values[]=
				{
					"mc"
				};
			};
		};
		class tfl_hgu
		{
			label="[TFL] HGU56";
			options[]=
			{
				"Paint",
				"Visor"
			};
			class Paint
			{
				values[]=
				{
					"Nuka-Cola",
					"Red-SQDN"
				};
			};
			class Visor
			{
				label="Visor (ACE)";
				changeingame=1;
				values[]=
				{
					"On",
					"Off"
				};
				class On
				{
					label="On";
					description="Visor On";
					icon="aceax_compat_tfl_headgear\data\headset.paa";
					actionlabel="Visor On";
				};
				class Off
				{
					label="Off";
					description="Visor Off";
					icon="aceax_compat_tfl_headgear\data\noheadset.paa";
					actionlabel="Visor Off";
				};
			};
		};
	};
};
class CfgWeapons
{
	class Default
	{
	};
	class ItemCore: Default
	{
	};
	class UniformItem: ItemCore
	{
	};
	class InventoryItem_Base_F
	{
	};
	class HeadgearItem: InventoryItem_Base_F
	{
	};
	class Comtac: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
	};
	class Maritime: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime3: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime4: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime5: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime6: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime7: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime8: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime9: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime10: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime11: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime12: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime13: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime14: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime15: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime16: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime17: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime18: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime19: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime20: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime21: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime22: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime23: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime24: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime25: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime26: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime27: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime28: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime29: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime30: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime31: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime32: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime33: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime34: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime35: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime36: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime136: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime146: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime153: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime165: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime173: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime182: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime1362: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime1463: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime1534: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime1655: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime1763: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime1832: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime13624: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime14632: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime15354: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime16455: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime17633: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime18322: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime136324: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime146532: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime153654: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime164575: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime127633: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime184322: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime13624_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime14632_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime15354_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime16455_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime17633_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime18322_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime136324_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime146532_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime153654_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime164575_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime127633_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime184322_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII3: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII4: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII5: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII6: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII7: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII8: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII9: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII10: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII11: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII12: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII13: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII14: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII15: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII16: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII17: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII18: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII19: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII20: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII21: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII22: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII23: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII24: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII25: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII26: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII27: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII28: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII29: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII30: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII31: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII32: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII33: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII34: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII35: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII36: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII136: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII146: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII153: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII165: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII173: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII182: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII1362: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII1463: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII1534: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII1655: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII1763: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII1832: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII13624: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII14632: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII15354: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII16455: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII17633: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII18322: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII136324: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII146532: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII153654: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII164575: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII127633: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII184322: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII13624_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII14632_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII15354_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII16455_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII17633_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII18322_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII136324_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII146532_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII153654_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII164575_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII127633_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII184322_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc3: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc4: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc5: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc6: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc7: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc8: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc9: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc10: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc11: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc12: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc13: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc14: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc15: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc16: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc17: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc18: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc19: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc20: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc21: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc22: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc23: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc24: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc25: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc26: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc27: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc28: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc29: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc30: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc31: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc32: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc33: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc34: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc35: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc36: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc136: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc146: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc153: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc165: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc173: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc182: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc1362: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc1463: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc1534: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc1655: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc1763: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc1832: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc13624: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc14632: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc15354: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc16455: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc17633: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc18322: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc136324: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc146532: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc153654: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc164575: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc127633: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc184322: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc13624_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc14632_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc15354_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc16455_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc17633_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc18322_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc136324_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc146532_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc153654_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc164575_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc127633_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc184322_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV3: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV4: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV5: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV6: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV7: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV8: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV9: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV10: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV11: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV12: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV13: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV14: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV15: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV16: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV17: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV18: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV19: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV20: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV21: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV22: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV23: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV24: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV25: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV26: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV27: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV28: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV29: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV30: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV31: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV32: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV33: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV34: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV35: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV36: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV136: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV146: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV153: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV165: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV173: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV182: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV1362: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV1463: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV1534: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV1655: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV1763: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV1832: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV13624: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV14632: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV15354: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV16455: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV17633: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV18322: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV136324: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV146532: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV153654: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV164575: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV127633: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV184322: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV13624_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV14632_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV15354_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV16455_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV17633_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV18322_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV136324_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV146532_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV153654_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV164575_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV127633_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV184322_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc3: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc4: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc5: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc6: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc7: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc8: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc9: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc10: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc11: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc12: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc13: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc14: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc15: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc16: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc17: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc18: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc19: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc20: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc21: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc22: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc23: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc24: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc25: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc26: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc27: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc28: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc29: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc30: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc31: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc32: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc33: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc34: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc35: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc36: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc136: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc146: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc153: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc165: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc173: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc182: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc1362: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc1463: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc1534: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc1655: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc1763: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc1832: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc13624: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc14632: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc15354: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc16455: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc17633: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc18322: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc136324: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc146532: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc153654: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc164575: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc127633: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc184322: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc13624_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc14632_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc15354_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc16455_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc17633_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc18322_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc136324_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc146532_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc153654_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc164575_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc127633_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIV_Arc184322_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_AMP: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP3: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP4: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP5: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP6: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP7: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP8: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP9: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP10: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP11: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP12: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP13: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP14: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP15: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP16: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP17: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP18: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP19: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP20: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP21: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP22: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP23: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP24: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP25: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP26: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP27: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP28: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP29: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP30: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP31: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP32: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP33: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP34: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP35: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP36: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP136: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP146: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP153: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP165: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP173: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP182: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP1362: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP1463: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP1534: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP1655: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP1763: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP1832: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP13624: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP14632: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP15354: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP16455: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP17633: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP18322: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP136324: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP146532: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP153654: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP164575: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP127633: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP184322: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP13624_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP14632_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP15354_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP16455_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP17633_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP18322_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP136324_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP146532_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP153654_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP164575_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP127633_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_AMP184322_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_NR: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="Off";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_NR_2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="Off";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_NR_3: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="Off";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_NR_4: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="Off";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_NR_5: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="Off";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_NR_6: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="Off";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_NR_7: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="Off";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_NR_8: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="Off";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_NR_9: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="Off";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_NR_10: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="Off";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_NR_11: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="Off";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_NR_12: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="Off";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_NR_19: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="Off";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_NR_20: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="Off";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_NR_21: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="Off";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_NR_22: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="Off";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_NR_23: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="Off";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_NR_24: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="Off";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_NR_31: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="Off";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_NR_32: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="Off";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_NR_33: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="Off";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_NR_34: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="Off";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_NR_35: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="Off";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_NR_36: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="Off";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_NR_136: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="Off";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_NR_146: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="Off";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_NR_153: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="Off";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_NR_165: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="Off";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_NR_173: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="Off";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_NR_182: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="Off";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_NR_136324: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="Off";
			Loadout="J";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_NR_146532: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="Off";
			Loadout="J";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_NR_153654: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="Off";
			Loadout="J";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_NR_164575: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="Off";
			Loadout="J";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_NR_127633: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="Off";
			Loadout="J";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_NR_184322: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="Off";
			Loadout="J";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_NR_136324_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="Off";
			Loadout="L";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_NR_146532_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="Off";
			Loadout="L";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_NR_153654_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="Off";
			Loadout="L";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_NR_164575_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="Off";
			Loadout="L";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_NR_127633_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="Off";
			Loadout="L";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_NR_184322_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="Off";
			Loadout="L";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_NR_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="Off";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIII2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="Off";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIII3: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="Off";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIII4: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="Off";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIII5: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="Off";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIII6: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="Off";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIII7: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="Off";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIII8: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="Off";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIII9: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="Off";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIII10: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="Off";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIII11: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="Off";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIII12: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="Off";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIII19: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="Off";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIII20: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="Off";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIII21: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="Off";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIII22: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="Off";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIII23: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="Off";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIII24: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="Off";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIII31: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="Off";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIII32: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="Off";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIII33: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="Off";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIII34: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="Off";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIII35: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="Off";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIII36: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="Off";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIII136: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="Off";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIII146: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="Off";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIII153: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="Off";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIII165: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="Off";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIII173: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="Off";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIII182: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="Off";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIII136324: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="Off";
			Loadout="J";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIII146532: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="Off";
			Loadout="J";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIII153654: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="Off";
			Loadout="J";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIII164575: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="Off";
			Loadout="J";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIII127633: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="Off";
			Loadout="J";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIII184322: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="Off";
			Loadout="J";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIII136324_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="Off";
			Loadout="L";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIII146532_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="Off";
			Loadout="L";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIII153654_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="Off";
			Loadout="L";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIII164575_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="Off";
			Loadout="L";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIII127633_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="Off";
			Loadout="L";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIII184322_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="Off";
			Loadout="L";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="Off";
			Loadout="A";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIV2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="Off";
			Loadout="A";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIV3: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="Off";
			Loadout="A";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIV4: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="Off";
			Loadout="A";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIV5: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="Off";
			Loadout="A";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIV6: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="Off";
			Loadout="A";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIV7: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="Off";
			Loadout="B";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIV8: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="Off";
			Loadout="B";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIV9: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="Off";
			Loadout="B";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIV10: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="Off";
			Loadout="B";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIV11: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="Off";
			Loadout="B";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIV12: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="Off";
			Loadout="B";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIV19: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="Off";
			Loadout="D";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIV20: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="Off";
			Loadout="D";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIV21: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="Off";
			Loadout="D";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIV22: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="Off";
			Loadout="D";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIV23: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="Off";
			Loadout="D";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIV24: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="Off";
			Loadout="D";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIV31: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="Off";
			Loadout="F";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIV32: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="Off";
			Loadout="F";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIV33: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="Off";
			Loadout="F";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIV34: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="Off";
			Loadout="F";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIV35: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="Off";
			Loadout="F";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIV36: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="Off";
			Loadout="F";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIV136: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="Off";
			Loadout="G";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIV146: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="Off";
			Loadout="G";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIV153: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="Off";
			Loadout="G";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIV165: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="Off";
			Loadout="G";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIV173: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="Off";
			Loadout="G";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIV182: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="Off";
			Loadout="G";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIV136324: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="Off";
			Loadout="J";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIV146532: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="Off";
			Loadout="J";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIV153654: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="Off";
			Loadout="J";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIV164575: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="Off";
			Loadout="J";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIV127633: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="Off";
			Loadout="J";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIV184322: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="Off";
			Loadout="J";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIV136324_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="None";
			arc_rail="Off";
			Loadout="L";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIV146532_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			Cover="None";
			arc_rail="Off";
			Loadout="L";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIV153654_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			Cover="None";
			arc_rail="Off";
			Loadout="L";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIV164575_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="None";
			arc_rail="Off";
			Loadout="L";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIV127633_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="None";
			arc_rail="Off";
			Loadout="L";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_NR_ComtacIV184322_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="None";
			arc_rail="Off";
			Loadout="L";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_3: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_4: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_4a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_5: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_6: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_7: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_8: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_9: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_10: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_10a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_11: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_12: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_13: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_14: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_15: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_16: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_16a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_17: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_18: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_19: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_20: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_21: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_22: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_22a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_23: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_24: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_25: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_26: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_27: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_28: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_28a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_29: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_30: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_136: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_146: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_153: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_165: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_165a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_173: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_182: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_1362: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_1463: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_1534: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_1655: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_1655a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_1763: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_1832: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_13624: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_14632: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_15354: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_16455: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_16455a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_17633: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_18322: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_136324: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_146532: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_153654: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_164575: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_164575a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_127633: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_184322: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_13624_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_14632_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_15354_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_16455_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_16455a_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_17633_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_18322_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_136324_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_146532_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_153654_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_164575_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_164575a_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_127633_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_184322_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII3: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII4: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII4a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII5: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII6: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII7: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII8: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII9: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII10: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII10a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII11: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII12: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII13: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII14: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII15: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII16: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII16aa: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII17: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII18: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII19: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII20: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII21: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII22: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII22a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII23: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII24: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII25: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII26: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII27: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII28: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII28a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII29: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII30: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII136: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII146: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII153: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII165: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII165a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII173: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII182: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII1362: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII1463: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII1534: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII1655: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII1655a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII1763: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII1832: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII13624: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII14632: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII15354: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII16455: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII1645a5: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII17633: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII18322: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3";
			headset_state="On";
		};
		hiddenSelectionsTextures[]=
		{
			"tfl_headgear\textures\highcut_ops_core_fast_ut_co.paa",
			"tfl_headgear\textures\rails_od.paa",
			"tfl_headgear\textures\tfa_opscore_od_co.paa",
			"tfl_headgear\textures\comtac_III_cb.paa",
			"",
			"",
			"",
			"",
			"tfl_headgear\textures\velcro_blk_co.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"tfl_headgear\textures\helstar2_CO.paa",
			"tfl_headgear\textures\velcro_blk_co.paa",
			"",
			"",
			"",
			"",
			"tfl_headgear\textures\mt_cover_od_co.paa"
		};
	};
	class Maritime_Cover_ComtacIII136324: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII146532: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII153654: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII164575: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII164575a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII127633: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII184322: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII13624_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII14632_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII15354_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII16455_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII1645a5_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII17633_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII18322_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3";
			headset_state="On";
		};
		hiddenSelectionsTextures[]=
		{
			"tfl_headgear\textures\highcut_ops_core_fast_ut_co.paa",
			"tfl_headgear\textures\rails_od.paa",
			"tfl_headgear\textures\tfa_opscore_od_co.paa",
			"tfl_headgear\textures\comtac_III_cb.paa",
			"",
			"",
			"",
			"",
			"tfl_headgear\textures\velcro_blk_co.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"tfl_headgear\textures\velcro_blk_co.paa",
			"",
			"",
			"",
			"",
			"tfl_headgear\textures\mt_cover_od_co.paa",
			"tfl_headgear\textures\acc_soc_manta.paa"
		};
	};
	class Maritime_Cover_ComtacIII136324_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII146532_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII153654_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII164575_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII164575a_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII127633_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII184322_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc3: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc4: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIIIa_Arc4: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc5: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc6: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc7: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc8: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc9: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc10: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc10a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc11: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc12: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc13: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc14: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc15: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc16: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc16a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc17: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc18: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc19: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc20: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc21: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc22: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc22a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc23: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc24: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc25: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc26: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc27: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc28: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc28a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc29: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc30: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc136: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc146: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc153: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc165: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc165a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc173: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc182: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc1362: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc1463: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc1534: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc1655: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc1655a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc1763: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc1832: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc13624: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc14632: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc15354: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc16455: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc1645a5: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc17633: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc18322: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc136324: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc146532: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc153654: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc164575: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc16457a5: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc127633: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc184322: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc13624_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc14632_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc15354_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc16455_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc1645a5_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc17633_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc18322_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc136324_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc146532_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc153654_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc164575_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc16457a5_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc127633_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc184322_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV3: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV4: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV4aa: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV5: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV6: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV7: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV8: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV9: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV10: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV10aa: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV11: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV12: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV13: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV14: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV15: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV16: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV16a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV17: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV18: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV19: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV20: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV21: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV22: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV22a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV23: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV24: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV25: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV26: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV27: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV28: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV28a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV29: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV30: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV136: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV146: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV153: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV165: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV165a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV173: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV182: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV1362: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV1463: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV1534: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV1655: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV1655a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV1763: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV1832: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV13624: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV14632: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV15354: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV16455: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV16455a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV17633: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV18322: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV136324: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV146532: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV153654: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV164575: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV164575a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV127633: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV184322: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV13624_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV14632_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV15354_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV16455_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV16455a_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV17633_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV18322_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV136324_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV146532_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV153654_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV164575_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV164575a_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV127633_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV184322_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc3: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc4: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc4a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc5: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc6: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc7: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc8: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc9: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc10: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc10a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc11: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc12: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc13: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc14: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc15: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc16: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc16a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc17: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc18: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc19: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc20: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc21: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc22: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc22a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc23: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc24: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc25: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc26: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc27: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc28: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc2a8: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc29: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc30: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc136: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc146: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc153: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc165: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc16a5: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc173: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc182: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc1362: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc1463: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc1534: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc1655: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc165a5: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc1763: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc1832: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc13624: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc14632: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc15354: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc16455: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc164525: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc17633: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc18322: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc136324: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc146532: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc153654: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc164575: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc1642575: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc127633: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc184322: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc13624_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc14632_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc15354_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc16455_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc164525_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc17633_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc18322_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc136324_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc146532_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc153654_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc164575_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc1642575_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc127633_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc184322_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="A";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="A";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP3: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="A";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP4: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="A";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP4a2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="A";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP5: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="A";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP6: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="A";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP7: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="B";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP8: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="B";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP9: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="B";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP10: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="B";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP10a2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="B";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP11: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="B";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP12: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="B";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP13: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="C";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP14: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="C";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP15: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="C";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP16: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="C";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP16a23: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="C";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP17: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="C";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP18: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="C";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP19: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="D";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP20: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="D";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP21: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="D";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP22: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="D";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP222: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="D";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP23: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="D";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP24: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="D";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP25: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="E";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP26: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="E";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP27: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="E";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP28: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="E";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP228: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="E";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP29: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="E";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP30: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="E";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP136: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="G";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP146: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="G";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP153: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="G";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP165: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="G";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP165a23: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="G";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP173: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="G";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP182: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="G";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP1362: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="H";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP1463: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="H";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP1534: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="H";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP1655: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="H";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP16552a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="H";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP1763: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="H";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP1832: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="H";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP13624: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="I";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP14632: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="I";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP15354: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="I";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP16455: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="I";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP164552a3: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="I";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP17633: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="I";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP18322: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="I";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP136324: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="J";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP146532: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="J";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP153654: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="J";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP164575: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="J";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP164572a5: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="J";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP127633: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="J";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP184322: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="J";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP13624_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="K";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP14632_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="K";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP15354_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="K";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP16455_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="K";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP164552a3_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="K";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP17633_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="K";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP18322_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="K";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP136324_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			Cover="aor1";
			arc_rail="On";
			Loadout="L";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP146532_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="aor2";
			arc_rail="On";
			Loadout="L";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP153654_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mc";
			arc_rail="On";
			Loadout="L";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP164575_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="blk";
			arc_rail="On";
			Loadout="L";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP164572a5_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			Cover="mcb";
			arc_rail="On";
			Loadout="L";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP127633_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="mcal";
			arc_rail="On";
			Loadout="L";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP184322_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			Cover="od";
			arc_rail="On";
			Loadout="L";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_5wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_11wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_17wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_23wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_29wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_173wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_1763wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_17633wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_127633wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_17633wht2_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_127633wht2_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII5wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII11wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII17wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII23wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII29wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII173wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII1763wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII17633wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII127633wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII17633wht2_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII127633wht2_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc5wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc11wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc17wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc23wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc29wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc173wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc1763wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc17633wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc127633wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc17633wht2_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIII_Arc127633wht2_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV5wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV11wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV17wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV23wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV29wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV173wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV1763wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV17633wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV127633wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV17633wht2_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV127633wht2_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc5wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc11wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc17wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc23wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc29wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc173wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc1763wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc17633wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc127633wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc17633wht2_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_ComtacIV_Arc127633wht2_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP5wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="A";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP11wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="B";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP17wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="C";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP23wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="D";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP29wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="E";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP173wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="G";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP1763wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="H";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP17633wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="I";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP127633wht2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="J";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP17633wht2_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="K";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class Maritime_Cover_AMP127633wht2_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			Cover="mcal";
			arc_rail="On";
			Loadout="L";
			headset_type="AMP";
			headset_state="On";
		};
	};
	class airframe: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="None";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="None";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe3: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="None";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe4: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="None";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe4a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="None";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe5: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="None";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe6: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="None";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe7: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="None";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe8: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="None";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe8a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="None";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe9: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="None";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe10: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="None";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe11: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="None";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe12: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="None";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe12a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="None";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe13: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="None";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe14: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="None";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe15: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="None";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe16: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="None";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe16a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="None";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe17: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="None";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe18: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="None";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe19: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="None";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe20: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="None";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe20a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="None";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe21: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="None";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe22: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="None";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe23: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="None";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe24: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="None";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe24a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="None";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe25: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="None";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe26: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="None";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe27: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="None";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe28: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="None";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="None";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe2_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="None";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe3_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="None";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe4_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="None";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe4a_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="None";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe5_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="None";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe6_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="None";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe7_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="None";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe8_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="None";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe8a_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="None";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe9_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="None";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe10_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="None";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe11_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="None";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe12_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="None";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe12a_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="None";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe13_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="None";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe14_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="None";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe15_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="None";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe16_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="None";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe16a_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="None";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe17_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="None";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe18_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="None";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe19_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="None";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe20_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="None";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe20a_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="None";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe21_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="None";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe22_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="None";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe23_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="None";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe24_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="None";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe24a_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="None";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe25_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="None";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe26_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="None";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe27_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="None";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe28_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="None";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe28a_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="None";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="None";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe2_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="None";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe3_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="None";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe4_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="None";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe4a_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="None";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe5_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="None";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe6_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="None";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe7_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="None";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe8_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="None";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe8a_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="None";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe9_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="None";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe10_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="None";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe11_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="None";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe12_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="None";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe12a_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="None";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe13_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="None";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe14_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="None";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe15_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="None";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe16_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="None";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe16a_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="None";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe17_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="None";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe18_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="None";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe19_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="None";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe20_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="None";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe20a_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="None";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe21_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="None";
			Loadout="F";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe22_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="None";
			Loadout="F";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe23_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="None";
			Loadout="F";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe24_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="None";
			Loadout="F";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe24a_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="None";
			Loadout="F";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe25_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="None";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe26_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="None";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe27_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="None";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe28_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="None";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe28a_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="None";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="None";
			Loadout="A";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe2_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="None";
			Loadout="A";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe3_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="None";
			Loadout="A";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe4_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="None";
			Loadout="A";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe4a_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="None";
			Loadout="A";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe5_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="None";
			Loadout="B";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe6_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="None";
			Loadout="B";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe7_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="None";
			Loadout="B";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe8_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="None";
			Loadout="B";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe8a_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="None";
			Loadout="B";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe9_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="None";
			Loadout="C";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe10_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="None";
			Loadout="C";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe11_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="None";
			Loadout="C";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe12_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="None";
			Loadout="C";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe12a_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="None";
			Loadout="C";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe13_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="None";
			Loadout="D";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe14_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="None";
			Loadout="D";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe15_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="None";
			Loadout="D";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe16_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="None";
			Loadout="D";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe16a_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="None";
			Loadout="D";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe17_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="None";
			Loadout="E";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe18_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="None";
			Loadout="E";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe19_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="None";
			Loadout="E";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe20_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="None";
			Loadout="E";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe20a_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="None";
			Loadout="E";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe21_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="None";
			Loadout="F";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe22_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="None";
			Loadout="F";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe23_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="None";
			Loadout="F";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe24_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="None";
			Loadout="F";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe24a_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="None";
			Loadout="F";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe25_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="None";
			Loadout="G";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe26_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="None";
			Loadout="G";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe27_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="None";
			Loadout="G";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe28_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="None";
			Loadout="G";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe28a_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="None";
			Loadout="G";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="None";
			Loadout="A";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe2_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="None";
			Loadout="A";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe3_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="None";
			Loadout="A";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe4_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="None";
			Loadout="A";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe4a_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="None";
			Loadout="A";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe5_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="None";
			Loadout="B";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe6_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="None";
			Loadout="B";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe7_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="None";
			Loadout="B";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe8_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="None";
			Loadout="B";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe8a_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="None";
			Loadout="B";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe9_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="None";
			Loadout="C";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe10_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="None";
			Loadout="C";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe11_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="None";
			Loadout="C";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe12_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="None";
			Loadout="C";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe12a_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="None";
			Loadout="C";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe13_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="None";
			Loadout="D";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe14_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="None";
			Loadout="D";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe15_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="None";
			Loadout="D";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe16_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="None";
			Loadout="D";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe16a_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="None";
			Loadout="D";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe17_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="None";
			Loadout="E";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe18_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="None";
			Loadout="E";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe19_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="None";
			Loadout="E";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe20_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="None";
			Loadout="E";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe20a_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="None";
			Loadout="E";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe21_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="None";
			Loadout="F";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe22_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="None";
			Loadout="F";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe23_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="None";
			Loadout="F";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe24_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="None";
			Loadout="F";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe24a_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="None";
			Loadout="F";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe25_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="None";
			Loadout="G";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe26_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="None";
			Loadout="G";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe27_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="None";
			Loadout="G";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe28_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="None";
			Loadout="G";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe28a_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="None";
			Loadout="G";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="mc";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="aor2";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_3: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="aor1";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_4: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="blk";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_4a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="mcal";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_534a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcal";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_45a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcb";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_46a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="od";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_5: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="mc";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_6: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="aor2";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_7: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="aor1";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_8: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="blk";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_8a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="mcal";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_863a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcal";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_85a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcb";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_86a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="od";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_9: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="mc";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_10: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="aor2";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_11: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="aor1";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_12: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="blk";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_12a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="mcal";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_1263a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcal";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_125a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcb";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_12a5a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="od";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_13: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="mc";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_14: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="aor2";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_15: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="aor1";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_16: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="blk";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_16a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="mcal";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_1636a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcal";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_163a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcb";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_165a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="od";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_17: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="mc";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_18: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="aor2";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_19: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="aor1";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_20: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="blk";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_20a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="mcal";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_2530a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcal";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_205a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcb";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_230a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="od";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_21: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="mc";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_22: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="aor2";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_23: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="aor1";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_24: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="blk";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_24a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="mcal";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_2453a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcal";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_246a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcb";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_248a: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="od";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_25: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="mc";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_26: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="aor2";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_27: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="aor1";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_28: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="blk";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_2538: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="mcal";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_25538: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcal";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover_2436a: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcb";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="Off";
		};
		scope=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		weaponPoolAvailable=1;
		displayName="[TFL] Crye Airframe Cover MCB (G)";
		picture="tfl_headgear\textures\logo.paa";
		model="\TFL_Headgear\Models\Crye_Airframe_Cover.p3d";
		hiddenSelections[]=
		{
			"airframe",
			"cover",
			"cover2",
			"cover3",
			"manta",
			"arc",
			"Comtac",
			"Comtac2",
			"arc2",
			"comtac4",
			"comtac4_arc",
			"velcro",
			"velcro2",
			"helstar",
			"helstar2",
			"mlps",
			"cover4"
		};
		hiddenSelectionsTextures[]=
		{
			"TFL_Headgear\Textures\airframe_blk.paa",
			"",
			"",
			"",
			"TFL_Headgear\Textures\acc_soc_manta.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"TFL_Headgear\Textures\m300c_blk_co.paa",
			"TFL_Headgear\Textures\af_cover_mcb_co.paa"
		};
		author="Mal";
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformModel="\TFL_Headgear\Models\Crye_Airframe_Cover.p3d";
			modelSides[]={3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"airframe",
				"cover",
				"cover2",
				"cover3",
				"manta",
				"arc",
				"Comtac",
				"Comtac2",
				"arc2",
				"comtac4",
				"comtac4_arc",
				"velcro",
				"velcro2",
				"helstar",
				"helstar2",
				"mlps",
				"cover4"
			};
		};
	};
	class airframe_cover_253678: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="od";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class airframe_cover__ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="mc";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_2_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="aor2";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_3_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="aor1";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_4_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="blk";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_4a_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="mcal";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_453a_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcal";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_45a_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcb";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_435a_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="od";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_5_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="mc";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_6_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="aor2";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_7_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="aor1";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_8_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="blk";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_8a_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="mcal";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_85a_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcal";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_87a_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcb";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_82a_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="od";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_9_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="mc";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_10_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="aor2";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_11_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="aor1";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_12_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="blk";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_12a_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="mcal";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_152a_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcal";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_1352a_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcb";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_1263a_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="od";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_13_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="mc";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_14_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="aor2";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_15_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="aor1";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_16_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="blk";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_16a_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="mcal";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_1656a_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcal";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_1635a_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcb";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_16232a_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="od";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_17_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="mc";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_18_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="aor2";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_19_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="aor1";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_20_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="blk";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_20a_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="mcal";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_206a_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcal";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_23520a_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcb";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_206a5_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="od";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_21_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="mc";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_22_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="aor2";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_23_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="aor1";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_24_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="blk";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_24a_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="mcal";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_2453a_ComtacIII: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcal";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="On";
		};
		scope=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		weaponPoolAvailable=1;
		displayName="[TFL] Crye Airframe Cover Alpine2 Comtac3 (F)";
		picture="tfl_headgear\textures\logo.paa";
		model="\TFL_Headgear\Models\Crye_Airframe_Cover.p3d";
		hiddenSelections[]=
		{
			"airframe",
			"cover",
			"cover2",
			"cover3",
			"manta",
			"arc",
			"Comtac",
			"Comtac2",
			"arc2",
			"comtac4",
			"comtac4_arc",
			"velcro",
			"velcro2",
			"helstar",
			"helstar2",
			"mlps",
			"cover4"
		};
		hiddenSelectionsTextures[]=
		{
			"TFL_Headgear\Textures\airframe_blk.paa",
			"",
			"",
			"",
			"TFL_Headgear\Textures\acc_soc_manta.paa",
			"",
			"TFL_Headgear\Textures\comtac_III_blk.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"TFL_Headgear\Textures\af_cover_alpine_co.paa"
		};
		author="Mal";
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			mass=60;
			uniformModel="\TFL_Headgear\Models\Crye_Airframe_Cover.p3d";
			modelSides[]={3,1};
			hiddenSelections[]=
			{
				"airframe",
				"cover",
				"cover2",
				"cover3",
				"manta",
				"arc",
				"Comtac",
				"Comtac2",
				"arc2",
				"comtac4",
				"comtac4_arc",
				"velcro",
				"velcro2",
				"helstar",
				"helstar2",
				"mlps",
				"cover4"
			};
		};
	};
	class airframe_cover_2436a_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcb";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_243236a_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="od";
			Loadout="F";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_25_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="mc";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_26_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="aor2";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_27_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="aor1";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_28_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="blk";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_28a_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="mcal";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_286a_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcal";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_2863a_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcb";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover_26882a_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="od";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class airframe_cover__ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="mc";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_2_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="aor2";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_3_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="aor1";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_4_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="blk";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_4a_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="mcal";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_47a_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcal";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_473a_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcb";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_47363a_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="od";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_5_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="mc";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_6_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="aor2";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_7_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="aor1";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_8_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="blk";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_8a_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="mcal";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_87a7_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcal";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_853a_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcb";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_821a_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="od";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_9_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="mc";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_10_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="aor2";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_11_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="aor1";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_12_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="blk";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_12a_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="mcal";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_162a_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcal";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_1273a_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcb";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_13236_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="od";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_13_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="mc";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_14_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="aor2";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_15_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="aor1";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_16_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="blk";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_16a_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="mcal";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_165a_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcal";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_13676a_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcb";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_163216a_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="od";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_17_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="mc";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_18_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="aor2";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_19_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="aor1";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_20_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="blk";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_20a_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="mcal";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_206a_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcal";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_25360a_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcb";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_205732a_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="od";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_21_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="mc";
			Loadout="F";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_22_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="aor2";
			Loadout="F";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_23_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="aor1";
			Loadout="F";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_24_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="blk";
			Loadout="F";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_24a_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="mcal";
			Loadout="F";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_2456a_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcal";
			Loadout="F";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_253724a_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcb";
			Loadout="F";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_246721a_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="od";
			Loadout="F";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_25_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="mc";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_26_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="aor2";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_27_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="aor1";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_28_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="blk";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_28a_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="mcal";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_286a_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcal";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_28563a_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcb";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_236728a_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="od";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class airframe_cover__ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="mc";
			Loadout="A";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_2_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="aor2";
			Loadout="A";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_3_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="aor1";
			Loadout="A";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_4_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="blk";
			Loadout="A";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_4a_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="mcal";
			Loadout="A";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_45a_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcal";
			Loadout="A";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_463a_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcb";
			Loadout="A";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_43728a_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="od";
			Loadout="A";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_5_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="mc";
			Loadout="B";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_6_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="aor2";
			Loadout="B";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_7_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="aor1";
			Loadout="B";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_8_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="blk";
			Loadout="B";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_8a_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="mcal";
			Loadout="B";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_872a_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcal";
			Loadout="B";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_8367a_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcb";
			Loadout="B";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_8a637_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="od";
			Loadout="B";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_9_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="mc";
			Loadout="C";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_10_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="aor2";
			Loadout="C";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_11_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="aor1";
			Loadout="C";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_12_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="blk";
			Loadout="C";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_12a_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="mcal";
			Loadout="C";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_1562a_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcal";
			Loadout="C";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_12737a_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcb";
			Loadout="C";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_12a6327_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="od";
			Loadout="C";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_13_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="mc";
			Loadout="D";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_14_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="aor2";
			Loadout="D";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_15_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="aor1";
			Loadout="D";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_16_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="blk";
			Loadout="D";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_16a_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="mcal";
			Loadout="D";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_1663a_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcal";
			Loadout="D";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_13786a_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcb";
			Loadout="D";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_164a8_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="od";
			Loadout="D";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_17_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="mc";
			Loadout="E";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_18_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="aor2";
			Loadout="E";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_19_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="aor1";
			Loadout="E";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_20_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="blk";
			Loadout="E";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_20a_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="mcal";
			Loadout="E";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_2056a_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcal";
			Loadout="E";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_26380a_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcb";
			Loadout="E";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_203721a_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="od";
			Loadout="E";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_21_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="mc";
			Loadout="F";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_22_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="aor2";
			Loadout="F";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_23_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="aor1";
			Loadout="F";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_24_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="blk";
			Loadout="F";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_24a_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="mcal";
			Loadout="F";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_2647a_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcal";
			Loadout="F";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_2374a_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcb";
			Loadout="F";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_2473a_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="od";
			Loadout="F";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_25_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="mc";
			Loadout="G";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_26_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="aor2";
			Loadout="G";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_27_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="aor1";
			Loadout="G";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_28_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="blk";
			Loadout="G";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_28a_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="mcal";
			Loadout="G";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_2857a_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcal";
			Loadout="G";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_2837a_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcb";
			Loadout="G";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover_2218a_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="od";
			Loadout="G";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class airframe_cover__ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="mc";
			Loadout="A";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_2_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="aor2";
			Loadout="A";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_3_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="aor1";
			Loadout="A";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_4_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="blk";
			Loadout="A";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_4a_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="mcal";
			Loadout="A";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_457a_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcal";
			Loadout="A";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_437a_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcb";
			Loadout="A";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_4367a_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="od";
			Loadout="A";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_5_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="mc";
			Loadout="B";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_6_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="aor2";
			Loadout="B";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_7_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="aor1";
			Loadout="B";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_8_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="blk";
			Loadout="B";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_8a_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="mcal";
			Loadout="B";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_38a7_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcal";
			Loadout="B";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_8367a_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcb";
			Loadout="B";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_8371a_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="od";
			Loadout="B";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_9_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="mc";
			Loadout="C";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_10_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="aor2";
			Loadout="C";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_11_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="aor1";
			Loadout="C";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_12_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="blk";
			Loadout="C";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_12a_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="mcal";
			Loadout="C";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_1268a_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcal";
			Loadout="C";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_12672a_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcb";
			Loadout="C";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_12381a_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="od";
			Loadout="C";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_13_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="mc";
			Loadout="D";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_14_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="aor2";
			Loadout="D";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_15_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="aor1";
			Loadout="D";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_16_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="blk";
			Loadout="D";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_16a_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="mcal";
			Loadout="D";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_1567a_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcal";
			Loadout="D";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_1637a_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcb";
			Loadout="D";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_16a83_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="od";
			Loadout="D";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_17_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="mc";
			Loadout="E";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_18_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="aor2";
			Loadout="E";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_19_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="aor1";
			Loadout="E";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_20_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="blk";
			Loadout="E";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_20a_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="mcal";
			Loadout="E";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_2570a_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcal";
			Loadout="E";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_203a6_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcb";
			Loadout="E";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_20371a_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="od";
			Loadout="E";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_21_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="mc";
			Loadout="F";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_22_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="aor2";
			Loadout="F";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_23_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="aor1";
			Loadout="F";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_24_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="blk";
			Loadout="F";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_24a_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="mcal";
			Loadout="F";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_2467a_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcal";
			Loadout="F";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_2348a_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcb";
			Loadout="F";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_28243a_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="od";
			Loadout="F";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_25_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="mc";
			Loadout="G";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_26_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="aor2";
			Loadout="G";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_27_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="aor1";
			Loadout="G";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_28_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="blk";
			Loadout="G";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_28a_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="mcal";
			Loadout="G";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_2853a_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcal";
			Loadout="G";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_28572a_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcb";
			Loadout="G";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class airframe_cover_2228a_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="od";
			Loadout="G";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class SOAR_HGU56: ItemCore
	{
		ace_hearing_protection=0.85000002;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=8;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_hgu";
			Paint="Nuka-Cola";
			Visor="Off";
		};
	};
	class SOAR_HGU56_2: ItemCore
	{
		ace_hearing_protection=0.85000002;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=8;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_hgu";
			Paint="Nuka-Cola";
			Visor="On";
		};
	};
	class SOAR_HGU56_3: ItemCore
	{
		ace_hearing_protection=0.85000002;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=8;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_hgu";
			Paint="Red-SQDN";
			Visor="Off";
		};
	};
	class SOAR_HGU56_4: ItemCore
	{
		ace_hearing_protection=0.85000002;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=8;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_hgu";
			Paint="Red-SQDN";
			Visor="On";
		};
	};
	class XP: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class XP7: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class XP13: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class XP19: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class XP25: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class XP136: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class XP1362: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="H";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class XP13624: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="I";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class XP136324: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="J";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class XP13624_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="K";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class XP136324_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="L";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class XP_ComtacIII: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class XP_ComtacIII7: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="B";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class XP_ComtacIII13: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="C";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class XP_ComtacIII19: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="D";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class XP_ComtacIII25: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="E";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class XP_ComtacIII136: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="G";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class XP_ComtacIII1362: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="H";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class XP_ComtacIII13624: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="I";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class XP_ComtacIII136324: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="J";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class XP_ComtacIII13624_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="K";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class XP_ComtacIII136324_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="L";
			headset_type="Comtac 3";
			headset_state="On";
		};
	};
	class XP_ComtacIII_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class XP_ComtacIII_Arc7: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class XP_ComtacIII_Arc13: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class XP_ComtacIII_Arc19: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class XP_ComtacIII_Arc25: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class XP_ComtacIII_Arc136: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class XP_ComtacIII_Arc1362: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="H";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class XP_ComtacIII_Arc13624: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="I";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class XP_ComtacIII_Arc136324: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="J";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class XP_ComtacIII_Arc13624_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="K";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class XP_ComtacIII_Arc136324_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="L";
			headset_type="Comtac 3 Arc";
			headset_state="On";
		};
	};
	class XP_ComtacIV: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="A";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class XP_ComtacIV7: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="B";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class XP_ComtacIV13: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="C";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class XP_ComtacIV19: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="D";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class XP_ComtacIV25: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="E";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class XP_ComtacIV136: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="G";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class XP_ComtacIV1362: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="H";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class XP_ComtacIV13624: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="I";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class XP_ComtacIV136324: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="J";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class XP_ComtacIV13624_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="K";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class XP_ComtacIV136324_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="L";
			headset_type="Comtac 4";
			headset_state="On";
		};
	};
	class XP_ComtacIV_Arc: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="A";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class XP_ComtacIV_Arc7: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="B";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class XP_ComtacIV_Arc13: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="C";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class XP_ComtacIV_Arc19: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="D";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class XP_ComtacIV_Arc25: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="E";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class XP_ComtacIV_Arc136: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="G";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class XP_ComtacIV_Arc1362: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="H";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class XP_ComtacIV_Arc13624: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="I";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class XP_ComtacIV_Arc136324: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="J";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class XP_ComtacIV_Arc13624_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="K";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class XP_ComtacIV_Arc136324_manta: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="L";
			headset_type="Comtac 4 Arc";
			headset_state="On";
		};
	};
	class Maritime_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc2_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc3_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc4_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc5_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc6_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc7_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc8_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc9_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc10_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc11_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc12_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc13_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc14_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc15_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc16_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc17_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc18_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc19_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc20_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc21_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc22_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc23_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc24_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc25_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc26_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc27_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc28_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc29_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc30_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc31_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc32_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc33_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc34_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc35_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc36_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc136_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc146_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc153_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc165_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc173_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc182_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc1362_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc1463_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc1534_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc1655_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc1763_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc1832_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc13624_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc14632_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc15354_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc16455_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc17633_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc18322_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc136324_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc146532_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc153654_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc164575_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc127633_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc184322_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc13624_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc14632_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc15354_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc16455_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc17633_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc18322_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc136324_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc146532_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc153654_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc164575_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc127633_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_ComtacIII_Arc184322_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_AMP_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP2_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP3_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP4_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP5_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP6_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="None";
			arc_rail="On";
			Loadout="A";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP7_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP8_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP9_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP10_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP11_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP12_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="None";
			arc_rail="On";
			Loadout="B";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP13_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP14_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP15_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP16_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP17_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP18_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="None";
			arc_rail="On";
			Loadout="C";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP19_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP20_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP21_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP22_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP23_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP24_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="None";
			arc_rail="On";
			Loadout="D";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP25_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP26_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP27_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP28_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP29_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP30_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="None";
			arc_rail="On";
			Loadout="E";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP31_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP32_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP33_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP34_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP35_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP36_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="None";
			arc_rail="On";
			Loadout="F";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP136_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP146_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP153_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP165_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP173_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP182_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="None";
			arc_rail="On";
			Loadout="G";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP1362_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP1463_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP1534_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP1655_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP1763_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP1832_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="None";
			arc_rail="On";
			Loadout="H";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP13624_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP14632_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP15354_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP16455_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP17633_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP18322_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="None";
			arc_rail="On";
			Loadout="I";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP136324_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP146532_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP153654_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP164575_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP127633_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP184322_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="None";
			arc_rail="On";
			Loadout="J";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP13624_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP14632_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP15354_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP16455_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP17633_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP18322_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="None";
			arc_rail="On";
			Loadout="K";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP136324_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP146532_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor2";
			cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP153654_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="mc";
			cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP164575_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP127633_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_AMP184322_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="None";
			arc_rail="On";
			Loadout="L";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="aor1";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc2_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="aor2";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc3_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="mc";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc4_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="blk";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIIIa_Arc4_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="mcb";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc5_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="mcal";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc6_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="od";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc7_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="aor1";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc8_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="aor2";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc9_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="mc";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc10_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="blk";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc10a_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="mcb";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc11_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="mcal";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc12_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="od";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc13_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="aor1";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc14_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="aor2";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc15_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="mc";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc16_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="blk";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc16a_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="mcb";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc17_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="mcal";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc18_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="od";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc19_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="aor1";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc20_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="aor2";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc21_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="mc";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc22_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="blk";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc22a_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="mcb";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc23_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="mcal";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc24_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="od";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc25_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="aor1";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc26_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="aor2";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc27_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="mc";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc28_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="blk";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc28a_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="mcb";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc29_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="mcal";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc30_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="od";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc136_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="aor1";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc146_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="aor2";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc153_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="mc";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc165_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="blk";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc165a_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="mcb";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc173_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="mcal";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc182_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="od";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc1362_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="aor1";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc1463_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="aor2";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc1534_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="mc";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc1655_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="blk";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc1655a_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="mcb";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc1763_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="mcal";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc1832_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="od";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc13624_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="aor1";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc14632_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="aor2";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc15354_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="mc";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc16455_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="blk";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc1645a5_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="mcb";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc17633_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="mcal";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc18322_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="od";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc136324_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="aor1";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc146532_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="aor2";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc153654_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="mc";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc164575_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="blk";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc16457a5_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="mcb";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc127633_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="mcal";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc184322_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="od";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc13624_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="aor1";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc14632_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="aor2";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc15354_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="mc";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc16455_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="blk";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc1645a5_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="mcb";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc17633_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="mcal";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc18322_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="od";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc136324_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="aor1";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc146532_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="aor2";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc153654_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="mc";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc164575_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="blk";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc16457a5_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="mcb";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc127633_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="mcal";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc184322_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="od";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="aor1";
			arc_rail="On";
			Loadout="A";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP2_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="aor2";
			arc_rail="On";
			Loadout="A";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP3_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="mc";
			arc_rail="On";
			Loadout="A";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP4_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="blk";
			arc_rail="On";
			Loadout="A";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP4a2_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="mcb";
			arc_rail="On";
			Loadout="A";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP5_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="mcal";
			arc_rail="On";
			Loadout="A";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP6_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="od";
			arc_rail="On";
			Loadout="A";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP7_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="aor1";
			arc_rail="On";
			Loadout="B";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP8_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="aor2";
			arc_rail="On";
			Loadout="B";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP9_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="mc";
			arc_rail="On";
			Loadout="B";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP10_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="blk";
			arc_rail="On";
			Loadout="B";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP10a2_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="mcb";
			arc_rail="On";
			Loadout="B";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP11_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="mcal";
			arc_rail="On";
			Loadout="B";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP12_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="od";
			arc_rail="On";
			Loadout="B";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP13_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="aor1";
			arc_rail="On";
			Loadout="C";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP14_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="aor2";
			arc_rail="On";
			Loadout="C";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP15_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="mc";
			arc_rail="On";
			Loadout="C";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP16_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="blk";
			arc_rail="On";
			Loadout="C";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP16a23_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="mcb";
			arc_rail="On";
			Loadout="C";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP17_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="mcal";
			arc_rail="On";
			Loadout="C";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP18_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="od";
			arc_rail="On";
			Loadout="C";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP19_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="aor1";
			arc_rail="On";
			Loadout="D";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP20_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="aor2";
			arc_rail="On";
			Loadout="D";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP21_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="mc";
			arc_rail="On";
			Loadout="D";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP22_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="blk";
			arc_rail="On";
			Loadout="D";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP222_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="mcb";
			arc_rail="On";
			Loadout="D";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP23_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="mcal";
			arc_rail="On";
			Loadout="D";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP24_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="od";
			arc_rail="On";
			Loadout="D";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP25_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="aor1";
			arc_rail="On";
			Loadout="E";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP26_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="aor2";
			arc_rail="On";
			Loadout="E";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP27_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="mc";
			arc_rail="On";
			Loadout="E";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP28_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="blk";
			arc_rail="On";
			Loadout="E";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP228_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="mcb";
			arc_rail="On";
			Loadout="E";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP29_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="mcal";
			arc_rail="On";
			Loadout="E";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP30_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="od";
			arc_rail="On";
			Loadout="E";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP136_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="aor1";
			arc_rail="On";
			Loadout="G";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP146_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="aor2";
			arc_rail="On";
			Loadout="G";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP153_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="mc";
			arc_rail="On";
			Loadout="G";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP165_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="blk";
			arc_rail="On";
			Loadout="G";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP165a23_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="mcb";
			arc_rail="On";
			Loadout="G";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP173_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="mcal";
			arc_rail="On";
			Loadout="G";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP182_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="od";
			arc_rail="On";
			Loadout="G";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP1362_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="aor1";
			arc_rail="On";
			Loadout="H";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP1463_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="aor2";
			arc_rail="On";
			Loadout="H";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP1534_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="mc";
			arc_rail="On";
			Loadout="H";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP1655_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="blk";
			arc_rail="On";
			Loadout="H";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP16552a_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="mcb";
			arc_rail="On";
			Loadout="H";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP1763_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="mcal";
			arc_rail="On";
			Loadout="H";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP1832_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="od";
			arc_rail="On";
			Loadout="H";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP13624_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="aor1";
			arc_rail="On";
			Loadout="I";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP14632_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="aor2";
			arc_rail="On";
			Loadout="I";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP15354_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="mc";
			arc_rail="On";
			Loadout="I";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP16455_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="blk";
			arc_rail="On";
			Loadout="I";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP164552a3_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="mcb";
			arc_rail="On";
			Loadout="I";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP17633_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="mcal";
			arc_rail="On";
			Loadout="I";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP18322_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="od";
			arc_rail="On";
			Loadout="I";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP136324_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="aor1";
			arc_rail="On";
			Loadout="J";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP146532_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="aor2";
			arc_rail="On";
			Loadout="J";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP153654_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="mc";
			arc_rail="On";
			Loadout="J";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP164575_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="blk";
			arc_rail="On";
			Loadout="J";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP164572a5_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="mcb";
			arc_rail="On";
			Loadout="J";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP127633_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="mcal";
			arc_rail="On";
			Loadout="J";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP184322_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="od";
			arc_rail="On";
			Loadout="J";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP13624_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="aor1";
			arc_rail="On";
			Loadout="K";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP14632_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="aor2";
			arc_rail="On";
			Loadout="K";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP15354_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="mc";
			arc_rail="On";
			Loadout="K";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP16455_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="blk";
			arc_rail="On";
			Loadout="K";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP164552a3_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="mcb";
			arc_rail="On";
			Loadout="K";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP17633_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="mcal";
			arc_rail="On";
			Loadout="K";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP18322_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="od";
			arc_rail="On";
			Loadout="K";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP136324_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="aor1";
			cover="aor1";
			arc_rail="On";
			Loadout="L";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP146532_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="aor2";
			arc_rail="On";
			Loadout="L";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP153654_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="mc";
			arc_rail="On";
			Loadout="L";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP164575_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="blk";
			arc_rail="On";
			Loadout="L";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP164572a5_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="blk";
			cover="mcb";
			arc_rail="On";
			Loadout="L";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP127633_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="mcal";
			arc_rail="On";
			Loadout="L";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP184322_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="ut";
			cover="od";
			arc_rail="On";
			Loadout="L";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc5wht2_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="mcal";
			arc_rail="On";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc11wht2_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="mcal";
			arc_rail="On";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc17wht2_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="mcal";
			arc_rail="On";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc23wht2_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="mcal";
			arc_rail="On";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc29wht2_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="mcal";
			arc_rail="On";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc173wht2_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="mcal";
			arc_rail="On";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc1763wht2_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="mcal";
			arc_rail="On";
			Loadout="H";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc17633wht2_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="mcal";
			arc_rail="On";
			Loadout="I";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc127633wht2_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="mcal";
			arc_rail="On";
			Loadout="J";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc17633wht2_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="mcal";
			arc_rail="On";
			Loadout="K";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_ComtacIII_Arc127633wht2_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="mcal";
			arc_rail="On";
			Loadout="L";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP5wht2_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="mcal";
			arc_rail="On";
			Loadout="A";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP11wht2_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="mcal";
			arc_rail="On";
			Loadout="B";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP17wht2_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="mcal";
			arc_rail="On";
			Loadout="C";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP23wht2_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="mcal";
			arc_rail="On";
			Loadout="D";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP29wht2_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="mcal";
			arc_rail="On";
			Loadout="E";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP173wht2_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="mcal";
			arc_rail="On";
			Loadout="G";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP1763wht2_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="mcal";
			arc_rail="On";
			Loadout="H";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP17633wht2_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="mcal";
			arc_rail="On";
			Loadout="I";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP127633wht2_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="mcal";
			arc_rail="On";
			Loadout="J";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP17633wht2_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="mcal";
			arc_rail="On";
			Loadout="K";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class Maritime_Cover_AMP127633wht2_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_mt";
			camo="wht";
			cover="mcal";
			arc_rail="On";
			Loadout="L";
			headset_type="AMP";
			headset_state="Off";
		};
	};
	class airframe_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="None";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe2_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="None";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe3_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="None";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe4_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="None";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe4a_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="None";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe5_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="None";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe6_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="None";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe7_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="None";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe8_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="None";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe8a_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="None";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe9_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="None";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe10_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="None";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe11_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="None";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe12_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="None";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe12a_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="None";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe13_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="None";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe14_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="None";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe15_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="None";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe16_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="None";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe16a_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="None";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe17_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="None";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe18_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="None";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe19_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="None";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe20_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="None";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe20a_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="None";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe21_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="None";
			Loadout="F";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe22_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="None";
			Loadout="F";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe23_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="None";
			Loadout="F";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe24_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="None";
			Loadout="F";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe24a_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="None";
			Loadout="F";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe25_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="None";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe26_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="None";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe27_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="None";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe28_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="None";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe28a_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="None";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover__ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="mc";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_2_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="aor2";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_3_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="aor1";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_4_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="blk";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_4a_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="mcal";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_47a_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcal";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_473a_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcb";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_47363a_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="od";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_5_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="mc";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_6_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="aor2";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_7_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="aor1";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_8_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="blk";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_8a_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="mcal";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_87a7_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcal";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_853a_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcb";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_821a_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="od";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_9_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="mc";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_10_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="aor2";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_11_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="aor1";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_12_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="blk";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_12a_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="mcal";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_162a_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcal";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_1273a_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcb";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_13236_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="od";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_13_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="mc";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_14_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="aor2";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_15_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="aor1";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_16_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="blk";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_16a_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="mcal";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_165a_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcal";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_13676a_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcb";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_163216a_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="od";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_17_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="mc";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_18_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="aor2";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_19_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="aor1";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_20_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="blk";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_20a_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="mcal";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_206a_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcal";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_25360a_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcb";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_205732a_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="od";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_21_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="mc";
			Loadout="F";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_22_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="aor2";
			Loadout="F";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_23_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="aor1";
			Loadout="F";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_24_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="blk";
			Loadout="F";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_24a_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="mcal";
			Loadout="F";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_2456a_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcal";
			Loadout="F";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_253724a_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcb";
			Loadout="F";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_246721a_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="od";
			Loadout="F";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_25_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="mc";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_26_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="od";
			cover="aor2";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_27_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="tan";
			cover="aor1";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_28_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="blk";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_28a_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="wht";
			cover="mcal";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_286a_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcal";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_28563a_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="blk";
			cover="mcb";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class airframe_cover_236728a_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_airframe";
			camo="cb";
			cover="od";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class XP_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class XP_ComtacIII_Arc7_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class XP_ComtacIII_Arc13_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class XP_ComtacIII_Arc19_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class XP_ComtacIII_Arc25_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class XP_ComtacIII_Arc136_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class XP_ComtacIII_Arc1362_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="H";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class XP_ComtacIII_Arc13624_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="I";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class XP_ComtacIII_Arc136324_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="J";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class XP_ComtacIII_Arc13624_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="K";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
	class XP_ComtacIII_Arc136324_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_xp";
			camo="mc";
			Loadout="L";
			headset_type="Comtac 3 Arc";
			headset_state="Off";
		};
	};
};
class cfgMods
{
	author="wanoO";
	timepacked="1631807787";
};
