class CfgPatches
{
	class vmnd_nvg
	{
		units[]={};
		weapons[]=
		{
			"vielmondnvg"
		};
		requiredVersion=0.1;
	};
};
class cfgWeapons
{
	class ItemCore;
	class HeadgearItem;
	class Binocular;
	class NVGoggles: Binocular
	{
	};
	class pvs31_01: NVGoggles
	{
		author="Vielmond";
		displayName="[ASEC] PVS-31 01";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		model="vmnd_nvg\model\pvs31_up.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"battpack"
		};
		hiddenSelectionsTextures[]=
		{
			"\vmnd_nvg\data\l4g24\l4g24_CO.paa",
			"\vmnd_nvg\data\batterypack\pvs31_btpack_CO.paa"
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
			uniformModel="vmnd_nvg\model\pvs31_down.p3d";
			modelOff="vmnd_nvg\model\pvs31_up.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"battpack"
			};
			hiddenSelectionsTextures[]=
			{
				"\vmnd_nvg\data\l4g24\l4g24_CO.paa",
				"\vmnd_nvg\data\batterypack\pvs31_btpack_CO.paa"
			};
			mass=4;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class pvs31_02: NVGoggles
	{
		author="Vielmond";
		displayName="[ASEC] PVS-31 02";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		model="vmnd_nvg\model\pvs31_2_down.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"battpack"
		};
		hiddenSelectionsTextures[]=
		{
			"\vmnd_nvg\data\l4g24\l4g24_CO.paa",
			"\vmnd_nvg\data\batterypack\pvs31_btpack_CO.paa"
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
			uniformModel="vmnd_nvg\model\pvs31_down.p3d";
			modelOff="vmnd_nvg\model\pvs31_2_down.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"battpack"
			};
			hiddenSelectionsTextures[]=
			{
				"\vmnd_nvg\data\l4g24\l4g24_CO.paa",
				"\vmnd_nvg\data\batterypack\pvs31_btpack_CO.paa"
			};
			mass=4;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class pvs31_03: NVGoggles
	{
		author="Vielmond";
		displayName="[ASEC] PVS-31 03";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		model="vmnd_nvg\model\pvs31_2_tarsier_up.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"battpack"
		};
		hiddenSelectionsTextures[]=
		{
			"\vmnd_nvg\data\l4g24\l4g24_CO.paa",
			"\vmnd_nvg\data\batterypack\pvs31_btpack_CO.paa"
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
			uniformModel="vmnd_nvg\model\pvs31_tarsier_down.p3d";
			modelOff="vmnd_nvg\model\pvs31_2_tarsier_up.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"battpack"
			};
			hiddenSelectionsTextures[]=
			{
				"\vmnd_nvg\data\l4g24\l4g24_CO.paa",
				"\vmnd_nvg\data\batterypack\pvs31_btpack_CO.paa"
			};
			mass=4;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class psq36_dovetail: NVGoggles
	{
		author="Vielmond";
		displayName="[ASEC] PSQ-36 Dovetail";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		model="vmnd_nvg\model\psq_dov_up.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"battpack"
		};
		hiddenSelectionsTextures[]=
		{
			"\vmnd_nvg\data\l4g24\l4g24_CO.paa",
			"\vmnd_nvg\data\batterypack\pvs31_btpack_CO.paa"
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
			uniformModel="vmnd_nvg\model\psq_dov_down.p3d";
			modelOff="vmnd_nvg\model\psq_dov_up.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"battpack"
			};
			hiddenSelectionsTextures[]=
			{
				"\vmnd_nvg\data\l4g24\l4g24_CO.paa",
				"\vmnd_nvg\data\batterypack\pvs31_btpack_CO.paa"
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
		author="Vielmond";
		displayName="[ASEC] PSQ-36 Dovetail [Tarsier]";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		model="vmnd_nvg\model\psq_tarsier_up.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"battpack"
		};
		hiddenSelectionsTextures[]=
		{
			"\vmnd_nvg\data\l4g24\l4g24_CO.paa",
			"\vmnd_nvg\data\batterypack\pvs31_btpack_CO.paa"
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
			uniformModel="vmnd_nvg\model\psq_tarsier_down.p3d";
			modelOff="vmnd_nvg\model\psq_tarsier_up.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"battpack"
			};
			hiddenSelectionsTextures[]=
			{
				"\vmnd_nvg\data\l4g24\l4g24_CO.paa",
				"\vmnd_nvg\data\batterypack\pvs31_btpack_CO.paa"
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
		author="Vielmond";
		displayName="[ASEC] PSQ-36 GSGM";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		model="vmnd_nvg\model\psq_gsgm_up.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"battpack"
		};
		hiddenSelectionsTextures[]=
		{
			"\vmnd_nvg\data\l4g24\l4g24_CO.paa",
			"\vmnd_nvg\data\batterypack\pvs31_btpack_CO.paa"
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
			uniformModel="vmnd_nvg\model\psq_gsgm_down.p3d";
			modelOff="vmnd_nvg\model\psq_gsgm_up.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"battpack"
			};
			hiddenSelectionsTextures[]=
			{
				"\vmnd_nvg\data\l4g24\l4g24_CO.paa",
				"\vmnd_nvg\data\batterypack\pvs31_btpack_CO.paa"
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
		author="Vielmond";
		displayName="[ASEC] PVS-31 01 [NB]";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		model="vmnd_nvg\model\pvs31_up_NB.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"battpack"
		};
		hiddenSelectionsTextures[]=
		{
			"\vmnd_nvg\data\l4g24\l4g24_CO.paa",
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
			uniformModel="vmnd_nvg\model\pvs31_down_NB.p3d";
			modelOff="vmnd_nvg\model\pvs31_up_NB.p3d";
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
		author="Vielmond";
		displayName="[ASEC] PVS-31 02 [NB]";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		model="vmnd_nvg\model\pvs31_2_down_NB.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"battpack"
		};
		hiddenSelectionsTextures[]=
		{
			"\vmnd_nvg\data\l4g24\l4g24_CO.paa",
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
			uniformModel="vmnd_nvg\model\pvs31_down_NB.p3d";
			modelOff="vmnd_nvg\model\pvs31_2_down_NB.p3d";
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
		author="Vielmond";
		displayName="[ASEC] PVS-31 03 [NB]";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		model="vmnd_nvg\model\pvs31_2_tarsier_up_NB.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"battpack"
		};
		hiddenSelectionsTextures[]=
		{
			"\vmnd_nvg\data\l4g24\l4g24_CO.paa",
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
			uniformModel="vmnd_nvg\model\pvs31_tarsier_down_NB.p3d";
			modelOff="vmnd_nvg\model\pvs31_2_tarsier_up_NB.p3d";
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
		author="Vielmond";
		displayName="[ASEC] PSQ-36 Dovetail [NB]";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		model="vmnd_nvg\model\psq_dov_up_NB.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"battpack"
		};
		hiddenSelectionsTextures[]=
		{
			"\vmnd_nvg\data\l4g24\l4g24_CO.paa",
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
			uniformModel="vmnd_nvg\model\psq_dov_down_NB.p3d";
			modelOff="vmnd_nvg\model\psq_dov_up_NB.p3d";
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
		author="Vielmond";
		displayName="[ASEC] PSQ-36 Dovetail [Tarsier] [NB]";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		model="vmnd_nvg\model\psq_tarsier_up_NB.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"battpack"
		};
		hiddenSelectionsTextures[]=
		{
			"\vmnd_nvg\data\l4g24\l4g24_CO.paa",
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
			uniformModel="vmnd_nvg\model\psq_tarsier_down_NB.p3d";
			modelOff="vmnd_nvg\model\psq_tarsier_up_NB.p3d";
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
		author="Vielmond";
		displayName="[ASEC] PSQ-36 GSGM [NB]";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		model="vmnd_nvg\model\psq_gsgm_up_NB.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"battpack"
		};
		hiddenSelectionsTextures[]=
		{
			"\vmnd_nvg\data\l4g24\l4g24_CO.paa",
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
			uniformModel="vmnd_nvg\model\psq_gsgm_down_NB.p3d";
			modelOff="vmnd_nvg\model\psq_gsgm_up_NB.p3d";
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

