class CfgPatches
{
	class ASEC_nvg1
	{
		units[]={};
		weapons[]=
		{
			""
		};
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
class cfgWeapons
{
	class ItemCore;
	class HeadgearItem;
	class Binocular;
	class NVGoggles;
	class UniformItem;
	class Uniform_Base;
	class VestItem;
	class InventoryItem_Base_F;
	{
	};
	class pvs31_01: NVGoggles
	{
		author = "Lip, Jup, Thunder";
		displayName="[ASEC] PVS-31 01";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		model="ASEC_nvg1\model\pvs31_up.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"battpack"
		};
		hiddenSelectionsTextures[]=
		{
			"\ASEC_nvg1\data\l4g24\l4g24_CO.paa",
			"\ASEC_nvg1\data\batterypack\pvs31_btpack_CO.paa"
		};
		descriptionUse="Night Vision Goggles";
		modelOptics="";
		ace_nightvision_border="\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
		ace_nightvision_bluRadius=0.15000001;
		ace_nightvision_generation=2;
		class Library
		{
			libTextDesc="PVS-31";
		};
		descriptionShort="Multi-purpose night vision binocular system designed for use by ground and sea-borne operators. Special unit 2.";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="ASEC_nvg1\model\pvs31_down.p3d";
			modelOff="ASEC_nvg1\model\pvs31_up.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"battpack"
			};
			hiddenSelectionsTextures[]=
			{
				"\ASEC_nvg1\data\l4g24\l4g24_CO.paa",
				"\ASEC_nvg1\data\batterypack\pvs31_btpack_CO.paa"
			};
			mass=4;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class pvs31_02: NVGoggles
	{
		author = "Lip, Jup, Thunder";
		displayName="[ASEC] PVS-31 02";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		model="ASEC_nvg1\model\pvs31_2_down.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"battpack"
		};
		hiddenSelectionsTextures[]=
		{
			"\ASEC_nvg1\data\l4g24\l4g24_CO.paa",
			"\ASEC_nvg1\data\batterypack\pvs31_btpack_CO.paa"
		};
		descriptionUse="Night Vision Goggles";
		modelOptics="";
		ace_nightvision_border="\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
		ace_nightvision_bluRadius=0.15000001;
		ace_nightvision_generation=2;
		class Library
		{
			libTextDesc="PVS-31";
		};
		descriptionShort="Multi-purpose night vision binocular system designed for use by ground and sea-borne operators. Special unit 2.";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="ASEC_nvg1\model\pvs31_down.p3d";
			modelOff="ASEC_nvg1\model\pvs31_2_down.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"battpack"
			};
			hiddenSelectionsTextures[]=
			{
				"\ASEC_nvg1\data\l4g24\l4g24_CO.paa",
				"\ASEC_nvg1\data\batterypack\pvs31_btpack_CO.paa"
			};
			mass=4;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class pvs31_03: NVGoggles
	{
		author = "Lip, Jup, Thunder";
		displayName="[ASEC] PVS-31 03";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		model="ASEC_nvg1\model\pvs31_2_tarsier_up.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"battpack"
		};
		hiddenSelectionsTextures[]=
		{
			"\ASEC_nvg1\data\l4g24\l4g24_CO.paa",
			"\ASEC_nvg1\data\batterypack\pvs31_btpack_CO.paa"
		};
		descriptionUse="Night Vision Goggles";
		modelOptics="";
		ace_nightvision_border="\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
		ace_nightvision_bluRadius=0.15000001;
		ace_nightvision_generation=2;
		class Library
		{
			libTextDesc="PVS-31";
		};
		descriptionShort="Multi-purpose night vision binocular system designed for use by ground and sea-borne operators. Special unit 2.";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="ASEC_nvg1\model\pvs31_tarsier_down.p3d";
			modelOff="ASEC_nvg1\model\pvs31_2_tarsier_up.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"battpack"
			};
			hiddenSelectionsTextures[]=
			{
				"\ASEC_nvg1\data\l4g24\l4g24_CO.paa",
				"\ASEC_nvg1\data\batterypack\pvs31_btpack_CO.paa"
			};
			mass=4;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class psq36_dovetail: NVGoggles
	{
		author = "Lip, Jup, Thunder";
		displayName="[ASEC] PSQ-36 Dovetail";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		model="ASEC_nvg1\model\psq_dov_up.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"battpack"
		};
		hiddenSelectionsTextures[]=
		{
			"\ASEC_nvg1\data\l4g24\l4g24_CO.paa",
			"\ASEC_nvg1\data\batterypack\pvs31_btpack_CO.paa"
		};
		descriptionUse="Night Vision Goggles";
		modelOptics="";
		ace_nightvision_border="TFL_nvg\optics\pvs_optic_ca2.paa";
		ace_nightvision_bluRadius=0.15000001;
		ace_nightvision_generation=2;
		class Library
		{
			libTextDesc="PSQ-36";
		};
		descriptionShort="Multi-purpose night vision binocular system designed for use by ground and sea-borne operators. AN PSQ-36";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="ASEC_nvg1\model\psq_dov_down.p3d";
			modelOff="ASEC_nvg1\model\psq_dov_up.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"battpack"
			};
			hiddenSelectionsTextures[]=
			{
				"\ASEC_nvg1\data\l4g24\l4g24_CO.paa",
				"\ASEC_nvg1\data\batterypack\pvs31_btpack_CO.paa"
			};
			mass=4;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
		thermalMode[]={0};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class psq36_tarsier_dovetail: NVGoggles
	{
		author = "Lip, Jup, Thunder";
		displayName="[ASEC] PSQ-36 Dovetail [Tarsier]";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		model="ASEC_nvg1\model\psq_tarsier_up.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"battpack"
		};
		hiddenSelectionsTextures[]=
		{
			"\ASEC_nvg1\data\l4g24\l4g24_CO.paa",
			"\ASEC_nvg1\data\batterypack\pvs31_btpack_CO.paa"
		};
		descriptionUse="Night Vision Goggles";
		modelOptics="";
		ace_nightvision_border="TFL_nvg\optics\pvs_optic_ca2.paa";
		ace_nightvision_bluRadius=0.15000001;
		ace_nightvision_generation=2;
		class Library
		{
			libTextDesc="PSQ-36";
		};
		descriptionShort="Multi-purpose night vision binocular system designed for use by ground and sea-borne operators. AN PSQ-36";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="ASEC_nvg1\model\psq_tarsier_down.p3d";
			modelOff="ASEC_nvg1\model\psq_tarsier_up.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"battpack"
			};
			hiddenSelectionsTextures[]=
			{
				"\ASEC_nvg1\data\l4g24\l4g24_CO.paa",
				"\ASEC_nvg1\data\batterypack\pvs31_btpack_CO.paa"
			};
			mass=4;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
		thermalMode[]={0};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class psq36_gsgm: NVGoggles
	{
		author = "Lip, Jup, Thunder";
		displayName="[ASEC] PSQ-36 GSGM";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		model="ASEC_nvg1\model\psq_gsgm_up.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"battpack"
		};
		hiddenSelectionsTextures[]=
		{
			"\ASEC_nvg1\data\l4g24\l4g24_CO.paa",
			"\ASEC_nvg1\data\batterypack\pvs31_btpack_CO.paa"
		};
		descriptionUse="Night Vision Goggles";
		modelOptics="";
		ace_nightvision_border="TFL_nvg\optics\pvs_optic_ca2.paa";
		ace_nightvision_bluRadius=0.15000001;
		ace_nightvision_generation=2;
		class Library
		{
			libTextDesc="PSQ-36";
		};
		descriptionShort="Multi-purpose night vision binocular system designed for use by ground and sea-borne operators. AN PSQ-36";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="ASEC_nvg1\model\psq_gsgm_down.p3d";
			modelOff="ASEC_nvg1\model\psq_gsgm_up.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"battpack"
			};
			hiddenSelectionsTextures[]=
			{
				"\ASEC_nvg1\data\l4g24\l4g24_CO.paa",
				"\ASEC_nvg1\data\batterypack\pvs31_btpack_CO.paa"
			};
			mass=4;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
		thermalMode[]={0};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class pvs31_01_NB: NVGoggles
	{
		author = "Lip, Jup, Thunder";
		displayName="[ASEC] PVS-31 01 [NB]";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		model="ASEC_nvg1\model\pvs31_up_NB.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"battpack"
		};
		hiddenSelectionsTextures[]=
		{
			"\ASEC_nvg1\data\l4g24\l4g24_CO.paa",
			""
		};
		descriptionUse="Night Vision Goggles";
		modelOptics="";
		ace_nightvision_border="\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
		ace_nightvision_bluRadius=0.15000001;
		ace_nightvision_generation=2;
		class Library
		{
			libTextDesc="PVS-31";
		};
		descriptionShort="Multi-purpose night vision binocular system designed for use by ground and sea-borne operators. Special unit 2.";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="ASEC_nvg1\model\pvs31_down_NB.p3d";
			modelOff="ASEC_nvg1\model\pvs31_up_NB.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"battpack"
			};
			mass=4;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class pvs31_02_NB: NVGoggles
	{
		author = "Lip, Jup, Thunder";
		displayName="[ASEC] PVS-31 02 [NB]";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		model="ASEC_nvg1\model\pvs31_2_down_NB.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"battpack"
		};
		hiddenSelectionsTextures[]=
		{
			"\ASEC_nvg1\data\l4g24\l4g24_CO.paa",
			""
		};
		descriptionUse="Night Vision Goggles";
		modelOptics="";
		ace_nightvision_border="\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
		ace_nightvision_bluRadius=0.15000001;
		ace_nightvision_generation=2;
		class Library
		{
			libTextDesc="PVS-31";
		};
		descriptionShort="Multi-purpose night vision binocular system designed for use by ground and sea-borne operators. Special unit 2.";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="ASEC_nvg1\model\pvs31_down_NB.p3d";
			modelOff="ASEC_nvg1\model\pvs31_2_down_NB.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"battpack"
			};
			mass=4;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class pvs31_03_NB: NVGoggles
	{
		author = "Lip, Jup, Thunder";
		displayName="[ASEC] PVS-31 03 [NB]";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		model="ASEC_nvg1\model\pvs31_2_tarsier_up_NB.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"battpack"
		};
		hiddenSelectionsTextures[]=
		{
			"\ASEC_nvg1\data\l4g24\l4g24_CO.paa",
			""
		};
		descriptionUse="Night Vision Goggles";
		modelOptics="";
		ace_nightvision_border="\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
		ace_nightvision_bluRadius=0.15000001;
		ace_nightvision_generation=2;
		class Library
		{
			libTextDesc="PVS-31";
		};
		descriptionShort="Multi-purpose night vision binocular system designed for use by ground and sea-borne operators. Special unit 2.";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="ASEC_nvg1\model\pvs31_tarsier_down_NB.p3d";
			modelOff="ASEC_nvg1\model\pvs31_2_tarsier_up_NB.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"battpack"
			};
			mass=4;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class psq36_dovetail_NB: NVGoggles
	{
		author = "Lip, Jup, Thunder";
		displayName="[ASEC] PSQ-36 Dovetail [NB]";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		model="ASEC_nvg1\model\psq_dov_up_NB.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"battpack"
		};
		hiddenSelectionsTextures[]=
		{
			"\ASEC_nvg1\data\l4g24\l4g24_CO.paa",
			""
		};
		descriptionUse="Night Vision Goggles";
		modelOptics="";
		ace_nightvision_border="TFL_nvg\optics\pvs_optic_ca2.paa";
		ace_nightvision_bluRadius=0.15000001;
		ace_nightvision_generation=2;
		class Library
		{
			libTextDesc="PSQ-36";
		};
		descriptionShort="Multi-purpose night vision binocular system designed for use by ground and sea-borne operators. AN PSQ-36";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="ASEC_nvg1\model\psq_dov_down_NB.p3d";
			modelOff="ASEC_nvg1\model\psq_dov_up_NB.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"battpack"
			};
			mass=4;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
		thermalMode[]={0};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class psq36_tarsier_dovetail_NB: NVGoggles
	{
		author = "Lip, Jup, Thunder";
		displayName="[ASEC] PSQ-36 Dovetail [Tarsier] [NB]";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		model="ASEC_nvg1\model\psq_tarsier_up_NB.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"battpack"
		};
		hiddenSelectionsTextures[]=
		{
			"\ASEC_nvg1\data\l4g24\l4g24_CO.paa",
			""
		};
		descriptionUse="Night Vision Goggles";
		modelOptics="";
		ace_nightvision_border="TFL_nvg\optics\pvs_optic_ca2.paa";
		ace_nightvision_bluRadius=0.15000001;
		ace_nightvision_generation=2;
		class Library
		{
			libTextDesc="PSQ-36";
		};
		descriptionShort="Multi-purpose night vision binocular system designed for use by ground and sea-borne operators. AN PSQ-36";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="ASEC_nvg1\model\psq_tarsier_down_NB.p3d";
			modelOff="ASEC_nvg1\model\psq_tarsier_up_NB.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"battpack"
			};
			mass=4;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
		thermalMode[]={0};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class psq36_gsgm_NB: NVGoggles
	{
		author = "Lip, Jup, Thunder";
		displayName="[ASEC] PSQ-36 GSGM [NB]";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		model="ASEC_nvg1\model\psq_gsgm_up_NB.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"battpack"
		};
		hiddenSelectionsTextures[]=
		{
			"\ASEC_nvg1\data\l4g24\l4g24_CO.paa",
			""
		};
		descriptionUse="Night Vision Goggles";
		modelOptics="";
		ace_nightvision_border="TFL_nvg\optics\pvs_optic_ca2.paa";
		ace_nightvision_bluRadius=0.15000001;
		ace_nightvision_generation=2;
		class Library
		{
			libTextDesc="PSQ-36";
		};
		descriptionShort="Multi-purpose night vision binocular system designed for use by ground and sea-borne operators. AN PSQ-36";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="ASEC_nvg1\model\psq_gsgm_down_NB.p3d";
			modelOff="ASEC_nvg1\model\psq_gsgm_up_NB.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"battpack"
			};
			mass=4;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
		thermalMode[]={0};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
};

//														//
//			Added ASEC_nvg1 & ASEC_nvg2 together		//
//														//
//														//



	class Louetta_PVS31A_1: NVGoggles
	{
		author = "Lip, Jup, Thunder";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[ASEC] AN/PVS-31 Up";
		model="ASEC_nvg1\31_up.p3d";
		picture="\ASEC_nvg1\ui\31.paa";
		ace_nightvision_generation=3;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\ASEC_nvg1\optics\pvs_Optic";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_nvg1\data\l4g24_co.paa"
		};
		descriptionShort="Green Phosphor";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="ASEC_nvg1\31_down_g.p3d";
			modelOff="ASEC_nvg1\31_up.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"ASEC_nvg1\data\l4g24_co.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class Louetta_PVS31A_1_alt: NVGoggles
	{
		author = "Lip, Jup, Thunder";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[ASEC] AN/PVS-31 Up Alt";
		model="ASEC_nvg1\31_up.p3d";
		picture="\ASEC_nvg1\ui\31.paa";
		ace_nightvision_generation=3;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\ASEC_nvg1\optics\pvs_Optic";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_nvg1\data\l4g24_blk_CO.paa"
		};
		descriptionShort="Green Phosphor";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="ASEC_nvg1\31_down_g.p3d";
			modelOff="ASEC_nvg1\31_up.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"ASEC_nvg1\data\l4g24_blk_CO.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class Louetta_PVS31A_2: NVGoggles
	{
		author = "Lip, Jup, Thunder";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[ASEC] AN/PVS-31A Up";
		model="ASEC_nvg1\31_up.p3d";
		picture="\ASEC_nvg1\ui\31.paa";
		ace_nightvision_generation=3;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\ASEC_nvg1\optics\pvs_Optic";
		nameSound="nvgoggles";
		colorPreset[]=
		{
			0,
			{0,0,0,0},
			{0.69999999,0.30000001,1.3,0.89999998},
			{1,1,6,0}
		};
		descriptionShort="AN/PVS-31A";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_nvg1\data\l4g24_co.paa"
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="ASEC_nvg1\31_down_w.p3d";
			modelOff="ASEC_nvg1\31_up.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"ASEC_nvg1\data\l4g24_co.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class Louetta_PVS31A_2_alt: NVGoggles
	{
		author = "Lip, Jup, Thunder";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[ASEC] AN/PVS-31A Up Alt";
		model="ASEC_nvg1\31_up.p3d";
		picture="\ASEC_nvg1\ui\31.paa";
		ace_nightvision_generation=3;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\ASEC_nvg1\optics\pvs_Optic";
		nameSound="nvgoggles";
		colorPreset[]=
		{
			0,
			{0,0,0,0},
			{0.69999999,0.30000001,1.3,0.89999998},
			{1,1,6,0}
		};
		descriptionShort="AN/PVS-31A";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_nvg1\data\l4g24_blk_co.paa"
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="ASEC_nvg1\31_down_w.p3d";
			modelOff="ASEC_nvg1\31_up.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"ASEC_nvg1\data\l4g24_blk_co.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class Louetta_PVS31A_3: NVGoggles
	{
		author = "Lip, Jup, Thunder";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[ASEC] AN/PVS-31 Wide";
		model="ASEC_nvg1\31_wide.p3d";
		picture="\ASEC_nvg1\ui\31.paa";
		ace_nightvision_generation=3;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\ASEC_nvg1\optics\pvs_Optic";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_nvg1\data\l4g24_co.paa"
		};
		descriptionShort="Green Phosphor";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="ASEC_nvg1\31_down_g.p3d";
			modelOff="ASEC_nvg1\31_wide.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"ASEC_nvg1\data\l4g24_co.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class Louetta_PVS31A_3_alt: NVGoggles
	{
		author = "Lip, Jup, Thunder";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[ASEC] AN/PVS-31 Wide Alt";
		model="ASEC_nvg1\31_wide_a.p3d";
		picture="\ASEC_nvg1\ui\31.paa";
		ace_nightvision_generation=3;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\ASEC_nvg1\optics\pvs_Optic";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_nvg1\data\l4g24_blk_co.paa"
		};
		descriptionShort="Green Phosphor";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="ASEC_nvg1\31_down_g.p3d";
			modelOff="ASEC_nvg1\31_wide_a.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"ASEC_nvg1\data\l4g24_blk_co.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class Louetta_PVS31A_4: NVGoggles
	{
		author = "Lip, Jup, Thunder";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[ASEC] AN/PVS-31A Wide";
		model="ASEC_nvg1\31_wide.p3d";
		picture="\ASEC_nvg1\ui\31.paa";
		ace_nightvision_generation=3;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\ASEC_nvg1\optics\pvs_Optic";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_nvg1\data\l4g24_co.paa"
		};
		colorPreset[]=
		{
			0,
			{0,0,0,0},
			{0.69999999,0.30000001,1.3,0.89999998},
			{1,1,6,0}
		};
		descriptionShort="White Phosphor";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="ASEC_nvg1\31_down_w.p3d";
			modelOff="ASEC_nvg1\31_wide.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"ASEC_nvg1\data\l4g24_co.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class Louetta_PVS31A_4_alt: NVGoggles
	{
		author = "Lip, Jup, Thunder";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[ASEC] AN/PVS-31A Wide Alt";
		model="ASEC_nvg1\31_wide_a.p3d";
		picture="\ASEC_nvg1\ui\31.paa";
		ace_nightvision_generation=3;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\ASEC_nvg1\optics\pvs_Optic";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_nvg1\data\l4g24_blk_co.paa"
		};
		colorPreset[]=
		{
			0,
			{0,0,0,0},
			{0.69999999,0.30000001,1.3,0.89999998},
			{1,1,6,0}
		};
		descriptionShort="White Phosphor";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="ASEC_nvg1\31_down_w.p3d";
			modelOff="ASEC_nvg1\31_wide_a.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"ASEC_nvg1\data\l4g24_blk_co.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class Louetta_PVS31A_5: NVGoggles
	{
		author = "Lip, Jup, Thunder";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[ASEC] AN/PVS-31 Wide Up";
		model="ASEC_nvg1\31.p3d";
		picture="\ASEC_nvg1\ui\31.paa";
		ace_nightvision_generation=3;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\ASEC_nvg1\optics\pvs_Optic";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_nvg1\data\l4g24_co.paa"
		};
		colorPreset[]=
		{
			0,
			{0,0,0,0},
			{0.69999999,0.30000001,1.3,0.89999998},
			{1,1,6,0}
		};
		descriptionShort="Green Phosphor";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="ASEC_nvg1\31_down_g.p3d";
			modelOff="ASEC_nvg1\31.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"ASEC_nvg1\data\l4g24_co.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class Louetta_PVS31A_5_alt: NVGoggles
	{
		author = "Lip, Jup, Thunder";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[ASEC] AN/PVS-31 Wide Up Alt";
		model="ASEC_nvg1\31.p3d";
		picture="\ASEC_nvg1\ui\31.paa";
		ace_nightvision_generation=3;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\ASEC_nvg1\optics\pvs_Optic";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_nvg1\data\l4g24_blk_co.paa"
		};
		colorPreset[]=
		{
			0,
			{0,0,0,0},
			{0.69999999,0.30000001,1.3,0.89999998},
			{1,1,6,0}
		};
		descriptionShort="Green Phosphor";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="ASEC_nvg1\31_down_g.p3d";
			modelOff="ASEC_nvg1\31.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"ASEC_nvg1\data\l4g24_blk_co.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class Louetta_PVS31A_6: NVGoggles
	{
		author = "Lip, Jup, Thunder";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[ASEC] AN/PVS-31A Wide Up";
		model="ASEC_nvg1\31.p3d";
		picture="\ASEC_nvg1\ui\31.paa";
		ace_nightvision_generation=3;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\ASEC_nvg1\optics\pvs_Optic";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_nvg1\data\l4g24_co.paa"
		};
		colorPreset[]=
		{
			0,
			{0,0,0,0},
			{0.69999999,0.30000001,1.3,0.89999998},
			{1,1,6,0}
		};
		descriptionShort="White Phosphor";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="ASEC_nvg1\31_down_w.p3d";
			modelOff="ASEC_nvg1\31.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"ASEC_nvg1\data\l4g24_co.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class Louetta_PVS31A_6_alt: NVGoggles
	{
		author = "Lip, Jup, Thunder";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[ASEC] AN/PVS-31A Wide Up Alt";
		model="ASEC_nvg1\31.p3d";
		picture="\ASEC_nvg1\ui\31.paa";
		ace_nightvision_generation=3;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\ASEC_nvg1\optics\pvs_Optic";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_nvg1\data\l4g24_blk_co.paa"
		};
		colorPreset[]=
		{
			0,
			{0,0,0,0},
			{0.69999999,0.30000001,1.3,0.89999998},
			{1,1,6,0}
		};
		descriptionShort="White Phosphor";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="ASEC_nvg1\31_down_w.p3d";
			modelOff="ASEC_nvg1\31.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"ASEC_nvg1\data\l4g24_blk_co.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class Louetta_GPNVG_1: NVGoggles
	{
		author = "Lip, Jup, Thunder";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[ASEC] GPNVG-18 Green Phosphor";
		model="ASEC_nvg1\GPNVG18_up.p3d";
		picture="\ASEC_nvg1\ui\18.paa";
		ace_nightvision_generation=4;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\ASEC_nvg1\optics\gp_Optic";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_nvg1\data\l4g24_co.paa"
		};
		descriptionShort="Green Phosphor";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="ASEC_nvg1\GPNVG18_down_g.p3d";
			modelOff="ASEC_nvg1\GPNVG18_up.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"ASEC_nvg1\data\l4g24_co.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class Louetta_GPNVG_1_alt: NVGoggles
	{
		author = "Lip, Jup, Thunder";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[ASEC] GPNVG-18 Alt Green Phosphor";
		model="ASEC_nvg1\GPNVG18_up.p3d";
		picture="\ASEC_nvg1\ui\18.paa";
		ace_nightvision_generation=4;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\ASEC_nvg1\optics\gp_Optic";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_nvg1\data\l4g24_blk_co.paa"
		};
		descriptionShort="Green Phosphor";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="ASEC_nvg1\GPNVG18_down_g.p3d";
			modelOff="ASEC_nvg1\GPNVG18_up.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"ASEC_nvg1\data\l4g24_blk_co.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class Louetta_GPNVG_2: NVGoggles
	{
		author = "Lip, Jup, Thunder";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[ASEC] GPNVG-18 White Phosphor";
		model="ASEC_nvg1\GPNVG18_up.p3d";
		picture="\ASEC_nvg1\ui\18.paa";
		ace_nightvision_generation=4;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\ASEC_nvg1\optics\gp_Optic";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_nvg1\data\l4g24_co.paa"
		};
		colorPreset[]=
		{
			0,
			{0,0,0,0},
			{0.69999999,0.30000001,1.3,0.89999998},
			{1,1,6,0}
		};
		descriptionShort="White Phosphor";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="ASEC_nvg1\GPNVG18_down_w.p3d";
			modelOff="ASEC_nvg1\GPNVG18_up.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"ASEC_nvg1\data\l4g24_co.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class Louetta_GPNVG_2_alt: NVGoggles
	{
		author = "Lip, Jup, Thunder";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[ASEC] GPNVG-18 Alt White Phosphor";
		model="ASEC_nvg1\GPNVG18_up.p3d";
		picture="\ASEC_nvg1\ui\18.paa";
		ace_nightvision_generation=4;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\ASEC_nvg1\optics\gp_Optic";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_nvg1\data\l4g24_blk_co.paa"
		};
		colorPreset[]=
		{
			0,
			{0,0,0,0},
			{0.69999999,0.30000001,1.3,0.89999998},
			{1,1,6,0}
		};
		descriptionShort="White Phosphor";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="ASEC_nvg1\GPNVG18_down_w.p3d";
			modelOff="ASEC_nvg1\GPNVG18_up.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"ASEC_nvg1\data\l4g24_blk_co.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class Louetta_GPNVG_1_blk: NVGoggles
	{
		author = "Lip, Jup, Thunder";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[ASEC] GPNVG-18 Blk Green Phosphor";
		model="ASEC_nvg1\GPNVG18_up.p3d";
		picture="\ASEC_nvg1\ui\18.paa";
		ace_nightvision_generation=4;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\ASEC_nvg1\optics\gp_Optic";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"mount2"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_nvg1\data\l4g24_co.paa",
			"ASEC_nvg1\data\gpnvg18_blk_co.paa",
			"ASEC_nvg1\data\gpnvgmount_blk_co.paa"
		};
		descriptionShort="Green Phosphor";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="ASEC_nvg1\GPNVG18_down_g.p3d";
			modelOff="ASEC_nvg1\GPNVG18_up.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"mount2"
			};
			hiddenSelectionsTextures[]=
			{
				"ASEC_nvg1\data\l4g24_co.paa",
				"ASEC_nvg1\data\gpnvg18_blk_co.paa",
				"ASEC_nvg1\data\gpnvgmount_blk_co.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class Louetta_GPNVG_1_blk_alt: NVGoggles
	{
		author = "Lip, Jup, Thunder";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[ASEC] GPNVG-18 Blk Alt Green Phosphor";
		model="ASEC_nvg1\GPNVG18_up.p3d";
		picture="\ASEC_nvg1\ui\18.paa";
		ace_nightvision_generation=4;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\ASEC_nvg1\optics\gp_Optic";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"mount2"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_nvg1\data\l4g24_co.paa",
			"ASEC_nvg1\data\gpnvg18_blk_co.paa",
			"ASEC_nvg1\data\gpnvgmount_blk_co.paa"
		};
		descriptionShort="Green Phosphor";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="ASEC_nvg1\GPNVG18_down_g.p3d";
			modelOff="ASEC_nvg1\GPNVG18_up.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"mount2"
			};
			hiddenSelectionsTextures[]=
			{
				"ASEC_nvg1\data\l4g24_co.paa",
				"ASEC_nvg1\data\gpnvg18_blk_co.paa",
				"ASEC_nvg1\data\gpnvgmount_blk_co.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class Louetta_GPNVG_2_blk: NVGoggles
	{
		author = "Lip, Jup, Thunder";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[ASEC] GPNVG-18 Blk White Phosphor";
		model="ASEC_nvg1\GPNVG18_up.p3d";
		picture="\ASEC_nvg1\ui\18.paa";
		ace_nightvision_generation=4;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\ASEC_nvg1\optics\gp_Optic";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"mount2"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_nvg1\data\l4g24_co.paa",
			"ASEC_nvg1\data\gpnvg18_blk_co.paa",
			"ASEC_nvg1\data\gpnvgmount_blk_co.paa"
		};
		colorPreset[]=
		{
			0,
			{0,0,0,0},
			{0.69999999,0.30000001,1.3,0.89999998},
			{1,1,6,0}
		};
		descriptionShort="White Phosphor";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="ASEC_nvg1\GPNVG18_down_w.p3d";
			modelOff="ASEC_nvg1\GPNVG18_up.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"mount2"
			};
			hiddenSelectionsTextures[]=
			{
				"ASEC_nvg1\data\l4g24_co.paa",
				"ASEC_nvg1\data\gpnvg18_blk_co.paa",
				"ASEC_nvg1\data\gpnvgmount_blk_co.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class Louetta_GPNVG_2_blk_alt: NVGoggles
	{
		author = "Lip, Jup, Thunder";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[ASEC] GPNVG-18 Blk Alt White Phosphor";
		model="ASEC_nvg1\GPNVG18_up.p3d";
		picture="\ASEC_nvg1\ui\18.paa";
		ace_nightvision_generation=4;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\ASEC_nvg1\optics\gp_Optic";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"mount2"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_nvg1\data\l4g24_co.paa",
			"ASEC_nvg1\data\gpnvg18_blk_co.paa",
			"ASEC_nvg1\data\gpnvgmount_blk_co.paa"
		};
		colorPreset[]=
		{
			0,
			{0,0,0,0},
			{0.69999999,0.30000001,1.3,0.89999998},
			{1,1,6,0}
		};
		descriptionShort="White Phosphor";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="ASEC_nvg1\GPNVG18_down_w.p3d";
			modelOff="ASEC_nvg1\GPNVG18_up.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"mount2"
			};
			hiddenSelectionsTextures[]=
			{
				"ASEC_nvg1\data\l4g24_co.paa",
				"ASEC_nvg1\data\gpnvg18_blk_co.paa",
				"ASEC_nvg1\data\gpnvgmount_blk_co.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class Louetta_G24_1: NVGoggles
	{
		author = "Lip, Jup, Thunder";
		displayName="[ASEC] L4 G24 Black";
		model="ASEC_nvg1\g24.p3d";
		picture="\ASEC_nvg1\ui\g24.paa";
		modelOptics="-";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_nvg1\data\l4g24_blk_co.paa"
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="ASEC_nvg1\g24.p3d";
			modelOff="ASEC_nvg1\g24.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"ASEC_nvg1\data\l4g24_blk_co.paa"
			};
			mass=1;
		};
	};
	class Louetta_G24_2: NVGoggles
	{
		author = "Lip, Jup, Thunder";
		displayName="[ASEC] L4 G24 Grey";
		model="ASEC_nvg1\g24.p3d";
		picture="\ASEC_nvg1\ui\g24.paa";
		modelOptics="-";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_nvg1\data\l4g24_co.paa"
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="ASEC_nvg1\g24.p3d";
			modelOff="ASEC_nvg1\g24.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"ASEC_nvg1\data\l4g24_co.paa"
			};
			mass=1;
		};
	};
	class Louetta_G24_3: NVGoggles
	{
		author = "Lip, Jup, Thunder";
		displayName="[ASEC] L4 G24 Gold";
		model="ASEC_nvg1\g24.p3d";
		picture="\ASEC_nvg1\ui\g24.paa";
		modelOptics="-";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_nvg1\data\l4g24_gold_co.paa"
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="ASEC_nvg1\g24.p3d";
			modelOff="ASEC_nvg1\g24.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"ASEC_nvg1\data\l4g24_gold_co.paa"
			};
			mass=1;
		};
	};
	class Louetta_GSGM: NVGoggles
	{
		author = "Lip, Jup, Thunder";
		displayName="[ASEC] GSGM";
		model="ASEC_nvg1\gsgm.p3d";
		picture="\ASEC_nvg1\ui\gsgm.paa";
		modelOptics="-";
		nameSound="nvgoggles";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="ASEC_nvg1\gsgm.p3d";
			modelOff="ASEC_nvg1\gsgm.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			mass=1;
		};
	};
	class Louetta_GSGM_GPNVG_tan: NVGoggles
	{
		author = "Lip, Jup, Thunder";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[ASEC] GSGM GPNVG-18 White Phosphor";
		model="ASEC_nvg1\GSGM_GPNVG18_up.p3d";
		picture="\ASEC_nvg1\ui\18.paa";
		ace_nightvision_generation=4;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\ASEC_nvg1\optics\gp_Optic";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_nvg1\data\gpnvg18_tan_co.paa"
		};
		colorPreset[]=
		{
			0,
			{0,0,0,0},
			{0.69999999,0.30000001,1.3,0.89999998},
			{1,1,6,0}
		};
		descriptionShort="White Phosphor";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="ASEC_nvg1\GSGM_GPNVG18_down_w.p3d";
			modelOff="ASEC_nvg1\GSGM_GPNVG18_up.p3d";
			hiddenSelections[]=
			{
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"ASEC_nvg1\data\gpnvg18_tan_co.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class Louetta_GSGM_GPNVG_blk: NVGoggles
	{
		author = "Lip, Jup, Thunder";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[ASEC] GSGM Blk GPNVG-18 White Phosphor";
		model="ASEC_nvg1\GSGM_GPNVG18_up.p3d";
		picture="\ASEC_nvg1\ui\18.paa";
		ace_nightvision_generation=4;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\ASEC_nvg1\optics\gp_Optic";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_nvg1\data\gpnvg18_blk_co.paa"
		};
		colorPreset[]=
		{
			0,
			{0,0,0,0},
			{0.69999999,0.30000001,1.3,0.89999998},
			{1,1,6,0}
		};
		descriptionShort="White Phosphor";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="ASEC_nvg1\GSGM_GPNVG18_down_w.p3d";
			modelOff="ASEC_nvg1\GSGM_GPNVG18_up.p3d";
			hiddenSelections[]=
			{
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"ASEC_nvg1\data\gpnvg18_blk_co.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
};


