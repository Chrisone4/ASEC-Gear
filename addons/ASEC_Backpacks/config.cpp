class CfgPatches {
	class ASEC_Backpacks {
		units[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
		version="";
		author="Jup, Lip, Thunder";
	};
};

class UniformSlotInfo {
	slotType=0;
	linkProxy="-";
};

class XtdGearModels {
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

class CfgVehicles {
	class ReammoBox;
	class Item_Base_F;
	class Bag_Base: ReammoBox
	{
		tf_hasLRradio=0;
		tf_encryptionCode="";
		tf_range=25000;
	};
	class TFAR_Bag_Base: Bag_Base
	{
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		scope=1;
		scopeCurator=1;
	};	
	class Steerable_Parachute_F;
	class B_Parachute;
	class B_Kitbag_Base;
	class B_AssaultPack_mcamo;
	class ASEC_511std_A_rgr: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="511_RUSH";
		displayName="[ASEC] 5.11 RUSH (RangerGreen)";
		picture="\ASEC_Backpacks\data\ui\backpack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_511_standard.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\kitbag_od_co.paa"
		};
		hiddenSelectionsMaterials[]={};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_511std_A_blk: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="511_RUSH";
		displayName="[ASEC] 5.11 RUSH (Black)";
		picture="\ASEC_Backpacks\data\ui\backpack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_511_standard.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\kitbag_blk_co.paa"
		};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_511std_A_tan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="511_RUSH";
		displayName="[ASEC] 5.11 RUSH (Tan)";
		picture="\ASEC_Backpacks\data\ui\backpack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_511_standard.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\kitbag_tan_co.paa"
		};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_511std_A_mcm: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="511_RUSH";
		displayName="[ASEC] 5.11 RUSH (Multicam)";
		picture="\ASEC_Backpacks\data\ui\backpack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_511_standard.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\kitbag_mc_co.paa"
		};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_511breach_A_rgr: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="511_RUSH";
		displayName="[ASEC] 5.11 RUSH - Breacher (RangerGreen)";
		picture="\ASEC_Backpacks\data\ui\backpack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_511_breacher.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\kitbag_od_co.paa"
		};
		hiddenSelectionsMaterials[]={};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_511breach_A_blk: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="511_RUSH";
		displayName="[ASEC] 5.11 RUSH - Breacher (Black)";
		picture="\ASEC_Backpacks\data\ui\backpack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_511_breacher.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\kitbag_blk_co.paa"
		};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_511breach_A_tan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="511_RUSH";
		displayName="[ASEC] 5.11 RUSH - Breacher (Tan)";
		picture="\ASEC_Backpacks\data\ui\backpack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_511_breacher.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\kitbag_tan_co.paa"
		};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_511breach_A_mcm: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="511_RUSH";
		displayName="[ASEC] 5.11 RUSH - Breacher (Multicam)";
		picture="\ASEC_Backpacks\data\ui\backpack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_511_breacher.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\kitbag_mc_co.paa"
		};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_511alpine_A_rgr: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="511_RUSH";
		displayName="[ASEC] 5.11 RUSH - Alpine (RangerGreen)";
		picture="\ASEC_Backpacks\data\ui\backpack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_511_alpine.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\kitbag_od_co.paa"
		};
		hiddenSelectionsMaterials[]={};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_511alpine_A_blk: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="511_RUSH";
		displayName="[ASEC] 5.11 RUSH - Alpine (Black)";
		picture="\ASEC_Backpacks\data\ui\backpack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_511_alpine.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\kitbag_blk_co.paa"
		};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_511alpine_A_tan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="511_RUSH";
		displayName="[ASEC] 5.11 RUSH - Alpine (Tan)";
		picture="\ASEC_Backpacks\data\ui\backpack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_511_alpine.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\kitbag_tan_co.paa"
		};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_511alpine_A_mcm: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="511_RUSH";
		displayName="[ASEC] 5.11 RUSH - Alpine (Multicam)";
		picture="\ASEC_Backpacks\data\ui\backpack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_511_alpine.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\kitbag_mc_co.paa"
		};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_511radio_A_rgr: TFAR_Bag_Base
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="511_RUSH";
		displayName="[ASEC] 5.11 RUSH - LRR (RangerGreen)";
		picture="\ASEC_Backpacks\data\ui\backpack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_511_radio.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\kitbag_od_co.paa"
		};
		hiddenSelectionsMaterials[]={};
		maximumLoad=500;
		mass=40;
	    tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
	};
	class ASEC_511radio_A_blk: TFAR_Bag_Base
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="511_RUSH";
		displayName="[ASEC] 5.11 RUSH - LRR (Black)";
		picture="\ASEC_Backpacks\data\ui\backpack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_511_radio.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\kitbag_blk_co.paa"
		};
		maximumLoad=500;
		mass=40;
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
	};
	class ASEC_511radio_A_tan: TFAR_Bag_Base
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="511_RUSH";
		displayName="[ASEC] 5.11 RUSH - LRR (Tan)";
		picture="\ASEC_Backpacks\data\ui\backpack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_511_radio.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\kitbag_tan_co.paa"
		};
		maximumLoad=500;
		mass=40;
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
	};
	class ASEC_511radio_A_mcm: TFAR_Bag_Base
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="511_RUSH";
		displayName="[ASEC] 5.11 RUSH - LRR (Multicam)";
		picture="\ASEC_Backpacks\data\ui\backpack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_511_radio.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\kitbag_mc_co.paa"
		};
		maximumLoad=500;
		mass=40;
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
	};
	class ASEC_assaultpack_Breach_od: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="AssaultPack_Breach";
		displayName="[ASEC] Assault Pack - Breacher (OD)";
		picture="\ASEC_Backpacks\data\ui\assaultpack_od_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_assaultpack_V1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\backpack_od_co.paa"
		};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_assaultpack_Breach_BLK: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="AssaultPack_Breach";
		displayName="[ASEC] Assault Pack - Breacher (Black)";
		picture="\ASEC_Backpacks\data\ui\assaultpack_blk_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_assaultpack_V1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\backpack_BLK_co.paa"
		};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_assaultpack_Breach_tan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="AssaultPack_Breach";
		displayName="[ASEC] Assault Pack - Breacher (TAN)";
		picture="\ASEC_Backpacks\data\ui\assaultpack_tan_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_assaultpack_V1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\backpack_tan_co.paa"
		};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_assaultpack_Standard_od: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="AssaultPack_Standard";
		displayName="[ASEC] Assault Pack (OD)";
		picture="\ASEC_Backpacks\data\ui\assaultpack_od_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_assaultpack_V2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\backpack_od_co.paa"
		};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_assaultpack_Standard_BLK: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="AssaultPack_Standard";
		displayName="[ASEC] Assault Pack (Black)";
		picture="\ASEC_Backpacks\data\ui\assaultpack_blk_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_assaultpack_V2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\backpack_BLK_co.paa"
		};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_assaultpack_Standard_tan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="AssaultPack_Standard";
		displayName="[ASEC] Assault Pack (TAN)";
		picture="\ASEC_Backpacks\data\ui\assaultpack_tan_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_assaultpack_V2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\backpack_tan_co.paa"
		};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_mappack_breach_od: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Breacher";
		displayName="[ASEC] Modular Assault Pack - Breacher 01 (OD)";
		picture="\ASEC_Backpacks\data\ui\mappack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_map_breacher.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\SOG_BAG_OD_co.paa"
		};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_mappack_breach_tan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Breacher";
		displayName="[ASEC] Modular Assault Pack - Breacher 01 (Tan)";
		picture="\ASEC_Backpacks\data\ui\mappack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_map_breacher.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\SOG_BAG_tan_co.paa"
		};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_mappack_breach_mc: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Breacher";
		displayName="[ASEC] Modular Assault Pack - Breacher 01 (Multicam)";
		picture="\ASEC_Backpacks\data\ui\mappack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_map_breacher.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\SOG_BAG_mc_co.paa"
		};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_mappack_breach_BLK: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Breacher";
		displayName="[ASEC] Modular Assault Pack - Breacher 01 (BLK)";
		picture="\ASEC_Backpacks\data\ui\mappack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_map_breacher.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\SOG_BAG_blk_co.paa"
		};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_mappack_Alpine_od: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Alpine";
		displayName="[ASEC] Modular Assault Pack - Alpine 01 (OD)";
		picture="\ASEC_Backpacks\data\ui\mappack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_map_alpine.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\SOG_BAG_OD_co.paa"
		};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_mappack_Alpine_tan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Alpine";
		displayName="[ASEC] Modular Assault Pack - Alpine 01 (Tan)";
		picture="\ASEC_Backpacks\data\ui\mappack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_map_alpine.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\SOG_BAG_tan_co.paa"
		};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_mappack_Alpine_mc: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Alpine";
		displayName="[ASEC] Modular Assault Pack - Alpine 01 (Multicam)";
		picture="\ASEC_Backpacks\data\ui\mappack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_map_alpine.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\SOG_BAG_mc_co.paa"
		};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_mappack_Alpine_BLK: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Alpine";
		displayName="[ASEC] Modular Assault Pack - Alpine 01 (BLK)";
		picture="\ASEC_Backpacks\data\ui\mappack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_map_alpine.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\SOG_BAG_blk_co.paa"
		};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_mappack_Medical_od: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Medical";
		displayName="[ASEC] Modular Assault Pack - Medical 01 (OD)";
		picture="\ASEC_Backpacks\data\ui\mappack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_map_medical.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\SOG_BAG_OD_co.paa"
		};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_mappack_Medical_tan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Medical";
		displayName="[ASEC] Modular Assault Pack - Medical 01 (Tan)";
		picture="\ASEC_Backpacks\data\ui\mappack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_map_medical.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\SOG_BAG_tan_co.paa"
		};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_mappack_Medical_mc: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Medical";
		displayName="[ASEC] Modular Assault Pack - Medical 01 (Multicam)";
		picture="\ASEC_Backpacks\data\ui\mappack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_map_medical.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\SOG_BAG_mc_co.paa"
		};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_mappack_Medical_BLK: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Medical";
		displayName="[ASEC] Modular Assault Pack - Medical 01 (BLK)";
		picture="\ASEC_Backpacks\data\ui\mappack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_map_medical.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\SOG_BAG_blk_co.paa"
		};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_mappack_Radio_od: TFAR_Bag_Base
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Radio";
		displayName="[ASEC] Modular Assault Pack - Comms 01 (OD)";
		picture="\ASEC_Backpacks\data\ui\mappack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_map_radio.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\SOG_BAG_OD_co.paa"
		};
		maximumLoad=500;
		mass=40;
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
	};
	class ASEC_mappack_Radio_tan: TFAR_Bag_Base
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Radio";
		displayName="[ASEC] Modular Assault Pack - Comms 01 (Tan)";
		picture="\ASEC_Backpacks\data\ui\mappack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_map_radio.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\SOG_BAG_tan_co.paa"
		};
		maximumLoad=500;
		mass=40;
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
	};
	class ASEC_mappack_Radio_mc: TFAR_Bag_Base
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Radio";
		displayName="[ASEC] Modular Assault Pack - Comms 01 (Multicam)";
		picture="\ASEC_Backpacks\data\ui\mappack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_map_radio.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\SOG_BAG_mc_co.paa"
		};
		maximumLoad=500;
		mass=40;
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
	};
	class ASEC_mappack_Radio_BLK: TFAR_Bag_Base
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Radio";
		displayName="[ASEC] Modular Assault Pack - Comms 01 (BLK)";
		picture="\ASEC_Backpacks\data\ui\mappack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_map_radio.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\SOG_BAG_blk_co.paa"
		};
		maximumLoad=500;
		mass=40;
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
	};
	class ASEC_mappack_Standard_od: TFAR_Bag_Base
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Standard";
		displayName="[ASEC] Modular Assault Pack (OD)";
		picture="\ASEC_Backpacks\data\ui\mappack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_map_standard.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\SOG_BAG_OD_co.paa"
		};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_mappack_Standard_tan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Standard";
		displayName="[ASEC] Modular Assault Pack (Tan)";
		picture="\ASEC_Backpacks\data\ui\mappack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_map_standard.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\SOG_BAG_tan_co.paa"
		};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_mappack_Standard_mc: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Standard";
		displayName="[ASEC] Modular Assault Pack (Multicam)";
		picture="\ASEC_Backpacks\data\ui\mappack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_map_standard.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\SOG_BAG_mc_co.paa"
		};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_mappack_Standard_BLK: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Standard";
		displayName="[ASEC] Modular Assault Pack (BLK)";
		picture="\ASEC_Backpacks\data\ui\mappack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_map_standard.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\SOG_BAG_blk_co.paa"
		};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_mappack_breach_v2_od: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Breacher";
		displayName="[ASEC] Modular Assault Pack - Breacher 02 (OD)";
		picture="\ASEC_Backpacks\data\ui\mappack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_map_breacher_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\SOG_BAG_OD_co.paa"
		};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_mappack_breach_v2_tan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Breacher";
		displayName="[ASEC] Modular Assault Pack - Breacher 02 (Tan)";
		picture="\ASEC_Backpacks\data\ui\mappack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_map_breacher_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\SOG_BAG_tan_co.paa"
		};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_mappack_breach_v2_mc: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Breacher";
		displayName="[ASEC] Modular Assault Pack - Breacher 02 (Multicam)";
		picture="\ASEC_Backpacks\data\ui\mappack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_map_breacher_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\SOG_BAG_mc_co.paa"
		};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_mappack_breach_v2_BLK: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Breacher";
		displayName="[ASEC] Modular Assault Pack - Breacher 02 (BLK)";
		picture="\ASEC_Backpacks\data\ui\mappack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_map_breacher_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\SOG_BAG_blk_co.paa"
		};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_mappack_Alpine_v2_od: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Alpine";
		displayName="[ASEC] Modular Assault Pack - Alpine 02 (OD)";
		picture="\ASEC_Backpacks\data\ui\mappack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_map_alpine_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\SOG_BAG_OD_co.paa"
		};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_mappack_Alpine_v2_tan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Alpine";
		displayName="[ASEC] Modular Assault Pack - Alpine 02 (Tan)";
		picture="\ASEC_Backpacks\data\ui\mappack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_map_alpine_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\SOG_BAG_tan_co.paa"
		};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_mappack_Alpine_v2_mc: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Alpine";
		displayName="[ASEC] Modular Assault Pack - Alpine 02 (Multicam)";
		picture="\ASEC_Backpacks\data\ui\mappack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_map_alpine_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\SOG_BAG_mc_co.paa"
		};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_mappack_Alpine_v2_BLK: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Alpine";
		displayName="[ASEC] Modular Assault Pack - Alpine 02 (BLK)";
		picture="\ASEC_Backpacks\data\ui\mappack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_map_alpine_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\SOG_BAG_blk_co.paa"
		};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_mappack_Medical_v2_od: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Medical";
		displayName="[ASEC] Modular Assault Pack - Medical 02 (OD)";
		picture="\ASEC_Backpacks\data\ui\mappack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_map_medical_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\SOG_BAG_OD_co.paa"
		};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_mappack_Medical_v2_tan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Medical";
		displayName="[ASEC] Modular Assault Pack - Medical 02 (Tan)";
		picture="\ASEC_Backpacks\data\ui\mappack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_map_medical_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\SOG_BAG_tan_co.paa"
		};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_mappack_Medical_v2_mc: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Medical";
		displayName="[ASEC] Modular Assault Pack - Medical 02 (Multicam)";
		picture="\ASEC_Backpacks\data\ui\mappack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_map_medical_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\SOG_BAG_mc_co.paa"
		};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_mappack_Medical_v2_BLK: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Medical";
		displayName="[ASEC] Modular Assault Pack - Medical 02 (BLK)";
		picture="\ASEC_Backpacks\data\ui\mappack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_map_medical_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\SOG_BAG_blk_co.paa"
		};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_mappack_Radio_v2_od: TFAR_Bag_Base
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Radio";
		displayName="[ASEC] Modular Assault Pack - Comms 02 (OD)";
		picture="\ASEC_Backpacks\data\ui\mappack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_map_radio_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\SOG_BAG_OD_co.paa"
		};
		maximumLoad=500;
		mass=40;
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
	};
	class ASEC_mappack_Radio_v2_tan: TFAR_Bag_Base
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Radio";
		displayName="[ASEC] Modular Assault Pack - Comms 02 (Tan)";
		picture="\ASEC_Backpacks\data\ui\mappack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_map_radio_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\SOG_BAG_tan_co.paa"
		};
		maximumLoad=500;
		mass=40;
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
	};
	class ASEC_mappack_Radio_v2_mc: TFAR_Bag_Base
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Radio";
		displayName="[ASEC] Modular Assault Pack - Comms 02 (Multicam)";
		picture="\ASEC_Backpacks\data\ui\mappack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_map_radio_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\SOG_BAG_mc_co.paa"
		};
		maximumLoad=500;
		mass=40;
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
	};
	class ASEC_mappack_Radio_v2_BLK: TFAR_Bag_Base
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Radio";
		displayName="[ASEC] Modular Assault Pack - Comms 02 (BLK)";
		picture="\ASEC_Backpacks\data\ui\mappack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_map_radio_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\SOG_BAG_blk_co.paa"
		};
		maximumLoad=500;
		mass=40;
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
	};
	class ASEC_tacmed_BP_01: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="TacMed_BackPack";
		displayName="[ASEC] Tactical Medicine Pack - Standard";
		picture="\ASEC_Backpacks\data\ui\mappack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_medtac_pack.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		maximumLoad=500;
		mass=40;
	};
	class ASEC_talon22_A_rgr: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="TALON_22";
		displayName="[ASEC] Osprey TALON 22 - SOP (RangerGreen)";
		picture="\ASEC_Backpacks\data\ui\backpack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_talon22.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\taloon_od.paa"
		};
		maximumLoad=500;
		mass=40;
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
	};
	class ASEC_talon22_A_blk: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="TALON_22";
		displayName="[ASEC] Osprey TALON 22 - SOP (Black)";
		picture="\ASEC_Backpacks\data\ui\backpack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_talon22.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\taloon_blk.paa"
		};
		maximumLoad=500;
		mass=40;
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
	};
	class ASEC_talon22_A_mcm: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="TALON_22";
		displayName="[ASEC] Osprey TALON 22 - SOP (Multicam)";
		picture="\ASEC_Backpacks\data\ui\backpack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_talon22.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\taloon_mc.paa"
		};
		maximumLoad=500;
		mass=40;
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
	};
	class ASEC_talon22_A_tan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="TALON_22";
		displayName="[ASEC] Osprey TALON 22 - SOP (Tan)";
		picture="\ASEC_Backpacks\data\ui\backpack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_talon22.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\taloon_tan.paa"
		};
		maximumLoad=500;
		mass=40;
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
	};
	class FLB_Halo_Deployed: Steerable_Parachute_F
	{
		author="Jup, Lip, Thunder";
		_generalMacro="FLB_Halo_Deployed";
		scope=1;
		displayname="[ASEC] HALO Operations Rig";
		model="ASEC_Backpacks\data\model\ASEC_halo_gear_V2.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
	};
	class FLB_Halo_Rig_01: B_Parachute
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		_generalMacro="COS_PARACHUTE";
		displayname="[ASEC] HALO Operations Rig";
		model="ASEC_Backpacks\data\model\ASEC_halo_gear_V1.p3d";
		ParachuteClass="FLB_Halo_Deployed";
		descriptionShort="HALO Operations Rig";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		picture="\A3\Air_F_Beta\Parachute_01\Data\UI\Portrait_Parachute_01_CA.paa";
	};
	class ASEC_flatpack_base_rgr: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="Flat_Pack";
		displayName="[ASEC] Flat Pack (RangerGreen)";
		picture="\ASEC_Backpacks\data\ui\backpack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_flatpack.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		hiddenSelectionsMaterials[]={};
		maximumLoad=350;
		mass=40;
	};
	class ASEC_flatpack_base_mcm: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="Flat_Pack";
		displayName="[ASEC] Flat Pack (Multicam)";
		picture="\ASEC_Backpacks\data\ui\backpack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_flatpack.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\ASEC_flatpack_mc_co.paa"
		};
		maximumLoad=350;
		mass=40;
	};
	class ASEC_flatpack_base_khk: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="Flat_Pack";
		displayName="[ASEC] Flat Pack (Khaki)";
		picture="\ASEC_Backpacks\data\ui\backpack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_flatpack.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\ASEC_flatpack_khk_co.paa"
		};
		maximumLoad=350;
		mass=40;
	};
	class ASEC_flatpack_breacher_rgr: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="Flat_Pack";
		displayName="[ASEC] Flat Pack - Breacher (RangerGreen)";
		picture="\ASEC_Backpacks\data\ui\backpack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_flatpack_breacher.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		hiddenSelectionsMaterials[]={};
		maximumLoad=350;
		mass=40;
	};
	class ASEC_flatpack_breacher_mcm: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="Flat_Pack";
		displayName="[ASEC] Flat Pack - Breacher (Multicam)";
		picture="\ASEC_Backpacks\data\ui\backpack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_flatpack_breacher.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\ASEC_flatpack_mc_co.paa"
		};
		maximumLoad=350;
		mass=40;
	};
	class ASEC_flatpack_breacher_khk: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="Flat_Pack";
		displayName="[ASEC] Flat Pack - Breacher (Khaki)";
		picture="\ASEC_Backpacks\data\ui\backpack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_flatpack_breacher.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\ASEC_flatpack_khk_co.paa"
		};
		maximumLoad=350;
		mass=40;
	};
	class ASEC_flatpack_radio_rgr: TFAR_Bag_Base
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="Flat_Pack";
		displayName="[ASEC] Flat Pack - Radio (RangerGreen)";
		picture="\ASEC_Backpacks\data\ui\backpack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_flatpack_radio.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		hiddenSelectionsMaterials[]={};
		maximumLoad=350;
		mass=40;
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
	};
	class ASEC_flatpack_radio_mcm: TFAR_Bag_Base
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="Flat_Pack";
		displayName="[ASEC] Flat Pack - Radio (Multicam)";
		picture="\ASEC_Backpacks\data\ui\backpack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_flatpack_radio.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\ASEC_flatpack_mc_co.paa"
		};
		maximumLoad=350;
		mass=40;
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
	};
	class ASEC_flatpack_radio_khk: TFAR_Bag_Base
	{
		author="Jup, Lip, Thunder";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="Flat_Pack";
		displayName="[ASEC] Flat Pack - Radio (Khaki)";
		picture="\ASEC_Backpacks\data\ui\backpack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_flatpack_radio.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\ASEC_flatpack_khk_co.paa"
		};
		maximumLoad=350;
		mass=40;
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
	};
	class ASEC_mountainpack_tan: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		scopeCurator=0;
		scopeArsenal=0;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="511_RUSH";
		displayName="[ASEC] Arcteryx - 30L Assault Pack (Tan)";
		picture="\ASEC_Backpacks\data\ui\backpack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_mountainpack.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\mountain_tan.paa"
		};
		maximumLoad=400;
		mass=40;
	};
	class ASEC_mountainpack_od: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		scopeCurator=0;
		scopeArsenal=0;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="511_RUSH";
		displayName="[ASEC] Arcteryx - 30L Assault Pack (RangerGreen)";
		picture="\ASEC_Backpacks\data\ui\backpack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_mountainpack.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\mountain_od.paa"
		};
		maximumLoad=400;
		mass=40;
	};
	class ASEC_mountainpack_mc: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		scopeCurator=0;
		scopeArsenal=0;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="511_RUSH";
		displayName="[ASEC] Arcteryx - 30L Assault Pack (Multicam)";
		picture="\ASEC_Backpacks\data\ui\backpack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_mountainpack.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\mountain_mc.paa"
		};
		maximumLoad=400;
		mass=40;
	};
	class ASEC_mountainpack_training: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=0;
		scopeCurator=0;
		scopeArsenal=0;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="511_RUSH";
		displayName="[ASEC] Arcteryx - 30L Assault Pack (HI-VIS)";
		picture="\ASEC_Backpacks\data\ui\backpack_ca.paa";
		model="ASEC_Backpacks\data\model\ASEC_mountainpack.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Backpacks\data\tex\mountain_hivis.paa"
		};
		maximumLoad=400;
		mass=40;
	};
	
	//Backpack2
	class ASEC_Ranger_BLK_AVS: B_AssaultPack_mcamo
	{
		author="Jup, Lip, Thunder";
		scope=2;
		displayName="[ASEC] Ranger Backpack AVS (BLK)";
		model="ASEC_Backpacks\data\model\ranger_backpack_avs.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
			"ASEC_Backpacks\data\tex\backpack_blk.paa"
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
		model="ASEC_Backpacks\data\model\ranger_backpack_avs.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
			"ASEC_Backpacks\data\tex\backpack_cb.paa"
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
		model="ASEC_Backpacks\data\model\ranger_backpack_avs.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
			"ASEC_Backpacks\data\tex\backpack_mc.paa"
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
		model="ASEC_Backpacks\data\model\ranger_backpack_avs.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
			"ASEC_Backpacks\data\tex\backpack_rg.paa"
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
		model="ASEC_Backpacks\data\model\ranger_backpack_jpc.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
			"ASEC_Backpacks\data\tex\backpack_blk.paa"
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
		model="ASEC_Backpacks\data\model\ranger_backpack_jpc.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
			"ASEC_Backpacks\data\tex\backpack_cb.paa"
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
		model="ASEC_Backpacks\data\model\ranger_backpack_jpc.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
			"ASEC_Backpacks\data\tex\backpack_mc.paa"
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
		model="ASEC_Backpacks\data\model\ranger_backpack_jpc.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
			"ASEC_Backpacks\data\tex\backpack_rg.paa"
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
		model="ASEC_Backpacks\eaglepack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
		model="ASEC_Backpacks\eaglepack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
			"ASEC_Backpacks\data\tex\strap_co.paa"
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
		model="ASEC_Backpacks\eaglepack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
		model="ASEC_Backpacks\eaglepack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
			"ASEC_Backpacks\data\tex\strap_co.paa"
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
		model="ASEC_Backpacks\data\model\MysteryCL.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
			"ASEC_Backpacks\data\tex\mysteryCL_co.paa"
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
		model="ASEC_Backpacks\data\model\MysteryCL.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
			"ASEC_Backpacks\data\tex\mysteryCL_mc_co.paa"
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
		model="ASEC_Backpacks\data\model\MysteryASAP.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
			"ASEC_Backpacks\data\tex\mysteryASAP_blk_co.paa"
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
		model="ASEC_Backpacks\data\model\MysteryASAP.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
			"ASEC_Backpacks\data\tex\mysteryASAP_co.paa"
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
		model="ASEC_Backpacks\data\model\MysteryASAP.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
			"ASEC_Backpacks\data\tex\mysteryASAP_gry_co.paa"
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
		model="ASEC_Backpacks\data\model\MysteryASAP.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
			"ASEC_Backpacks\data\tex\mysteryASAP_mc_co.paa"
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
		model="ASEC_Backpacks\arcteryxbackpack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
			"ASEC_Backpacks\data\tex\mountain_hivis.paa"
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
		model="ASEC_Backpacks\arcteryxbackpack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
			"ASEC_Backpacks\data\tex\mountain_mc.paa"
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
		model="ASEC_Backpacks\arcteryxbackpack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
			"ASEC_Backpacks\data\tex\mountain_mct.paa"
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
		model="ASEC_Backpacks\arcteryxbackpack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
			"ASEC_Backpacks\data\tex\mountain_od.paa"
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
		model="ASEC_Backpacks\arcteryxbackpack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
			"ASEC_Backpacks\data\tex\mountain_tan.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\data\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor1_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_aor2_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_mc_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
			"ASEC_panel\data\halligan_co.paa",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
			"",
			"ASEC_panel\data\halligan_co.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
			"",
			"",
			"",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\FCPCPack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=0;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"bangerpouch",
			"bolt",
			"camo",
			"halligan",
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
			"ASEC_Backpacks\tex\ack_avs_rg_co.paa",
			"",
			"",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc2_c.paa",
			"ASEC_Cosmetic\ASEC_Textures\data\ctsfo\alice_ar_mag_sidepouch_mc1_c.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\data\model\Gunslinger_AVS.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
		model="ASEC_Backpacks\data\model\Gunslinger_JPC.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
		model="ASEC_Backpacks\AVSPack2.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
		model="ASEC_Backpacks\AVSPack2.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
			"ASEC_Backpacks\data\tex\shotgun_co.paa",
			"ASEC_Backpacks\data\tex\shotgun_foreend_co.paa",
			"ASEC_Backpacks\data\tex\c_velcrostraps_khaki_co.paa",
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
		model="ASEC_Backpacks\AVSPack2.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
			"ASEC_Backpacks\data\tex\shotgun_co.paa",
			"ASEC_Backpacks\data\tex\shotgun_foreend_co.paa",
			"ASEC_Backpacks\data\tex\c_velcrostraps_khaki_co.paa",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack2.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
			"ASEC_Backpacks\data\tex\shotgun_co.paa",
			"ASEC_Backpacks\data\tex\shotgun_foreend_co.paa",
			"ASEC_Backpacks\data\tex\c_velcrostraps_khaki_co.paa",
			"ASEC_Backpacks\data\tex\monster_white_co.paa",
			"ASEC_Backpacks\data\tex\ecpv1_mc_co.paa",
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
		model="ASEC_Backpacks\AVSPack2.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
			"ASEC_Backpacks\data\tex\shotgun_co.paa",
			"ASEC_Backpacks\data\tex\shotgun_foreend_co.paa",
			"ASEC_Backpacks\data\tex\c_velcrostraps_khaki_co.paa",
			"ASEC_Backpacks\data\tex\red_bull_can.paa",
			"ASEC_Backpacks\data\tex\ecpv1_mc_co.paa",
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
		model="ASEC_Backpacks\AVSPack2.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
			"ASEC_Backpacks\data\tex\shotgun_co.paa",
			"ASEC_Backpacks\data\tex\shotgun_foreend_co.paa",
			"ASEC_Backpacks\data\tex\c_velcrostraps_khaki_co.paa",
			"ASEC_Backpacks\data\tex\monster_white_co.paa",
			"ASEC_Backpacks\data\tex\ecpv1_mc_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack2.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
			"ASEC_Backpacks\data\tex\shotgun_co.paa",
			"ASEC_Backpacks\data\tex\shotgun_foreend_co.paa",
			"ASEC_Backpacks\data\tex\c_velcrostraps_khaki_co.paa",
			"ASEC_Backpacks\data\tex\red_bull_can.paa",
			"ASEC_Backpacks\data\tex\ecpv1_mc_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack2.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
			"ASEC_Backpacks\tex\monster_white_co.paa",
			"ASEC_Backpacks\tex\ecpv1_mc_co.paa",
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
		model="ASEC_Backpacks\AVSPack2.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
			"ASEC_Backpacks\data\tex\monster_white_co.paa",
			"ASEC_Backpacks\data\tex\ecpv1_mc_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack2.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
			"ASEC_Backpacks\data\tex\red_bull_can.paa",
			"ASEC_Backpacks\tex\ecpv1_mc_co.paa",
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
		model="ASEC_Backpacks\AVSPack2.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
			"ASEC_Backpacks\data\tex\red_bull_can.paa",
			"ASEC_Backpacks\data\tex\ecpv1_mc_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\AVSPack2.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack2.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
		model="ASEC_Backpacks\JPCPack2.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
			"ASEC_Backpacks\data\tex\shotgun_co.paa",
			"ASEC_Backpacks\data\tex\shotgun_foreend_co.paa",
			"ASEC_Backpacks\data\tex\c_velcrostraps_khaki_co.paa",
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
		model="ASEC_Backpacks\JPCPack2.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
			"ASEC_Backpacks\data\tex\shotgun_co.paa",
			"ASEC_Backpacks\data\tex\shotgun_foreend_co.paa",
			"ASEC_Backpacks\data\tex\c_velcrostraps_khaki_co.paa",
			"",
			"",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack2.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
			"ASEC_Backpacks\data\tex\shotgun_co.paa",
			"ASEC_Backpacks\data\tex\shotgun_foreend_co.paa",
			"ASEC_Backpacks\data\tex\c_velcrostraps_khaki_co.paa",
			"ASEC_Backpacks\data\tex\monster_white_co.paa",
			"ASEC_Backpacks\data\tex\ecpv1_mc_co.paa",
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
		model="ASEC_Backpacks\JPCPack2.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
			"ASEC_Backpacks\data\tex\shotgun_co.paa",
			"ASEC_Backpacks\data\tex\shotgun_foreend_co.paa",
			"ASEC_Backpacks\data\tex\c_velcrostraps_khaki_co.paa",
			"ASEC_Backpacks\data\tex\red_bull_can.paa",
			"ASEC_Backpacks\data\tex\ecpv1_mc_co.paa",
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
		model="ASEC_Backpacks\JPCPack2.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
			"ASEC_Backpacks\data\tex\shotgun_co.paa",
			"ASEC_Backpacks\data\tex\shotgun_foreend_co.paa",
			"ASEC_Backpacks\data\tex\c_velcrostraps_khaki_co.paa",
			"ASEC_Backpacks\data\tex\monster_white_co.paa",
			"ASEC_Backpacks\data\tex\ecpv1_mc_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack2.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
			"ASEC_Backpacks\data\tex\shotgun_co.paa",
			"ASEC_Backpacks\data\tex\shotgun_foreend_co.paa",
			"ASEC_Backpacks\data\tex\c_velcrostraps_khaki_co.paa",
			"ASEC_Backpacks\data\tex\red_bull_can.paa",
			"ASEC_Backpacks\data\tex\ecpv1_mc_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack2.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
			"ASEC_Backpacks\tex\monster_white_co.paa",
			"ASEC_Backpacks\tex\ecpv1_mc_co.paa",
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
		model="ASEC_Backpacks\JPCPack2.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
			"ASEC_Backpacks\data\tex\monster_white_co.paa",
			"ASEC_Backpacks\data\tex\ecpv1_mc_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack2.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
			"ASEC_Backpacks\data\tex\red_bull_can.paa",
			"ASEC_Backpacks\tex\ecpv1_mc_co.paa",
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
		model="ASEC_Backpacks\JPCPack2.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
			"ASEC_Backpacks\data\tex\red_bull_can.paa",
			"ASEC_Backpacks\data\tex\ecpv1_mc_co.paa",
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\JPCPack2.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
			"ASEC_Backpacks\data\tex\patches_01_co.paa"
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
		model="ASEC_Backpacks\blank.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
		model="ASEC_Backpacks\SwimmerAVSPanel1.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
		model="ASEC_Backpacks\hyoonbackpack.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
		model="ASEC_Backpacks\hyoonm9.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
		model="ASEC_Backpacks\hyoonRATS1.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
		model="ASEC_Backpacks\hyoonRATS2.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
		model="ASEC_Backpacks\RS2.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
		model="ASEC_Backpacks\Mystery_ranch_3da.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
		model="ASEC_Backpacks\m9_2.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
		model="ASEC_Backpacks\AVSPanel1.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
		model="ASEC_Backpacks\AVSPanel2.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
		model="ASEC_Backpacks\AVSPanel3.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
		model="ASEC_Backpacks\AVSPanel4.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
		model="ASEC_Backpacks\AVSPanel5.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
		model="ASEC_Backpacks\AVSPanel6.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
		model="ASEC_Backpacks\JPCPanel1.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
		model="ASEC_Backpacks\JPCPanel2.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
		model="ASEC_Backpacks\JPCPanel3.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
		model="ASEC_Backpacks\JPCPanel4.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
		model="ASEC_Backpacks\JPCPanel5.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
		model="ASEC_Backpacks\JPCPanel6.p3d";
		picture="ASEC_Backpacks\data\ui\logo.paa";
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
