class CfgPatches
{
	class aceax_compat_tfl_sf
	{
		name="compat_tfl_sf";
		units[]={};
		weapons[]={};
		requiredVersion=1.88;
		requiredAddons[]=
		{
			"tfl_sf",
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
		class tfl_sf
		{
			label="[TFL] SF";
			author="Louetta";
			options[]=
			{
				"camo",
				"Loadout",
				"headset_type",
				"headset_camo",
				"headset_state"
			};
			class camo: CamoBase
			{
				values[]=
				{
					"mc",
					"tan",
					"gry"
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
					"G",
					"H",
					"I",
					"J",
					"K",
					"L"
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
			class headset_camo: CamoBase
			{
				label="Camo Sticker";
				values[]=
				{
					"None",
					"mc"
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
					icon="aceax_compat_tfl_sf\data\headset.paa";
					actionlabel="Wear Headset";
				};
				class Off
				{
					label="Off";
					description="Headset Off";
					icon="aceax_compat_tfl_sf\data\noheadset.paa";
					actionlabel="Fold/Remove Headset";
				};
			};
		};
	};
};
class CfgWeapons
{
	class Default;
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
	class SF: ItemCore
	{
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="A";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF7: ItemCore
	{
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="B";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF13: ItemCore
	{
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="C";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF19: ItemCore
	{
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="D";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF25: ItemCore
	{
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="E";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF136: ItemCore
	{
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="G";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF1362: ItemCore
	{
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="H";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF13624: ItemCore
	{
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="I";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF136324: ItemCore
	{
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="J";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF13624_manta: ItemCore
	{
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="K";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF136324_manta: ItemCore
	{
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="L";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_ComtacIII: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="A";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_ComtacIII7: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="B";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_ComtacIII13: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="C";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_ComtacIII19: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="D";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_ComtacIII25: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="E";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_ComtacIII136: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="G";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_ComtacIII1362: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="H";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_ComtacIII13624: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="I";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_ComtacIII136324: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="J";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_ComtacIII13624_manta: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="K";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_ComtacIII136324_manta: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="L";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_ComtacIII_Arc: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_ComtacIII_Arc7: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_ComtacIII_Arc13: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_ComtacIII_Arc19: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_ComtacIII_Arc25: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_ComtacIII_Arc136: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_ComtacIII_Arc1362: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="H";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_ComtacIII_Arc13624: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="I";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_ComtacIII_Arc136324: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="J";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_ComtacIII_Arc13624_manta: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="K";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_ComtacIII_Arc136324_manta: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="L";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_ComtacIV: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="A";
			headset_type="Comtac 4";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_ComtacIV7: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="B";
			headset_type="Comtac 4";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_ComtacIV13: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="C";
			headset_type="Comtac 4";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_ComtacIV19: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="D";
			headset_type="Comtac 4";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_ComtacIV25: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="E";
			headset_type="Comtac 4";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_ComtacIV136: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="G";
			headset_type="Comtac 4";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_ComtacIV1362: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="H";
			headset_type="Comtac 4";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_ComtacIV13624: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="I";
			headset_type="Comtac 4";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_ComtacIV136324: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="J";
			headset_type="Comtac 4";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_ComtacIV13624_manta: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="K";
			headset_type="Comtac 4";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_ComtacIV136324_manta: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="L";
			headset_type="Comtac 4";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_ComtacIV_Arc: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="A";
			headset_type="Comtac 4 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_ComtacIV_Arc7: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="B";
			headset_type="Comtac 4 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_ComtacIV_Arc13: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="C";
			headset_type="Comtac 4 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_ComtacIV_Arc19: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="D";
			headset_type="Comtac 4 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_ComtacIV_Arc25: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="E";
			headset_type="Comtac 4 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_ComtacIV_Arc136: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="G";
			headset_type="Comtac 4 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_ComtacIV_Arc1362: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="H";
			headset_type="Comtac 4 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_ComtacIV_Arc13624: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="I";
			headset_type="Comtac 4 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_ComtacIV_Arc136324: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="J";
			headset_type="Comtac 4 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_ComtacIV_Arc13624_manta: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="K";
			headset_type="Comtac 4 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_ComtacIV_Arc136324_manta: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="L";
			headset_type="Comtac 4 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_AMP: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="A";
			headset_type="AMP";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_AMP7: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="B";
			headset_type="AMP";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_AMP13: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="C";
			headset_type="AMP";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_AMP19: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="D";
			headset_type="AMP";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_AMP25: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="E";
			headset_type="AMP";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_AMP136: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="G";
			headset_type="AMP";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_AMP1362: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="H";
			headset_type="AMP";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_AMP13624: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="I";
			headset_type="AMP";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_AMP136324: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="J";
			headset_type="AMP";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_AMP13624_manta: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="K";
			headset_type="AMP";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_AMP136324_manta: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="L";
			headset_type="AMP";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_AMPMC: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="A";
			headset_type="AMP";
			headset_camo="mc";
			headset_state="On";
		};
	};
	class SF_AMPMC7: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="B";
			headset_type="AMP";
			headset_camo="mc";
			headset_state="On";
		};
	};
	class SF_AMPMC13: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="C";
			headset_type="AMP";
			headset_camo="mc";
			headset_state="On";
		};
	};
	class SF_AMPMC19: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="D";
			headset_type="AMP";
			headset_camo="mc";
			headset_state="On";
		};
	};
	class SF_AMPMC25: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="E";
			headset_type="AMP";
			headset_camo="mc";
			headset_state="On";
		};
	};
	class SF_AMPMC136: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="G";
			headset_type="AMP";
			headset_camo="mc";
			headset_state="On";
		};
	};
	class SF_AMPMC1362: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="H";
			headset_type="AMP";
			headset_camo="mc";
			headset_state="On";
		};
	};
	class SF_AMPMC13624: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="I";
			headset_type="AMP";
			headset_camo="mc";
			headset_state="On";
		};
	};
	class SF_AMPMC136324: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="J";
			headset_type="AMP";
			headset_camo="mc";
			headset_state="On";
		};
	};
	class SF_AMPMC13624_manta: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="K";
			headset_type="AMP";
			headset_camo="mc";
			headset_state="On";
		};
	};
	class SF_AMPMC136324_manta: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="L";
			headset_type="AMP";
			headset_camo="mc";
			headset_state="On";
		};
	};
	class SF_gray: ItemCore
	{
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="A";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_gray7: ItemCore
	{
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="B";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_gray13: ItemCore
	{
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="C";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_gray19: ItemCore
	{
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="D";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_gray25: ItemCore
	{
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="E";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_gray136: ItemCore
	{
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="G";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_gray1362: ItemCore
	{
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="H";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_gray13624: ItemCore
	{
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="I";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_gray136324: ItemCore
	{
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="J";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_gray13624_manta: ItemCore
	{
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="K";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_gray136324_manta: ItemCore
	{
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="L";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_gray_ComtacIII: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="A";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_ComtacIII7: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="B";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_ComtacIII13: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="C";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_ComtacIII19: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="D";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_ComtacIII25: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="E";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_ComtacIII136: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="G";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_ComtacIII1362: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="H";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_ComtacIII13624: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="I";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_ComtacIII136324: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="J";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_ComtacIII13624_manta: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="K";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_ComtacIII136324_manta: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="L";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_ComtacIII_Arc: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_ComtacIII_Arc7: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_ComtacIII_Arc13: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_ComtacIII_Arc19: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_ComtacIII_Arc25: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_ComtacIII_Arc136: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_ComtacIII_Arc1362: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="H";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_ComtacIII_Arc13624: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="I";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_ComtacIII_Arc136324: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="J";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_ComtacIII_Arc13624_manta: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="K";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_ComtacIII_Arc136324_manta: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="L";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_ComtacIV: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="A";
			headset_type="Comtac 4";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_ComtacIV7: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="B";
			headset_type="Comtac 4";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_ComtacIV13: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="C";
			headset_type="Comtac 4";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_ComtacIV19: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="D";
			headset_type="Comtac 4";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_ComtacIV25: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="E";
			headset_type="Comtac 4";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_ComtacIV136: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="G";
			headset_type="Comtac 4";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_ComtacIV1362: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="H";
			headset_type="Comtac 4";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_ComtacIV13624: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="I";
			headset_type="Comtac 4";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_ComtacIV136324: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="J";
			headset_type="Comtac 4";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_ComtacIV13624_manta: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="K";
			headset_type="Comtac 4";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_ComtacIV136324_manta: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="L";
			headset_type="Comtac 4";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_ComtacIV_Arc: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="A";
			headset_type="Comtac 4 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_ComtacIV_Arc7: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="B";
			headset_type="Comtac 4 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_ComtacIV_Arc13: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="C";
			headset_type="Comtac 4 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_ComtacIV_Arc19: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="D";
			headset_type="Comtac 4 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_ComtacIV_Arc25: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="E";
			headset_type="Comtac 4 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_ComtacIV_Arc136: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="G";
			headset_type="Comtac 4 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_ComtacIV_Arc1362: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="H";
			headset_type="Comtac 4 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_ComtacIV_Arc13624: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="I";
			headset_type="Comtac 4 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_ComtacIV_Arc136324: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="J";
			headset_type="Comtac 4 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_ComtacIV_Arc13624_manta: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="K";
			headset_type="Comtac 4 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_ComtacIV_Arc136324_manta: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="L";
			headset_type="Comtac 4 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_AMP: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="A";
			headset_type="AMP";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_AMP7: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="B";
			headset_type="AMP";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_AMP13: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="C";
			headset_type="AMP";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_AMP19: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="D";
			headset_type="AMP";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_AMP25: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="E";
			headset_type="AMP";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_AMP136: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="G";
			headset_type="AMP";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_AMP1362: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="H";
			headset_type="AMP";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_AMP13624: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="I";
			headset_type="AMP";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_AMP136324: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="J";
			headset_type="AMP";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_AMP13624_manta: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="K";
			headset_type="AMP";
			headset_camo="None";
			headset_state="On";
		};
	};
	class SF_gray_AMP136324_manta: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="L";
			headset_type="AMP";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc: ItemCore
	{
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="A";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class sf_mc7: ItemCore
	{
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="B";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class sf_mc13: ItemCore
	{
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="C";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class sf_mc19: ItemCore
	{
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="D";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class sf_mc25: ItemCore
	{
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="E";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class sf_mc136: ItemCore
	{
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="G";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class sf_mc1362: ItemCore
	{
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="H";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class sf_mc13624: ItemCore
	{
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="I";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class sf_mc136324: ItemCore
	{
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="J";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class sf_mc13624_manta: ItemCore
	{
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="K";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class sf_mc136324_manta: ItemCore
	{
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="L";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class sf_mc_ComtacIII: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="A";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_ComtacIII7: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="B";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_ComtacIII13: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="C";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_ComtacIII19: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="D";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_ComtacIII25: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="E";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_ComtacIII136: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="G";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_ComtacIII1362: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="H";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_ComtacIII13624: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="I";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_ComtacIII136324: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="J";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_ComtacIII13624_manta: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="K";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_ComtacIII136324_manta: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="L";
			headset_type="Comtac 3";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_ComtacIII_Arc: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_ComtacIII_Arc7: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_ComtacIII_Arc13: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_ComtacIII_Arc19: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_ComtacIII_Arc25: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_ComtacIII_Arc136: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_ComtacIII_Arc1362: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="H";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_ComtacIII_Arc13624: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="I";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_ComtacIII_Arc136324: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="J";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_ComtacIII_Arc13624_manta: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="K";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_ComtacIII_Arc136324_manta: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="L";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_ComtacIV: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="A";
			headset_type="Comtac 4";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_ComtacIV7: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="B";
			headset_type="Comtac 4";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_ComtacIV13: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="C";
			headset_type="Comtac 4";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_ComtacIV19: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="D";
			headset_type="Comtac 4";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_ComtacIV25: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="E";
			headset_type="Comtac 4";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_ComtacIV136: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="G";
			headset_type="Comtac 4";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_ComtacIV1362: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="H";
			headset_type="Comtac 4";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_ComtacIV13624: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="I";
			headset_type="Comtac 4";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_ComtacIV136324: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="J";
			headset_type="Comtac 4";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_ComtacIV13624_manta: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="K";
			headset_type="Comtac 4";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_ComtacIV136324_manta: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="L";
			headset_type="Comtac 4";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_ComtacIV_Arc: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="A";
			headset_type="Comtac 4 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_ComtacIV_Arc7: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="B";
			headset_type="Comtac 4 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_ComtacIV_Arc13: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="C";
			headset_type="Comtac 4 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_ComtacIV_Arc19: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="D";
			headset_type="Comtac 4 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_ComtacIV_Arc25: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="E";
			headset_type="Comtac 4 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_ComtacIV_Arc136: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="G";
			headset_type="Comtac 4 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_ComtacIV_Arc1362: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="H";
			headset_type="Comtac 4 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_ComtacIV_Arc13624: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="I";
			headset_type="Comtac 4 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_ComtacIV_Arc136324: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="J";
			headset_type="Comtac 4 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_ComtacIV_Arc13624_manta: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="K";
			headset_type="Comtac 4 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_ComtacIV_Arc136324_manta: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="L";
			headset_type="Comtac 4 Arc";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_AMP: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="A";
			headset_type="AMP";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_AMP7: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="B";
			headset_type="AMP";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_AMP13: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="C";
			headset_type="AMP";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_AMP19: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="D";
			headset_type="AMP";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_AMP25: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="E";
			headset_type="AMP";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_AMP136: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="G";
			headset_type="AMP";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_AMP1362: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="H";
			headset_type="AMP";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_AMP13624: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="I";
			headset_type="AMP";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_AMP136324: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="J";
			headset_type="AMP";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_AMP13624_manta: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="K";
			headset_type="AMP";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_AMP136324_manta: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="L";
			headset_type="AMP";
			headset_camo="None";
			headset_state="On";
		};
	};
	class sf_mc_AMPMC: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="A";
			headset_type="AMP";
			headset_camo="mc";
			headset_state="On";
		};
	};
	class sf_mc_AMPMC7: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="B";
			headset_type="AMP";
			headset_camo="mc";
			headset_state="On";
		};
	};
	class sf_mc_AMPMC13: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="C";
			headset_type="AMP";
			headset_camo="mc";
			headset_state="On";
		};
	};
	class sf_mc_AMPMC19: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="D";
			headset_type="AMP";
			headset_camo="mc";
			headset_state="On";
		};
	};
	class sf_mc_AMPMC25: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="E";
			headset_type="AMP";
			headset_camo="mc";
			headset_state="On";
		};
	};
	class sf_mc_AMPMC136: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="G";
			headset_type="AMP";
			headset_camo="mc";
			headset_state="On";
		};
	};
	class sf_mc_AMPMC1362: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="H";
			headset_type="AMP";
			headset_camo="mc";
			headset_state="On";
		};
	};
	class sf_mc_AMPMC13624: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="I";
			headset_type="AMP";
			headset_camo="mc";
			headset_state="On";
		};
	};
	class sf_mc_AMPMC136324: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="J";
			headset_type="AMP";
			headset_camo="mc";
			headset_state="On";
		};
	};
	class sf_mc_AMPMC13624_manta: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="K";
			headset_type="AMP";
			headset_camo="mc";
			headset_state="On";
		};
	};
	class sf_mc_AMPMC136324_manta: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="L";
			headset_type="AMP";
			headset_camo="mc";
			headset_state="On";
		};
	};
	class SF_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_ComtacIII_Arc7_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_ComtacIII_Arc13_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_ComtacIII_Arc19_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_ComtacIII_Arc25_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_ComtacIII_Arc136_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_ComtacIII_Arc1362_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="H";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_ComtacIII_Arc13624_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="I";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_ComtacIII_Arc136324_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="J";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_ComtacIII_Arc13624_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="K";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_ComtacIII_Arc136324_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="L";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_AMP_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="A";
			headset_type="AMP";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_AMP7_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="B";
			headset_type="AMP";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_AMP13_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="C";
			headset_type="AMP";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_AMP19_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="D";
			headset_type="AMP";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_AMP25_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="E";
			headset_type="AMP";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_AMP136_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="G";
			headset_type="AMP";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_AMP1362_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="H";
			headset_type="AMP";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_AMP13624_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="I";
			headset_type="AMP";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_AMP136324_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="J";
			headset_type="AMP";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_AMP13624_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="K";
			headset_type="AMP";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_AMP136324_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="L";
			headset_type="AMP";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_AMPMC_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="A";
			headset_type="AMP";
			headset_camo="mc";
			headset_state="Off";
		};
	};
	class SF_AMPMC7_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="B";
			headset_type="AMP";
			headset_camo="mc";
			headset_state="Off";
		};
	};
	class SF_AMPMC13_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="C";
			headset_type="AMP";
			headset_camo="mc";
			headset_state="Off";
		};
	};
	class SF_AMPMC19_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="D";
			headset_type="AMP";
			headset_camo="mc";
			headset_state="Off";
		};
	};
	class SF_AMPMC25_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="E";
			headset_type="AMP";
			headset_camo="mc";
			headset_state="Off";
		};
	};
	class SF_AMPMC136_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="G";
			headset_type="AMP";
			headset_camo="mc";
			headset_state="Off";
		};
	};
	class SF_AMPMC1362_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="H";
			headset_type="AMP";
			headset_camo="mc";
			headset_state="Off";
		};
	};
	class SF_AMPMC13624_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="I";
			headset_type="AMP";
			headset_camo="mc";
			headset_state="Off";
		};
	};
	class SF_AMPMC136324_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="J";
			headset_type="AMP";
			headset_camo="mc";
			headset_state="Off";
		};
	};
	class SF_AMPMC13624_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="K";
			headset_type="AMP";
			headset_camo="mc";
			headset_state="Off";
		};
	};
	class SF_AMPMC136324_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="tan";
			Loadout="L";
			headset_type="AMP";
			headset_camo="mc";
			headset_state="Off";
		};
	};
	class SF_gray_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_gray_ComtacIII_Arc7_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_gray_ComtacIII_Arc13_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_gray_ComtacIII_Arc19_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_gray_ComtacIII_Arc25_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_gray_ComtacIII_Arc136_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_gray_ComtacIII_Arc1362_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="H";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_gray_ComtacIII_Arc13624_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="I";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_gray_ComtacIII_Arc136324_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="J";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_gray_ComtacIII_Arc13624_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="K";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_gray_ComtacIII_Arc136324_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="L";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_gray_AMP_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="A";
			headset_type="AMP";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_gray_AMP7_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="B";
			headset_type="AMP";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_gray_AMP13_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="C";
			headset_type="AMP";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_gray_AMP19_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="D";
			headset_type="AMP";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_gray_AMP25_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="E";
			headset_type="AMP";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_gray_AMP136_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="G";
			headset_type="AMP";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_gray_AMP1362_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="H";
			headset_type="AMP";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_gray_AMP13624_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="I";
			headset_type="AMP";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_gray_AMP136324_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="J";
			headset_type="AMP";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_gray_AMP13624_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="K";
			headset_type="AMP";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class SF_gray_AMP136324_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="gry";
			Loadout="L";
			headset_type="AMP";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class sf_mc_ComtacIII_Arc_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="A";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class sf_mc_ComtacIII_Arc7_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="B";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class sf_mc_ComtacIII_Arc13_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="C";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class sf_mc_ComtacIII_Arc19_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="D";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class sf_mc_ComtacIII_Arc25_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="E";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class sf_mc_ComtacIII_Arc136_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="G";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class sf_mc_ComtacIII_Arc1362_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="H";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class sf_mc_ComtacIII_Arc13624_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="I";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class sf_mc_ComtacIII_Arc136324_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="J";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class sf_mc_ComtacIII_Arc13624_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="K";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class sf_mc_ComtacIII_Arc136324_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="L";
			headset_type="Comtac 3 Arc";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class sf_mc_AMP_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="A";
			headset_type="AMP";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class sf_mc_AMP7_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="B";
			headset_type="AMP";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class sf_mc_AMP13_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="C";
			headset_type="AMP";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class sf_mc_AMP19_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="D";
			headset_type="AMP";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class sf_mc_AMP25_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="E";
			headset_type="AMP";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class sf_mc_AMP136_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="G";
			headset_type="AMP";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class sf_mc_AMP1362_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="H";
			headset_type="AMP";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class sf_mc_AMP13624_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="I";
			headset_type="AMP";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class sf_mc_AMP136324_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="J";
			headset_type="AMP";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class sf_mc_AMP13624_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="K";
			headset_type="AMP";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class sf_mc_AMP136324_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="L";
			headset_type="AMP";
			headset_camo="None";
			headset_state="Off";
		};
	};
	class sf_mc_AMPMC_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="A";
			headset_type="AMP";
			headset_camo="mc";
			headset_state="Off";
		};
	};
	class sf_mc_AMPMC7_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="B";
			headset_type="AMP";
			headset_camo="mc";
			headset_state="Off";
		};
	};
	class sf_mc_AMPMC13_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="C";
			headset_type="AMP";
			headset_camo="mc";
			headset_state="Off";
		};
	};
	class sf_mc_AMPMC19_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="D";
			headset_type="AMP";
			headset_camo="mc";
			headset_state="Off";
		};
	};
	class sf_mc_AMPMC25_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="E";
			headset_type="AMP";
			headset_camo="mc";
			headset_state="Off";
		};
	};
	class sf_mc_AMPMC136_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="G";
			headset_type="AMP";
			headset_camo="mc";
			headset_state="Off";
		};
	};
	class sf_mc_AMPMC1362_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="H";
			headset_type="AMP";
			headset_camo="mc";
			headset_state="Off";
		};
	};
	class sf_mc_AMPMC13624_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="I";
			headset_type="AMP";
			headset_camo="mc";
			headset_state="Off";
		};
	};
	class sf_mc_AMPMC136324_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="J";
			headset_type="AMP";
			headset_camo="mc";
			headset_state="Off";
		};
	};
	class sf_mc_AMPMC13624_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="K";
			headset_type="AMP";
			headset_camo="mc";
			headset_state="Off";
		};
	};
	class sf_mc_AMPMC136324_manta_fold: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_sf";
			camo="mc";
			Loadout="L";
			headset_type="AMP";
			headset_camo="mc";
			headset_state="Off";
		};
	};
};
class cfgMods
{
	author="wanoO";
	timepacked="1631793094";
};
