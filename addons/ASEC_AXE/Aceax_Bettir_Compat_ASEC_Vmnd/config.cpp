class CfgPatches
{
	class aceax_bettir_compat_vmnd
	{
		name="compat_vmnd";
		units[]={};
		weapons[]={};
		requiredVersion=1.88;
		requiredAddons[]=
		{
			"vmnd_nvg",
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
		class vmnd_pvs31
		{
			label="[VMND] PVS-31";
			author="Vielmond";
			options[]=
			{
				"config",
				"pack"
			};
			class config
			{
				label="Configuration (ACE)";
				values[]=
				{
					"tars",
					"low",
					"up"
				};
				changeingame=1;
				icon="aceax_bettir_compat_tfl_nvg\data\pvs31compact.paa";
				class tars
				{
					label="Tarsier";
					description="Tarsier PVS-31";
					icon="aceax_bettir_compat_vmnd\data\tarsier_icon.paa";
					actionlabel="Tarsier PVS-31";
				};
				class low
				{
					label="Low";
					description="Low PVS-31";
					icon="aceax_bettir_compat_tfl_nvg\data\pvs31widelow.paa";
					actionlabel="Low PVS-31";
				};
				class up
				{
					label="Up";
					description="Up PVS-31";
					icon="aceax_bettir_compat_tfl_nvg\data\pvs31compact.paa";
					actionlabel="Up PVS-31";
				};
			};
			class pack
			{
				label="Battery pack";
				values[]=
				{
					"on",
					"off"
				};
				class on
				{
					label="On";
				};
				class off
				{
					label="Off";
				};
			};
		};
		class vmnd_psq36
		{
			label="[VMND] GPNVG";
			author="Vielmond";
			options[]=
			{
				"mount",
				"config",
				"pack"
			};
			class mount
			{
				label="Mount";
				values[]=
				{
					"gsgm",
					"grey"
				};
				class gsgm
				{
					label="GSGM";
					image="#(rgb,8,8,3)color(0.8,0.6,0.2,1)";
				};
				class grey
				{
					label="G24";
					image="#(rgb,8,8,3)color(0.5,0.5,0.5,1)";
				};
			};
			class config
			{
				label="Configuration (ACE)";
				values[]=
				{
					"tars",
					"up"
				};
				changeingame=1;
				icon="aceax_bettir_compat_tfl_nvg\data\pvs31compact.paa";
				class tars
				{
					label="Tarsier";
					description="Tarsier PSQ-36";
					icon="aceax_bettir_compat_vmnd\data\tarsier_icon.paa";
					actionlabel="Tarsier PSQ-36";
				};
				class up
				{
					label="Up";
					description="PSQ-36";
					icon="aceax_bettir_compat_tfl_nvg\data\pvs31compact.paa";
					actionlabel="PSQ-36";
				};
			};
			class pack
			{
				label="Battery pack";
				values[]=
				{
					"on",
					"off"
				};
				class on
				{
					label="On";
				};
				class off
				{
					label="Off";
				};
			};
		};
		class vmnd_mbav
		{
			label="[VMND] MBAV";
			author="Vielmond";
			options[]=
			{
				"camo"
			};
			class camo: CamoBase
			{
				values[]=
				{
					"mc",
					"cb"
				};
				class cb
				{
					label="CB";
					image="aceax_bettir_compat_vmnd\data\cb.paa";
				};
			};
		};
		class vmnd_jpc
		{
			label="[VMND] MBAV";
			author="Vielmond";
			options[]=
			{
				"camo",
				"loadout"
			};
			class camo: CamoBase
			{
				values[]=
				{
					"mc",
					"mcb"
				};
			};
			class loadout
			{
				label="Loadout";
				values[]=
				{
					"Light",
					"01",
					"02",
					"03"
				};
			};
		};
		class vmnd_lv119
		{
			label="[VMND] MBAV";
			author="Vielmond";
			options[]=
			{
				"loadout"
			};
			class loadout
			{
				label="Loadout";
				values[]={"01","02"};
			};
		};
	};
};
class cfgWeapons
{
	class V_PlateCarrier1_rgr;
	class mbav_cb: V_PlateCarrier1_rgr
	{
		class XtdGearInfo
		{
			model="vmnd_mbav";
			camo="cb";
		};
	};
	class mbav_mc: V_PlateCarrier1_rgr
	{
		class XtdGearInfo
		{
			model="vmnd_mbav";
			camo="mc";
		};
	};
	class mbav_mc_chestrig: V_PlateCarrier1_rgr
	{
		scope=0;
	};
	class jpc_base_mc: V_PlateCarrier1_rgr
	{
		class XtdGearInfo
		{
			model="vmnd_jpc";
			camo="mc";
			loadout="Light";
		};
	};
	class jpc_loadout_01_mc: V_PlateCarrier1_rgr
	{
		class XtdGearInfo
		{
			model="vmnd_jpc";
			camo="mc";
			loadout="01";
		};
	};
	class jpc_loadout_02_mc: V_PlateCarrier1_rgr
	{
		class XtdGearInfo
		{
			model="vmnd_jpc";
			camo="mc";
			loadout="02";
		};
	};
	class jpc_loadout_03_mc: V_PlateCarrier1_rgr
	{
		class XtdGearInfo
		{
			model="vmnd_jpc";
			camo="mc";
			loadout="03";
		};
	};
	class lv119_mc: V_PlateCarrier1_rgr
	{
		class XtdGearInfo
		{
			model="vmnd_lv119";
			loadout="01";
		};
	};
	class lv119_mc_01: V_PlateCarrier1_rgr
	{
		class XtdGearInfo
		{
			model="vmnd_lv119";
			loadout="02";
		};
	};
	class jpc_comms_BPRE: V_PlateCarrier1_rgr
	{
		class XtdGearInfo
		{
			model="vmnd_jpc";
			camo="mcb";
			loadout="Light";
		};
	};
	class Binocular;
	class NVGoggles: Binocular
	{
	};
	class pvs31_01: NVGoggles
	{
		class XtdGearInfo
		{
			model="vmnd_pvs31";
			config="up";
			pack="on";
		};
	};
	class pvs31_02: NVGoggles
	{
		class XtdGearInfo
		{
			model="vmnd_pvs31";
			config="low";
			pack="on";
		};
	};
	class pvs31_03: NVGoggles
	{
		class XtdGearInfo
		{
			model="vmnd_pvs31";
			config="tars";
			pack="on";
		};
	};
	class psq36_dovetail: NVGoggles
	{
		class XtdGearInfo
		{
			model="vmnd_psq36";
			mount="grey";
			config="up";
			pack="on";
		};
	};
	class psq36_tarsier_dovetail: NVGoggles
	{
		class XtdGearInfo
		{
			model="vmnd_psq36";
			mount="grey";
			config="tars";
			pack="on";
		};
	};
	class psq36_gsgm: NVGoggles
	{
		class XtdGearInfo
		{
			model="vmnd_psq36";
			mount="gsgm";
			config="up";
			pack="on";
		};
	};
	class pvs31_01_NB: NVGoggles
	{
		class XtdGearInfo
		{
			model="vmnd_pvs31";
			config="up";
			pack="off";
		};
	};
	class pvs31_02_NB: NVGoggles
	{
		class XtdGearInfo
		{
			model="vmnd_pvs31";
			config="low";
			pack="off";
		};
	};
	class pvs31_03_NB: NVGoggles
	{
		class XtdGearInfo
		{
			model="vmnd_pvs31";
			config="tars";
			pack="off";
		};
	};
	class psq36_dovetail_NB: NVGoggles
	{
		class XtdGearInfo
		{
			model="vmnd_psq36";
			mount="grey";
			config="up";
			pack="off";
		};
	};
	class psq36_tarsier_dovetail_NB: NVGoggles
	{
		class XtdGearInfo
		{
			model="vmnd_psq36";
			mount="grey";
			config="tars";
			pack="off";
		};
	};
	class psq36_gsgm_NB: NVGoggles
	{
		class XtdGearInfo
		{
			model="vmnd_psq36";
			mount="gsgm";
			config="up";
			pack="off";
		};
	};
};
class BettIR_Config
{
	class CompatibleNightvisionGoggles
	{
		class __base_NVG;
		class pvs31_01: __base_NVG
		{
		};
		class pvs31_02: __base_NVG
		{
		};
		class pvs31_03: __base_NVG
		{
		};
		class psq36_dovetail: __base_NVG
		{
		};
		class psq36_tarsier_dovetail: __base_NVG
		{
		};
		class psq36_gsgm: __base_NVG
		{
		};
		class pvs31_01_NB: __base_NVG
		{
		};
		class pvs31_02_NB: __base_NVG
		{
		};
		class pvs31_03_NB: __base_NVG
		{
		};
		class psq36_dovetail_NB: __base_NVG
		{
		};
		class psq36_tarsier_dovetail_NB: __base_NVG
		{
		};
		class psq36_gsgm_NB: __base_NVG
		{
		};
	};
};
class cfgMods
{
	author="wanoO";
	timepacked="1631793207";
};
