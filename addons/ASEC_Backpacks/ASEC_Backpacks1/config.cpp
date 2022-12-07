class CfgPatches
{
	class ASEC_backpacks
	{
		units[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
		version="";
		author="Jup, Lip, Thunder";
	};
};
class UniformSlotInfo
{
	slotType=0;
	linkProxy="-";
};
class CfgVehicles
{
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
		picture="\ASEC_backpacks\data\ui\backpack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_511_standard.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\kitbag_od_co.paa"
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
		picture="\ASEC_backpacks\data\ui\backpack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_511_standard.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\kitbag_blk_co.paa"
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
		picture="\ASEC_backpacks\data\ui\backpack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_511_standard.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\kitbag_tan_co.paa"
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
		picture="\ASEC_backpacks\data\ui\backpack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_511_standard.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\kitbag_mc_co.paa"
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
		picture="\ASEC_backpacks\data\ui\backpack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_511_breacher.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\kitbag_od_co.paa"
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
		picture="\ASEC_backpacks\data\ui\backpack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_511_breacher.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\kitbag_blk_co.paa"
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
		picture="\ASEC_backpacks\data\ui\backpack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_511_breacher.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\kitbag_tan_co.paa"
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
		picture="\ASEC_backpacks\data\ui\backpack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_511_breacher.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\kitbag_mc_co.paa"
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
		picture="\ASEC_backpacks\data\ui\backpack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_511_alpine.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\kitbag_od_co.paa"
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
		picture="\ASEC_backpacks\data\ui\backpack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_511_alpine.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\kitbag_blk_co.paa"
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
		picture="\ASEC_backpacks\data\ui\backpack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_511_alpine.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\kitbag_tan_co.paa"
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
		picture="\ASEC_backpacks\data\ui\backpack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_511_alpine.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\kitbag_mc_co.paa"
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
		picture="\ASEC_backpacks\data\ui\backpack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_511_radio.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\kitbag_od_co.paa"
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
		picture="\ASEC_backpacks\data\ui\backpack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_511_radio.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\kitbag_blk_co.paa"
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
		picture="\ASEC_backpacks\data\ui\backpack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_511_radio.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\kitbag_tan_co.paa"
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
		picture="\ASEC_backpacks\data\ui\backpack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_511_radio.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\kitbag_mc_co.paa"
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
		picture="\ASEC_backpacks\data\ui\assaultpack_od_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_assaultpack_V1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\backpack_od_co.paa"
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
		picture="\ASEC_backpacks\data\ui\assaultpack_blk_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_assaultpack_V1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\backpack_BLK_co.paa"
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
		picture="\ASEC_backpacks\data\ui\assaultpack_tan_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_assaultpack_V1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\backpack_tan_co.paa"
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
		picture="\ASEC_backpacks\data\ui\assaultpack_od_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_assaultpack_V2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\backpack_od_co.paa"
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
		picture="\ASEC_backpacks\data\ui\assaultpack_blk_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_assaultpack_V2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\backpack_BLK_co.paa"
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
		picture="\ASEC_backpacks\data\ui\assaultpack_tan_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_assaultpack_V2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\backpack_tan_co.paa"
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
		picture="\ASEC_backpacks\data\ui\mappack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_map_breacher.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\SOG_BAG_OD_co.paa"
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
		picture="\ASEC_backpacks\data\ui\mappack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_map_breacher.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\SOG_BAG_tan_co.paa"
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
		picture="\ASEC_backpacks\data\ui\mappack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_map_breacher.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\SOG_BAG_mc_co.paa"
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
		picture="\ASEC_backpacks\data\ui\mappack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_map_breacher.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\SOG_BAG_blk_co.paa"
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
		picture="\ASEC_backpacks\data\ui\mappack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_map_alpine.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\SOG_BAG_OD_co.paa"
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
		picture="\ASEC_backpacks\data\ui\mappack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_map_alpine.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\SOG_BAG_tan_co.paa"
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
		picture="\ASEC_backpacks\data\ui\mappack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_map_alpine.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\SOG_BAG_mc_co.paa"
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
		picture="\ASEC_backpacks\data\ui\mappack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_map_alpine.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\SOG_BAG_blk_co.paa"
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
		picture="\ASEC_backpacks\data\ui\mappack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_map_medical.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\SOG_BAG_OD_co.paa"
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
		picture="\ASEC_backpacks\data\ui\mappack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_map_medical.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\SOG_BAG_tan_co.paa"
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
		picture="\ASEC_backpacks\data\ui\mappack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_map_medical.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\SOG_BAG_mc_co.paa"
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
		picture="\ASEC_backpacks\data\ui\mappack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_map_medical.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\SOG_BAG_blk_co.paa"
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
		picture="\ASEC_backpacks\data\ui\mappack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_map_radio.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\SOG_BAG_OD_co.paa"
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
		picture="\ASEC_backpacks\data\ui\mappack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_map_radio.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\SOG_BAG_tan_co.paa"
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
		picture="\ASEC_backpacks\data\ui\mappack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_map_radio.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\SOG_BAG_mc_co.paa"
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
		picture="\ASEC_backpacks\data\ui\mappack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_map_radio.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\SOG_BAG_blk_co.paa"
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
		picture="\ASEC_backpacks\data\ui\mappack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_map_standard.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\SOG_BAG_OD_co.paa"
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
		picture="\ASEC_backpacks\data\ui\mappack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_map_standard.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\SOG_BAG_tan_co.paa"
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
		picture="\ASEC_backpacks\data\ui\mappack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_map_standard.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\SOG_BAG_mc_co.paa"
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
		picture="\ASEC_backpacks\data\ui\mappack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_map_standard.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\SOG_BAG_blk_co.paa"
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
		picture="\ASEC_backpacks\data\ui\mappack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_map_breacher_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\SOG_BAG_OD_co.paa"
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
		picture="\ASEC_backpacks\data\ui\mappack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_map_breacher_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\SOG_BAG_tan_co.paa"
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
		picture="\ASEC_backpacks\data\ui\mappack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_map_breacher_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\SOG_BAG_mc_co.paa"
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
		picture="\ASEC_backpacks\data\ui\mappack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_map_breacher_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\SOG_BAG_blk_co.paa"
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
		picture="\ASEC_backpacks\data\ui\mappack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_map_alpine_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\SOG_BAG_OD_co.paa"
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
		picture="\ASEC_backpacks\data\ui\mappack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_map_alpine_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\SOG_BAG_tan_co.paa"
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
		picture="\ASEC_backpacks\data\ui\mappack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_map_alpine_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\SOG_BAG_mc_co.paa"
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
		picture="\ASEC_backpacks\data\ui\mappack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_map_alpine_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\SOG_BAG_blk_co.paa"
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
		picture="\ASEC_backpacks\data\ui\mappack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_map_medical_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\SOG_BAG_OD_co.paa"
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
		picture="\ASEC_backpacks\data\ui\mappack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_map_medical_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\SOG_BAG_tan_co.paa"
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
		picture="\ASEC_backpacks\data\ui\mappack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_map_medical_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\SOG_BAG_mc_co.paa"
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
		picture="\ASEC_backpacks\data\ui\mappack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_map_medical_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\SOG_BAG_blk_co.paa"
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
		picture="\ASEC_backpacks\data\ui\mappack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_map_radio_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\SOG_BAG_OD_co.paa"
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
		picture="\ASEC_backpacks\data\ui\mappack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_map_radio_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\SOG_BAG_tan_co.paa"
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
		picture="\ASEC_backpacks\data\ui\mappack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_map_radio_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\SOG_BAG_mc_co.paa"
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
		picture="\ASEC_backpacks\data\ui\mappack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_map_radio_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\SOG_BAG_blk_co.paa"
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
		picture="\ASEC_backpacks\data\ui\mappack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_medtac_pack.p3d";
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
		picture="\ASEC_backpacks\data\ui\backpack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_talon22.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\taloon_od.paa"
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
		picture="\ASEC_backpacks\data\ui\backpack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_talon22.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\taloon_blk.paa"
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
		picture="\ASEC_backpacks\data\ui\backpack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_talon22.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\taloon_mc.paa"
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
		picture="\ASEC_backpacks\data\ui\backpack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_talon22.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\taloon_tan.paa"
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
		model="ASEC_backpacks\data\model\ASEC_halo_gear_V2.p3d";
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
		model="ASEC_backpacks\data\model\ASEC_halo_gear_V1.p3d";
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
		picture="\ASEC_backpacks\data\ui\backpack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_flatpack.p3d";
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
		picture="\ASEC_backpacks\data\ui\backpack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_flatpack.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\ASEC_flatpack_mc_co.paa"
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
		picture="\ASEC_backpacks\data\ui\backpack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_flatpack.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\ASEC_flatpack_khk_co.paa"
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
		picture="\ASEC_backpacks\data\ui\backpack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_flatpack_breacher.p3d";
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
		picture="\ASEC_backpacks\data\ui\backpack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_flatpack_breacher.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\ASEC_flatpack_mc_co.paa"
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
		picture="\ASEC_backpacks\data\ui\backpack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_flatpack_breacher.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\ASEC_flatpack_khk_co.paa"
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
		picture="\ASEC_backpacks\data\ui\backpack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_flatpack_radio.p3d";
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
		picture="\ASEC_backpacks\data\ui\backpack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_flatpack_radio.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\ASEC_flatpack_mc_co.paa"
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
		picture="\ASEC_backpacks\data\ui\backpack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_flatpack_radio.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\backpacks\ASEC_flatpack_khk_co.paa"
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
		picture="\ASEC_backpacks\data\ui\backpack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_mountainpack.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\mountain\mountain_tan.paa"
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
		picture="\ASEC_backpacks\data\ui\backpack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_mountainpack.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\mountain\mountain_od.paa"
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
		picture="\ASEC_backpacks\data\ui\backpack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_mountainpack.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\mountain\mountain_mc.paa"
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
		picture="\ASEC_backpacks\data\ui\backpack_ca.paa";
		model="ASEC_backpacks\data\model\ASEC_mountainpack.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_backpacks\data\tex\mountain\mountain_hivis.paa"
		};
		maximumLoad=400;
		mass=40;
	};
};
