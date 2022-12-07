class CfgPatches
{
	class ASEC_Backpack1
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
class UniformSlotInfo
{
	slotType=0;
	linkProxy="-";
};
class XtdGearModels
{
	class cfgvehicles
	{
		class ASEC_Ranger
		{
			label="[ASEC] Ranger Backpack";
			author="Jup, Lip, Thunder";
			options[]=
			{
				"vest",
				"camo"
			};
			class vest
			{
				label="Vest";
				values[]=
				{
					"avs",
					"jpc"
				};
				class avs
				{
					label="AVS";
				};
				class jpc
				{
					label="JPC";
				};
			};
			class camo
			{
				label="Camouflage";
				values[]=
				{
					"blk",
					"cb",
					"mc",
					"rg"
				};
				class blk
				{
					label="BLK";
				};
				class cb
				{
					label="CB";
				};
				class mc
				{
					label="MC";
				};
				class rg
				{
					label="RG";
				};
			};
		};
		class ASEC_Eagle
		{
			label="[ASEC] Eagle Backpack";
			author="Jup, Lip, Thunder";
			options[]=
			{
				"strap",
				"antenna"
			};
			class strap
			{
				label="Backpack Straps";
				values[]=
				{
					"on",
					"off"
				};
				class on
				{
					label="ON";
				};
				class off
				{
					label="OFF";
				};
			};
			class antenna
			{
				label="Camo";
				values[]=
				{
					"on",
					"off"
				};
				class on
				{
					label="ON";
				};
				class off
				{
					label="OFF";
				};
			};
		};
		class ASEC_MRCL
		{
			label="[ASEC] Mystery Ranch 3DA CL";
			author="Jup, Lip, Thunder";
			options[]=
			{
				"camo"
			};
			class camo
			{
				label="Camouflage";
				values[]=
				{
					"cb",
					"mc"
				};
				class cb
				{
					label="CB";
				};
				class mc
				{
					label="MC";
				};
			};
		};
		class ASEC_MRASAP
		{
			label="[ASEC] Mystery Ranch ASAP";
			author="Jup, Lip, Thunder";
			options[]=
			{
				"camo"
			};
			class camo
			{
				label="Camouflage";
				values[]=
				{
					"blk",
					"cb",
					"gry",
					"mc"
				};
				class blk
				{
					label="BLK";
				};
				class cb
				{
					label="CB";
				};
				class gry
				{
					label="GRY";
				};
				class mc
				{
					label="MC";
				};
			};
		};
		class ASEC_30L
		{
			label="[ASEC] 30L - Arcteryx Backpack";
			author="Jup, Lip, Thunder";
			options[]=
			{
				"camo"
			};
			class camo
			{
				label="Camouflage";
				values[]=
				{
					"hv",
					"mc",
					"mct",
					"od",
					"tan"
				};
				class hv
				{
					label="HIVIS";
				};
				class mc
				{
					label="MC";
				};
				class mct
				{
					label="MCT";
				};
				class od
				{
					label="OD";
				};
				class tan
				{
					label="TAN";
				};
			};
		};
		class ASEC_Pack
		{
			label="[ASEC] Zip-On Pack";
			author="Jup, Lip, Thunder";
			options[]=
			{
				"vest",
				"camo",
				"bolt",
				"halligan",
				"magpouch",
				"flag",
				"bangpouch"
			};
			class vest
			{
				label="Vest";
				values[]=
				{
					"avs",
					"jpc",
					"fcpc"
				};
				class avs
				{
					label="AVS";
				};
				class jpc
				{
					label="JPC";
				};
				class fcpc
				{
					label="FCPC";
				};
			};
			class camo
			{
				label="Camouflage";
				values[]=
				{
					"aor1",
					"aor2",
					"mc",
					"rg"
				};
				class aor1
				{
					label="AOR1";
				};
				class aor2
				{
					label="AOR2";
				};
				class mc
				{
					label="MC";
				};
				class rg
				{
					label="RG";
				};
			};
			class bolt
			{
				label="Bolt";
				values[]=
				{
					"on",
					"off"
				};
				class on
				{
					label="ON";
				};
				class off
				{
					label="OFF";
				};
			};
			class halligan
			{
				label="Halligan";
				values[]=
				{
					"on1",
					"on2",
					"off"
				};
				class on1
				{
					label="1";
				};
				class on2
				{
					label="2";
				};
				class off
				{
					label="OFF";
				};
			};
			class magpouch
			{
				label="Mag Pouches";
				values[]=
				{
					"on",
					"off"
				};
				class on
				{
					label="ON";
				};
				class off
				{
					label="OFF";
				};
			};
			class flag
			{
				label="US Flag";
				values[]=
				{
					"on",
					"off"
				};
				class on
				{
					label="ON";
				};
				class off
				{
					label="OFF";
				};
			};
			class bangpouch
			{
				label="Flashbang Pouches";
				values[]=
				{
					"on",
					"off"
				};
				class on
				{
					label="ON";
				};
				class off
				{
					label="OFF";
				};
			};
		};
		class ASEC_GS
		{
			label="[ASEC] Gunslinger";
			author="Jup, Lip, Thunder";
			options[]=
			{
				"vest"
			};
			class vest
			{
				label="Vest";
				values[]=
				{
					"avs",
					"jpc"
				};
				class avs
				{
					label="AVS";
				};
				class jpc
				{
					label="JPC";
				};
			};
		};
		class ASEC_BPP
		{
			label="[ASEC] Backpack Panel";
			author="Jup, Lip, Thunder";
			options[]=
			{
				"vest",
				"sg",
				"can",
				"flag"
			};
			class vest
			{
				label="Vest";
				values[]=
				{
					"avs",
					"jpc"
				};
				class avs
				{
					label="AVS";
				};
				class jpc
				{
					label="JPC";
				};
			};
			class sg
			{
				label="Shotgun";
				values[]=
				{
					"on",
					"off"
				};
				class on
				{
					label="ON";
				};
				class off
				{
					label="OFF";
				};
			};
			class can
			{
				label="Shotgun";
				values[]=
				{
					"wm",
					"rb",
					"off"
				};
				class wm
				{
					label="MONSTER ENERGY";
				};
				class rb
				{
					label="RED BULL";
				};
				class off
				{
					label="OFF";
				};
			};
			class flag
			{
				label="US Flag";
				values[]=
				{
					"on",
					"off"
				};
				class on
				{
					label="ON";
				};
				class off
				{
					label="OFF";
				};
			};
		};
		class ASEC_Panel
		{
			label="[ASEC] Panels";
			author="Jup, Lip, Thunder";
			options[]=
			{
				"vest",
				"panel"
			};
			class vest
			{
				label="Vest";
				values[]=
				{
					"avs",
					"jpc"
				};
				class avs
				{
					label="AVS";
				};
				class jpc
				{
					label="JPC";
				};
			};
			class panel
			{
				label="Panel";
				values[]=
				{
					"panel1",
					"panel2",
					"panel3",
					"panel4",
					"panel5",
					"panel6"
				};
				class panel1
				{
					label="1";
				};
				class panel2
				{
					label="2";
				};
				class panel3
				{
					label="3";
				};
				class panel4
				{
					label="4";
				};
				class panel5
				{
					label="5";
				};
				class panel6
				{
					label="6";
				};
			};
		};
	};
};
class CfgVehicles
{
	class B_Kitbag_Base;
	class B_AssaultPack_mcamo;
	class ASEC_Ranger_BLK_AVS: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		displayName="[ASEC] Ranger Backpack AVS (BLK)";
		model="ASEC_Backpack1\ranger_backpack_avs.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpack1\tex\backpack_blk.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Ranger";
			vest="avs";
			camo="blk";
		};
	};
	class ASEC_Ranger_CB_AVS: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		displayName="[ASEC] Ranger Backpack AVS (CB)";
		model="ASEC_Backpack1\ranger_backpack_avs.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpack1\tex\backpack_cb.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Ranger";
			vest="avs";
			camo="cb";
		};
	};
	class ASEC_Ranger_MC_AVS: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		displayName="[ASEC] Ranger Backpack AVS (MC)";
		model="ASEC_Backpack1\ranger_backpack_avs.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpack1\tex\backpack_mc.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Ranger";
			vest="avs";
			camo="mc";
		};
	};
	class ASEC_Ranger_RG_AVS: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		displayName="[ASEC] Ranger Backpack AVS (RG)";
		model="ASEC_Backpack1\ranger_backpack_avs.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpack1\tex\backpack_rg.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Ranger";
			vest="avs";
			camo="rg";
		};
	};
	class ASEC_Ranger_BLK_JPC: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		displayName="[ASEC] Ranger Backpack JPC (BLK)";
		model="ASEC_Backpack1\ranger_backpack_jpc.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpack1\tex\backpack_blk.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Ranger";
			vest="jpc";
			camo="blk";
		};
	};
	class ASEC_Ranger_CB_JPC: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		displayName="[ASEC] Ranger Backpack JPC (CB)";
		model="ASEC_Backpack1\ranger_backpack_jpc.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpack1\tex\backpack_cb.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Ranger";
			vest="jpc";
			camo="cb";
		};
	};
	class ASEC_Ranger_MC_JPC: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		displayName="[ASEC] Ranger Backpack JPC (MC)";
		model="ASEC_Backpack1\ranger_backpack_jpc.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpack1\tex\backpack_mc.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Ranger";
			vest="jpc";
			camo="mc";
		};
	};
	class ASEC_Ranger_RG_JPC: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		displayName="[ASEC] Ranger Backpack JPC (RG)";
		model="ASEC_Backpack1\ranger_backpack_jpc.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpack1\tex\backpack_rg.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Ranger";
			vest="jpc";
			camo="rg";
		};
	};
	class ASEC_Eagle_MC: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Eagle Pack (MC)";
		model="ASEC_Backpack1\eaglepack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"antenna",
			"antenna2",
			"strap"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Eagle";
			strap="off";
			antenna="off";
		};
	};
	class ASEC_Eagle_Strap_MC: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Eagle Backpack (MC)";
		model="ASEC_Backpack1\eaglepack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"antenna",
			"antenna2",
			"strap"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\strap_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Eagle";
			strap="on";
			antenna="off";
		};
	};
	class ASEC_Eagle_Antenna_MC: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Comms Eagle Pack (MC)";
		model="ASEC_Backpack1\eaglepack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"antenna",
			"antenna2",
			"strap"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\antenna\slingshot_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\re\radio_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Eagle";
			strap="off";
			antenna="on";
		};
	};
	class ASEC_Eagle_Antenna_Strap_MC: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Comms Eagle Backpack (MC)";
		model="ASEC_Backpack1\eaglepack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"antenna",
			"antenna2",
			"strap"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\antenna\slingshot_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\re\radio_co.paa",
			"ASEC_Backpack1\tex\strap_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Eagle";
			strap="on";
			antenna="on";
		};
	};
	class ASEC_3DACL_CB: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		displayName="[ASEC] Mystery Ranch 3DA CL (CB)";
		model="ASEC_Backpack1\MysteryCL.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpack1\tex\mysteryCL_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_MRCL";
			camo="cb";
		};
	};
	class ASEC_3DACL_MC: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		displayName="[ASEC] Mystery Ranch 3DA CL (MC)";
		model="ASEC_Backpack1\MysteryCL.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpack1\tex\mysteryCL_mc_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_MRCL";
			camo="mc";
		};
	};
	class ASEC_ASAP_BLK: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		displayName="[ASEC] Mystery Ranch ASAP (BLK)";
		model="ASEC_Backpack1\MysteryASAP.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpack1\tex\mysteryASAP_blk_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_MRASAP";
			camo="blk";
		};
	};
	class ASEC_ASAP_CB: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		displayName="[ASEC] Mystery Ranch ASAP (CB)";
		model="ASEC_Backpack1\MysteryASAP.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpack1\tex\mysteryASAP_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_MRASAP";
			camo="cb";
		};
	};
	class ASEC_ASAP_GRY: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		displayName="[ASEC] Mystery Ranch ASAP (GRY)";
		model="ASEC_Backpack1\MysteryASAP.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpack1\tex\mysteryASAP_gry_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_MRASAP";
			camo="gry";
		};
	};
	class ASEC_ASAP_MC: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		displayName="[ASEC] Mystery Ranch ASAP (MC)";
		model="ASEC_Backpack1\MysteryASAP.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpack1\tex\mysteryASAP_mc_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_MRASAP";
			camo="mc";
		};
	};
	class ASEC_30L_HV: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		displayName="[ASEC] 30L - Arcteryx (HIVIS)";
		model="ASEC_Backpack1\arcteryxbackpack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpack1\tex\mountain_hivis.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_30L";
			camo="hv";
		};
	};
	class ASEC_30L_MC: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		displayName="[ASEC] 30L - Arcteryx (MC)";
		model="ASEC_Backpack1\arcteryxbackpack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpack1\tex\mountain_mc.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_30L";
			camo="mc";
		};
	};
	class ASEC_30L_MCT: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		displayName="[ASEC] 30L - Arcteryx (MCT)";
		model="ASEC_Backpack1\arcteryxbackpack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpack1\tex\mountain_mct.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_30L";
			camo="mct";
		};
	};
	class ASEC_30L_OD: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		displayName="[ASEC] 30L - Arcteryx (OD)";
		model="ASEC_Backpack1\arcteryxbackpack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpack1\tex\mountain_od.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_30L";
			camo="od";
		};
	};
	class ASEC_30L_TAN: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		displayName="[ASEC] 30L - Arcteryx (TAN)";
		model="ASEC_Backpack1\arcteryxbackpack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpack1\tex\mountain_tan.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_30L";
			camo="tan";
		};
	};
	class ASEC_Pack_AVS_AOR1: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS (AOR1)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor1";
			bolt="off";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR1_BPouch: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch (AOR1)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor1";
			bolt="off";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_AOR1_BPouch_Bolt: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch Bolt (AOR1)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor1";
			bolt="on";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_AOR1_BPouch_Bolt_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch Bolt Halligan (AOR1)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor1";
			bolt="on";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_AOR1_BPouch_Bolt_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch Bolt Halligan 2 (AOR1)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor1";
			bolt="on";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_AOR1_BPouch_Bolt_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch Bolt Halligan Mags (AOR1)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor1";
			bolt="on";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_AOR1_BPouch_Bolt_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch Bolt Halligan 2 Mags (AOR1)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor1";
			bolt="on";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_AOR1_BPouch_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch Halligan (AOR1)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor1";
			bolt="off";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_AOR1_BPouch_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch Halligan 2 (AOR1)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor1";
			bolt="off";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_AOR1_BPouch_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch Halligan Mags (AOR1)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor1";
			bolt="off";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_AOR1_BPouch_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch Halligan 2 Mags (AOR1)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor1";
			bolt="off";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_AOR1_BPouch_Bolt_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch Bolt Mags (AOR1)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor1";
			bolt="on";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_AOR1_BPouch_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch Mags (AOR1)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor1";
			bolt="off";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_AOR1_Bolt: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt (AOR1)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor1";
			bolt="on";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR1_Bolt_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt Halligan (AOR1)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor1";
			bolt="on";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR1_Bolt_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt Halligan 2 (AOR1)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor1";
			bolt="on";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR1_Bolt_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt Halligan Mags (AOR1)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor1";
			bolt="on";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR1_Bolt_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt Halligan 2 Mags (AOR1)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor1";
			bolt="on";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR1_Bolt_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt Mags (AOR1)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor1";
			bolt="on";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR1_Bolt_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt (AOR1)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor1";
			bolt="on";
			halligan="off";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR1_Bolt_Halligan_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt Halligan (AOR1)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor1";
			bolt="on";
			halligan="on1";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR1_Bolt_Halligan2_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt Halligan 2 (AOR1)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor1";
			bolt="on";
			halligan="on2";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR1_Bolt_Halligan_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt Halligan Mags (AOR1)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor1";
			bolt="on";
			halligan="on1";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR1_Bolt_Halligan2_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt Halligan 2 Mags (AOR1)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor1";
			bolt="on";
			halligan="on2";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR1_Bolt_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt Mags (AOR1)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor1";
			bolt="on";
			halligan="off";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR1_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Halligan (AOR1)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor1";
			bolt="off";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR1_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Halligan Mags (AOR1)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor1";
			bolt="off";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR1_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Halligan (AOR1)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor1";
			bolt="off";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR1_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Halligan 2 Mags (AOR1)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor1";
			bolt="off";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR1_Halligan_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Halligan (AOR1)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor1";
			bolt="off";
			halligan="on1";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR1_Halligan2_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Halligan 2 (AOR1)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor1";
			bolt="off";
			halligan="on2";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR1_Halligan_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Halligan Mags (AOR1)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor1";
			bolt="off";
			halligan="on1";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR1_Halligan2_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Halligan 2 Mags (AOR1)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor1";
			bolt="off";
			halligan="on2";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR1_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Mags (AOR1)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor1";
			bolt="off";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR1_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS (AOR1)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor1";
			bolt="off";
			halligan="off";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR1_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Mags (AOR1)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor1";
			bolt="off";
			halligan="off";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS (AOR2)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor2";
			bolt="off";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR2_BPouch: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch (AOR2)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor2";
			bolt="off";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_AOR2_BPouch_Bolt: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch Bolt (AOR2)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor2";
			bolt="on";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_AOR2_BPouch_Bolt_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch Bolt Halligan (AOR2)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor2";
			bolt="on";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_AOR2_BPouch_Bolt_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch Bolt Halligan 2 (AOR2)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor2";
			bolt="on";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_AOR2_BPouch_Bolt_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch Bolt Halligan Mags (AOR2)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor2";
			bolt="on";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_AOR2_BPouch_Bolt_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch Bolt Halligan 2 Mags (AOR2)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor2";
			bolt="on";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_AOR2_BPouch_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch Halligan (AOR2)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor2";
			bolt="off";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_AOR2_BPouch_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch Halligan 2 (AOR2)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor2";
			bolt="off";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_AOR2_BPouch_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch Halligan Mags (AOR2)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor2";
			bolt="off";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_AOR2_BPouch_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch Halligan 2 Mags (AOR2)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor2";
			bolt="off";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_AOR2_BPouch_Bolt_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch Bolt Mags (AOR2)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor2";
			bolt="on";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_AOR2_BPouch_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch Mags (AOR2)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor2";
			bolt="off";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_AOR2_Bolt: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt (AOR2)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor2";
			bolt="on";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR2_Bolt_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt Halligan (AOR2)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor2";
			bolt="on";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR2_Bolt_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt Halligan 2 (AOR2)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor2";
			bolt="on";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR2_Bolt_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt Halligan Mags (AOR2)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor2";
			bolt="on";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR2_Bolt_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt Halligan 2 Mags (AOR2)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor2";
			bolt="on";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR2_Bolt_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt Mags (AOR2)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor2";
			bolt="on";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR2_Bolt_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt (AOR2)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor2";
			bolt="on";
			halligan="off";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR2_Bolt_Halligan_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt Halligan (AOR2)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor2";
			bolt="on";
			halligan="on1";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR2_Bolt_Halligan2_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt Halligan 2 (AOR2)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor2";
			bolt="on";
			halligan="on2";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR2_Bolt_Halligan_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt Halligan Mags (AOR2)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor2";
			bolt="on";
			halligan="on1";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR2_Bolt_Halligan2_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt Halligan 2 Mags (AOR2)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor2";
			bolt="on";
			halligan="on2";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR2_Bolt_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt Mags (AOR2)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor2";
			bolt="on";
			halligan="off";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR2_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Halligan (AOR2)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor2";
			bolt="off";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR2_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Halligan Mags (AOR2)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor2";
			bolt="off";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR2_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Halligan (AOR2)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor2";
			bolt="off";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR2_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Halligan 2 Mags (AOR2)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor2";
			bolt="off";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR2_Halligan_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Halligan (AOR2)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor2";
			bolt="off";
			halligan="on1";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR2_Halligan2_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Halligan 2 (AOR2)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor2";
			bolt="off";
			halligan="on2";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR2_Halligan_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Halligan Mags (AOR2)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor2";
			bolt="off";
			halligan="on1";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR2_Halligan2_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Halligan 2 Mags (AOR2)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor2";
			bolt="off";
			halligan="on2";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Mags (AOR2)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor2";
			bolt="off";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR2_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS (AOR2)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor2";
			bolt="off";
			halligan="off";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_AOR2_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Mags (AOR2)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="aor2";
			bolt="off";
			halligan="off";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_MC: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS (MC)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="mc";
			bolt="off";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_MC_BPouch: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch (MC)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="mc";
			bolt="off";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_MC_BPouch_Bolt: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch Bolt (MC)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="mc";
			bolt="on";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_MC_BPouch_Bolt_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch Bolt Halligan (MC)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="mc";
			bolt="on";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_MC_BPouch_Bolt_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch Bolt Halligan 2 (MC)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="mc";
			bolt="on";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_MC_BPouch_Bolt_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch Bolt Halligan Mags (MC)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="mc";
			bolt="on";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_MC_BPouch_Bolt_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch Bolt Halligan 2 Mags (MC)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="mc";
			bolt="on";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_MC_BPouch_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch Halligan (MC)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="mc";
			bolt="off";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_MC_BPouch_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch Halligan 2 (MC)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="mc";
			bolt="off";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_MC_BPouch_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch Halligan Mags (MC)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="mc";
			bolt="off";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_MC_BPouch_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch Halligan 2 Mags (MC)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="mc";
			bolt="off";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_MC_BPouch_Bolt_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch Bolt Mags (MC)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="mc";
			bolt="on";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_MC_BPouch_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch Mags (MC)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="mc";
			bolt="off";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_MC_Bolt: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt (MC)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="mc";
			bolt="on";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_MC_Bolt_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt Halligan (MC)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="mc";
			bolt="on";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_MC_Bolt_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt Halligan 2 (MC)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="mc";
			bolt="on";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_MC_Bolt_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt Halligan Mags (MC)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="mc";
			bolt="on";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_MC_Bolt_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt Halligan 2 Mags (MC)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="mc";
			bolt="on";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_MC_Bolt_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt Mags (MC)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="mc";
			bolt="on";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_MC_Bolt_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt (MC)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="mc";
			bolt="on";
			halligan="off";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_MC_Bolt_Halligan_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt Halligan (MC)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="mc";
			bolt="on";
			halligan="on1";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_MC_Bolt_Halligan2_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt Halligan 2 (MC)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="mc";
			bolt="on";
			halligan="on2";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_MC_Bolt_Halligan_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt Halligan Mags (MC)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="mc";
			bolt="on";
			halligan="on1";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_MC_Bolt_Halligan2_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt Halligan 2 Mags (MC)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="mc";
			bolt="on";
			halligan="on2";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_MC_Bolt_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt Mags (MC)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="mc";
			bolt="on";
			halligan="off";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_MC_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Halligan (MC)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="mc";
			bolt="off";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_MC_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Halligan Mags (MC)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="mc";
			bolt="off";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_MC_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Halligan (MC)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="mc";
			bolt="off";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_MC_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Halligan 2 Mags (MC)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="mc";
			bolt="off";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_MC_Halligan_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Halligan (MC)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="mc";
			bolt="off";
			halligan="on1";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_MC_Halligan2_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Halligan 2 (MC)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="mc";
			bolt="off";
			halligan="on2";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_MC_Halligan_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Halligan Mags (MC)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="mc";
			bolt="off";
			halligan="on1";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_MC_Halligan2_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Halligan 2 Mags (MC)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="mc";
			bolt="off";
			halligan="on2";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_MC_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Mags (MC)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="mc";
			bolt="off";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_MC_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS (MC)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="mc";
			bolt="off";
			halligan="off";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_MC_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Mags (MC)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="mc";
			bolt="off";
			halligan="off";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_RG: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS (RG)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="rg";
			bolt="off";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_RG_BPouch: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch (RG)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="rg";
			bolt="off";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_RG_BPouch_Bolt: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch Bolt (RG)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="rg";
			bolt="on";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_RG_BPouch_Bolt_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch Bolt Halligan (RG)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="rg";
			bolt="on";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_RG_BPouch_Bolt_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch Bolt Halligan 2 (RG)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="rg";
			bolt="on";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_RG_BPouch_Bolt_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch Bolt Halligan Mags (RG)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="rg";
			bolt="on";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_RG_BPouch_Bolt_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch Bolt Halligan 2 Mags (RG)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="rg";
			bolt="on";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_RG_BPouch_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch Halligan (RG)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="rg";
			bolt="off";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_RG_BPouch_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch Halligan 2 (RG)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="rg";
			bolt="off";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_RG_BPouch_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch Halligan Mags (RG)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="rg";
			bolt="off";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_RG_BPouch_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch Halligan 2 Mags (RG)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="rg";
			bolt="off";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_RG_BPouch_Bolt_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch Bolt Mags (RG)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="rg";
			bolt="on";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_RG_BPouch_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bangerpouch Mags (RG)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="rg";
			bolt="off";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_AVS_RG_Bolt: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt (RG)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="rg";
			bolt="on";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_RG_Bolt_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt Halligan (RG)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="rg";
			bolt="on";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_RG_Bolt_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt Halligan 2 (RG)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="rg";
			bolt="on";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_RG_Bolt_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt Halligan Mags (RG)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="rg";
			bolt="on";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_RG_Bolt_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt Halligan 2 Mags (RG)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="rg";
			bolt="on";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_RG_Bolt_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt Mags (RG)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="rg";
			bolt="on";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_RG_Bolt_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt (RG)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="rg";
			bolt="on";
			halligan="off";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_RG_Bolt_Halligan_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt Halligan (RG)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="rg";
			bolt="on";
			halligan="on1";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_RG_Bolt_Halligan2_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt Halligan 2 (RG)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="rg";
			bolt="on";
			halligan="on2";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_RG_Bolt_Halligan_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt Halligan Mags (RG)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="rg";
			bolt="on";
			halligan="on1";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_RG_Bolt_Halligan2_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt Halligan 2 Mags (RG)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="rg";
			bolt="on";
			halligan="on2";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_RG_Bolt_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Bolt Mags (RG)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="rg";
			bolt="on";
			halligan="off";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_RG_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Halligan (RG)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="rg";
			bolt="off";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_RG_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Halligan Mags (RG)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="rg";
			bolt="off";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_RG_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Halligan (RG)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="rg";
			bolt="off";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_RG_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Halligan 2 Mags (RG)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="rg";
			bolt="off";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_RG_Halligan_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Halligan (RG)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="rg";
			bolt="off";
			halligan="on1";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_RG_Halligan2_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Halligan 2 (RG)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="rg";
			bolt="off";
			halligan="on2";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_RG_Halligan_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Halligan Mags (RG)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="rg";
			bolt="off";
			halligan="on1";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_RG_Halligan2_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Halligan 2 Mags (RG)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="rg";
			bolt="off";
			halligan="on2";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_RG_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Mags (RG)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="rg";
			bolt="off";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_RG_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS (RG)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="rg";
			bolt="off";
			halligan="off";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_AVS_RG_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack AVS Mags (RG)";
		model="ASEC_Backpack1\AVSPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="avs";
			camo="rg";
			bolt="off";
			halligan="off";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR1: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC (AOR1)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor1";
			bolt="off";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR1_BPouch: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch (AOR1)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor1";
			bolt="off";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_AOR1_BPouch_Bolt: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch Bolt (AOR1)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor1";
			bolt="on";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_AOR1_BPouch_Bolt_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch Bolt Halligan (AOR1)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor1";
			bolt="on";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_AOR1_BPouch_Bolt_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch Bolt Halligan 2 (AOR1)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor1";
			bolt="on";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_AOR1_BPouch_Bolt_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch Bolt Halligan Mags (AOR1)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor1";
			bolt="on";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_AOR1_BPouch_Bolt_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch Bolt Halligan 2 Mags (AOR1)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor1";
			bolt="on";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_AOR1_BPouch_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch Halligan (AOR1)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor1";
			bolt="off";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_AOR1_BPouch_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch Halligan 2 (AOR1)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor1";
			bolt="off";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_AOR1_BPouch_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch Halligan Mags (AOR1)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor1";
			bolt="off";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_AOR1_BPouch_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch Halligan 2 Mags (AOR1)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor1";
			bolt="off";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_AOR1_BPouch_Bolt_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch Bolt Mags (AOR1)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor1";
			bolt="on";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_AOR1_BPouch_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch Mags (AOR1)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor1";
			bolt="off";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_AOR1_Bolt: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt (AOR1)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor1";
			bolt="on";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR1_Bolt_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt Halligan (AOR1)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor1";
			bolt="on";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR1_Bolt_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt Halligan 2 (AOR1)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor1";
			bolt="on";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR1_Bolt_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt Halligan Mags (AOR1)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor1";
			bolt="on";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR1_Bolt_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt Halligan 2 Mags (AOR1)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor1";
			bolt="on";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR1_Bolt_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt Mags (AOR1)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor1";
			bolt="on";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR1_Bolt_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt (AOR1)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor1";
			bolt="on";
			halligan="off";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR1_Bolt_Halligan_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt Halligan (AOR1)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor1";
			bolt="on";
			halligan="on1";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR1_Bolt_Halligan2_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt Halligan 2 (AOR1)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor1";
			bolt="on";
			halligan="on2";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR1_Bolt_Halligan_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt Halligan Mags (AOR1)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor1";
			bolt="on";
			halligan="on1";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR1_Bolt_Halligan2_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt Halligan 2 Mags (AOR1)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor1";
			bolt="on";
			halligan="on2";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR1_Bolt_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt Mags (AOR1)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor1";
			bolt="on";
			halligan="off";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR1_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Halligan (AOR1)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor1";
			bolt="off";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR1_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Halligan Mags (AOR1)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor1";
			bolt="off";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR1_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Halligan (AOR1)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor1";
			bolt="off";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR1_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Halligan 2 Mags (AOR1)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor1";
			bolt="off";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR1_Halligan_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Halligan (AOR1)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor1";
			bolt="off";
			halligan="on1";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR1_Halligan2_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Halligan 2 (AOR1)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor1";
			bolt="off";
			halligan="on2";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR1_Halligan_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Halligan Mags (AOR1)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor1";
			bolt="off";
			halligan="on1";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR1_Halligan2_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Halligan 2 Mags (AOR1)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor1";
			bolt="off";
			halligan="on2";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR1_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Mags (AOR1)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor1";
			bolt="off";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR1_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC (AOR1)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor1";
			bolt="off";
			halligan="off";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR1_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Mags (AOR1)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor1";
			bolt="off";
			halligan="off";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC (AOR2)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor2";
			bolt="off";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR2_BPouch: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch (AOR2)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor2";
			bolt="off";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_AOR2_BPouch_Bolt: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch Bolt (AOR2)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor2";
			bolt="on";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_AOR2_BPouch_Bolt_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch Bolt Halligan (AOR2)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor2";
			bolt="on";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_AOR2_BPouch_Bolt_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch Bolt Halligan 2 (AOR2)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor2";
			bolt="on";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_AOR2_BPouch_Bolt_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch Bolt Halligan Mags (AOR2)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor2";
			bolt="on";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_AOR2_BPouch_Bolt_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch Bolt Halligan 2 Mags (AOR2)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor2";
			bolt="on";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_AOR2_BPouch_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch Halligan (AOR2)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor2";
			bolt="off";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_AOR2_BPouch_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch Halligan 2 (AOR2)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor2";
			bolt="off";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_AOR2_BPouch_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch Halligan Mags (AOR2)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor2";
			bolt="off";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_AOR2_BPouch_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch Halligan 2 Mags (AOR2)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor2";
			bolt="off";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_AOR2_BPouch_Bolt_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch Bolt Mags (AOR2)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor2";
			bolt="on";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_AOR2_BPouch_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch Mags (AOR2)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor2";
			bolt="off";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_AOR2_Bolt: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt (AOR2)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor2";
			bolt="on";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR2_Bolt_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt Halligan (AOR2)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor2";
			bolt="on";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR2_Bolt_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt Halligan 2 (AOR2)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor2";
			bolt="on";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR2_Bolt_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt Halligan Mags (AOR2)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor2";
			bolt="on";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR2_Bolt_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt Halligan 2 Mags (AOR2)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor2";
			bolt="on";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR2_Bolt_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt Mags (AOR2)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor2";
			bolt="on";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR2_Bolt_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt (AOR2)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor2";
			bolt="on";
			halligan="off";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR2_Bolt_Halligan_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt Halligan (AOR2)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor2";
			bolt="on";
			halligan="on1";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR2_Bolt_Halligan2_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt Halligan 2 (AOR2)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor2";
			bolt="on";
			halligan="on2";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR2_Bolt_Halligan_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt Halligan Mags (AOR2)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor2";
			bolt="on";
			halligan="on1";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR2_Bolt_Halligan2_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt Halligan 2 Mags (AOR2)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor2";
			bolt="on";
			halligan="on2";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR2_Bolt_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt Mags (AOR2)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor2";
			bolt="on";
			halligan="off";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR2_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Halligan (AOR2)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor2";
			bolt="off";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR2_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Halligan Mags (AOR2)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor2";
			bolt="off";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR2_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Halligan (AOR2)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor2";
			bolt="off";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR2_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Halligan 2 Mags (AOR2)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor2";
			bolt="off";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR2_Halligan_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Halligan (AOR2)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor2";
			bolt="off";
			halligan="on1";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR2_Halligan2_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Halligan 2 (AOR2)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor2";
			bolt="off";
			halligan="on2";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR2_Halligan_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Halligan Mags (AOR2)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor2";
			bolt="off";
			halligan="on1";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR2_Halligan2_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Halligan 2 Mags (AOR2)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor2";
			bolt="off";
			halligan="on2";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Mags (AOR2)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor2";
			bolt="off";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR2_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC (AOR2)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor2";
			bolt="off";
			halligan="off";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_AOR2_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Mags (AOR2)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="aor2";
			bolt="off";
			halligan="off";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_MC: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC (MC)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="mc";
			bolt="off";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_MC_BPouch: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch (MC)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="mc";
			bolt="off";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_MC_BPouch_Bolt: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch Bolt (MC)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="mc";
			bolt="on";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_MC_BPouch_Bolt_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch Bolt Halligan (MC)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="mc";
			bolt="on";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_MC_BPouch_Bolt_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch Bolt Halligan 2 (MC)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="mc";
			bolt="on";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_MC_BPouch_Bolt_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch Bolt Halligan Mags (MC)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="mc";
			bolt="on";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_MC_BPouch_Bolt_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch Bolt Halligan 2 Mags (MC)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="mc";
			bolt="on";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_MC_BPouch_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch Halligan (MC)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="mc";
			bolt="off";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_MC_BPouch_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch Halligan 2 (MC)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="mc";
			bolt="off";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_MC_BPouch_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch Halligan Mags (MC)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="mc";
			bolt="off";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_MC_BPouch_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch Halligan 2 Mags (MC)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="mc";
			bolt="off";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_MC_BPouch_Bolt_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch Bolt Mags (MC)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="mc";
			bolt="on";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_MC_BPouch_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch Mags (MC)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="mc";
			bolt="off";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_MC_Bolt: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt (MC)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="mc";
			bolt="on";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_MC_Bolt_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt Halligan (MC)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="mc";
			bolt="on";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_MC_Bolt_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt Halligan 2 (MC)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="mc";
			bolt="on";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_MC_Bolt_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt Halligan Mags (MC)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="mc";
			bolt="on";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_MC_Bolt_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt Halligan 2 Mags (MC)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="mc";
			bolt="on";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_MC_Bolt_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt Mags (MC)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="mc";
			bolt="on";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_MC_Bolt_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt (MC)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="mc";
			bolt="on";
			halligan="off";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_MC_Bolt_Halligan_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt Halligan (MC)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="mc";
			bolt="on";
			halligan="on1";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_MC_Bolt_Halligan2_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt Halligan 2 (MC)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="mc";
			bolt="on";
			halligan="on2";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_MC_Bolt_Halligan_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt Halligan Mags (MC)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="mc";
			bolt="on";
			halligan="on1";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_MC_Bolt_Halligan2_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt Halligan 2 Mags (MC)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="mc";
			bolt="on";
			halligan="on2";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_MC_Bolt_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt Mags (MC)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="mc";
			bolt="on";
			halligan="off";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_MC_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Halligan (MC)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="mc";
			bolt="off";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_MC_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Halligan Mags (MC)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="mc";
			bolt="off";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_MC_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Halligan (MC)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="mc";
			bolt="off";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_MC_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Halligan 2 Mags (MC)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="mc";
			bolt="off";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_MC_Halligan_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Halligan (MC)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="mc";
			bolt="off";
			halligan="on1";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_MC_Halligan2_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Halligan 2 (MC)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="mc";
			bolt="off";
			halligan="on2";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_MC_Halligan_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Halligan Mags (MC)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="mc";
			bolt="off";
			halligan="on1";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_MC_Halligan2_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Halligan 2 Mags (MC)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="mc";
			bolt="off";
			halligan="on2";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_MC_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Mags (MC)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="mc";
			bolt="off";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_MC_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC (MC)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="mc";
			bolt="off";
			halligan="off";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_MC_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Mags (MC)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="mc";
			bolt="off";
			halligan="off";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_RG: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC (RG)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="rg";
			bolt="off";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_RG_BPouch: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch (RG)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="rg";
			bolt="off";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_RG_BPouch_Bolt: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch Bolt (RG)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="rg";
			bolt="on";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_RG_BPouch_Bolt_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch Bolt Halligan (RG)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="rg";
			bolt="on";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_RG_BPouch_Bolt_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch Bolt Halligan 2 (RG)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="rg";
			bolt="on";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_RG_BPouch_Bolt_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch Bolt Halligan Mags (RG)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="rg";
			bolt="on";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_RG_BPouch_Bolt_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch Bolt Halligan 2 Mags (RG)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="rg";
			bolt="on";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_RG_BPouch_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch Halligan (RG)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="rg";
			bolt="off";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_RG_BPouch_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch Halligan 2 (RG)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="rg";
			bolt="off";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_RG_BPouch_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch Halligan Mags (RG)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="rg";
			bolt="off";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_RG_BPouch_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch Halligan 2 Mags (RG)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="rg";
			bolt="off";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_RG_BPouch_Bolt_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch Bolt Mags (RG)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="rg";
			bolt="on";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_RG_BPouch_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bangerpouch Mags (RG)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="rg";
			bolt="off";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_JPC_RG_Bolt: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt (RG)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="rg";
			bolt="on";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_RG_Bolt_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt Halligan (RG)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="rg";
			bolt="on";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_RG_Bolt_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt Halligan 2 (RG)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="rg";
			bolt="on";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_RG_Bolt_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt Halligan Mags (RG)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="rg";
			bolt="on";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_RG_Bolt_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt Halligan 2 Mags (RG)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="rg";
			bolt="on";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_RG_Bolt_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt Mags (RG)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="rg";
			bolt="on";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_RG_Bolt_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt (RG)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="rg";
			bolt="on";
			halligan="off";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_RG_Bolt_Halligan_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt Halligan (RG)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="rg";
			bolt="on";
			halligan="on1";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_RG_Bolt_Halligan2_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt Halligan 2 (RG)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="rg";
			bolt="on";
			halligan="on2";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_RG_Bolt_Halligan_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt Halligan Mags (RG)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="rg";
			bolt="on";
			halligan="on1";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_RG_Bolt_Halligan2_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt Halligan 2 Mags (RG)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="rg";
			bolt="on";
			halligan="on2";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_RG_Bolt_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Bolt Mags (RG)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="rg";
			bolt="on";
			halligan="off";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_RG_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Halligan (RG)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="rg";
			bolt="off";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_RG_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Halligan Mags (RG)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="rg";
			bolt="off";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_RG_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Halligan (RG)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="rg";
			bolt="off";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_RG_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Halligan 2 Mags (RG)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="rg";
			bolt="off";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_RG_Halligan_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Halligan (RG)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="rg";
			bolt="off";
			halligan="on1";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_RG_Halligan2_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Halligan 2 (RG)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="rg";
			bolt="off";
			halligan="on2";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_RG_Halligan_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Halligan Mags (RG)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="rg";
			bolt="off";
			halligan="on1";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_RG_Halligan2_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Halligan 2 Mags (RG)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="rg";
			bolt="off";
			halligan="on2";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_RG_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Mags (RG)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="rg";
			bolt="off";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_RG_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC (RG)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="rg";
			bolt="off";
			halligan="off";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_JPC_RG_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack JPC Mags (RG)";
		model="ASEC_Backpack1\JPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="jpc";
			camo="rg";
			bolt="off";
			halligan="off";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR1: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC (AOR1)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor1";
			bolt="off";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR1_BPouch: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch (AOR1)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor1";
			bolt="off";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_AOR1_BPouch_Bolt: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch Bolt (AOR1)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor1";
			bolt="on";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_AOR1_BPouch_Bolt_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch Bolt Halligan (AOR1)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor1";
			bolt="on";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_AOR1_BPouch_Bolt_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch Bolt Halligan 2 (AOR1)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor1";
			bolt="on";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_AOR1_BPouch_Bolt_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch Bolt Halligan Mags (AOR1)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor1";
			bolt="on";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_AOR1_BPouch_Bolt_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch Bolt Halligan 2 Mags (AOR1)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor1";
			bolt="on";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_AOR1_BPouch_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch Halligan (AOR1)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor1";
			bolt="off";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_AOR1_BPouch_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch Halligan 2 (AOR1)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor1";
			bolt="off";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_AOR1_BPouch_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch Halligan Mags (AOR1)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor1";
			bolt="off";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_AOR1_BPouch_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch Halligan 2 Mags (AOR1)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor1";
			bolt="off";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_AOR1_BPouch_Bolt_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch Bolt Mags (AOR1)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor1";
			bolt="on";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_AOR1_BPouch_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch Mags (AOR1)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor1";
			bolt="off";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_AOR1_Bolt: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt (AOR1)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor1";
			bolt="on";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR1_Bolt_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt Halligan (AOR1)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor1";
			bolt="on";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR1_Bolt_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt Halligan 2 (AOR1)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor1";
			bolt="on";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR1_Bolt_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt Halligan Mags (AOR1)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor1";
			bolt="on";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR1_Bolt_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt Halligan 2 Mags (AOR1)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor1";
			bolt="on";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR1_Bolt_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt Mags (AOR1)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor1";
			bolt="on";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR1_Bolt_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt (AOR1)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor1";
			bolt="on";
			halligan="off";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR1_Bolt_Halligan_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt Halligan (AOR1)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor1";
			bolt="on";
			halligan="on1";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR1_Bolt_Halligan2_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt Halligan 2 (AOR1)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor1";
			bolt="on";
			halligan="on2";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR1_Bolt_Halligan_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt Halligan Mags (AOR1)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor1";
			bolt="on";
			halligan="on1";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR1_Bolt_Halligan2_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt Halligan 2 Mags (AOR1)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor1";
			bolt="on";
			halligan="on2";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR1_Bolt_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt Mags (AOR1)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor1";
			bolt="on";
			halligan="off";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR1_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Halligan (AOR1)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor1";
			bolt="off";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR1_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Halligan Mags (AOR1)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor1";
			bolt="off";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR1_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Halligan (AOR1)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor1";
			bolt="off";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR1_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Halligan 2 Mags (AOR1)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor1";
			bolt="off";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR1_Halligan_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Halligan (AOR1)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor1";
			bolt="off";
			halligan="on1";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR1_Halligan2_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Halligan 2 (AOR1)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor1";
			bolt="off";
			halligan="on2";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR1_Halligan_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Halligan Mags (AOR1)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor1";
			bolt="off";
			halligan="on1";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR1_Halligan2_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Halligan 2 Mags (AOR1)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor1";
			bolt="off";
			halligan="on2";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR1_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Mags (AOR1)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor1";
			bolt="off";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR1_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC (AOR1)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor1";
			bolt="off";
			halligan="off";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR1_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Mags (AOR1)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor1";
			bolt="off";
			halligan="off";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC (AOR2)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor2";
			bolt="off";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR2_BPouch: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch (AOR2)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor2";
			bolt="off";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_AOR2_BPouch_Bolt: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch Bolt (AOR2)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor2";
			bolt="on";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_AOR2_BPouch_Bolt_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch Bolt Halligan (AOR2)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor2";
			bolt="on";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_AOR2_BPouch_Bolt_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch Bolt Halligan 2 (AOR2)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor2";
			bolt="on";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_AOR2_BPouch_Bolt_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch Bolt Halligan Mags (AOR2)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor2";
			bolt="on";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_AOR2_BPouch_Bolt_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch Bolt Halligan 2 Mags (AOR2)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor2";
			bolt="on";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_AOR2_BPouch_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch Halligan (AOR2)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor2";
			bolt="off";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_AOR2_BPouch_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch Halligan 2 (AOR2)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor2";
			bolt="off";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_AOR2_BPouch_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch Halligan Mags (AOR2)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor2";
			bolt="off";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_AOR2_BPouch_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch Halligan 2 Mags (AOR2)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor2";
			bolt="off";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_AOR2_BPouch_Bolt_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch Bolt Mags (AOR2)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor2";
			bolt="on";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_AOR2_BPouch_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch Mags (AOR2)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor2";
			bolt="off";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_AOR2_Bolt: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt (AOR2)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor2";
			bolt="on";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR2_Bolt_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt Halligan (AOR2)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor2";
			bolt="on";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR2_Bolt_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt Halligan 2 (AOR2)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor2";
			bolt="on";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR2_Bolt_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt Halligan Mags (AOR2)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor2";
			bolt="on";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR2_Bolt_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt Halligan 2 Mags (AOR2)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor2";
			bolt="on";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR2_Bolt_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt Mags (AOR2)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor2";
			bolt="on";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR2_Bolt_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt (AOR2)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor2";
			bolt="on";
			halligan="off";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR2_Bolt_Halligan_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt Halligan (AOR2)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor2";
			bolt="on";
			halligan="on1";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR2_Bolt_Halligan2_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt Halligan 2 (AOR2)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor2";
			bolt="on";
			halligan="on2";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR2_Bolt_Halligan_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt Halligan Mags (AOR2)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor2";
			bolt="on";
			halligan="on1";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR2_Bolt_Halligan2_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt Halligan 2 Mags (AOR2)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor2";
			bolt="on";
			halligan="on2";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR2_Bolt_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt Mags (AOR2)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor2";
			bolt="on";
			halligan="off";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR2_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Halligan (AOR2)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor2";
			bolt="off";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR2_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Halligan Mags (AOR2)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor2";
			bolt="off";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR2_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Halligan (AOR2)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor2";
			bolt="off";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR2_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Halligan 2 Mags (AOR2)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor2";
			bolt="off";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR2_Halligan_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Halligan (AOR2)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor2";
			bolt="off";
			halligan="on1";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR2_Halligan2_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Halligan 2 (AOR2)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor2";
			bolt="off";
			halligan="on2";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR2_Halligan_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Halligan Mags (AOR2)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor2";
			bolt="off";
			halligan="on1";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR2_Halligan2_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Halligan 2 Mags (AOR2)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor2";
			bolt="off";
			halligan="on2";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Mags (AOR2)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor2";
			bolt="off";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR2_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC (AOR2)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor2";
			bolt="off";
			halligan="off";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_AOR2_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Mags (AOR2)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="aor2";
			bolt="off";
			halligan="off";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_MC: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC (MC)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="mc";
			bolt="off";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_MC_BPouch: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch (MC)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="mc";
			bolt="off";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_MC_BPouch_Bolt: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch Bolt (MC)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="mc";
			bolt="on";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_MC_BPouch_Bolt_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch Bolt Halligan (MC)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="mc";
			bolt="on";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_MC_BPouch_Bolt_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch Bolt Halligan 2 (MC)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="mc";
			bolt="on";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_MC_BPouch_Bolt_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch Bolt Halligan Mags (MC)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="mc";
			bolt="on";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_MC_BPouch_Bolt_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch Bolt Halligan 2 Mags (MC)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="mc";
			bolt="on";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_MC_BPouch_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch Halligan (MC)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="mc";
			bolt="off";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_MC_BPouch_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch Halligan 2 (MC)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="mc";
			bolt="off";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_MC_BPouch_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch Halligan Mags (MC)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="mc";
			bolt="off";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_MC_BPouch_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch Halligan 2 Mags (MC)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="mc";
			bolt="off";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_MC_BPouch_Bolt_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch Bolt Mags (MC)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="mc";
			bolt="on";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_MC_BPouch_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch Mags (MC)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="mc";
			bolt="off";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_MC_Bolt: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt (MC)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="mc";
			bolt="on";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_MC_Bolt_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt Halligan (MC)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="mc";
			bolt="on";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_MC_Bolt_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt Halligan 2 (MC)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="mc";
			bolt="on";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_MC_Bolt_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt Halligan Mags (MC)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="mc";
			bolt="on";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_MC_Bolt_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt Halligan 2 Mags (MC)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="mc";
			bolt="on";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_MC_Bolt_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt Mags (MC)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="mc";
			bolt="on";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_MC_Bolt_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt (MC)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="mc";
			bolt="on";
			halligan="off";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_MC_Bolt_Halligan_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt Halligan (MC)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="mc";
			bolt="on";
			halligan="on1";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_MC_Bolt_Halligan2_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt Halligan 2 (MC)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="mc";
			bolt="on";
			halligan="on2";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_MC_Bolt_Halligan_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt Halligan Mags (MC)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="mc";
			bolt="on";
			halligan="on1";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_MC_Bolt_Halligan2_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt Halligan 2 Mags (MC)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="mc";
			bolt="on";
			halligan="on2";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_MC_Bolt_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt Mags (MC)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="mc";
			bolt="on";
			halligan="off";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_MC_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Halligan (MC)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="mc";
			bolt="off";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_MC_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Halligan Mags (MC)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="mc";
			bolt="off";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_MC_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Halligan (MC)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="mc";
			bolt="off";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_MC_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Halligan 2 Mags (MC)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="mc";
			bolt="off";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_MC_Halligan_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Halligan (MC)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="mc";
			bolt="off";
			halligan="on1";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_MC_Halligan2_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Halligan 2 (MC)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="mc";
			bolt="off";
			halligan="on2";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_MC_Halligan_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Halligan Mags (MC)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="mc";
			bolt="off";
			halligan="on1";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_MC_Halligan2_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Halligan 2 Mags (MC)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="mc";
			bolt="off";
			halligan="on2";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_MC_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Mags (MC)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="mc";
			bolt="off";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_MC_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC (MC)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="mc";
			bolt="off";
			halligan="off";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_MC_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Mags (MC)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_mc_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="mc";
			bolt="off";
			halligan="off";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_RG: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC (RG)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="rg";
			bolt="off";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_RG_BPouch: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch (RG)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="rg";
			bolt="off";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_RG_BPouch_Bolt: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch Bolt (RG)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="rg";
			bolt="on";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_RG_BPouch_Bolt_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch Bolt Halligan (RG)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="rg";
			bolt="on";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_RG_BPouch_Bolt_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch Bolt Halligan 2 (RG)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="rg";
			bolt="on";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_RG_BPouch_Bolt_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch Bolt Halligan Mags (RG)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="rg";
			bolt="on";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_RG_BPouch_Bolt_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch Bolt Halligan 2 Mags (RG)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="rg";
			bolt="on";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_RG_BPouch_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch Halligan (RG)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="rg";
			bolt="off";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_RG_BPouch_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch Halligan 2 (RG)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="rg";
			bolt="off";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_RG_BPouch_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch Halligan Mags (RG)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="rg";
			bolt="off";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_RG_BPouch_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch Halligan 2 Mags (RG)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="rg";
			bolt="off";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_RG_BPouch_Bolt_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch Bolt Mags (RG)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="rg";
			bolt="on";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_RG_BPouch_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bangerpouch Mags (RG)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cosmetic\ASEC_Textures\data\ronin\roninhydration\parts_hydration_pack_ronin_co.paa",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="rg";
			bolt="off";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="on";
		};
	};
	class ASEC_Pack_FCPC_RG_Bolt: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt (RG)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="rg";
			bolt="on";
			halligan="off";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_RG_Bolt_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt Halligan (RG)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="rg";
			bolt="on";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_RG_Bolt_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt Halligan 2 (RG)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="rg";
			bolt="on";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_RG_Bolt_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt Halligan Mags (RG)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="rg";
			bolt="on";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_RG_Bolt_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt Halligan 2 Mags (RG)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="rg";
			bolt="on";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_RG_Bolt_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt Mags (RG)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="rg";
			bolt="on";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_RG_Bolt_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt (RG)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="rg";
			bolt="on";
			halligan="off";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_RG_Bolt_Halligan_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt Halligan (RG)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="rg";
			bolt="on";
			halligan="on1";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_RG_Bolt_Halligan2_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt Halligan 2 (RG)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="rg";
			bolt="on";
			halligan="on2";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_RG_Bolt_Halligan_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt Halligan Mags (RG)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="rg";
			bolt="on";
			halligan="on1";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_RG_Bolt_Halligan2_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt Halligan 2 Mags (RG)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="rg";
			bolt="on";
			halligan="on2";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_RG_Bolt_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Bolt Mags (RG)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ASEC_panel\data\bolt_co.paa",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="rg";
			bolt="on";
			halligan="off";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_RG_Halligan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Halligan (RG)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="rg";
			bolt="off";
			halligan="on1";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_RG_Halligan_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Halligan Mags (RG)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="rg";
			bolt="off";
			halligan="on1";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_RG_Halligan2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Halligan (RG)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="rg";
			bolt="off";
			halligan="on2";
			magpouch="off";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_RG_Halligan2_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Halligan 2 Mags (RG)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="rg";
			bolt="off";
			halligan="on2";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_RG_Halligan_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Halligan (RG)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="rg";
			bolt="off";
			halligan="on1";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_RG_Halligan2_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Halligan 2 (RG)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="rg";
			bolt="off";
			halligan="on2";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_RG_Halligan_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Halligan Mags (RG)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="rg";
			bolt="off";
			halligan="on1";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_RG_Halligan2_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Halligan 2 Mags (RG)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="rg";
			bolt="off";
			halligan="on2";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_RG_Mags: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Mags (RG)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="rg";
			bolt="off";
			halligan="off";
			magpouch="on";
			flag="off";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_RG_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC (RG)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="rg";
			bolt="off";
			halligan="off";
			magpouch="off";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Pack_FCPC_RG_Mags_flag: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Pack FCPC Mags (RG)";
		model="ASEC_Backpack1\FCPCPack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
			"halligan2",
			"magpouch1",
			"magpouch2",
			"mags",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ASEC_Backpack1\tex\ack_avs_rg_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_Pack";
			vest="fcpc";
			camo="rg";
			bolt="off";
			halligan="off";
			magpouch="on";
			flag="on";
			bangpouch="off";
		};
	};
	class ASEC_Gunslinger_AVS: B_AssaultPack_mcamo
	{
		author="AVALON";
		scope=2;
		displayName="[ASEC] Gunslinger AVS (MC)";
		model="ASEC_Backpack1\Gunslinger_AVS.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class XtdGearInfo
		{
			model="ASEC_GS";
			vest="avs";
		};
	};
	class ASEC_Gunslinger_JPC: B_AssaultPack_mcamo
	{
		author="AVALON";
		scope=2;
		displayName="[ASEC] Gunslinger JPC (MC)";
		model="ASEC_Backpack1\Gunslinger_JPC.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class XtdGearInfo
		{
			model="ASEC_GS";
			vest="jpc";
		};
	};
	class ASEC_BPPanel_AVS: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Backpack Panel AVS (MC)";
		model="ASEC_Backpack1\AVSPack2.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"breach",
			"breach2",
			"breach3",
			"can",
			"can2",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_BPP";
			vest="avs";
			sg="off";
			can="off";
			flag="off";
		};
	};
	class ASEC_BPPanel_SG_AVS: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Backpack Panel AVS Shotgun (MC)";
		model="ASEC_Backpack1\AVSPack2.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"breach",
			"breach2",
			"breach3",
			"can",
			"can2",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpack1\tex\shotgun_co.paa",
			"ASEC_Backpack1\tex\shotgun_foreend_co.paa",
			"ASEC_Backpack1\tex\c_velcrostraps_khaki_co.paa",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_BPP";
			vest="avs";
			sg="on";
			can="off";
			flag="off";
		};
	};
	class ASEC_BPPanel_SG_Flag_AVS: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Backpack Panel AVS Shotgun Flag (MC)";
		model="ASEC_Backpack1\AVSPack2.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"breach",
			"breach2",
			"breach3",
			"can",
			"can2",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpack1\tex\shotgun_co.paa",
			"ASEC_Backpack1\tex\shotgun_foreend_co.paa",
			"ASEC_Backpack1\tex\c_velcrostraps_khaki_co.paa",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_BPP";
			vest="avs";
			sg="on";
			can="off";
			flag="on";
		};
	};
	class ASEC_BPPanel_SG_WM_AVS: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Backpack Panel AVS Shotgun Monster Can (MC)";
		model="ASEC_Backpack1\AVSPack2.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"breach",
			"breach2",
			"breach3",
			"can",
			"can2",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpack1\tex\shotgun_co.paa",
			"ASEC_Backpack1\tex\shotgun_foreend_co.paa",
			"ASEC_Backpack1\tex\c_velcrostraps_khaki_co.paa",
			"ASEC_Backpack1\tex\monster_white_co.paa",
			"ASEC_Backpack1\tex\ecpv1_mc_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_BPP";
			vest="avs";
			sg="on";
			can="wm";
			flag="off";
		};
	};
	class ASEC_BPPanel_SG_RB_AVS: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Backpack Panel AVS Shotgun Red Bull Can (MC)";
		model="ASEC_Backpack1\AVSPack2.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"breach",
			"breach2",
			"breach3",
			"can",
			"can2",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpack1\tex\shotgun_co.paa",
			"ASEC_Backpack1\tex\shotgun_foreend_co.paa",
			"ASEC_Backpack1\tex\c_velcrostraps_khaki_co.paa",
			"ASEC_Backpack1\tex\red_bull_can.paa",
			"ASEC_Backpack1\tex\ecpv1_mc_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_BPP";
			vest="avs";
			sg="on";
			can="rb";
			flag="off";
		};
	};
	class ASEC_BPPanel_SG_WM_Flag_AVS: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Backpack Panel AVS Shotgun Monster Can Patch (MC)";
		model="ASEC_Backpack1\AVSPack2.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"breach",
			"breach2",
			"breach3",
			"can",
			"can2",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpack1\tex\shotgun_co.paa",
			"ASEC_Backpack1\tex\shotgun_foreend_co.paa",
			"ASEC_Backpack1\tex\c_velcrostraps_khaki_co.paa",
			"ASEC_Backpack1\tex\monster_white_co.paa",
			"ASEC_Backpack1\tex\ecpv1_mc_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_BPP";
			vest="avs";
			sg="on";
			can="wm";
			flag="on";
		};
	};
	class ASEC_BPPanel_SG_RB_Flag_AVS: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Backpack Panel AVS Shotgun Red Bull Can Patch (MC)";
		model="ASEC_Backpack1\AVSPack2.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"breach",
			"breach2",
			"breach3",
			"can",
			"can2",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpack1\tex\shotgun_co.paa",
			"ASEC_Backpack1\tex\shotgun_foreend_co.paa",
			"ASEC_Backpack1\tex\c_velcrostraps_khaki_co.paa",
			"ASEC_Backpack1\tex\red_bull_can.paa",
			"ASEC_Backpack1\tex\ecpv1_mc_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_BPP";
			vest="avs";
			sg="on";
			can="rb";
			flag="on";
		};
	};
	class ASEC_BPPanel_WM_AVS: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Backpack Panel AVS Monster Can (MC)";
		model="ASEC_Backpack1\AVSPack2.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"breach",
			"breach2",
			"breach3",
			"can",
			"can2",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"ASEC_Backpack1\tex\monster_white_co.paa",
			"ASEC_Backpack1\tex\ecpv1_mc_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_BPP";
			vest="avs";
			sg="off";
			can="wm";
			flag="off";
		};
	};
	class ASEC_BPPanel_WM_Flag_AVS: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Backpack Panel AVS Monster Can Flag (MC)";
		model="ASEC_Backpack1\AVSPack2.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"breach",
			"breach2",
			"breach3",
			"can",
			"can2",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"ASEC_Backpack1\tex\monster_white_co.paa",
			"ASEC_Backpack1\tex\ecpv1_mc_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_BPP";
			vest="avs";
			sg="off";
			can="wm";
			flag="on";
		};
	};
	class ASEC_BPPanel_RB_AVS: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Backpack Panel AVS Red Bull Can (MC)";
		model="ASEC_Backpack1\AVSPack2.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"breach",
			"breach2",
			"breach3",
			"can",
			"can2",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"ASEC_Backpack1\tex\red_bull_can.paa",
			"ASEC_Backpack1\tex\ecpv1_mc_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_BPP";
			vest="avs";
			sg="off";
			can="rb";
			flag="off";
		};
	};
	class ASEC_BPPanel_RB_Flag_AVS: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Backpack Panel AVS Red Bull Can Flag (MC)";
		model="ASEC_Backpack1\AVSPack2.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"breach",
			"breach2",
			"breach3",
			"can",
			"can2",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"ASEC_Backpack1\tex\red_bull_can.paa",
			"ASEC_Backpack1\tex\ecpv1_mc_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_BPP";
			vest="avs";
			sg="off";
			can="rb";
			flag="on";
		};
	};
	class ASEC_BPPanel_Flag_AVS: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Backpack Panel AVS Flag (MC)";
		model="ASEC_Backpack1\AVSPack2.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"breach",
			"breach2",
			"breach3",
			"can",
			"can2",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_BPP";
			vest="avs";
			sg="off";
			can="off";
			flag="on";
		};
	};
	class ASEC_BPPanel_JPC: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Backpack Panel JPC (MC)";
		model="ASEC_Backpack1\JPCPack2.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"breach",
			"breach2",
			"breach3",
			"can",
			"can2",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_BPP";
			vest="jpc";
			sg="off";
			can="off";
			flag="off";
		};
	};
	class ASEC_BPPanel_SG_JPC: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Backpack Panel JPC Shotgun (MC)";
		model="ASEC_Backpack1\JPCPack2.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"breach",
			"breach2",
			"breach3",
			"can",
			"can2",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpack1\tex\shotgun_co.paa",
			"ASEC_Backpack1\tex\shotgun_foreend_co.paa",
			"ASEC_Backpack1\tex\c_velcrostraps_khaki_co.paa",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_BPP";
			vest="jpc";
			sg="on";
			can="off";
			flag="off";
		};
	};
	class ASEC_BPPanel_SG_Flag_JPC: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Backpack Panel JPC Shotgun Flag (MC)";
		model="ASEC_Backpack1\JPCPack2.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"breach",
			"breach2",
			"breach3",
			"can",
			"can2",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpack1\tex\shotgun_co.paa",
			"ASEC_Backpack1\tex\shotgun_foreend_co.paa",
			"ASEC_Backpack1\tex\c_velcrostraps_khaki_co.paa",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_BPP";
			vest="jpc";
			sg="on";
			can="off";
			flag="on";
		};
	};
	class ASEC_BPPanel_SG_WM_JPC: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Backpack Panel JPC Shotgun Monster Can (MC)";
		model="ASEC_Backpack1\JPCPack2.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"breach",
			"breach2",
			"breach3",
			"can",
			"can2",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpack1\tex\shotgun_co.paa",
			"ASEC_Backpack1\tex\shotgun_foreend_co.paa",
			"ASEC_Backpack1\tex\c_velcrostraps_khaki_co.paa",
			"ASEC_Backpack1\tex\monster_white_co.paa",
			"ASEC_Backpack1\tex\ecpv1_mc_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_BPP";
			vest="jpc";
			sg="on";
			can="wm";
			flag="off";
		};
	};
	class ASEC_BPPanel_SG_RB_JPC: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Backpack Panel JPC Shotgun Red Bull Can (MC)";
		model="ASEC_Backpack1\JPCPack2.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"breach",
			"breach2",
			"breach3",
			"can",
			"can2",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpack1\tex\shotgun_co.paa",
			"ASEC_Backpack1\tex\shotgun_foreend_co.paa",
			"ASEC_Backpack1\tex\c_velcrostraps_khaki_co.paa",
			"ASEC_Backpack1\tex\red_bull_can.paa",
			"ASEC_Backpack1\tex\ecpv1_mc_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_BPP";
			vest="jpc";
			sg="on";
			can="rb";
			flag="off";
		};
	};
	class ASEC_BPPanel_SG_WM_Flag_JPC: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Backpack Panel JPC Shotgun Monster Can Patch (MC)";
		model="ASEC_Backpack1\JPCPack2.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"breach",
			"breach2",
			"breach3",
			"can",
			"can2",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpack1\tex\shotgun_co.paa",
			"ASEC_Backpack1\tex\shotgun_foreend_co.paa",
			"ASEC_Backpack1\tex\c_velcrostraps_khaki_co.paa",
			"ASEC_Backpack1\tex\monster_white_co.paa",
			"ASEC_Backpack1\tex\ecpv1_mc_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_BPP";
			vest="jpc";
			sg="on";
			can="wm";
			flag="on";
		};
	};
	class ASEC_BPPanel_SG_RB_Flag_JPC: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Backpack Panel JPC Shotgun Red Bull Can Patch (MC)";
		model="ASEC_Backpack1\JPCPack2.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"breach",
			"breach2",
			"breach3",
			"can",
			"can2",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpack1\tex\shotgun_co.paa",
			"ASEC_Backpack1\tex\shotgun_foreend_co.paa",
			"ASEC_Backpack1\tex\c_velcrostraps_khaki_co.paa",
			"ASEC_Backpack1\tex\red_bull_can.paa",
			"ASEC_Backpack1\tex\ecpv1_mc_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_BPP";
			vest="jpc";
			sg="on";
			can="rb";
			flag="on";
		};
	};
	class ASEC_BPPanel_WM_JPC: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Backpack Panel JPC Monster Can (MC)";
		model="ASEC_Backpack1\JPCPack2.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"breach",
			"breach2",
			"breach3",
			"can",
			"can2",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"ASEC_Backpack1\tex\monster_white_co.paa",
			"ASEC_Backpack1\tex\ecpv1_mc_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_BPP";
			vest="jpc";
			sg="off";
			can="wm";
			flag="off";
		};
	};
	class ASEC_BPPanel_WM_Flag_JPC: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Backpack Panel JPC Monster Can Flag (MC)";
		model="ASEC_Backpack1\JPCPack2.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"breach",
			"breach2",
			"breach3",
			"can",
			"can2",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"ASEC_Backpack1\tex\monster_white_co.paa",
			"ASEC_Backpack1\tex\ecpv1_mc_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_BPP";
			vest="jpc";
			sg="off";
			can="wm";
			flag="on";
		};
	};
	class ASEC_BPPanel_RB_JPC: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Backpack Panel JPC Red Bull Can (MC)";
		model="ASEC_Backpack1\JPCPack2.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"breach",
			"breach2",
			"breach3",
			"can",
			"can2",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"ASEC_Backpack1\tex\red_bull_can.paa",
			"ASEC_Backpack1\tex\ecpv1_mc_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="ASEC_BPP";
			vest="jpc";
			sg="off";
			can="rb";
			flag="off";
		};
	};
	class ASEC_BPPanel_RB_Flag_JPC: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Backpack Panel JPC Red Bull Can Flag (MC)";
		model="ASEC_Backpack1\JPCPack2.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"breach",
			"breach2",
			"breach3",
			"can",
			"can2",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"ASEC_Backpack1\tex\red_bull_can.paa",
			"ASEC_Backpack1\tex\ecpv1_mc_co.paa",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_BPP";
			vest="jpc";
			sg="off";
			can="rb";
			flag="on";
		};
	};
	class ASEC_BPPanel_Flag_JPC: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Backpack Panel JPC Flag (MC)";
		model="ASEC_Backpack1\JPCPack2.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"breach",
			"breach2",
			"breach3",
			"can",
			"can2",
			"patch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpack1\tex\patches_01_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_BPP";
			vest="jpc";
			sg="off";
			can="off";
			flag="on";
		};
	};
	class ASEC_BPACK_1: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Blank Panel Insert";
		model="ASEC_Backpack1\blank.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class ASEC_BPACK_2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Zip-On Swimmer Cut AVS Panel (MC)";
		model="ASEC_Backpack1\SwimmerAVSPanel1.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class ASEC_BPACK_3: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Backpack (MC)";
		model="ASEC_Backpack1\hyoonbackpack.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class ASEC_BPACK_4: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] M9 Medic Backpack (MC)";
		model="ASEC_Backpack1\hyoonm9.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class ASEC_BPACK_5: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] RATS Pack 1 (MC)";
		model="ASEC_Backpack1\hyoonRATS1.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class ASEC_BPACK_6: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] RATS Pack 2 (MC)";
		model="ASEC_Backpack1\hyoonRATS2.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class ASEC_BPACK_7: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] RS2 (MC)";
		model="ASEC_Backpack1\RS2.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class ASEC_BPACK_8: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Mystery Ranch 3DA (MC)";
		model="ASEC_Backpack1\Mystery_ranch_3da.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class ASEC_BPACK_9: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] M9 Medic Backpack 2 (MC)";
		model="ASEC_Backpack1\m9_2.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class ASEC_PANEL_1: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] AVS Panel 1 (MC)";
		model="ASEC_Backpack1\AVSPanel1.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Panel";
			vest="avs";
			panel="panel1";
		};
	};
	class ASEC_PANEL_2: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] AVS Panel 2 (MC)";
		model="ASEC_Backpack1\AVSPanel2.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Panel";
			vest="avs";
			panel="panel2";
		};
	};
	class ASEC_PANEL_3: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] AVS Panel 3 (MC)";
		model="ASEC_Backpack1\AVSPanel3.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Panel";
			vest="avs";
			panel="panel3";
		};
	};
	class ASEC_PANEL_4: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] AVS Panel 4 (MC)";
		model="ASEC_Backpack1\AVSPanel4.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Panel";
			vest="avs";
			panel="panel4";
		};
	};
	class ASEC_PANEL_5: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] AVS Panel 5 (MC)";
		model="ASEC_Backpack1\AVSPanel5.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Panel";
			vest="avs";
			panel="panel5";
		};
	};
	class ASEC_PANEL_6: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] AVS Panel 6 (MC)";
		model="ASEC_Backpack1\AVSPanel6.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Panel";
			vest="avs";
			panel="panel6";
		};
	};
	class ASEC_PANEL_7: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] JPC Panel 1 (MC)";
		model="ASEC_Backpack1\JPCPanel1.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Panel";
			vest="jpc";
			panel="panel1";
		};
	};
	class ASEC_PANEL_8: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] JPC Panel 2 (MC)";
		model="ASEC_Backpack1\JPCPanel2.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Panel";
			vest="jpc";
			panel="panel2";
		};
	};
	class ASEC_PANEL_9: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] JPC Panel 3 (MC)";
		model="ASEC_Backpack1\JPCPanel3.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Panel";
			vest="jpc";
			panel="panel3";
		};
	};
	class ASEC_PANEL_10: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] JPC Panel 4 (MC)";
		model="ASEC_Backpack1\JPCPanel4.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Panel";
			vest="jpc";
			panel="panel4";
		};
	};
	class ASEC_PANEL_11: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] JPC Panel 5 (MC)";
		model="ASEC_Backpack1\JPCPanel5.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Panel";
			vest="jpc";
			panel="panel5";
		};
	};
	class ASEC_PANEL_12: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] JPC Panel 6 (MC)";
		model="ASEC_Backpack1\JPCPanel6.p3d";
		picture="ASEC_Backpack1\tex\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class XtdGearInfo
		{
			model="ASEC_Panel";
			vest="jpc";
			panel="panel6";
		};
	};
};
