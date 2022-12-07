class CfgPatches
{
	class aceax_compat_tfl_panel
	{
		name="compat_tfl_panel";
		units[]={};
		weapons[]={};
		requiredVersion=1.88;
		requiredAddons[]=
		{
			"TFL_Panel"
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
	class CfgVehicles
	{
		class tfl_panel_avs
		{
			label="[TFL] AVS Panel";
			author="TFL";
			options[]=
			{
				"camo",
				"Tools",
				"Flag"
			};
			class camo: CamoBase
			{
				values[]=
				{
					"mc",
					"aor1",
					"aor2",
					"rg",
					"cb",
					"blk"
				};
				class cb
				{
					label="CB";
					description="Coyote Brown";
					image="aceax_compat_tfl_g3\data\cb.paa";
				};
				class rg
				{
					label="RG";
					description="Ranger Green";
					image="aceax_compat_tfl_panel\data\rg.paa";
				};
			};
			class Tools
			{
				values[]=
				{
					"None",
					"Bolt",
					"Breacher",
					"Halligan"
				};
			};
			class Flag
			{
				label="Flag (ACE)";
				changeingame=1;
				values[]=
				{
					"On",
					"Off"
				};
				class On
				{
					label="On";
					description="Flag On";
					icon="aceax_compat_tfl_panel\data\flag.paa";
					actionlabel="Attach Flag";
				};
				class Off
				{
					label="Off";
					description="Flag Off";
					icon="aceax_compat_tfl_panel\data\noflag.paa";
					actionlabel="Remove Flag";
				};
			};
		};
		class tfl_panel_jpc: tfl_panel_avs
		{
			label="[TFL] JPC Panel";
			options[]=
			{
				"camo",
				"Tools",
				"Type",
				"Flag"
			};
			class Type
			{
				values[]=
				{
					"Crye Pack",
					"Back Panel",
					"Hydration",
					"LBX"
				};
			};
		};
		class tfl_lbt
		{
			label="[TFL] LBT";
			options[]=
			{
				"camo"
			};
			class camo: CamoBase
			{
				values[]=
				{
					"mc",
					"mcb",
					"rg",
					"gry"
				};
				class rg
				{
					label="RG";
					description="Ranger Green";
					image="aceax_compat_tfl_panel\data\rg.paa";
				};
			};
		};
	};
};
class CfgVehicles
{
	class Bag_Base;
	class Backpack_Base: Bag_Base
	{
	};
	class TFL_Panel1_jpc_mc: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="mc";
			Tools="None";
			Type="Back Panel";
			Flag="Off";
		};
	};
	class TFL_Panel2_jpc_mc: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="mc";
			Tools="None";
			Type="Back Panel";
			Flag="Off";
		};
	};
	class TFL_Panel3_jpc_mc: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="mc";
			Tools="None";
			Type="Back Panel";
			Flag="Off";
		};
	};
	class TFL_Panel4_jpc_mc: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="mc";
			Tools="None";
			Type="Back Panel";
			Flag="Off";
		};
	};
	class TFL_Panel1_jpc_AOR1: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="aor1";
			Tools="None";
			Type="Back Panel";
			Flag="Off";
		};
	};
	class TFL_Panel2_jpc_AOR1: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="aor1";
			Tools="None";
			Type="Back Panel";
			Flag="Off";
		};
	};
	class TFL_Panel3_jpc_AOR1: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="aor1";
			Tools="None";
			Type="Back Panel";
			Flag="Off";
		};
	};
	class TFL_Panel4_jpc_AOR1: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="aor1";
			Tools="None";
			Type="Back Panel";
			Flag="Off";
		};
	};
	class TFL_hydro_panel_jpc: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="mc";
			Tools="None";
			Type="Hydration";
			Flag="Off";
		};
	};
	class TFL_hydro_panel_jpc_aor1: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="aor1";
			Tools="None";
			Type="Hydration";
			Flag="Off";
		};
	};
	class TFL_lbx_panel_jpc: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="mc";
			Tools="None";
			Type="LBX";
			Flag="Off";
		};
	};
	class TFL_lbx_panel_jpc_aor1: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="aor1";
			Tools="None";
			Type="LBX";
			Flag="Off";
		};
	};
	class TFL_Panel1_jpc_cb: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="cb";
			Tools="None";
			Type="Back Panel";
			Flag="Off";
		};
	};
	class TFL_Panel2_jpc_cb: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="cb";
			Tools="None";
			Type="Back Panel";
			Flag="Off";
		};
	};
	class TFL_Panel3_jpc_cb: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="cb";
			Tools="None";
			Type="Back Panel";
			Flag="Off";
		};
	};
	class TFL_Panel4_jpc_cb: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="cb";
			Tools="None";
			Type="Back Panel";
			Flag="Off";
		};
	};
	class TFL_hydro_panel_jpc_cb: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="cb";
			Tools="None";
			Type="Hydration";
			Flag="Off";
		};
	};
	class TFL_lbx_panel_jpc_cb: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="cb";
			Tools="None";
			Type="LBX";
			Flag="Off";
		};
	};
	class TFL_radio_panel_jpc_cb: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="cb";
			Tools="None";
			Type="LBX";
			Flag="Off";
		};
	};
	class TFL_radio_panel_jpc: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="mc";
			Tools="None";
			Type="LBX";
			Flag="Off";
		};
	};
	class TFL_radio_panel_jpc_aor1: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="aor1";
			Tools="None";
			Type="LBX";
			Flag="Off";
		};
	};
	class TFL_LBT_day_mc: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_lbt";
			camo="mc";
		};
	};
	class TFL_LBT_day_RG: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_lbt";
			camo="rg";
		};
	};
	class TFL_LBT_day_MCB: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_lbt";
			camo="mcb";
		};
	};
	class TFL_LBT_day_gry: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_lbt";
			camo="gry";
		};
	};
	class TFL_avs_pack_mc_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="mc";
			Tools="None";
			Flag="On";
		};
	};
	class TFL_avs_pack_aor_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="aor1";
			Tools="None";
			Flag="On";
		};
	};
	class TFL_avs_pack_rg_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="rg";
			Tools="None";
			Flag="On";
		};
	};
	class TFL_avs_pack_blk_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="blk";
			Tools="None";
			Flag="On";
		};
	};
	class TFL_avs_pack_cb_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="cb";
			Tools="None";
			Flag="On";
		};
	};
	class TFL_avs_pack_aor2_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="aor2";
			Tools="None";
			Flag="On";
		};
	};
	class TFL_avs_pack_mc: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="mc";
			Tools="None";
			Flag="Off";
		};
	};
	class TFL_avs_pack_aor: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="aor1";
			Tools="None";
			Flag="Off";
		};
	};
	class TFL_avs_pack_rg: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="rg";
			Tools="None";
			Flag="Off";
		};
	};
	class TFL_avs_pack_blk: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="blk";
			Tools="None";
			Flag="Off";
		};
	};
	class TFL_avs_pack_cb: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="cb";
			Tools="None";
			Flag="Off";
		};
	};
	class TFL_avs_pack_aor2: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="aor2";
			Tools="None";
			Flag="Off";
		};
	};
	class TFL_avs_pack_mc_bolt_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="mc";
			Tools="Bolt";
			Flag="On";
		};
	};
	class TFL_avs_pack_aor_bolt_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="aor1";
			Tools="Bolt";
			Flag="On";
		};
	};
	class TFL_avs_pack_rg_bolt_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="rg";
			Tools="Bolt";
			Flag="On";
		};
	};
	class TFL_avs_pack_blk_bolt_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="blk";
			Tools="Bolt";
			Flag="On";
		};
	};
	class TFL_avs_pack_cb_bolt_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="cb";
			Tools="Bolt";
			Flag="On";
		};
	};
	class TFL_avs_pack_bolt_mc: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="mc";
			Tools="Bolt";
			Flag="Off";
		};
	};
	class TFL_avs_pack_aor2_bolt_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="aor2";
			Tools="Bolt";
			Flag="On";
		};
	};
	class TFL_avs_pack_bolt_aor: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="aor1";
			Tools="Bolt";
			Flag="Off";
		};
	};
	class TFL_avs_pack_bolt_rg: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="rg";
			Tools="Bolt";
			Flag="Off";
		};
	};
	class TFL_avs_pack_bolt_blk: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="blk";
			Tools="Bolt";
			Flag="Off";
		};
	};
	class TFL_avs_pack_bolt_cb: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="cb";
			Tools="Bolt";
			Flag="Off";
		};
	};
	class TFL_avs_pack_bolt_aor2: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="aor2";
			Tools="Bolt";
			Flag="Off";
		};
	};
	class TFL_avs_pack_mc_halligan_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="mc";
			Tools="Halligan";
			Flag="On";
		};
	};
	class TFL_avs_pack_aor_halligan_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="aor1";
			Tools="Halligan";
			Flag="On";
		};
	};
	class TFL_avs_pack_rg_halligan_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="rg";
			Tools="Halligan";
			Flag="On";
		};
	};
	class TFL_avs_pack_blk_halligan_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="blk";
			Tools="Halligan";
			Flag="On";
		};
	};
	class TFL_avs_pack_cb_halligan_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="cb";
			Tools="Halligan";
			Flag="On";
		};
	};
	class TFL_avs_pack_AOR2_halligan_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="aor2";
			Tools="Halligan";
			Flag="On";
		};
	};
	class TFL_avs_pack_mc_halligan: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="mc";
			Tools="Halligan";
			Flag="Off";
		};
	};
	class TFL_avs_pack_aor_halligan: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="aor1";
			Tools="Halligan";
			Flag="Off";
		};
	};
	class TFL_avs_pack_rg_halligan: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="rg";
			Tools="Halligan";
			Flag="Off";
		};
	};
	class TFL_avs_pack_blk_halligan: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="blk";
			Tools="Halligan";
			Flag="Off";
		};
	};
	class TFL_avs_pack_cb_halligan: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="cb";
			Tools="Halligan";
			Flag="Off";
		};
	};
	class TFL_avs_pack_AOR2_halligan: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="aor2";
			Tools="Halligan";
			Flag="Off";
		};
	};
	class TFL_avs_pack_breacher_mc_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="mc";
			Tools="Breacher";
			Flag="On";
		};
	};
	class TFL_avs_pack_breacher_aor_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="aor1";
			Tools="Breacher";
			Flag="On";
		};
	};
	class TFL_avs_pack_breacher_rg_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="rg";
			Tools="Breacher";
			Flag="On";
		};
	};
	class TFL_avs_pack_breacher_blk_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="blk";
			Tools="Breacher";
			Flag="On";
		};
	};
	class TFL_avs_pack_breacher_cb_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="cb";
			Tools="Breacher";
			Flag="On";
		};
	};
	class TFL_avs_pack_breacher_aor2_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="aor2";
			Tools="Breacher";
			Flag="On";
		};
	};
	class TFL_avs_pack_breacher_mc: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="mc";
			Tools="Breacher";
			Flag="Off";
		};
	};
	class TFL_avs_pack_breacher_aor: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="aor1";
			Tools="Breacher";
			Flag="Off";
		};
	};
	class TFL_avs_pack_breacher_rg: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="rg";
			Tools="Breacher";
			Flag="Off";
		};
	};
	class TFL_avs_pack_breacher_blk: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="blk";
			Tools="Breacher";
			Flag="Off";
		};
	};
	class TFL_avs_pack_breacher_cb: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="cb";
			Tools="Breacher";
			Flag="Off";
		};
	};
	class TFL_avs_pack_breacher_aor2: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_avs";
			camo="aor2";
			Tools="Breacher";
			Flag="Off";
		};
	};
	class TFL_jpc_pack_mc_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="mc";
			Tools="None";
			Type="Crye Pack";
			Flag="On";
		};
	};
	class TFL_jpc_pack_aor_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="aor1";
			Tools="None";
			Type="Crye Pack";
			Flag="On";
		};
	};
	class TFL_jpc_pack_rg_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="rg";
			Tools="None";
			Type="Crye Pack";
			Flag="On";
		};
	};
	class TFL_jpc_pack_blk_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="blk";
			Tools="None";
			Type="Crye Pack";
			Flag="On";
		};
	};
	class TFL_jpc_pack_cb_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="cb";
			Tools="None";
			Type="Crye Pack";
			Flag="On";
		};
	};
	class TFL_jpc_pack_aor2_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="aor2";
			Tools="None";
			Type="Crye Pack";
			Flag="On";
		};
	};
	class TFL_jpc_pack_mc: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="mc";
			Tools="None";
			Type="Crye Pack";
			Flag="Off";
		};
	};
	class TFL_jpc_pack_aor: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="aor1";
			Tools="None";
			Type="Crye Pack";
			Flag="Off";
		};
	};
	class TFL_jpc_pack_rg: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="rg";
			Tools="None";
			Type="Crye Pack";
			Flag="Off";
		};
	};
	class TFL_jpc_pack_blk: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="blk";
			Tools="None";
			Type="Crye Pack";
			Flag="Off";
		};
	};
	class TFL_jpc_pack_cb: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="cb";
			Tools="None";
			Type="Crye Pack";
			Flag="Off";
		};
	};
	class TFL_jpc_pack_aor2: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="aor2";
			Tools="None";
			Type="Crye Pack";
			Flag="Off";
		};
	};
	class TFL_jpc_pack_mc_bolt_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="mc";
			Tools="Bolt";
			Type="Crye Pack";
			Flag="On";
		};
	};
	class TFL_jpc_pack_aor_bolt_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="aor1";
			Tools="Bolt";
			Type="Crye Pack";
			Flag="On";
		};
	};
	class TFL_jpc_pack_rg_bolt_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="rg";
			Tools="Bolt";
			Type="Crye Pack";
			Flag="On";
		};
	};
	class TFL_jpc_pack_blk_bolt_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="blk";
			Tools="Bolt";
			Type="Crye Pack";
			Flag="On";
		};
	};
	class TFL_jpc_pack_cb_bolt_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="cb";
			Tools="Bolt";
			Type="Crye Pack";
			Flag="On";
		};
	};
	class TFL_jpc_pack_AOR2_bolt_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="aor2";
			Tools="Bolt";
			Type="Crye Pack";
			Flag="On";
		};
	};
	class TFL_jpc_pack_bolt_mc: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="mc";
			Tools="Bolt";
			Type="Crye Pack";
			Flag="Off";
		};
	};
	class TFL_jpc_pack_bolt_aor: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="aor1";
			Tools="Bolt";
			Type="Crye Pack";
			Flag="Off";
		};
	};
	class TFL_jpc_pack_bolt_rg: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="rg";
			Tools="Bolt";
			Type="Crye Pack";
			Flag="Off";
		};
	};
	class TFL_jpc_pack_bolt_blk: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="blk";
			Tools="Bolt";
			Type="Crye Pack";
			Flag="Off";
		};
	};
	class TFL_jpc_pack_bolt_cb: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="cb";
			Tools="Bolt";
			Type="Crye Pack";
			Flag="Off";
		};
	};
	class TFL_jpc_pack_bolt_aor2: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="aor2";
			Tools="Bolt";
			Type="Crye Pack";
			Flag="Off";
		};
	};
	class TFL_jpc_pack_mc_halligan_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="mc";
			Tools="Halligan";
			Type="Crye Pack";
			Flag="On";
		};
	};
	class TFL_jpc_pack_aor_halligan_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="aor1";
			Tools="Halligan";
			Type="Crye Pack";
			Flag="On";
		};
	};
	class TFL_jpc_pack_rg_halligan_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="rg";
			Tools="Halligan";
			Type="Crye Pack";
			Flag="On";
		};
	};
	class TFL_jpc_pack_blk_halligan_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="blk";
			Tools="Halligan";
			Type="Crye Pack";
			Flag="On";
		};
	};
	class TFL_jpc_pack_cb_halligan_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="cb";
			Tools="Halligan";
			Type="Crye Pack";
			Flag="On";
		};
	};
	class TFL_jpc_pack_aor2_halligan_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="aor2";
			Tools="Halligan";
			Type="Crye Pack";
			Flag="On";
		};
	};
	class TFL_jpc_pack_mc_halligan: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="mc";
			Tools="Halligan";
			Type="Crye Pack";
			Flag="Off";
		};
	};
	class TFL_jpc_pack_aor_halligan: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="aor1";
			Tools="Halligan";
			Type="Crye Pack";
			Flag="Off";
		};
	};
	class TFL_jpc_pack_rg_halligan: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="rg";
			Tools="Halligan";
			Type="Crye Pack";
			Flag="Off";
		};
	};
	class TFL_jpc_pack_blk_halligan: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="blk";
			Tools="Halligan";
			Type="Crye Pack";
			Flag="Off";
		};
	};
	class TFL_jpc_pack_cb_halligan: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="cb";
			Tools="Halligan";
			Type="Crye Pack";
			Flag="Off";
		};
	};
	class TFL_jpc_pack_aor2_halligan: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="aor2";
			Tools="Halligan";
			Type="Crye Pack";
			Flag="Off";
		};
	};
	class TFL_jpc_pack_breacher_mc_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="mc";
			Tools="Breacher";
			Type="Crye Pack";
			Flag="On";
		};
	};
	class TFL_jpc_pack_breacher_aor_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="aor1";
			Tools="Breacher";
			Type="Crye Pack";
			Flag="On";
		};
	};
	class TFL_jpc_pack_breacher_rg_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="rg";
			Tools="Breacher";
			Type="Crye Pack";
			Flag="On";
		};
	};
	class TFL_jpc_pack_breacher_blk_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="blk";
			Tools="Breacher";
			Type="Crye Pack";
			Flag="On";
		};
	};
	class TFL_jpc_pack_breacher_cb_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="cb";
			Tools="Breacher";
			Type="Crye Pack";
			Flag="On";
		};
	};
	class TFL_jpc_pack_breacher_aor2_flag: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="aor2";
			Tools="Breacher";
			Type="Crye Pack";
			Flag="On";
		};
	};
	class TFL_jpc_pack_breacher_mc: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="mc";
			Tools="Breacher";
			Type="Crye Pack";
			Flag="Off";
		};
	};
	class TFL_jpc_pack_breacher_aor: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="aor1";
			Tools="Breacher";
			Type="Crye Pack";
			Flag="Off";
		};
	};
	class TFL_jpc_pack_breacher_rg: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="rg";
			Tools="Breacher";
			Type="Crye Pack";
			Flag="Off";
		};
	};
	class TFL_jpc_pack_breacher_blk: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="blk";
			Tools="Breacher";
			Type="Crye Pack";
			Flag="Off";
		};
	};
	class TFL_jpc_pack_breacher_cb: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="cb";
			Tools="Breacher";
			Type="Crye Pack";
			Flag="Off";
		};
	};
	class TFL_jpc_pack_breacher_aor2: Backpack_Base
	{
		class XtdGearInfo
		{
			model="tfl_panel_jpc";
			camo="aor2";
			Tools="Breacher";
			Type="Crye Pack";
			Flag="Off";
		};
	};
};
class cfgMods
{
	author="wanoO";
	timepacked="1631796006";
};
