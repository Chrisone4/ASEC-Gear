class CfgPatches
{
	class aceax_compat_tfl_vests
	{
		name="compat_tfl_vests";
		units[]={};
		weapons[]={};
		requiredVersion=1.88;
		requiredAddons[]=
		{
			"tfl_vests",
			"tfl_vests_2"
		};
		author="wanoO";
		version="0.1.0.0";
		versionStr="0.1.0.0";
		versionAr[]={0,1,0,0};
	};
};
class XtdGearModels
{
	class SleevesBase;
	class CamoBase;
	class cfgweapons
	{
		class tfl_avs
		{
			label="[TFL] AVS";
			author="MaL";
			options[]=
			{
				"camo",
				"Weapon",
				"Role",
				"Cummer",
				"Loadout",
				"Belt"
			};
			class camo: CamoBase
			{
				values[]=
				{
					"mc",
					"mcal",
					"aor1",
					"aor2",
					"blk",
					"cb",
					"rg"
				};
				class cb
				{
					label="CB";
					description="Coyote Brown";
					image="aceax_compat_tfl_g3\data\cb.paa";
				};
				class mcal
				{
					label="MCAL";
					description="MC Alpine";
					image="aceax_compat_tfl_g3\data\mcal.paa";
				};
				class rg
				{
					label="RG";
					description="Ranger Green";
					image="aceax_compat_tfl_g3\data\rg.paa";
				};
			};
			class Weapon
			{
				values[]=
				{
					"M4",
					"MK11",
					"MK17",
					"MP7"
				};
				class M4
				{
					label="5.56";
				};
			};
			class Role
			{
				values[]=
				{
					"Assaulter",
					"Comms",
					"Light",
					"Medic",
					"Teamleader",
					"LMG"
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
			class Cummer
			{
				label="Cummerbund";
				values[]=
				{
					"On",
					"Off"
				};
			};
			class Belt
			{
				label="Belt (ACE)";
				changeingame=1;
				values[]=
				{
					"on",
					"off"
				};
				class on
				{
					label="On";
					description="Wear Belt";
					icon="aceax_compat_tfl_vests\data\belt.paa";
					actionlabel="Wear Belt";
				};
				class off
				{
					label="Off";
					description="Remove Belt";
					icon="aceax_compat_tfl_vests\data\nobelt.paa";
					actionlabel="Remove Belt";
				};
			};
		};
		class tfl_jpc: tfl_avs
		{
			label="[TFL] JPC";
			options[]=
			{
				"camo",
				"Weapon",
				"Role",
				"Loadout",
				"Belt"
			};
		};
		class tfl_belt: tfl_avs
		{
			label="[TFL] Ronin Belt";
			options[]=
			{
				"camo",
				"Weapon",
				"Loadout"
			};
			class Weapon
			{
				values[]=
				{
					"M4",
					"MK11",
					"MK17",
					"Glock"
				};
			};
			class Loadout
			{
				values[]=
				{
					"A",
					"B"
				};
			};
		};
	};
};
class cfgWeapons
{
	class Vest_Camo_Base;
	class V_PlateCarrier1_rgr;
	class VestItem;
	class ItemCore;
	class Crye_AVS_MC_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_CB_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_RG_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_MC_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_CB_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_RG_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_MC_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_CB_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_RG_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_MC_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_CB_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_RG_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_MC_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_CB_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_RG_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_MC_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_CB_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_RG_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_MC_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_CB_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_RG_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_MC_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_CB_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_RG_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_MC_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_CB_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_RG_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_MC_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_CB_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_RG_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_MC_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_CB_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_RG_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_MC_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_CB_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_RG_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_MC_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_CB_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_RG_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_MC_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_CB_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_RG_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_MC_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_CB_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_RG_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_MC_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_CB_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_RG_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_MC_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_CB_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_RG_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_MC_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_CB_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_RG_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_MC_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_CB_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_RG_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_MC_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_CB_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_RG_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_MC_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_CB_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_RG_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_MC_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_CB_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_RG_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_MC_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_CB_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_RG_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_MC_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_CB_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_RG_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_MC_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="G";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="G";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="G";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_CB_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="G";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_RG_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="G";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="G";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="G";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_MC_7_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="G";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_7_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="G";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_7_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="G";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_CB_7_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="G";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_RG_7_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="G";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_7_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="G";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_7_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="G";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_MC_7_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="G";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_7_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="G";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_7_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="G";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_CB_7_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="G";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_RG_7_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="G";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_7_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="G";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_7_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="G";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_MC_7_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="G";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_7_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="G";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_7_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="G";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_CB_7_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="G";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_RG_7_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="G";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_7_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="G";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_7_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="G";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_MC_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="H";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="H";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="H";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_CB_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="H";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_RG_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="H";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="H";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="H";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_MC_8_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="H";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_8_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="H";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_8_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="H";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_CB_8_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="H";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_RG_8_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="H";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_8_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="H";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_8_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="H";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_MC_8_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="H";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_8_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="H";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_8_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="H";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_CB_8_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="H";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_RG_8_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="H";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_8_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="H";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_8_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="H";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_MC_8_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="H";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_8_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="H";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_8_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="H";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_CB_8_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="H";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_RG_8_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="H";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_8_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="H";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_8_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="H";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_MC_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="I";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="I";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="I";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_CB_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="I";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_RG_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="I";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="I";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="I";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_MC_9_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="I";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_9_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="I";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_9_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="I";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_CB_9_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="I";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_RG_9_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="I";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_9_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="I";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_9_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="I";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_MC_9_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="I";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_9_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="I";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_9_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="I";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_CB_9_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="I";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_RG_9_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="I";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_9_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="I";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_9_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="I";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_MC_9_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="I";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_9_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="I";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_9_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="I";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_CB_9_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="I";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_RG_9_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="I";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_9_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="I";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_9_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="I";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_MC_10: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="J";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_10: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="J";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_10: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="J";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_CB_10: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="J";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_RG_10: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="J";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_10: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="J";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_10: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="J";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_MC_10_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="J";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_10_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="J";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_10_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="J";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_CB_10_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="J";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_RG_10_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="J";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_10_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="J";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_10_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="J";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_MC_11: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="K";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_11: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="K";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_11: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="K";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_CB_11: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="K";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_RG_11: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="K";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_11: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="K";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_11: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="K";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_MC_11_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="K";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_11_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="K";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_11_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="K";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_CB_11_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="K";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_RG_11_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="K";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_11_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="K";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_11_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="K";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_MC_12: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="L";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_12: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="L";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_12: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="L";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_CB_12: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="L";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_RG_12: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="L";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_12: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="L";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_12: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="L";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_MC_12_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="L";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_12_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="L";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_12_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="L";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_CB_12_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="L";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_RG_12_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="L";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_12_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="L";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_12_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="L";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_MC_Comms_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_Comms_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_Comms_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_CB_Comms_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_RG_Comms_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_Comms_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_Comms_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_MC_Comms_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_Comms_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_Comms_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_CB_Comms_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_RG_Comms_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_Comms_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_Comms_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_MC_Comms_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_Comms_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_Comms_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_CB_Comms_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_RG_Comms_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_Comms_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_Comms_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_MC_Comms_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_Comms_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_Comms_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_CB_Comms_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_RG_Comms_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_Comms_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_Comms_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_MC_Comms_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_Comms_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_Comms_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_CB_Comms_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_RG_Comms_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_Comms_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_Comms_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_MC_Comms_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_Comms_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_Comms_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_CB_Comms_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_RG_Comms_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_Comms_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_Comms_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_MC_Comms_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_Comms_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_Comms_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_CB_Comms_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_RG_Comms_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_Comms_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_Comms_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_MC_Comms_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_Comms_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_Comms_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_CB_Comms_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_RG_Comms_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_Comms_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_Comms_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_MC_Comms_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_Comms_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_Comms_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_CB_Comms_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_RG_Comms_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_Comms_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_Comms_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_MC_Comms_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_Comms_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_Comms_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_CB_Comms_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_RG_Comms_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_Comms_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_Comms_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_MC_Comms_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_Comms_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_Comms_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_CB_Comms_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_RG_Comms_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_Comms_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_Comms_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_MC_Comms_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_Comms_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_Comms_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_CB_Comms_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_RG_Comms_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_Comms_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_Comms_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_MC_Comms_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_Comms_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_Comms_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_CB_Comms_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_RG_Comms_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_Comms_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_Comms_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_MC_Comms_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_Comms_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_Comms_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_CB_Comms_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_RG_Comms_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_Comms_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_Comms_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_MC_Comms_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_Comms_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_Comms_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_CB_Comms_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_RG_Comms_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_Comms_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_Comms_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_MC_Comms_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_Comms_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_Comms_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_CB_Comms_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_RG_Comms_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_Comms_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_Comms_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_MC_Comms_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_Comms_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_Comms_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_CB_Comms_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_RG_Comms_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_Comms_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_Comms_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_MC_Comms_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_Comms_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_Comms_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_CB_Comms_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_RG_Comms_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_Comms_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_Comms_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_MC_Comms_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_Comms_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_Comms_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_CB_Comms_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_RG_Comms_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_Comms_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_Comms_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_MC_Comms_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_Comms_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_Comms_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_CB_Comms_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_RG_Comms_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_Comms_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_Comms_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_MC_Comms_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_Comms_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_Comms_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_CB_Comms_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_RG_Comms_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_Comms_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_Comms_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_MC_Comms_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_Comms_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_Comms_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_CB_Comms_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_RG_Comms_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_Comms_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_Comms_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_MC_Comms_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_Comms_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_Comms_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_CB_Comms_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_RG_Comms_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_Comms_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_Comms_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_MC_Comms_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_Comms_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_Comms_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_CB_Comms_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_RG_Comms_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_Comms_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_Comms_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_MC_Comms_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="G";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_Comms_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="G";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_Comms_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="G";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_CB_Comms_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="G";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_RG_Comms_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="G";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_Comms_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="G";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_Comms_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="G";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_MC_Comms_7_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="G";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_Comms_7_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="G";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_Comms_7_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="G";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_CB_Comms_7_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="G";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_RG_Comms_7_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="G";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_Comms_7_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="G";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_Comms_7_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="G";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_MC_Comms_7_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="G";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_Comms_7_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="G";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_Comms_7_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="G";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_CB_Comms_7_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="G";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_RG_Comms_7_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="G";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_Comms_7_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="G";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_Comms_7_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="G";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_MC_Comms_7_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="G";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_Comms_7_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="G";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_Comms_7_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="G";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_CB_Comms_7_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="G";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_RG_Comms_7_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="G";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_Comms_7_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="G";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_Comms_7_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="G";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_MC_Comms_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="H";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_Comms_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="H";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_Comms_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="H";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_CB_Comms_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="H";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_RG_Comms_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="H";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_Comms_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="H";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_Comms_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="H";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_MC_Comms_8_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="H";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_Comms_8_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="H";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_Comms_8_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="H";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_CB_Comms_8_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="H";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_RG_Comms_8_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="H";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_Comms_8_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="H";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_Comms_8_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="H";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_MC_Comms_8_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="H";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_Comms_8_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="H";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_Comms_8_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="H";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_CB_Comms_8_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="H";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_RG_Comms_8_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="H";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_Comms_8_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="H";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_Comms_8_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="H";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_MC_Comms_8_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="H";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_Comms_8_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="H";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_Comms_8_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="H";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_CB_Comms_8_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="H";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_RG_Comms_8_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="H";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_Comms_8_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="H";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_Comms_8_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="H";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_MC_Comms_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="I";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_Comms_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="I";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_Comms_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="I";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_CB_Comms_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="I";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_RG_Comms_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="I";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_Comms_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="I";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_Comms_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="I";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_MC_Comms_9_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="I";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_Comms_9_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="I";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_Comms_9_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="I";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_CB_Comms_9_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="I";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_RG_Comms_9_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="I";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_Comms_9_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="I";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_Comms_9_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="I";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_MC_Comms_9_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="I";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_Comms_9_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="I";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_Comms_9_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="I";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_CB_Comms_9_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="I";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_RG_Comms_9_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="I";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_Comms_9_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="I";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_Comms_9_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="I";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_MC_Comms_9_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="I";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_Comms_9_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="I";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_Comms_9_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="I";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_CB_Comms_9_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="I";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_RG_Comms_9_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="I";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_Comms_9_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="I";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_Comms_9_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="I";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_MC_Light_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Light";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_Light_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Light";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_Light_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Light";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_CB_Light_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Light";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_RG_Light_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Light";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_Light_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Light";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_Light_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Light";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_MC_Light_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Light";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_Light_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Light";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_Light_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Light";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_CB_Light_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Light";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_RG_Light_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Light";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_Light_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Light";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_Light_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Light";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_MC_Light_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Light";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_Light_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Light";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_Light_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Light";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_CB_Light_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Light";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_RG_Light_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Light";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_Light_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Light";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_Light_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Light";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_MC_Light_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Light";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_Light_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Light";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_Light_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Light";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_CB_Light_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Light";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_RG_Light_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Light";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_Light_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Light";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_Light_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Light";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_MC_Light_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Light";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_Light_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Light";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_Light_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Light";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_CB_Light_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Light";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_RG_Light_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Light";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_Light_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Light";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_Light_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Light";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_MC_Light_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Light";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_Light_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Light";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_Light_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Light";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_CB_Light_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Light";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_RG_Light_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Light";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_Light_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Light";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_Light_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Light";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_MC_LMG_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="LMG";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_LMG_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="LMG";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_LMG_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="LMG";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_CB_LMG_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="LMG";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_RG_LMG_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="LMG";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_LMG_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="LMG";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_LMG_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="LMG";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_MC_LMG_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="LMG";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_LMG_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="LMG";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_LMG_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="LMG";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_CB_LMG_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="LMG";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_RG_LMG_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="LMG";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_LMG_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="LMG";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_LMG_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="LMG";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_MC_LMG_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="LMG";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_LMG_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="LMG";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_LMG_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="LMG";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_CB_LMG_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="LMG";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_RG_LMG_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="LMG";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_LMG_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="LMG";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_LMG_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="LMG";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_MC_LMG_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="LMG";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_LMG_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="LMG";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_LMG_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="LMG";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_CB_LMG_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="LMG";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_RG_LMG_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="LMG";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_LMG_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="LMG";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_LMG_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="LMG";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_MC_Medic_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Medic";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_Medic_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Medic";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_Medic_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Medic";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_CB_Medic_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Medic";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_RG_Medic_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Medic";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_Medic_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Medic";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_Medic_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Medic";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_MC_Medic_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Medic";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_Medic_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Medic";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_Medic_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Medic";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_CB_Medic_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Medic";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_RG_Medic_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Medic";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_Medic_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Medic";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_Medic_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Medic";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_MC_Medic_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Medic";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_Medic_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Medic";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_Medic_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Medic";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_CB_Medic_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Medic";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_RG_Medic_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Medic";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_Medic_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Medic";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_Medic_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Medic";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_MC_Medic_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Medic";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_Medic_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Medic";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_Medic_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Medic";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_CB_Medic_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Medic";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_RG_Medic_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Medic";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_Medic_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Medic";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_Medic_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Medic";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_MC_TeamLeader_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_TeamLeader_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_TeamLeader_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_CB_TeamLeader_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_RG_TeamLeader_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_TeamLeader_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_TeamLeader_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_MC_TeamLeader_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_TeamLeader_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_TeamLeader_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_CB_TeamLeader_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_RG_TeamLeader_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_TeamLeader_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_TeamLeader_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_MC_TeamLeader_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_TeamLeader_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_TeamLeader_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_CB_TeamLeader_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_RG_TeamLeader_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_TeamLeader_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_TeamLeader_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_MC_TeamLeader_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_TeamLeader_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_TeamLeader_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_CB_TeamLeader_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_RG_TeamLeader_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_TeamLeader_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_TeamLeader_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_MC_TeamLeader_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_TeamLeader_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_TeamLeader_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_CB_TeamLeader_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_RG_TeamLeader_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_TeamLeader_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_TeamLeader_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_MC_TeamLeader_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_TeamLeader_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_TeamLeader_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_CB_TeamLeader_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_RG_TeamLeader_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_TeamLeader_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_TeamLeader_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_MC_TeamLeader_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_TeamLeader_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_TeamLeader_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_CB_TeamLeader_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_RG_TeamLeader_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_TeamLeader_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_TeamLeader_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_MC_TeamLeader_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_TeamLeader_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_TeamLeader_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_CB_TeamLeader_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_RG_TeamLeader_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_TeamLeader_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_TeamLeader_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_MC_TeamLeader_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_TeamLeader_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_TeamLeader_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_CB_TeamLeader_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_RG_TeamLeader_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_TeamLeader_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_TeamLeader_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_MC_TeamLeader_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_TeamLeader_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_TeamLeader_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_CB_TeamLeader_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_RG_TeamLeader_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_TeamLeader_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_TeamLeader_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_MC_TeamLeader_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_TeamLeader_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_TeamLeader_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_CB_TeamLeader_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_RG_TeamLeader_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_TeamLeader_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_TeamLeader_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_MC_TeamLeader_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_TeamLeader_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_TeamLeader_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_CB_TeamLeader_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_RG_TeamLeader_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_TeamLeader_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_TeamLeader_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_MC_TeamLeader_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_TeamLeader_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_TeamLeader_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_CB_TeamLeader_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_RG_TeamLeader_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_TeamLeader_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_TeamLeader_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_MC_TeamLeader_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_TeamLeader_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_TeamLeader_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_CB_TeamLeader_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_RG_TeamLeader_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_TeamLeader_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_TeamLeader_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_MC_TeamLeader_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_TeamLeader_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_TeamLeader_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_CB_TeamLeader_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_RG_TeamLeader_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_TeamLeader_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_TeamLeader_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_MC_TeamLeader_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_TeamLeader_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_TeamLeader_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_CB_TeamLeader_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_RG_TeamLeader_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_TeamLeader_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_TeamLeader_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_MC_TeamLeader_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_TeamLeader_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_TeamLeader_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_CB_TeamLeader_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_RG_TeamLeader_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_TeamLeader_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_TeamLeader_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_MC_TeamLeader_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_TeamLeader_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_TeamLeader_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_CB_TeamLeader_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_RG_TeamLeader_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_TeamLeader_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_TeamLeader_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_MC_TeamLeader_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_TeamLeader_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_TeamLeader_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_CB_TeamLeader_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_RG_TeamLeader_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_TeamLeader_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_TeamLeader_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_MC_TeamLeader_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_TeamLeader_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_TeamLeader_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_CB_TeamLeader_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_RG_TeamLeader_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_TeamLeader_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_TeamLeader_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_MC_TeamLeader_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_TeamLeader_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_TeamLeader_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_CB_TeamLeader_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_RG_TeamLeader_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_TeamLeader_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_TeamLeader_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_MC_TeamLeader_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_TeamLeader_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_TeamLeader_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_CB_TeamLeader_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_RG_TeamLeader_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_TeamLeader_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_TeamLeader_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_MC_TeamLeader_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_TeamLeader_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_TeamLeader_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_CB_TeamLeader_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_RG_TeamLeader_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_TeamLeader_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_TeamLeader_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_MC_TeamLeader_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_TeamLeader_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_TeamLeader_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_CB_TeamLeader_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_RG_TeamLeader_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_TeamLeader_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_TeamLeader_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_MC_TeamLeader_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="G";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_TeamLeader_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="G";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_TeamLeader_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="G";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_CB_TeamLeader_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="G";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_RG_TeamLeader_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="G";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_TeamLeader_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="G";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_TeamLeader_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="G";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_MC_TeamLeader_7_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="G";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_TeamLeader_7_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="G";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_TeamLeader_7_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="G";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_CB_TeamLeader_7_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="G";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_RG_TeamLeader_7_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="G";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_TeamLeader_7_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="G";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_TeamLeader_7_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="G";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_MC_TeamLeader_7_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="G";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_TeamLeader_7_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="G";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_TeamLeader_7_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="G";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_CB_TeamLeader_7_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="G";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_RG_TeamLeader_7_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="G";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_TeamLeader_7_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="G";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_TeamLeader_7_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="G";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_MC_TeamLeader_7_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="G";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_TeamLeader_7_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="G";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_TeamLeader_7_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="G";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_CB_TeamLeader_7_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="G";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_RG_TeamLeader_7_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="G";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_TeamLeader_7_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="G";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_TeamLeader_7_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="G";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_MC_TeamLeader_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="H";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_TeamLeader_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="H";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_TeamLeader_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="H";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_CB_TeamLeader_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="H";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_RG_TeamLeader_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="H";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_TeamLeader_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="H";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_TeamLeader_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="H";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_MC_TeamLeader_8_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="H";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_TeamLeader_8_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="H";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_TeamLeader_8_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="H";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_CB_TeamLeader_8_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="H";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_RG_TeamLeader_8_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="H";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_TeamLeader_8_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="H";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_TeamLeader_8_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="H";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_MC_TeamLeader_8_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="H";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_TeamLeader_8_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="H";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_TeamLeader_8_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="H";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_CB_TeamLeader_8_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="H";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_RG_TeamLeader_8_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="H";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_TeamLeader_8_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="H";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_TeamLeader_8_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="H";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_MC_TeamLeader_8_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="H";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_TeamLeader_8_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="H";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_TeamLeader_8_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="H";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_CB_TeamLeader_8_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="H";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_RG_TeamLeader_8_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="H";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_TeamLeader_8_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="H";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_TeamLeader_8_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="H";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_MC_TeamLeader_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="I";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_TeamLeader_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="I";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_TeamLeader_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="I";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_CB_TeamLeader_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="I";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_RG_TeamLeader_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="I";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_TeamLeader_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="I";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_TeamLeader_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="I";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVS_MC_TeamLeader_9_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="I";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR1_TeamLeader_9_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="I";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_AOR2_TeamLeader_9_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="I";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_CB_TeamLeader_9_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="I";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_RG_TeamLeader_9_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="I";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_BLK_TeamLeader_9_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="I";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_ALP_TeamLeader_9_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="I";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVS_MC_TeamLeader_9_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="I";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_TeamLeader_9_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="I";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_TeamLeader_9_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="I";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_CB_TeamLeader_9_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="I";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_RG_TeamLeader_9_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="I";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_TeamLeader_9_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="I";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_TeamLeader_9_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="I";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVS_MC_TeamLeader_9_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="I";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR1_TeamLeader_9_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="I";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_AOR2_TeamLeader_9_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="I";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_CB_TeamLeader_9_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="I";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_RG_TeamLeader_9_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="I";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_BLK_TeamLeader_9_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="I";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVS_ALP_TeamLeader_9_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="I";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_MC_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR1_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR2_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_CB_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_RG_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_BLK_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_ALP_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_MC_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR1_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR2_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_CB_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_RG_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_BLK_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_ALP_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_MC_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR1_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR2_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_CB_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_RG_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_BLK_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_ALP_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_MC_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR1_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR2_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_CB_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_RG_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_BLK_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_ALP_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_MC_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR1_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR2_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_CB_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_RG_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_BLK_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_ALP_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_MC_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR1_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR2_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_CB_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_RG_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_BLK_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_ALP_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_MC_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR1_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR2_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_CB_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_RG_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_BLK_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_ALP_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_MC_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR1_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR2_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_CB_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_RG_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_BLK_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_ALP_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_MC_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR1_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR2_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_CB_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_RG_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_BLK_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_ALP_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_MC_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR1_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR2_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_CB_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_RG_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_BLK_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_ALP_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_MC_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR1_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR2_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_CB_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_RG_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_BLK_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_ALP_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_MC_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR1_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR2_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_CB_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_RG_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_BLK_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_ALP_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_MC_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR1_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR2_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_CB_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_RG_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_BLK_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_ALP_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_MC_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR1_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR2_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_CB_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_RG_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_BLK_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_ALP_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_MC_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR1_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR2_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_CB_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_RG_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_BLK_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_ALP_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_MC_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR1_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR2_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_CB_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_RG_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_BLK_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_ALP_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_MC_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR1_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR2_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_CB_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_RG_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_BLK_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_ALP_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_MC_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR1_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR2_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_CB_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_RG_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_BLK_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_ALP_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_MC_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR1_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR2_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_CB_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_RG_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_BLK_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_ALP_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_MC_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR1_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR2_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_CB_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_RG_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_BLK_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_ALP_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_MC_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR1_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR2_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_CB_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_RG_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_BLK_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_ALP_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_MC_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR1_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR2_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_CB_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_RG_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_BLK_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_ALP_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_MC_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR1_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR2_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_CB_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_RG_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_BLK_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_ALP_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_MC_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR1_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR2_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_CB_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_RG_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_BLK_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_ALP_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_MC_Comms_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR1_Comms_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR2_Comms_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_CB_Comms_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_RG_Comms_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_BLK_Comms_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_ALP_Comms_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_MC_Comms_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR1_Comms_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR2_Comms_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_CB_Comms_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_RG_Comms_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_BLK_Comms_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_ALP_Comms_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_MC_Comms_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR1_Comms_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR2_Comms_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_CB_Comms_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_RG_Comms_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_BLK_Comms_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_ALP_Comms_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_MC_Comms_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR1_Comms_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR2_Comms_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_CB_Comms_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_RG_Comms_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_BLK_Comms_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_ALP_Comms_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_MC_Comms_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR1_Comms_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR2_Comms_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_CB_Comms_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_RG_Comms_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_BLK_Comms_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_ALP_Comms_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_MC_Comms_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR1_Comms_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR2_Comms_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_CB_Comms_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_RG_Comms_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_BLK_Comms_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_ALP_Comms_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_MC_Comms_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR1_Comms_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR2_Comms_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_CB_Comms_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_RG_Comms_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_BLK_Comms_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_ALP_Comms_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_MC_Comms_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR1_Comms_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR2_Comms_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_CB_Comms_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_RG_Comms_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_BLK_Comms_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_ALP_Comms_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_MC_Comms_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR1_Comms_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR2_Comms_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_CB_Comms_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_RG_Comms_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_BLK_Comms_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_ALP_Comms_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_MC_Comms_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR1_Comms_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR2_Comms_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_CB_Comms_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_RG_Comms_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_BLK_Comms_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_ALP_Comms_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_MC_Comms_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR1_Comms_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR2_Comms_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_CB_Comms_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_RG_Comms_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_BLK_Comms_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_ALP_Comms_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_MC_Comms_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR1_Comms_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR2_Comms_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_CB_Comms_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_RG_Comms_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_BLK_Comms_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_ALP_Comms_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_MC_Comms_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Comms";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR1_Comms_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Comms";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR2_Comms_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Comms";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_CB_Comms_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Comms";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_RG_Comms_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Comms";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_BLK_Comms_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Comms";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_ALP_Comms_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Comms";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_MC_Comms_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Comms";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR1_Comms_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Comms";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR2_Comms_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Comms";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_CB_Comms_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Comms";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_RG_Comms_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Comms";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_BLK_Comms_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Comms";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_ALP_Comms_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Comms";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_MC_Comms_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Comms";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR1_Comms_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Comms";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR2_Comms_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Comms";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_CB_Comms_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Comms";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_RG_Comms_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Comms";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_BLK_Comms_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Comms";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_ALP_Comms_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Comms";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_MC_Comms_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Comms";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR1_Comms_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Comms";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR2_Comms_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Comms";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_CB_Comms_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Comms";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_RG_Comms_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Comms";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_BLK_Comms_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Comms";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_ALP_Comms_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Comms";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_MC_Comms_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Comms";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR1_Comms_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Comms";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR2_Comms_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Comms";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_CB_Comms_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Comms";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_RG_Comms_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Comms";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_BLK_Comms_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Comms";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_ALP_Comms_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Comms";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_MC_Comms_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Comms";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR1_Comms_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Comms";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR2_Comms_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Comms";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_CB_Comms_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Comms";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_RG_Comms_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Comms";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_BLK_Comms_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Comms";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_ALP_Comms_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Comms";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_MC_Comms_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Comms";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR1_Comms_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Comms";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR2_Comms_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Comms";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_CB_Comms_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Comms";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_RG_Comms_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Comms";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_BLK_Comms_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Comms";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_ALP_Comms_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Comms";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_MC_Comms_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Comms";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR1_Comms_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Comms";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR2_Comms_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Comms";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_CB_Comms_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Comms";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_RG_Comms_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Comms";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_BLK_Comms_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Comms";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_ALP_Comms_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Comms";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_MC_Comms_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Comms";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR1_Comms_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Comms";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR2_Comms_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Comms";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_CB_Comms_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Comms";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_RG_Comms_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Comms";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_BLK_Comms_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Comms";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_ALP_Comms_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Comms";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_MC_Comms_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Comms";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR1_Comms_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Comms";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR2_Comms_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Comms";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_CB_Comms_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Comms";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_RG_Comms_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Comms";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_BLK_Comms_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Comms";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_ALP_Comms_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Comms";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_MC_Comms_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Comms";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR1_Comms_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Comms";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR2_Comms_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Comms";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_CB_Comms_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Comms";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_RG_Comms_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Comms";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_BLK_Comms_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Comms";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_ALP_Comms_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Comms";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_MC_Comms_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Comms";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR1_Comms_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Comms";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR2_Comms_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Comms";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_CB_Comms_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Comms";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_RG_Comms_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Comms";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_BLK_Comms_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Comms";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_ALP_Comms_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Comms";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_MC_Light_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Light";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR1_Light_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Light";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR2_Light_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Light";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_CB_Light_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Light";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_RG_Light_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Light";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_BLK_Light_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Light";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_ALP_Light_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Light";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_MC_Light_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Light";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR1_Light_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Light";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR2_Light_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Light";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_CB_Light_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Light";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_RG_Light_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Light";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_BLK_Light_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Light";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_ALP_Light_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Light";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_MC_Light_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Light";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR1_Light_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Light";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR2_Light_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Light";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_CB_Light_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Light";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_RG_Light_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Light";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_BLK_Light_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Light";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_ALP_Light_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Light";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_MC_Light_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Light";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR1_Light_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Light";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR2_Light_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Light";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_CB_Light_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Light";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_RG_Light_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Light";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_BLK_Light_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Light";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_ALP_Light_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Light";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_MC_TeamLeader_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR1_TeamLeader_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR2_TeamLeader_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_CB_TeamLeader_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_RG_TeamLeader_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_BLK_TeamLeader_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_ALP_TeamLeader_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_MC_TeamLeader_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR1_TeamLeader_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR2_TeamLeader_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_CB_TeamLeader_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_RG_TeamLeader_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_BLK_TeamLeader_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_ALP_TeamLeader_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_MC_TeamLeader_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR1_TeamLeader_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR2_TeamLeader_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_CB_TeamLeader_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_RG_TeamLeader_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_BLK_TeamLeader_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_ALP_TeamLeader_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_MC_TeamLeader_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR1_TeamLeader_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR2_TeamLeader_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_CB_TeamLeader_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_RG_TeamLeader_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_BLK_TeamLeader_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_ALP_TeamLeader_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_MC_TeamLeader_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR1_TeamLeader_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR2_TeamLeader_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_CB_TeamLeader_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_RG_TeamLeader_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_BLK_TeamLeader_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_ALP_TeamLeader_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_MC_TeamLeader_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR1_TeamLeader_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR2_TeamLeader_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_CB_TeamLeader_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_RG_TeamLeader_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_BLK_TeamLeader_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_ALP_TeamLeader_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_MC_TeamLeader_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR1_TeamLeader_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR2_TeamLeader_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_CB_TeamLeader_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_RG_TeamLeader_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_BLK_TeamLeader_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_ALP_TeamLeader_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_MC_TeamLeader_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR1_TeamLeader_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR2_TeamLeader_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_CB_TeamLeader_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_RG_TeamLeader_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_BLK_TeamLeader_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_ALP_TeamLeader_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_MC_TeamLeader_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR1_TeamLeader_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR2_TeamLeader_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_CB_TeamLeader_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_RG_TeamLeader_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_BLK_TeamLeader_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_ALP_TeamLeader_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_MC_TeamLeader_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR1_TeamLeader_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR2_TeamLeader_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_CB_TeamLeader_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_RG_TeamLeader_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_BLK_TeamLeader_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_ALP_TeamLeader_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_MC_TeamLeader_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR1_TeamLeader_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR2_TeamLeader_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_CB_TeamLeader_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_RG_TeamLeader_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_BLK_TeamLeader_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_ALP_TeamLeader_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_MC_TeamLeader_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR1_TeamLeader_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR2_TeamLeader_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_CB_TeamLeader_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_RG_TeamLeader_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_BLK_TeamLeader_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_ALP_TeamLeader_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_MC_TeamLeader_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR1_TeamLeader_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR2_TeamLeader_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_CB_TeamLeader_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_RG_TeamLeader_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_BLK_TeamLeader_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_ALP_TeamLeader_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_MC_TeamLeader_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR1_TeamLeader_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR2_TeamLeader_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_CB_TeamLeader_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_RG_TeamLeader_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_BLK_TeamLeader_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_ALP_TeamLeader_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_MC_TeamLeader_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR1_TeamLeader_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR2_TeamLeader_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_CB_TeamLeader_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_RG_TeamLeader_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_BLK_TeamLeader_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_ALP_TeamLeader_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_MC_TeamLeader_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR1_TeamLeader_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR2_TeamLeader_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_CB_TeamLeader_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_RG_TeamLeader_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_BLK_TeamLeader_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_ALP_TeamLeader_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_MC_TeamLeader_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR1_TeamLeader_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR2_TeamLeader_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_CB_TeamLeader_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_RG_TeamLeader_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_BLK_TeamLeader_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_ALP_TeamLeader_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_MC_TeamLeader_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR1_TeamLeader_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR2_TeamLeader_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_CB_TeamLeader_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_RG_TeamLeader_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_BLK_TeamLeader_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_ALP_TeamLeader_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_MC_TeamLeader_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR1_TeamLeader_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR2_TeamLeader_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_CB_TeamLeader_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_RG_TeamLeader_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_BLK_TeamLeader_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_ALP_TeamLeader_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_MC_TeamLeader_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR1_TeamLeader_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR2_TeamLeader_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_CB_TeamLeader_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_RG_TeamLeader_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_BLK_TeamLeader_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_ALP_TeamLeader_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_MC_TeamLeader_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR1_TeamLeader_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR2_TeamLeader_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_CB_TeamLeader_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_RG_TeamLeader_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_BLK_TeamLeader_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_ALP_TeamLeader_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK11_MC_TeamLeader_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR1_TeamLeader_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_AOR2_TeamLeader_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_CB_TeamLeader_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_RG_TeamLeader_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_BLK_TeamLeader_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_ALP_TeamLeader_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK11_MC_TeamLeader_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR1_TeamLeader_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR2_TeamLeader_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_CB_TeamLeader_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_RG_TeamLeader_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_BLK_TeamLeader_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_ALP_TeamLeader_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK11_MC_TeamLeader_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR1_TeamLeader_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_AOR2_TeamLeader_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_CB_TeamLeader_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_RG_TeamLeader_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_BLK_TeamLeader_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK11_ALP_TeamLeader_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_MC_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR1_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR2_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_CB_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_RG_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_BLK_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_ALP_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_MC_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR1_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR2_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_CB_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_RG_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_BLK_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_ALP_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_MC_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR1_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR2_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_CB_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_RG_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_BLK_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_ALP_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_MC_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR1_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR2_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_CB_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_RG_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_BLK_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_ALP_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_MC_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR1_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR2_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_CB_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_RG_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_BLK_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_ALP_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_MC_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR1_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR2_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_CB_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_RG_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_BLK_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_ALP_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_MC_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR1_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR2_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_CB_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_RG_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_BLK_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_ALP_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_MC_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR1_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR2_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_CB_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_RG_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_BLK_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_ALP_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_MC_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR1_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR2_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_CB_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_RG_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_BLK_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_ALP_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_MC_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR1_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR2_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_CB_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_RG_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_BLK_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_ALP_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_MC_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR1_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR2_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_CB_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_RG_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_BLK_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_ALP_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_MC_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR1_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR2_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_CB_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_RG_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_BLK_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_ALP_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_MC_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR1_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR2_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_CB_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_RG_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_BLK_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_ALP_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_MC_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR1_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR2_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_CB_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_RG_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_BLK_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_ALP_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_MC_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR1_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR2_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_CB_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_RG_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_BLK_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_ALP_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_MC_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR1_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR2_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_CB_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_RG_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_BLK_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_ALP_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_MC_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR1_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR2_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_CB_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_RG_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_BLK_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_ALP_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_MC_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR1_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR2_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_CB_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_RG_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_BLK_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_ALP_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_MC_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR1_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR2_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_CB_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_RG_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_BLK_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_ALP_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_MC_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR1_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR2_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_CB_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_RG_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_BLK_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_ALP_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_MC_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR1_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR2_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_CB_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_RG_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_BLK_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_ALP_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_MC_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR1_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR2_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_CB_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_RG_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_BLK_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_ALP_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_MC_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR1_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR2_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_CB_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_RG_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_BLK_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_ALP_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_MC_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR1_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR2_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_CB_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_RG_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_BLK_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_ALP_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_MC_Comms_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR1_Comms_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR2_Comms_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_CB_Comms_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_RG_Comms_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_BLK_Comms_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_ALP_Comms_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_MC_Comms_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR1_Comms_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR2_Comms_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_CB_Comms_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_RG_Comms_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_BLK_Comms_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_ALP_Comms_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_MC_Comms_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR1_Comms_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR2_Comms_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_CB_Comms_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_RG_Comms_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_BLK_Comms_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_ALP_Comms_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_MC_Comms_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR1_Comms_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR2_Comms_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_CB_Comms_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_RG_Comms_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_BLK_Comms_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_ALP_Comms_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_MC_Comms_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR1_Comms_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR2_Comms_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_CB_Comms_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_RG_Comms_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_BLK_Comms_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_ALP_Comms_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_MC_Comms_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR1_Comms_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR2_Comms_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_CB_Comms_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_RG_Comms_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_BLK_Comms_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_ALP_Comms_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_MC_Comms_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR1_Comms_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR2_Comms_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_CB_Comms_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_RG_Comms_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_BLK_Comms_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_ALP_Comms_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_MC_Comms_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR1_Comms_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR2_Comms_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_CB_Comms_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_RG_Comms_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_BLK_Comms_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_ALP_Comms_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_MC_Comms_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR1_Comms_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR2_Comms_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_CB_Comms_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_RG_Comms_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_BLK_Comms_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_ALP_Comms_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_MC_Comms_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR1_Comms_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR2_Comms_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_CB_Comms_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_RG_Comms_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_BLK_Comms_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_ALP_Comms_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_MC_Comms_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR1_Comms_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR2_Comms_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_CB_Comms_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_RG_Comms_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_BLK_Comms_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_ALP_Comms_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_MC_Comms_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR1_Comms_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR2_Comms_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_CB_Comms_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_RG_Comms_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_BLK_Comms_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_ALP_Comms_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_MC_Comms_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Comms";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR1_Comms_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Comms";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR2_Comms_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Comms";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_CB_Comms_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Comms";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_RG_Comms_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Comms";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_BLK_Comms_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Comms";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_ALP_Comms_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Comms";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_MC_Comms_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Comms";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR1_Comms_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Comms";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR2_Comms_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Comms";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_CB_Comms_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Comms";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_RG_Comms_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Comms";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_BLK_Comms_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Comms";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_ALP_Comms_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Comms";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_MC_Comms_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Comms";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR1_Comms_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Comms";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR2_Comms_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Comms";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_CB_Comms_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Comms";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_RG_Comms_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Comms";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_BLK_Comms_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Comms";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_ALP_Comms_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Comms";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_MC_Comms_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Comms";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR1_Comms_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Comms";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR2_Comms_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Comms";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_CB_Comms_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Comms";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_RG_Comms_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Comms";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_BLK_Comms_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Comms";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_ALP_Comms_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Comms";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_MC_Comms_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Comms";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR1_Comms_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Comms";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR2_Comms_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Comms";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_CB_Comms_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Comms";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_RG_Comms_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Comms";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_BLK_Comms_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Comms";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_ALP_Comms_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Comms";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_MC_Comms_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Comms";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR1_Comms_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Comms";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR2_Comms_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Comms";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_CB_Comms_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Comms";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_RG_Comms_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Comms";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_BLK_Comms_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Comms";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_ALP_Comms_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Comms";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_MC_Comms_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Comms";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR1_Comms_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Comms";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR2_Comms_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Comms";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_CB_Comms_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Comms";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_RG_Comms_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Comms";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_BLK_Comms_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Comms";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_ALP_Comms_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Comms";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_MC_Comms_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Comms";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR1_Comms_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Comms";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR2_Comms_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Comms";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_CB_Comms_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Comms";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_RG_Comms_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Comms";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_BLK_Comms_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Comms";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_ALP_Comms_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Comms";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_MC_Comms_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Comms";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR1_Comms_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Comms";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR2_Comms_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Comms";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_CB_Comms_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Comms";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_RG_Comms_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Comms";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_BLK_Comms_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Comms";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_ALP_Comms_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Comms";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_MC_Comms_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Comms";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR1_Comms_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Comms";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR2_Comms_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Comms";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_CB_Comms_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Comms";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_RG_Comms_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Comms";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_BLK_Comms_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Comms";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_ALP_Comms_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Comms";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_MC_Comms_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Comms";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR1_Comms_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Comms";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR2_Comms_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Comms";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_CB_Comms_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Comms";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_RG_Comms_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Comms";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_BLK_Comms_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Comms";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_ALP_Comms_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Comms";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_MC_Comms_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Comms";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR1_Comms_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Comms";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR2_Comms_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Comms";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_CB_Comms_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Comms";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_RG_Comms_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Comms";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_BLK_Comms_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Comms";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_ALP_Comms_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Comms";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_MC_Light_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Light";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR1_Light_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Light";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR2_Light_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Light";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_CB_Light_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Light";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_RG_Light_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Light";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_BLK_Light_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Light";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_ALP_Light_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Light";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_MC_Light_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Light";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR1_Light_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Light";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR2_Light_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Light";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_CB_Light_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Light";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_RG_Light_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Light";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_BLK_Light_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Light";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_ALP_Light_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Light";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_MC_Light_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Light";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR1_Light_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Light";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR2_Light_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Light";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_CB_Light_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Light";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_RG_Light_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Light";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_BLK_Light_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Light";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_ALP_Light_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Light";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_MC_Light_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Light";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR1_Light_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Light";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR2_Light_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Light";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_CB_Light_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Light";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_RG_Light_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Light";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_BLK_Light_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Light";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_ALP_Light_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Light";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_MC_TeamLeader_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR1_TeamLeader_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR2_TeamLeader_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_CB_TeamLeader_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_RG_TeamLeader_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_BLK_TeamLeader_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_ALP_TeamLeader_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_MC_TeamLeader_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR1_TeamLeader_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR2_TeamLeader_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_CB_TeamLeader_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_RG_TeamLeader_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_BLK_TeamLeader_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_ALP_TeamLeader_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_MC_TeamLeader_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR1_TeamLeader_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR2_TeamLeader_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_CB_TeamLeader_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_RG_TeamLeader_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_BLK_TeamLeader_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_ALP_TeamLeader_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_MC_TeamLeader_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR1_TeamLeader_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR2_TeamLeader_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_CB_TeamLeader_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_RG_TeamLeader_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_BLK_TeamLeader_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_ALP_TeamLeader_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_MC_TeamLeader_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR1_TeamLeader_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR2_TeamLeader_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_CB_TeamLeader_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_RG_TeamLeader_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_BLK_TeamLeader_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_ALP_TeamLeader_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_MC_TeamLeader_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR1_TeamLeader_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR2_TeamLeader_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_CB_TeamLeader_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_RG_TeamLeader_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_BLK_TeamLeader_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_ALP_TeamLeader_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_MC_TeamLeader_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR1_TeamLeader_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR2_TeamLeader_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_CB_TeamLeader_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_RG_TeamLeader_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_BLK_TeamLeader_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_ALP_TeamLeader_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_MC_TeamLeader_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR1_TeamLeader_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR2_TeamLeader_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_CB_TeamLeader_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_RG_TeamLeader_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_BLK_TeamLeader_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_ALP_TeamLeader_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_MC_TeamLeader_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR1_TeamLeader_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR2_TeamLeader_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_CB_TeamLeader_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_RG_TeamLeader_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_BLK_TeamLeader_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_ALP_TeamLeader_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_MC_TeamLeader_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR1_TeamLeader_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR2_TeamLeader_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_CB_TeamLeader_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_RG_TeamLeader_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_BLK_TeamLeader_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_ALP_TeamLeader_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_MC_TeamLeader_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR1_TeamLeader_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR2_TeamLeader_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_CB_TeamLeader_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_RG_TeamLeader_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_BLK_TeamLeader_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_ALP_TeamLeader_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_MC_TeamLeader_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR1_TeamLeader_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR2_TeamLeader_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_CB_TeamLeader_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_RG_TeamLeader_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_BLK_TeamLeader_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_ALP_TeamLeader_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_MC_TeamLeader_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR1_TeamLeader_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR2_TeamLeader_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_CB_TeamLeader_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_RG_TeamLeader_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_BLK_TeamLeader_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_ALP_TeamLeader_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="D";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_MC_TeamLeader_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR1_TeamLeader_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR2_TeamLeader_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_CB_TeamLeader_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_RG_TeamLeader_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_BLK_TeamLeader_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_ALP_TeamLeader_4_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="D";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_MC_TeamLeader_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR1_TeamLeader_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR2_TeamLeader_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_CB_TeamLeader_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_RG_TeamLeader_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_BLK_TeamLeader_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_ALP_TeamLeader_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="D";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_MC_TeamLeader_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR1_TeamLeader_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR2_TeamLeader_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_CB_TeamLeader_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_RG_TeamLeader_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_BLK_TeamLeader_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_ALP_TeamLeader_4_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="D";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_MC_TeamLeader_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR1_TeamLeader_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR2_TeamLeader_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_CB_TeamLeader_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_RG_TeamLeader_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_BLK_TeamLeader_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_ALP_TeamLeader_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="E";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_MC_TeamLeader_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR1_TeamLeader_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR2_TeamLeader_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_CB_TeamLeader_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_RG_TeamLeader_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_BLK_TeamLeader_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_ALP_TeamLeader_5_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="E";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_MC_TeamLeader_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR1_TeamLeader_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR2_TeamLeader_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_CB_TeamLeader_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_RG_TeamLeader_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_BLK_TeamLeader_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_ALP_TeamLeader_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="E";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_MC_TeamLeader_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR1_TeamLeader_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR2_TeamLeader_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_CB_TeamLeader_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_RG_TeamLeader_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_BLK_TeamLeader_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_ALP_TeamLeader_5_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="E";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_MC_TeamLeader_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR1_TeamLeader_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR2_TeamLeader_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_CB_TeamLeader_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_RG_TeamLeader_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_BLK_TeamLeader_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_ALP_TeamLeader_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="F";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMK17_MC_TeamLeader_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR1_TeamLeader_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_AOR2_TeamLeader_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_CB_TeamLeader_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_RG_TeamLeader_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_BLK_TeamLeader_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_ALP_TeamLeader_6_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="F";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMK17_MC_TeamLeader_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR1_TeamLeader_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR2_TeamLeader_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_CB_TeamLeader_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_RG_TeamLeader_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_BLK_TeamLeader_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_ALP_TeamLeader_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="F";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMK17_MC_TeamLeader_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR1_TeamLeader_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_AOR2_TeamLeader_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_CB_TeamLeader_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_RG_TeamLeader_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_BLK_TeamLeader_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMK17_ALP_TeamLeader_6_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="F";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_MC_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_AOR1_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_AOR2_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_CB_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_RG_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_BLK_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_ALP_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_MC_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_AOR1_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_AOR2_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_CB_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_RG_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_BLK_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_ALP_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_MC_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_AOR1_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_AOR2_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_CB_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_RG_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_BLK_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_ALP_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_MC_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_AOR1_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_AOR2_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_CB_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_RG_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_BLK_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_ALP_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_MC_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_AOR1_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_AOR2_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_CB_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_RG_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_BLK_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_ALP_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_MC_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_AOR1_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_AOR2_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_CB_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_RG_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_BLK_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_ALP_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_MC_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_AOR1_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_AOR2_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_CB_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_RG_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_BLK_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_ALP_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_MC_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_AOR1_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_AOR2_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_CB_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_RG_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_BLK_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_ALP_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_MC_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_AOR1_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_AOR2_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_CB_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_RG_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_BLK_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_ALP_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_MC_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_AOR1_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_AOR2_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_CB_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_RG_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_BLK_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_ALP_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_MC_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_AOR1_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_AOR2_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_CB_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_RG_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_BLK_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_ALP_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_MC_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_AOR1_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_AOR2_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_CB_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_RG_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_BLK_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_ALP_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_MC_Comms_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MP7";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_AOR1_Comms_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MP7";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_AOR2_Comms_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MP7";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_CB_Comms_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MP7";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_RG_Comms_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MP7";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_BLK_Comms_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MP7";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_ALP_Comms_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MP7";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_MC_Comms_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MP7";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_AOR1_Comms_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MP7";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_AOR2_Comms_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MP7";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_CB_Comms_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MP7";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_RG_Comms_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MP7";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_BLK_Comms_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MP7";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_ALP_Comms_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MP7";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_MC_Comms_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MP7";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_AOR1_Comms_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MP7";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_AOR2_Comms_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MP7";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_CB_Comms_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MP7";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_RG_Comms_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MP7";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_BLK_Comms_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MP7";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_ALP_Comms_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MP7";
			Role="Comms";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_MC_Comms_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MP7";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_AOR1_Comms_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MP7";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_AOR2_Comms_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MP7";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_CB_Comms_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MP7";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_RG_Comms_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MP7";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_BLK_Comms_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MP7";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_ALP_Comms_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MP7";
			Role="Comms";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_MC_Comms_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MP7";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_AOR1_Comms_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MP7";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_AOR2_Comms_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MP7";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_CB_Comms_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MP7";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_RG_Comms_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MP7";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_BLK_Comms_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MP7";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_ALP_Comms_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MP7";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_MC_Comms_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MP7";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_AOR1_Comms_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MP7";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_AOR2_Comms_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MP7";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_CB_Comms_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MP7";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_RG_Comms_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MP7";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_BLK_Comms_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MP7";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_ALP_Comms_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MP7";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_MC_Comms_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MP7";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_AOR1_Comms_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MP7";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_AOR2_Comms_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MP7";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_CB_Comms_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MP7";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_RG_Comms_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MP7";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_BLK_Comms_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MP7";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_ALP_Comms_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MP7";
			Role="Comms";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_MC_Comms_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MP7";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_AOR1_Comms_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MP7";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_AOR2_Comms_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MP7";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_CB_Comms_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MP7";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_RG_Comms_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MP7";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_BLK_Comms_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MP7";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_ALP_Comms_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MP7";
			Role="Comms";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_MC_Comms_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MP7";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_AOR1_Comms_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MP7";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_AOR2_Comms_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MP7";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_CB_Comms_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MP7";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_RG_Comms_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MP7";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_BLK_Comms_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MP7";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_ALP_Comms_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MP7";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_MC_Comms_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MP7";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_AOR1_Comms_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MP7";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_AOR2_Comms_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MP7";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_CB_Comms_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MP7";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_RG_Comms_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MP7";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_BLK_Comms_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MP7";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_ALP_Comms_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MP7";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_MC_Comms_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MP7";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_AOR1_Comms_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MP7";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_AOR2_Comms_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MP7";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_CB_Comms_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MP7";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_RG_Comms_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MP7";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_BLK_Comms_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MP7";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_ALP_Comms_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MP7";
			Role="Comms";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_MC_Comms_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MP7";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_AOR1_Comms_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MP7";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_AOR2_Comms_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MP7";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_CB_Comms_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MP7";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_RG_Comms_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MP7";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_BLK_Comms_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MP7";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_ALP_Comms_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MP7";
			Role="Comms";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_MC_Light_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MP7";
			Role="Light";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_AOR1_Light_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MP7";
			Role="Light";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_AOR2_Light_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MP7";
			Role="Light";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_CB_Light_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MP7";
			Role="Light";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_RG_Light_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MP7";
			Role="Light";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_BLK_Light_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MP7";
			Role="Light";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_ALP_Light_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MP7";
			Role="Light";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_MC_Light_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MP7";
			Role="Light";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_AOR1_Light_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MP7";
			Role="Light";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_AOR2_Light_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MP7";
			Role="Light";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_CB_Light_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MP7";
			Role="Light";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_RG_Light_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MP7";
			Role="Light";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_BLK_Light_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MP7";
			Role="Light";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_ALP_Light_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MP7";
			Role="Light";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_MC_TeamLeader_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_AOR1_TeamLeader_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_AOR2_TeamLeader_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_CB_TeamLeader_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_RG_TeamLeader_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_BLK_TeamLeader_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_ALP_TeamLeader_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_MC_TeamLeader_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_AOR1_TeamLeader_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_AOR2_TeamLeader_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_CB_TeamLeader_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_RG_TeamLeader_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_BLK_TeamLeader_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_ALP_TeamLeader_1_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_MC_TeamLeader_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_AOR1_TeamLeader_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_AOR2_TeamLeader_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_CB_TeamLeader_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_RG_TeamLeader_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_BLK_TeamLeader_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_ALP_TeamLeader_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="A";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_MC_TeamLeader_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_AOR1_TeamLeader_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_AOR2_TeamLeader_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_CB_TeamLeader_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_RG_TeamLeader_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_BLK_TeamLeader_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_ALP_TeamLeader_1_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="A";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_MC_TeamLeader_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_AOR1_TeamLeader_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_AOR2_TeamLeader_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_CB_TeamLeader_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_RG_TeamLeader_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_BLK_TeamLeader_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_ALP_TeamLeader_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_MC_TeamLeader_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_AOR1_TeamLeader_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_AOR2_TeamLeader_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_CB_TeamLeader_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_RG_TeamLeader_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_BLK_TeamLeader_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_ALP_TeamLeader_2_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_MC_TeamLeader_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_AOR1_TeamLeader_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_AOR2_TeamLeader_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_CB_TeamLeader_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_RG_TeamLeader_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_BLK_TeamLeader_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_ALP_TeamLeader_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="B";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_MC_TeamLeader_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_AOR1_TeamLeader_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_AOR2_TeamLeader_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_CB_TeamLeader_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_RG_TeamLeader_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_BLK_TeamLeader_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_ALP_TeamLeader_2_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="B";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_MC_TeamLeader_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_AOR1_TeamLeader_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_AOR2_TeamLeader_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_CB_TeamLeader_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_RG_TeamLeader_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_BLK_TeamLeader_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_ALP_TeamLeader_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="on";
		};
	};
	class Crye_AVSMP7_MC_TeamLeader_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_AOR1_TeamLeader_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_AOR2_TeamLeader_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_CB_TeamLeader_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_RG_TeamLeader_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_BLK_TeamLeader_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_ALP_TeamLeader_3_NC: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="on";
		};
	};
	class Crye_AVSMP7_MC_TeamLeader_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_AOR1_TeamLeader_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_AOR2_TeamLeader_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_CB_TeamLeader_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_RG_TeamLeader_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_BLK_TeamLeader_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_ALP_TeamLeader_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="C";
			Cummer="On";
			Belt="off";
		};
	};
	class Crye_AVSMP7_MC_TeamLeader_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mc";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_AOR1_TeamLeader_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor1";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_AOR2_TeamLeader_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="aor2";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_CB_TeamLeader_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="cb";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_RG_TeamLeader_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="rg";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_BLK_TeamLeader_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="blk";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_AVSMP7_ALP_TeamLeader_3_NC_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_avs";
			camo="mcal";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="C";
			Cummer="Off";
			Belt="off";
		};
	};
	class Crye_JPC_MC_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPC_AOR1_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPC_AOR2_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPC_CB_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPC_RG_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPC_BLK_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPC_ALP_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPC_MC_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPC_AOR1_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPC_AOR2_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPC_CB_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPC_RG_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPC_BLK_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPC_ALP_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPC_MC_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPC_AOR1_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPC_AOR2_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPC_CB_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPC_RG_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPC_BLK_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPC_ALP_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPC_MC_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPC_AOR1_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPC_AOR2_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPC_CB_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPC_RG_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPC_BLK_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPC_ALP_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPC_MC_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPC_AOR1_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPC_AOR2_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPC_CB_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPC_RG_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPC_BLK_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPC_ALP_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPC_MC_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPC_AOR1_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPC_AOR2_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPC_CB_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPC_RG_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPC_BLK_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPC_ALP_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPC_MC_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPC_AOR1_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPC_AOR2_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPC_CB_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPC_RG_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPC_BLK_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPC_ALP_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPC_MC_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPC_AOR1_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPC_AOR2_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPC_CB_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPC_RG_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPC_BLK_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPC_ALP_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPC_MC_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPC_AOR1_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPC_AOR2_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPC_CB_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPC_RG_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPC_BLK_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPC_ALP_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPC_MC_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPC_AOR1_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPC_AOR2_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPC_CB_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPC_RG_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPC_BLK_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPC_ALP_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPC_MC_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPC_AOR1_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPC_AOR2_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPC_CB_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPC_RG_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPC_BLK_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPC_ALP_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPC_MC_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPC_AOR1_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPC_AOR2_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPC_CB_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPC_RG_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPC_BLK_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPC_ALP_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPC_MC_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="G";
			Belt="on";
		};
	};
	class Crye_JPC_AOR1_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="G";
			Belt="on";
		};
	};
	class Crye_JPC_AOR2_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="G";
			Belt="on";
		};
	};
	class Crye_JPC_CB_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="G";
			Belt="on";
		};
	};
	class Crye_JPC_RG_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="G";
			Belt="on";
		};
	};
	class Crye_JPC_BLK_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="G";
			Belt="on";
		};
	};
	class Crye_JPC_ALP_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="G";
			Belt="on";
		};
	};
	class Crye_JPC_MC_7_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="G";
			Belt="off";
		};
	};
	class Crye_JPC_AOR1_7_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="G";
			Belt="off";
		};
	};
	class Crye_JPC_AOR2_7_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="G";
			Belt="off";
		};
	};
	class Crye_JPC_CB_7_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="G";
			Belt="off";
		};
	};
	class Crye_JPC_RG_7_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="G";
			Belt="off";
		};
	};
	class Crye_JPC_BLK_7_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="G";
			Belt="off";
		};
	};
	class Crye_JPC_ALP_7_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="G";
			Belt="off";
		};
	};
	class Crye_JPC_MC_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="H";
			Belt="on";
		};
	};
	class Crye_JPC_AOR1_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="H";
			Belt="on";
		};
	};
	class Crye_JPC_AOR2_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="H";
			Belt="on";
		};
	};
	class Crye_JPC_CB_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="H";
			Belt="on";
		};
	};
	class Crye_JPC_RG_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="H";
			Belt="on";
		};
	};
	class Crye_JPC_BLK_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="H";
			Belt="on";
		};
	};
	class Crye_JPC_ALP_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="H";
			Belt="on";
		};
	};
	class Crye_JPC_MC_8_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="H";
			Belt="off";
		};
	};
	class Crye_JPC_AOR1_8_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="H";
			Belt="off";
		};
	};
	class Crye_JPC_AOR2_8_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="H";
			Belt="off";
		};
	};
	class Crye_JPC_CB_8_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="H";
			Belt="off";
		};
	};
	class Crye_JPC_RG_8_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="H";
			Belt="off";
		};
	};
	class Crye_JPC_BLK_8_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="H";
			Belt="off";
		};
	};
	class Crye_JPC_ALP_8_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="H";
			Belt="off";
		};
	};
	class Crye_JPC_MC_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="I";
			Belt="on";
		};
	};
	class Crye_JPC_AOR1_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="I";
			Belt="on";
		};
	};
	class Crye_JPC_AOR2_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="I";
			Belt="on";
		};
	};
	class Crye_JPC_CB_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="I";
			Belt="on";
		};
	};
	class Crye_JPC_RG_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="I";
			Belt="on";
		};
	};
	class Crye_JPC_BLK_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="I";
			Belt="on";
		};
	};
	class Crye_JPC_ALP_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="I";
			Belt="on";
		};
	};
	class Crye_JPC_MC_9_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="I";
			Belt="off";
		};
	};
	class Crye_JPC_AOR1_9_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="I";
			Belt="off";
		};
	};
	class Crye_JPC_AOR2_9_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="I";
			Belt="off";
		};
	};
	class Crye_JPC_CB_9_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="I";
			Belt="off";
		};
	};
	class Crye_JPC_RG_9_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="I";
			Belt="off";
		};
	};
	class Crye_JPC_BLK_9_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="I";
			Belt="off";
		};
	};
	class Crye_JPC_ALP_9_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="I";
			Belt="off";
		};
	};
	class Crye_JPC_MC_10: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="J";
			Belt="on";
		};
	};
	class Crye_JPC_AOR1_10: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="J";
			Belt="on";
		};
	};
	class Crye_JPC_AOR2_10: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="J";
			Belt="on";
		};
	};
	class Crye_JPC_CB_10: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="J";
			Belt="on";
		};
	};
	class Crye_JPC_RG_10: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="J";
			Belt="on";
		};
	};
	class Crye_JPC_BLK_10: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="J";
			Belt="on";
		};
	};
	class Crye_JPC_ALP_10: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="J";
			Belt="on";
		};
	};
	class Crye_JPC_MC_10_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="J";
			Belt="off";
		};
	};
	class Crye_JPC_AOR1_10_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="J";
			Belt="off";
		};
	};
	class Crye_JPC_AOR2_10_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="J";
			Belt="off";
		};
	};
	class Crye_JPC_CB_10_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="J";
			Belt="off";
		};
	};
	class Crye_JPC_RG_10_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="J";
			Belt="off";
		};
	};
	class Crye_JPC_BLK_10_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="J";
			Belt="off";
		};
	};
	class Crye_JPC_ALP_10_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="J";
			Belt="off";
		};
	};
	class Crye_JPC_MC_11: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="K";
			Belt="on";
		};
	};
	class Crye_JPC_AOR1_11: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="K";
			Belt="on";
		};
	};
	class Crye_JPC_AOR2_11: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="K";
			Belt="on";
		};
	};
	class Crye_JPC_CB_11: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="K";
			Belt="on";
		};
	};
	class Crye_JPC_RG_11: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="K";
			Belt="on";
		};
	};
	class Crye_JPC_BLK_11: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="K";
			Belt="on";
		};
	};
	class Crye_JPC_ALP_11: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="K";
			Belt="on";
		};
	};
	class Crye_JPC_MC_11_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="K";
			Belt="off";
		};
	};
	class Crye_JPC_AOR1_11_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="K";
			Belt="off";
		};
	};
	class Crye_JPC_AOR2_11_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="K";
			Belt="off";
		};
	};
	class Crye_JPC_CB_11_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="K";
			Belt="off";
		};
	};
	class Crye_JPC_RG_11_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="K";
			Belt="off";
		};
	};
	class Crye_JPC_BLK_11_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="K";
			Belt="off";
		};
	};
	class Crye_JPC_ALP_11_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="K";
			Belt="off";
		};
	};
	class Crye_JPC_MC_12: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="L";
			Belt="on";
		};
	};
	class Crye_JPC_AOR1_12: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="L";
			Belt="on";
		};
	};
	class Crye_JPC_AOR2_12: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="L";
			Belt="on";
		};
	};
	class Crye_JPC_CB_12: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="L";
			Belt="on";
		};
	};
	class Crye_JPC_RG_12: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="L";
			Belt="on";
		};
	};
	class Crye_JPC_BLK_12: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="L";
			Belt="on";
		};
	};
	class Crye_JPC_ALP_12: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="L";
			Belt="on";
		};
	};
	class Crye_JPC_MC_12_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Assaulter";
			Loadout="L";
			Belt="off";
		};
	};
	class Crye_JPC_AOR1_12_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Assaulter";
			Loadout="L";
			Belt="off";
		};
	};
	class Crye_JPC_AOR2_12_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Assaulter";
			Loadout="L";
			Belt="off";
		};
	};
	class Crye_JPC_CB_12_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Assaulter";
			Loadout="L";
			Belt="off";
		};
	};
	class Crye_JPC_RG_12_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Assaulter";
			Loadout="L";
			Belt="off";
		};
	};
	class Crye_JPC_BLK_12_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Assaulter";
			Loadout="L";
			Belt="off";
		};
	};
	class Crye_JPC_ALP_12_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Assaulter";
			Loadout="L";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_MC_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_AOR1_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_AOR2_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_CB_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_RG_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_BLK_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_ALP_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_MC_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_AOR1_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_AOR2_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_CB_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_RG_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_BLK_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_ALP_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_MC_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_AOR1_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_AOR2_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_CB_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_RG_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_BLK_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_ALP_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_MC_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_Comms_AOR1_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_AOR2_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_CB_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_RG_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_BLK_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_ALP_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_MC_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_AOR1_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_AOR2_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_CB_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_RG_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_BLK_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_ALP_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_MC_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_AOR1_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_AOR2_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_CB_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_RG_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_BLK_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_ALP_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_MC_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_AOR1_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_AOR2_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_CB_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_RG_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_BLK_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_ALP_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_MC_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_AOR1_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_AOR2_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_CB_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_RG_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_BLK_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_ALP_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_MC_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_AOR1_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_AOR2_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_CB_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_RG_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_BLK_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_ALP_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_MC_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_AOR1_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_AOR2_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_CB_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_RG_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_BLK_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_ALP_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_MC_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_AOR1_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_AOR2_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_CB_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_RG_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_BLK_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_ALP_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_MC_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_AOR1_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_AOR2_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_CB_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_RG_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_BLK_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_ALP_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_MC_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="G";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_AOR1_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="G";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_AOR2_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="G";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_CB_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="G";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_RG_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="G";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_BLK_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="G";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_ALP_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="G";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_MC_7_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="G";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_AOR1_7_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="G";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_AOR2_7_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="G";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_CB_7_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="G";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_RG_7_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="G";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_BLK_7_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="G";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_ALP_7_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="G";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_MC_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="H";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_AOR1_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="H";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_AOR2_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="H";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_CB_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="H";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_RG_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="H";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_BLK_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="H";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_ALP_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="H";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_MC_8_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="H";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_AOR1_8_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="H";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_AOR2_8_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="H";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_CB_8_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="H";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_RG_8_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="H";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_BLK_8_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="H";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_ALP_8_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="H";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_MC_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="I";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_AOR1_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="I";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_AOR2_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="I";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_CB_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="I";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_RG_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="I";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_BLK_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="I";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_ALP_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="I";
			Belt="on";
		};
	};
	class Crye_JPC_Comms_MC_9_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Comms";
			Loadout="I";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_AOR1_9_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Comms";
			Loadout="I";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_AOR2_9_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Comms";
			Loadout="I";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_CB_9_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Comms";
			Loadout="I";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_RG_9_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Comms";
			Loadout="I";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_BLK_9_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Comms";
			Loadout="I";
			Belt="off";
		};
	};
	class Crye_JPC_Comms_ALP_9_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Comms";
			Loadout="I";
			Belt="off";
		};
	};
	class Crye_JPC_Light_MC_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Light";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPC_Light_AOR1_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Light";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPC_Light_AOR2_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Light";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPC_Light_CB_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Light";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPC_Light_RG_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Light";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPC_Light_BLK_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Light";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPC_Light_ALP_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Light";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPC_Light_MC_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Light";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPC_Light_AOR1_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Light";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPC_Light_AOR2_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Light";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPC_Light_CB_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Light";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPC_Light_RG_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Light";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPC_Light_BLK_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Light";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPC_Light_ALP_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Light";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPC_Light_MC_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Light";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPC_Light_AOR1_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Light";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPC_Light_AOR2_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Light";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPC_Light_CB_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Light";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPC_Light_RG_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Light";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPC_Light_BLK_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Light";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPC_Light_ALP_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Light";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPC_Medic_MC_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Medic";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPC_Medic_AOR1_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Medic";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPC_Medic_AOR2_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Medic";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPC_Medic_CB_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Medic";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPC_Medic_RG_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Medic";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPC_Medic_BLK_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Medic";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPC_Medic_ALP_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Medic";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPC_Medic_MC__NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Medic";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPC_Medic_AOR1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Medic";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPC_Medic_AOR2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Medic";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPC_Medic_CB_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Medic";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPC_Medic_RG_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Medic";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPC_Medic_BLK_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Medic";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPC_Medic_ALP_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Medic";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_MC_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_AOR1_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_AOR2_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_CB_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_RG_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_BLK_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_ALP_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_MC_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_AOR1_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_AOR2_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_CB_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_RG_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_BLK_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_ALP_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_MC_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_AOR1_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_AOR2_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_CB_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_RG_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_BLK_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_ALP_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_MC_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_TeamLeader_AOR1_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_AOR2_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_CB_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_RG_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_BLK_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_ALP_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_MC_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_AOR1_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_AOR2_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_CB_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_RG_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_BLK_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_ALP_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_MC_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_AOR1_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_AOR2_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_CB_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_RG_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_BLK_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_ALP_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_MC_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_AOR1_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_AOR2_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_CB_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_RG_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_BLK_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_ALP_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_MC_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_AOR1_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_AOR2_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_CB_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_RG_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_BLK_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_ALP_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_MC_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_AOR1_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_AOR2_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_CB_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_RG_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_BLK_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_ALP_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_MC_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_AOR1_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_AOR2_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_CB_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_RG_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_BLK_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_ALP_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_MC_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_AOR1_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_AOR2_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_CB_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_RG_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_BLK_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_ALP_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_MC_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_AOR1_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_AOR2_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_CB_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_RG_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_BLK_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_ALP_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_MC_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="G";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_AOR1_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="G";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_AOR2_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="G";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_CB_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="G";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_RG_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="G";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_BLK_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="G";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_ALP_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="G";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_MC_7_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="G";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_AOR1_7_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="G";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_AOR2_7_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="G";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_CB_7_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="G";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_RG_7_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="G";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_BLK_7_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="G";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_ALP_7_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="G";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_MC_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="H";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_AOR1_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="H";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_AOR2_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="H";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_CB_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="H";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_RG_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="H";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_BLK_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="H";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_ALP_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="H";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_MC_8_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="H";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_AOR1_8_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="H";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_AOR2_8_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="H";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_CB_8_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="H";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_RG_8_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="H";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_BLK_8_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="H";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_ALP_8_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="H";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_MC_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="I";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_AOR1_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="I";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_AOR2_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="I";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_CB_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="I";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_RG_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="I";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_BLK_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="I";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_ALP_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="I";
			Belt="on";
		};
	};
	class Crye_JPC_TeamLeader_MC_9_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="Teamleader";
			Loadout="I";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_AOR1_9_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="Teamleader";
			Loadout="I";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_AOR2_9_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="Teamleader";
			Loadout="I";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_CB_9_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="Teamleader";
			Loadout="I";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_RG_9_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="Teamleader";
			Loadout="I";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_BLK_9_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="Teamleader";
			Loadout="I";
			Belt="off";
		};
	};
	class Crye_JPC_TeamLeader_ALP_9_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="Teamleader";
			Loadout="I";
			Belt="off";
		};
	};
	class Crye_JPCMK11_MC_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMK11_AOR1_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMK11_AOR2_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMK11_CB_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMK11_RG_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMK11_BLK_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMK11_ALP_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMK11_MC_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK11_AOR1_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK11_AOR2_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK11_CB_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK11_RG_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK11_BLK_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK11_ALP_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK11_MC_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMK11_AOR1_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMK11_AOR2_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMK11_CB_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMK11_RG_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMK11_BLK_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMK11_ALP_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMK11_MC_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK11_AOR1_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK11_AOR2_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK11_CB_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK11_RG_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK11_BLK_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK11_ALP_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK11_MC_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMK11_AOR1_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMK11_AOR2_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMK11_CB_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMK11_RG_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMK11_BLK_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMK11_ALP_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMK11_MC_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMK11_AOR1_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMK11_AOR2_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMK11_CB_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMK11_RG_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMK11_BLK_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMK11_ALP_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMK11_MC_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPCMK11_AOR1_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPCMK11_AOR2_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPCMK11_CB_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPCMK11_RG_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPCMK11_BLK_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPCMK11_ALP_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPCMK11_MC_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPCMK11_AOR1_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPCMK11_AOR2_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPCMK11_CB_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPCMK11_RG_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPCMK11_BLK_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPCMK11_ALP_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPCMK11_MC_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPCMK11_AOR1_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPCMK11_AOR2_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPCMK11_CB_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPCMK11_RG_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPCMK11_BLK_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPCMK11_ALP_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPCMK11_MC_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPCMK11_AOR1_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPCMK11_AOR2_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPCMK11_CB_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPCMK11_RG_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPCMK11_BLK_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPCMK11_ALP_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPCMK11_MC_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPCMK11_AOR1_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPCMK11_AOR2_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPCMK11_CB_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPCMK11_RG_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPCMK11_BLK_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPCMK11_ALP_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPCMK11_MC_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPCMK11_AOR1_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPCMK11_AOR2_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPCMK11_CB_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPCMK11_RG_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPCMK11_BLK_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPCMK11_ALP_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK11";
			Role="Assaulter";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Comms_MC_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK11";
			Role="Comms";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMK11_Comms_AOR1_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK11";
			Role="Comms";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMK11_Comms_AOR2_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK11";
			Role="Comms";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMK11_Comms_CB_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK11";
			Role="Comms";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMK11_Comms_RG_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK11";
			Role="Comms";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMK11_Comms_BLK_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK11";
			Role="Comms";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMK11_Comms_ALP_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK11";
			Role="Comms";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMK11_Comms_MC_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK11";
			Role="Comms";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Comms_AOR1_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK11";
			Role="Comms";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Comms_AOR2_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK11";
			Role="Comms";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Comms_CB_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK11";
			Role="Comms";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Comms_RG_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK11";
			Role="Comms";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Comms_BLK_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK11";
			Role="Comms";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Comms_ALP_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK11";
			Role="Comms";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Comms_MC_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK11";
			Role="Comms";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMK11_Comms_AOR1_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK11";
			Role="Comms";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMK11_Comms_AOR2_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK11";
			Role="Comms";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMK11_Comms_CB_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK11";
			Role="Comms";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMK11_Comms_RG_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK11";
			Role="Comms";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMK11_Comms_BLK_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK11";
			Role="Comms";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMK11_Comms_ALP_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK11";
			Role="Comms";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMK11_Comms_MC_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK11";
			Role="Comms";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Comms_Comms_AOR1_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK11";
			Role="Comms";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Comms_AOR2_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK11";
			Role="Comms";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Comms_CB_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK11";
			Role="Comms";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Comms_RG_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK11";
			Role="Comms";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Comms_BLK_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK11";
			Role="Comms";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Comms_ALP_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK11";
			Role="Comms";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Comms_MC_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK11";
			Role="Comms";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMK11_Comms_AOR1_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK11";
			Role="Comms";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMK11_Comms_AOR2_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK11";
			Role="Comms";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMK11_Comms_CB_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK11";
			Role="Comms";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMK11_Comms_RG_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK11";
			Role="Comms";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMK11_Comms_BLK_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK11";
			Role="Comms";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMK11_Comms_ALP_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK11";
			Role="Comms";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMK11_Comms_MC_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK11";
			Role="Comms";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Comms_AOR1_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK11";
			Role="Comms";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Comms_AOR2_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK11";
			Role="Comms";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Comms_CB_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK11";
			Role="Comms";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Comms_RG_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK11";
			Role="Comms";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Comms_BLK_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK11";
			Role="Comms";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Comms_ALP_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK11";
			Role="Comms";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Comms_MC_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK11";
			Role="Comms";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPCMK11_Comms_AOR1_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK11";
			Role="Comms";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPCMK11_Comms_AOR2_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK11";
			Role="Comms";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPCMK11_Comms_CB_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK11";
			Role="Comms";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPCMK11_Comms_RG_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK11";
			Role="Comms";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPCMK11_Comms_BLK_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK11";
			Role="Comms";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPCMK11_Comms_ALP_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK11";
			Role="Comms";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPCMK11_Comms_MC_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK11";
			Role="Comms";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Comms_AOR1_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK11";
			Role="Comms";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Comms_AOR2_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK11";
			Role="Comms";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Comms_CB_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK11";
			Role="Comms";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Comms_RG_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK11";
			Role="Comms";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Comms_BLK_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK11";
			Role="Comms";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Comms_ALP_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK11";
			Role="Comms";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Comms_MC_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK11";
			Role="Comms";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPCMK11_Comms_AOR1_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK11";
			Role="Comms";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPCMK11_Comms_AOR2_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK11";
			Role="Comms";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPCMK11_Comms_CB_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK11";
			Role="Comms";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPCMK11_Comms_RG_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK11";
			Role="Comms";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPCMK11_Comms_BLK_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK11";
			Role="Comms";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPCMK11_Comms_ALP_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK11";
			Role="Comms";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPCMK11_Comms_MC_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK11";
			Role="Comms";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Comms_AOR1_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK11";
			Role="Comms";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Comms_AOR2_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK11";
			Role="Comms";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Comms_CB_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK11";
			Role="Comms";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Comms_RG_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK11";
			Role="Comms";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Comms_BLK_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK11";
			Role="Comms";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Comms_ALP_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK11";
			Role="Comms";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Comms_MC_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK11";
			Role="Comms";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPCMK11_Comms_AOR1_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK11";
			Role="Comms";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPCMK11_Comms_AOR2_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK11";
			Role="Comms";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPCMK11_Comms_CB_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK11";
			Role="Comms";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPCMK11_Comms_RG_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK11";
			Role="Comms";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPCMK11_Comms_BLK_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK11";
			Role="Comms";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPCMK11_Comms_ALP_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK11";
			Role="Comms";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPCMK11_Comms_MC_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK11";
			Role="Comms";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Comms_AOR1_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK11";
			Role="Comms";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Comms_AOR2_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK11";
			Role="Comms";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Comms_CB_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK11";
			Role="Comms";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Comms_RG_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK11";
			Role="Comms";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Comms_BLK_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK11";
			Role="Comms";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Comms_ALP_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK11";
			Role="Comms";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Light_MC_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK11";
			Role="Light";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Light_AOR1_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK11";
			Role="Light";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Light_AOR2_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK11";
			Role="Light";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Light_CB_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK11";
			Role="Light";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Light_RG_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK11";
			Role="Light";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Light_BLK_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK11";
			Role="Light";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Light_ALP_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK11";
			Role="Light";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Light_MC_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK11";
			Role="Light";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Light_AOR1_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK11";
			Role="Light";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Light_AOR2_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK11";
			Role="Light";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Light_CB_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK11";
			Role="Light";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Light_RG_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK11";
			Role="Light";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Light_BLK_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK11";
			Role="Light";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK11_Light_ALP_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK11";
			Role="Light";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK11_TeamLeader_MC_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMK11_TeamLeader_AOR1_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMK11_TeamLeader_AOR2_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMK11_TeamLeader_CB_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMK11_TeamLeader_RG_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMK11_TeamLeader_BLK_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMK11_TeamLeader_ALP_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMK11_TeamLeader_MC_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK11_TeamLeader_AOR1_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK11_TeamLeader_AOR2_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK11_TeamLeader_CB_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK11_TeamLeader_RG_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK11_TeamLeader_BLK_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK11_TeamLeader_ALP_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK11_TeamLeader_MC_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMK11_TeamLeader_AOR1_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMK11_TeamLeader_AOR2_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMK11_TeamLeader_CB_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMK11_TeamLeader_RG_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMK11_TeamLeader_BLK_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMK11_TeamLeader_ALP_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMK11_TeamLeader_MC_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK11_TeamLeader_TeamLeader_AOR1_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK11_TeamLeader_AOR2_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK11_TeamLeader_CB_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK11_TeamLeader_RG_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK11_TeamLeader_BLK_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK11_TeamLeader_ALP_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK11_TeamLeader_MC_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMK11_TeamLeader_AOR1_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMK11_TeamLeader_AOR2_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMK11_TeamLeader_CB_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMK11_TeamLeader_RG_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMK11_TeamLeader_BLK_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMK11_TeamLeader_ALP_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMK11_TeamLeader_MC_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMK11_TeamLeader_AOR1_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMK11_TeamLeader_AOR2_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMK11_TeamLeader_CB_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMK11_TeamLeader_RG_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMK11_TeamLeader_BLK_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMK11_TeamLeader_ALP_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMK11_TeamLeader_MC_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPCMK11_TeamLeader_AOR1_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPCMK11_TeamLeader_AOR2_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPCMK11_TeamLeader_CB_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPCMK11_TeamLeader_RG_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPCMK11_TeamLeader_BLK_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPCMK11_TeamLeader_ALP_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPCMK11_TeamLeader_MC_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPCMK11_TeamLeader_AOR1_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPCMK11_TeamLeader_AOR2_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPCMK11_TeamLeader_CB_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPCMK11_TeamLeader_RG_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPCMK11_TeamLeader_BLK_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPCMK11_TeamLeader_ALP_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPCMK11_TeamLeader_MC_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPCMK11_TeamLeader_AOR1_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPCMK11_TeamLeader_AOR2_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPCMK11_TeamLeader_CB_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPCMK11_TeamLeader_RG_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPCMK11_TeamLeader_BLK_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPCMK11_TeamLeader_ALP_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPCMK11_TeamLeader_MC_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPCMK11_TeamLeader_AOR1_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPCMK11_TeamLeader_AOR2_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPCMK11_TeamLeader_CB_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPCMK11_TeamLeader_RG_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPCMK11_TeamLeader_BLK_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPCMK11_TeamLeader_ALP_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPCMK11_TeamLeader_MC_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPCMK11_TeamLeader_AOR1_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPCMK11_TeamLeader_AOR2_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPCMK11_TeamLeader_CB_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPCMK11_TeamLeader_RG_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPCMK11_TeamLeader_BLK_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPCMK11_TeamLeader_ALP_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPCMK11_TeamLeader_MC_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPCMK11_TeamLeader_AOR1_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPCMK11_TeamLeader_AOR2_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPCMK11_TeamLeader_CB_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPCMK11_TeamLeader_RG_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPCMK11_TeamLeader_BLK_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPCMK11_TeamLeader_ALP_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK11";
			Role="Teamleader";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPCMK17_MC_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMK17_AOR1_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMK17_AOR2_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMK17_CB_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMK17_RG_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMK17_BLK_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMK17_ALP_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMK17_MC_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK17_AOR1_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK17_AOR2_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK17_CB_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK17_RG_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK17_BLK_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK17_ALP_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK17_MC_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMK17_AOR1_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMK17_AOR2_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMK17_CB_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMK17_RG_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMK17_BLK_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMK17_ALP_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMK17_MC_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK17_AOR1_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK17_AOR2_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK17_CB_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK17_RG_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK17_BLK_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK17_ALP_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK17_MC_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMK17_AOR1_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMK17_AOR2_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMK17_CB_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMK17_RG_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMK17_BLK_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMK17_ALP_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMK17_MC_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMK17_AOR1_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMK17_AOR2_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMK17_CB_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMK17_RG_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMK17_BLK_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMK17_ALP_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMK17_MC_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPCMK17_AOR1_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPCMK17_AOR2_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPCMK17_CB_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPCMK17_RG_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPCMK17_BLK_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPCMK17_ALP_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPCMK17_MC_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPCMK17_AOR1_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPCMK17_AOR2_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPCMK17_CB_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPCMK17_RG_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPCMK17_BLK_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPCMK17_ALP_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPCMK17_MC_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPCMK17_AOR1_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPCMK17_AOR2_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPCMK17_CB_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPCMK17_RG_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPCMK17_BLK_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPCMK17_ALP_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPCMK17_MC_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPCMK17_AOR1_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPCMK17_AOR2_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPCMK17_CB_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPCMK17_RG_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPCMK17_BLK_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPCMK17_ALP_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPCMK17_MC_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPCMK17_AOR1_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPCMK17_AOR2_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPCMK17_CB_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPCMK17_RG_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPCMK17_BLK_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPCMK17_ALP_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPCMK17_MC_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPCMK17_AOR1_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPCMK17_AOR2_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPCMK17_CB_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPCMK17_RG_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPCMK17_BLK_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPCMK17_ALP_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK17";
			Role="Assaulter";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Comms_MC_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK17";
			Role="Comms";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMK17_Comms_AOR1_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK17";
			Role="Comms";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMK17_Comms_AOR2_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK17";
			Role="Comms";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMK17_Comms_CB_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK17";
			Role="Comms";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMK17_Comms_RG_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK17";
			Role="Comms";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMK17_Comms_BLK_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK17";
			Role="Comms";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMK17_Comms_ALP_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK17";
			Role="Comms";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMK17_Comms_MC_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK17";
			Role="Comms";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Comms_AOR1_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK17";
			Role="Comms";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Comms_AOR2_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK17";
			Role="Comms";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Comms_CB_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK17";
			Role="Comms";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Comms_RG_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK17";
			Role="Comms";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Comms_BLK_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK17";
			Role="Comms";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Comms_ALP_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK17";
			Role="Comms";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Comms_MC_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK17";
			Role="Comms";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMK17_Comms_AOR1_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK17";
			Role="Comms";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMK17_Comms_AOR2_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK17";
			Role="Comms";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMK17_Comms_CB_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK17";
			Role="Comms";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMK17_Comms_RG_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK17";
			Role="Comms";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMK17_Comms_BLK_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK17";
			Role="Comms";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMK17_Comms_ALP_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK17";
			Role="Comms";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMK17_Comms_MC_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK17";
			Role="Comms";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Comms_Comms_AOR1_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK17";
			Role="Comms";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Comms_AOR2_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK17";
			Role="Comms";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Comms_CB_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK17";
			Role="Comms";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Comms_RG_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK17";
			Role="Comms";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Comms_BLK_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK17";
			Role="Comms";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Comms_ALP_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK17";
			Role="Comms";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Comms_MC_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK17";
			Role="Comms";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMK17_Comms_AOR1_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK17";
			Role="Comms";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMK17_Comms_AOR2_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK17";
			Role="Comms";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMK17_Comms_CB_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK17";
			Role="Comms";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMK17_Comms_RG_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK17";
			Role="Comms";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMK17_Comms_BLK_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK17";
			Role="Comms";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMK17_Comms_ALP_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK17";
			Role="Comms";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMK17_Comms_MC_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK17";
			Role="Comms";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Comms_AOR1_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK17";
			Role="Comms";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Comms_AOR2_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK17";
			Role="Comms";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Comms_CB_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK17";
			Role="Comms";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Comms_RG_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK17";
			Role="Comms";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Comms_BLK_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK17";
			Role="Comms";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Comms_ALP_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK17";
			Role="Comms";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Comms_MC_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK17";
			Role="Comms";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPCMK17_Comms_AOR1_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK17";
			Role="Comms";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPCMK17_Comms_AOR2_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK17";
			Role="Comms";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPCMK17_Comms_CB_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK17";
			Role="Comms";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPCMK17_Comms_RG_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK17";
			Role="Comms";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPCMK17_Comms_BLK_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK17";
			Role="Comms";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPCMK17_Comms_ALP_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK17";
			Role="Comms";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPCMK17_Comms_MC_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK17";
			Role="Comms";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Comms_AOR1_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK17";
			Role="Comms";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Comms_AOR2_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK17";
			Role="Comms";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Comms_CB_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK17";
			Role="Comms";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Comms_RG_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK17";
			Role="Comms";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Comms_BLK_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK17";
			Role="Comms";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Comms_ALP_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK17";
			Role="Comms";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Comms_MC_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK17";
			Role="Comms";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPCMK17_Comms_AOR1_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK17";
			Role="Comms";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPCMK17_Comms_AOR2_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK17";
			Role="Comms";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPCMK17_Comms_CB_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK17";
			Role="Comms";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPCMK17_Comms_RG_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK17";
			Role="Comms";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPCMK17_Comms_BLK_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK17";
			Role="Comms";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPCMK17_Comms_ALP_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK17";
			Role="Comms";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPCMK17_Comms_MC_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK17";
			Role="Comms";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Comms_AOR1_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK17";
			Role="Comms";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Comms_AOR2_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK17";
			Role="Comms";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Comms_CB_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK17";
			Role="Comms";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Comms_RG_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK17";
			Role="Comms";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Comms_BLK_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK17";
			Role="Comms";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Comms_ALP_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK17";
			Role="Comms";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Comms_MC_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK17";
			Role="Comms";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPCMK17_Comms_AOR1_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK17";
			Role="Comms";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPCMK17_Comms_AOR2_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK17";
			Role="Comms";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPCMK17_Comms_CB_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK17";
			Role="Comms";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPCMK17_Comms_RG_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK17";
			Role="Comms";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPCMK17_Comms_BLK_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK17";
			Role="Comms";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPCMK17_Comms_ALP_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK17";
			Role="Comms";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPCMK17_Comms_MC_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK17";
			Role="Comms";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Comms_AOR1_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK17";
			Role="Comms";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Comms_AOR2_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK17";
			Role="Comms";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Comms_CB_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK17";
			Role="Comms";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Comms_RG_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK17";
			Role="Comms";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Comms_BLK_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK17";
			Role="Comms";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Comms_ALP_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK17";
			Role="Comms";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Light_MC_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK17";
			Role="Light";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Light_AOR1_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK17";
			Role="Light";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Light_AOR2_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK17";
			Role="Light";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Light_CB_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK17";
			Role="Light";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Light_RG_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK17";
			Role="Light";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Light_BLK_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK17";
			Role="Light";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Light_ALP_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK17";
			Role="Light";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Light_MC_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK17";
			Role="Light";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Light_AOR1_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK17";
			Role="Light";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Light_AOR2_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK17";
			Role="Light";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Light_CB_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK17";
			Role="Light";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Light_RG_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK17";
			Role="Light";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Light_BLK_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK17";
			Role="Light";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK17_Light_ALP_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK17";
			Role="Light";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK17_TeamLeader_MC_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMK17_TeamLeader_AOR1_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMK17_TeamLeader_AOR2_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMK17_TeamLeader_CB_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMK17_TeamLeader_RG_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMK17_TeamLeader_BLK_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMK17_TeamLeader_ALP_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMK17_TeamLeader_MC_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK17_TeamLeader_AOR1_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK17_TeamLeader_AOR2_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK17_TeamLeader_CB_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK17_TeamLeader_RG_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK17_TeamLeader_BLK_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK17_TeamLeader_ALP_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMK17_TeamLeader_MC_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMK17_TeamLeader_AOR1_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMK17_TeamLeader_AOR2_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMK17_TeamLeader_CB_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMK17_TeamLeader_RG_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMK17_TeamLeader_BLK_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMK17_TeamLeader_ALP_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMK17_TeamLeader_MC_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK17_TeamLeader_TeamLeader_AOR1_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK17_TeamLeader_AOR2_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK17_TeamLeader_CB_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK17_TeamLeader_RG_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK17_TeamLeader_BLK_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK17_TeamLeader_ALP_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMK17_TeamLeader_MC_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMK17_TeamLeader_AOR1_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMK17_TeamLeader_AOR2_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMK17_TeamLeader_CB_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMK17_TeamLeader_RG_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMK17_TeamLeader_BLK_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMK17_TeamLeader_ALP_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMK17_TeamLeader_MC_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMK17_TeamLeader_AOR1_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMK17_TeamLeader_AOR2_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMK17_TeamLeader_CB_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMK17_TeamLeader_RG_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMK17_TeamLeader_BLK_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMK17_TeamLeader_ALP_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMK17_TeamLeader_MC_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPCMK17_TeamLeader_AOR1_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPCMK17_TeamLeader_AOR2_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPCMK17_TeamLeader_CB_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPCMK17_TeamLeader_RG_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPCMK17_TeamLeader_BLK_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPCMK17_TeamLeader_ALP_4: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="D";
			Belt="on";
		};
	};
	class Crye_JPCMK17_TeamLeader_MC_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPCMK17_TeamLeader_AOR1_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPCMK17_TeamLeader_AOR2_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPCMK17_TeamLeader_CB_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPCMK17_TeamLeader_RG_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPCMK17_TeamLeader_BLK_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPCMK17_TeamLeader_ALP_4_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="D";
			Belt="off";
		};
	};
	class Crye_JPCMK17_TeamLeader_MC_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPCMK17_TeamLeader_AOR1_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPCMK17_TeamLeader_AOR2_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPCMK17_TeamLeader_CB_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPCMK17_TeamLeader_RG_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPCMK17_TeamLeader_BLK_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPCMK17_TeamLeader_ALP_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="E";
			Belt="on";
		};
	};
	class Crye_JPCMK17_TeamLeader_MC_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPCMK17_TeamLeader_AOR1_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPCMK17_TeamLeader_AOR2_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPCMK17_TeamLeader_CB_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPCMK17_TeamLeader_RG_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPCMK17_TeamLeader_BLK_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPCMK17_TeamLeader_ALP_5_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="E";
			Belt="off";
		};
	};
	class Crye_JPCMK17_TeamLeader_MC_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPCMK17_TeamLeader_AOR1_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPCMK17_TeamLeader_AOR2_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPCMK17_TeamLeader_CB_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPCMK17_TeamLeader_RG_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPCMK17_TeamLeader_BLK_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPCMK17_TeamLeader_ALP_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="F";
			Belt="on";
		};
	};
	class Crye_JPCMK17_TeamLeader_MC_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPCMK17_TeamLeader_AOR1_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPCMK17_TeamLeader_AOR2_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPCMK17_TeamLeader_CB_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPCMK17_TeamLeader_RG_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPCMK17_TeamLeader_BLK_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPCMK17_TeamLeader_ALP_6_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MK17";
			Role="Teamleader";
			Loadout="F";
			Belt="off";
		};
	};
	class Crye_JPCMP7_MC_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMP7_AOR1_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMP7_AOR2_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMP7_CB_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMP7_RG_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMP7_BLK_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMP7_ALP_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMP7_MC_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMP7_AOR1_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMP7_AOR2_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMP7_CB_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMP7_RG_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMP7_BLK_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMP7_ALP_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMP7_MC_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMP7_AOR1_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMP7_AOR2_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMP7_CB_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMP7_RG_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMP7_BLK_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMP7_ALP_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMP7_MC_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMP7_AOR1_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMP7_AOR2_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMP7_CB_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMP7_RG_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMP7_BLK_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMP7_ALP_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMP7_MC_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMP7_AOR1_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMP7_AOR2_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMP7_CB_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMP7_RG_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMP7_BLK_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMP7_ALP_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMP7_MC_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMP7_AOR1_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMP7_AOR2_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMP7_CB_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMP7_RG_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMP7_BLK_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMP7_ALP_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MP7";
			Role="Assaulter";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMP7_Comms_MC_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MP7";
			Role="Comms";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMP7_Comms_AOR1_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MP7";
			Role="Comms";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMP7_Comms_AOR2_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MP7";
			Role="Comms";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMP7_Comms_CB_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MP7";
			Role="Comms";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMP7_Comms_RG_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MP7";
			Role="Comms";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMP7_Comms_BLK_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MP7";
			Role="Comms";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMP7_Comms_ALP_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MP7";
			Role="Comms";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMP7_Comms_MC_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MP7";
			Role="Comms";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMP7_Comms_AOR1_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MP7";
			Role="Comms";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMP7_Comms_AOR2_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MP7";
			Role="Comms";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMP7_Comms_CB_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MP7";
			Role="Comms";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMP7_Comms_RG_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MP7";
			Role="Comms";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMP7_Comms_BLK_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MP7";
			Role="Comms";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMP7_Comms_ALP_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MP7";
			Role="Comms";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMP7_Comms_MC_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MP7";
			Role="Comms";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMP7_Comms_AOR1_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MP7";
			Role="Comms";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMP7_Comms_AOR2_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MP7";
			Role="Comms";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMP7_Comms_CB_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MP7";
			Role="Comms";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMP7_Comms_RG_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MP7";
			Role="Comms";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMP7_Comms_BLK_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MP7";
			Role="Comms";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMP7_Comms_ALP_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MP7";
			Role="Comms";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMP7_Comms_MC_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MP7";
			Role="Comms";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMP7_Comms_Comms_AOR1_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MP7";
			Role="Comms";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMP7_Comms_AOR2_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MP7";
			Role="Comms";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMP7_Comms_CB_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MP7";
			Role="Comms";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMP7_Comms_RG_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MP7";
			Role="Comms";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMP7_Comms_BLK_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MP7";
			Role="Comms";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMP7_Comms_ALP_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MP7";
			Role="Comms";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMP7_Comms_MC_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MP7";
			Role="Comms";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMP7_Comms_AOR1_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MP7";
			Role="Comms";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMP7_Comms_AOR2_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MP7";
			Role="Comms";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMP7_Comms_CB_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MP7";
			Role="Comms";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMP7_Comms_RG_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MP7";
			Role="Comms";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMP7_Comms_BLK_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MP7";
			Role="Comms";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMP7_Comms_ALP_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MP7";
			Role="Comms";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMP7_Comms_MC_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MP7";
			Role="Comms";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMP7_Comms_AOR1_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MP7";
			Role="Comms";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMP7_Comms_AOR2_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MP7";
			Role="Comms";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMP7_Comms_CB_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MP7";
			Role="Comms";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMP7_Comms_RG_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MP7";
			Role="Comms";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMP7_Comms_BLK_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MP7";
			Role="Comms";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMP7_Comms_ALP_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MP7";
			Role="Comms";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMP7_Light_MC_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MP7";
			Role="Light";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMP7_Light_AOR1_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MP7";
			Role="Light";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMP7_Light_AOR2_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MP7";
			Role="Light";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMP7_Light_CB_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MP7";
			Role="Light";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMP7_Light_RG_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MP7";
			Role="Light";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMP7_Light_BLK_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MP7";
			Role="Light";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMP7_Light_ALP_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MP7";
			Role="Light";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMP7_TeamLeader_MC_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMP7_TeamLeader_AOR1_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMP7_TeamLeader_AOR2_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMP7_TeamLeader_CB_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMP7_TeamLeader_RG_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMP7_TeamLeader_BLK_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMP7_TeamLeader_ALP_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPCMP7_TeamLeader_MC_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMP7_TeamLeader_AOR1_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMP7_TeamLeader_AOR2_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMP7_TeamLeader_CB_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMP7_TeamLeader_RG_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMP7_TeamLeader_BLK_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMP7_TeamLeader_ALP_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPCMP7_TeamLeader_MC_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMP7_TeamLeader_AOR1_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMP7_TeamLeader_AOR2_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMP7_TeamLeader_CB_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMP7_TeamLeader_RG_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMP7_TeamLeader_BLK_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMP7_TeamLeader_ALP_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="B";
			Belt="on";
		};
	};
	class Crye_JPCMP7_TeamLeader_MC_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMP7_TeamLeader_TeamLeader_AOR1_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMP7_TeamLeader_AOR2_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMP7_TeamLeader_CB_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMP7_TeamLeader_RG_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMP7_TeamLeader_BLK_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMP7_TeamLeader_ALP_2_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="B";
			Belt="off";
		};
	};
	class Crye_JPCMP7_TeamLeader_MC_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMP7_TeamLeader_AOR1_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMP7_TeamLeader_AOR2_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMP7_TeamLeader_CB_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMP7_TeamLeader_RG_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMP7_TeamLeader_BLK_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMP7_TeamLeader_ALP_3: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="C";
			Belt="on";
		};
	};
	class Crye_JPCMP7_TeamLeader_MC_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMP7_TeamLeader_AOR1_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMP7_TeamLeader_AOR2_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMP7_TeamLeader_CB_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMP7_TeamLeader_RG_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMP7_TeamLeader_BLK_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPCMP7_TeamLeader_ALP_3_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="MP7";
			Role="Teamleader";
			Loadout="C";
			Belt="off";
		};
	};
	class Crye_JPC_LMG_MC_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="LMG";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPC_LMG_AOR1_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="LMG";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPC_LMG_AOR2_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="LMG";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPC_LMG_CB_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="LMG";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPC_LMG_RG_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="LMG";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPC_LMG_BLK_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="LMG";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPC_LMG_ALP_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="LMG";
			Loadout="A";
			Belt="on";
		};
	};
	class Crye_JPC_LMG_MC_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mc";
			Weapon="M4";
			Role="LMG";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPC_LMG_AOR1_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor1";
			Weapon="M4";
			Role="LMG";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPC_LMG_AOR2_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="aor2";
			Weapon="M4";
			Role="LMG";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPC_LMG_CB_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="cb";
			Weapon="M4";
			Role="LMG";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPC_LMG_RG_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="rg";
			Weapon="M4";
			Role="LMG";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPC_LMG_BLK_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="blk";
			Weapon="M4";
			Role="LMG";
			Loadout="A";
			Belt="off";
		};
	};
	class Crye_JPC_LMG_ALP_1_NoBelt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_jpc";
			camo="mcal";
			Weapon="M4";
			Role="LMG";
			Loadout="A";
			Belt="off";
		};
	};
	class Ronin_Belt_MC_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="mc";
			Weapon="Glock";
			Loadout="A";
		};
	};
	class Ronin_Belt_AOR1_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="aor1";
			Weapon="Glock";
			Loadout="A";
		};
	};
	class Ronin_Belt_AOR2_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="aor2";
			Weapon="Glock";
			Loadout="A";
		};
	};
	class Ronin_Belt_CB_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="cb";
			Weapon="Glock";
			Loadout="A";
		};
	};
	class Ronin_Belt_RG_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="rg";
			Weapon="Glock";
			Loadout="A";
		};
	};
	class Ronin_Belt_BLK_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="blk";
			Weapon="Glock";
			Loadout="A";
		};
	};
	class Ronin_Belt_ALP_1: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="mcal";
			Weapon="Glock";
			Loadout="A";
		};
	};
	class Ronin_Belt_MC_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="mc";
			Weapon="Glock";
			Loadout="B";
		};
	};
	class Ronin_Belt_AOR1_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="aor1";
			Weapon="Glock";
			Loadout="B";
		};
	};
	class Ronin_Belt_AOR2_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="aor2";
			Weapon="Glock";
			Loadout="B";
		};
	};
	class Ronin_Belt_CB_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="cb";
			Weapon="Glock";
			Loadout="B";
		};
	};
	class Ronin_Belt_RG_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="rg";
			Weapon="Glock";
			Loadout="B";
		};
	};
	class Ronin_Belt_BLK_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="blk";
			Weapon="Glock";
			Loadout="B";
		};
	};
	class Ronin_Belt_ALP_2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="mcal";
			Weapon="Glock";
			Loadout="B";
		};
	};
	class Ronin_Belt_MC_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="mc";
			Weapon="M4";
			Loadout="A";
		};
	};
	class Ronin_Belt_AOR1_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="aor1";
			Weapon="M4";
			Loadout="A";
		};
	};
	class Ronin_Belt_AOR2_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="aor2";
			Weapon="M4";
			Loadout="A";
		};
	};
	class Ronin_Belt_CB_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="cb";
			Weapon="M4";
			Loadout="A";
		};
	};
	class Ronin_Belt_RG_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="rg";
			Weapon="M4";
			Loadout="A";
		};
	};
	class Ronin_Belt_BLK_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="blk";
			Weapon="M4";
			Loadout="A";
		};
	};
	class Ronin_Belt_ALP_5: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="mcal";
			Weapon="M4";
			Loadout="A";
		};
	};
	class Ronin_Belt_MC_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="mc";
			Weapon="M4";
			Loadout="B";
		};
	};
	class Ronin_Belt_AOR1_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="aor1";
			Weapon="M4";
			Loadout="B";
		};
	};
	class Ronin_Belt_AOR2_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="aor2";
			Weapon="M4";
			Loadout="B";
		};
	};
	class Ronin_Belt_CB_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="cb";
			Weapon="M4";
			Loadout="B";
		};
	};
	class Ronin_Belt_RG_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="rg";
			Weapon="M4";
			Loadout="B";
		};
	};
	class Ronin_Belt_BLK_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="blk";
			Weapon="M4";
			Loadout="B";
		};
	};
	class Ronin_Belt_ALP_6: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="mcal";
			Weapon="M4";
			Loadout="B";
		};
	};
	class Ronin_Belt_MC_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="mc";
			Weapon="MK11";
			Loadout="A";
		};
	};
	class Ronin_Belt_AOR1_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="aor1";
			Weapon="MK11";
			Loadout="A";
		};
	};
	class Ronin_Belt_AOR2_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="aor2";
			Weapon="MK11";
			Loadout="A";
		};
	};
	class Ronin_Belt_CB_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="cb";
			Weapon="MK11";
			Loadout="A";
		};
	};
	class Ronin_Belt_RG_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="rg";
			Weapon="MK11";
			Loadout="A";
		};
	};
	class Ronin_Belt_BLK_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="blk";
			Weapon="MK11";
			Loadout="A";
		};
	};
	class Ronin_Belt_ALP_7: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="mcal";
			Weapon="MK11";
			Loadout="A";
		};
	};
	class Ronin_Belt_MC_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="mc";
			Weapon="MK11";
			Loadout="B";
		};
	};
	class Ronin_Belt_AOR1_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="aor1";
			Weapon="MK11";
			Loadout="B";
		};
	};
	class Ronin_Belt_AOR2_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="aor2";
			Weapon="MK11";
			Loadout="B";
		};
	};
	class Ronin_Belt_CB_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="cb";
			Weapon="MK11";
			Loadout="B";
		};
	};
	class Ronin_Belt_RG_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="rg";
			Weapon="MK11";
			Loadout="B";
		};
	};
	class Ronin_Belt_BLK_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="blk";
			Weapon="MK11";
			Loadout="B";
		};
	};
	class Ronin_Belt_ALP_8: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="mcal";
			Weapon="MK11";
			Loadout="B";
		};
	};
	class Ronin_Belt_MC_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="mc";
			Weapon="MK17";
			Loadout="A";
		};
	};
	class Ronin_Belt_AOR1_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="aor1";
			Weapon="MK17";
			Loadout="A";
		};
	};
	class Ronin_Belt_AOR2_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="aor2";
			Weapon="MK17";
			Loadout="A";
		};
	};
	class Ronin_Belt_CB_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="cb";
			Weapon="MK17";
			Loadout="A";
		};
	};
	class Ronin_Belt_RG_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="rg";
			Weapon="MK17";
			Loadout="A";
		};
	};
	class Ronin_Belt_BLK_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="blk";
			Weapon="MK17";
			Loadout="A";
		};
	};
	class Ronin_Belt_ALP_9: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="mcal";
			Weapon="MK17";
			Loadout="A";
		};
	};
	class Ronin_Belt_MC_10: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="mc";
			Weapon="MK17";
			Loadout="B";
		};
	};
	class Ronin_Belt_AOR1_10: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="aor1";
			Weapon="MK17";
			Loadout="B";
		};
	};
	class Ronin_Belt_AOR2_10: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="aor2";
			Weapon="MK17";
			Loadout="B";
		};
	};
	class Ronin_Belt_CB_10: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="cb";
			Weapon="MK17";
			Loadout="B";
		};
	};
	class Ronin_Belt_RG_10: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="rg";
			Weapon="MK17";
			Loadout="B";
		};
	};
	class Ronin_Belt_BLK_10: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="blk";
			Weapon="MK17";
			Loadout="B";
		};
	};
	class Ronin_Belt_ALP_10: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_belt";
			camo="mcal";
			Weapon="MK17";
			Loadout="B";
		};
	};
};
class cfgMods
{
	author="wanoO";
	timepacked="1631558296";
};
