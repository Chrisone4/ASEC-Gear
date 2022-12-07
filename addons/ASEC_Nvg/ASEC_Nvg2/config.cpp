class CfgPatches
{
	class tfl_nvg
	{
		magazines[]={};
		ammo[]={};
		units[]={};
		weapons[]=
		{
			"Louetta_PVS31A_1"
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
class CfgWeapons
{
	class ItemCore;
	class UniformItem;
	class Uniform_Base;
	class VestItem;
	class NVGoggles;
	class InventoryItem_Base_F;
	class HeadgearItem: InventoryItem_Base_F
	{
		class ItemInfo;
		class HeadgearItem;
	};
	class Louetta_PVS31A_1: NVGoggles
	{
		author="Louetta x Zahra";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[ASEC] AN/PVS-31 Up";
		model="tfl_nvg\31_up.p3d";
		picture="\tfl_nvg\ui\31.paa";
		ace_nightvision_generation=3;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\tfl_nvg\optics\pvs_Optic";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"tfl_nvg\data\l4g24_co.paa"
		};
		descriptionShort="Green Phosphor";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="tfl_nvg\31_down_g.p3d";
			modelOff="tfl_nvg\31_up.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"tfl_nvg\data\l4g24_co.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class Louetta_PVS31A_1_alt: NVGoggles
	{
		author="Louetta x Zahra";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[ASEC] AN/PVS-31 Up Alt";
		model="tfl_nvg\31_up.p3d";
		picture="\tfl_nvg\ui\31.paa";
		ace_nightvision_generation=3;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\tfl_nvg\optics\pvs_Optic";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"tfl_nvg\data\l4g24_blk_CO.paa"
		};
		descriptionShort="Green Phosphor";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="tfl_nvg\31_down_g.p3d";
			modelOff="tfl_nvg\31_up.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"tfl_nvg\data\l4g24_blk_CO.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class Louetta_PVS31A_2: NVGoggles
	{
		author="Louetta x Zahra";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[ASEC] AN/PVS-31A Up";
		model="tfl_nvg\31_up.p3d";
		picture="\tfl_nvg\ui\31.paa";
		ace_nightvision_generation=3;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\tfl_nvg\optics\pvs_Optic";
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
			"tfl_nvg\data\l4g24_co.paa"
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="tfl_nvg\31_down_w.p3d";
			modelOff="tfl_nvg\31_up.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"tfl_nvg\data\l4g24_co.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class Louetta_PVS31A_2_alt: NVGoggles
	{
		author="Louetta x Zahra";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[ASEC] AN/PVS-31A Up Alt";
		model="tfl_nvg\31_up.p3d";
		picture="\tfl_nvg\ui\31.paa";
		ace_nightvision_generation=3;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\tfl_nvg\optics\pvs_Optic";
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
			"tfl_nvg\data\l4g24_blk_co.paa"
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="tfl_nvg\31_down_w.p3d";
			modelOff="tfl_nvg\31_up.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"tfl_nvg\data\l4g24_blk_co.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class Louetta_PVS31A_3: NVGoggles
	{
		author="Louetta x Zahra";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[ASEC] AN/PVS-31 Wide";
		model="tfl_nvg\31_wide.p3d";
		picture="\tfl_nvg\ui\31.paa";
		ace_nightvision_generation=3;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\tfl_nvg\optics\pvs_Optic";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"tfl_nvg\data\l4g24_co.paa"
		};
		descriptionShort="Green Phosphor";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="tfl_nvg\31_down_g.p3d";
			modelOff="tfl_nvg\31_wide.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"tfl_nvg\data\l4g24_co.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class Louetta_PVS31A_3_alt: NVGoggles
	{
		author="Louetta x Zahra";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[ASEC] AN/PVS-31 Wide Alt";
		model="tfl_nvg\31_wide_a.p3d";
		picture="\tfl_nvg\ui\31.paa";
		ace_nightvision_generation=3;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\tfl_nvg\optics\pvs_Optic";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"tfl_nvg\data\l4g24_blk_co.paa"
		};
		descriptionShort="Green Phosphor";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="tfl_nvg\31_down_g.p3d";
			modelOff="tfl_nvg\31_wide_a.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"tfl_nvg\data\l4g24_blk_co.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class Louetta_PVS31A_4: NVGoggles
	{
		author="Louetta x Zahra";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[ASEC] AN/PVS-31A Wide";
		model="tfl_nvg\31_wide.p3d";
		picture="\tfl_nvg\ui\31.paa";
		ace_nightvision_generation=3;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\tfl_nvg\optics\pvs_Optic";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"tfl_nvg\data\l4g24_co.paa"
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
			uniformModel="tfl_nvg\31_down_w.p3d";
			modelOff="tfl_nvg\31_wide.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"tfl_nvg\data\l4g24_co.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class Louetta_PVS31A_4_alt: NVGoggles
	{
		author="Louetta x Zahra";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[ASEC] AN/PVS-31A Wide Alt";
		model="tfl_nvg\31_wide_a.p3d";
		picture="\tfl_nvg\ui\31.paa";
		ace_nightvision_generation=3;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\tfl_nvg\optics\pvs_Optic";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"tfl_nvg\data\l4g24_blk_co.paa"
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
			uniformModel="tfl_nvg\31_down_w.p3d";
			modelOff="tfl_nvg\31_wide_a.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"tfl_nvg\data\l4g24_blk_co.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class Louetta_PVS31A_5: NVGoggles
	{
		author="Louetta x Zahra";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[ASEC] AN/PVS-31 Wide Up";
		model="tfl_nvg\31.p3d";
		picture="\tfl_nvg\ui\31.paa";
		ace_nightvision_generation=3;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\tfl_nvg\optics\pvs_Optic";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"tfl_nvg\data\l4g24_co.paa"
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
			uniformModel="tfl_nvg\31_down_g.p3d";
			modelOff="tfl_nvg\31.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"tfl_nvg\data\l4g24_co.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class Louetta_PVS31A_5_alt: NVGoggles
	{
		author="Louetta x Zahra";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[ASEC] AN/PVS-31 Wide Up Alt";
		model="tfl_nvg\31.p3d";
		picture="\tfl_nvg\ui\31.paa";
		ace_nightvision_generation=3;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\tfl_nvg\optics\pvs_Optic";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"tfl_nvg\data\l4g24_blk_co.paa"
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
			uniformModel="tfl_nvg\31_down_g.p3d";
			modelOff="tfl_nvg\31.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"tfl_nvg\data\l4g24_blk_co.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class Louetta_PVS31A_6: NVGoggles
	{
		author="Louetta x Zahra";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[ASEC] AN/PVS-31A Wide Up";
		model="tfl_nvg\31.p3d";
		picture="\tfl_nvg\ui\31.paa";
		ace_nightvision_generation=3;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\tfl_nvg\optics\pvs_Optic";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"tfl_nvg\data\l4g24_co.paa"
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
			uniformModel="tfl_nvg\31_down_w.p3d";
			modelOff="tfl_nvg\31.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"tfl_nvg\data\l4g24_co.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class Louetta_PVS31A_6_alt: NVGoggles
	{
		author="Louetta x Zahra";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[ASEC] AN/PVS-31A Wide Up Alt";
		model="tfl_nvg\31.p3d";
		picture="\tfl_nvg\ui\31.paa";
		ace_nightvision_generation=3;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\tfl_nvg\optics\pvs_Optic";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"tfl_nvg\data\l4g24_blk_co.paa"
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
			uniformModel="tfl_nvg\31_down_w.p3d";
			modelOff="tfl_nvg\31.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"tfl_nvg\data\l4g24_blk_co.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class Louetta_GPNVG_1: NVGoggles
	{
		author="Louetta x Zahra";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[ASEC] GPNVG-18 Green Phosphor";
		model="tfl_nvg\GPNVG18_up.p3d";
		picture="\tfl_nvg\ui\18.paa";
		ace_nightvision_generation=4;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\tfl_nvg\optics\gp_Optic";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"tfl_nvg\data\l4g24_co.paa"
		};
		descriptionShort="Green Phosphor";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="tfl_nvg\GPNVG18_down_g.p3d";
			modelOff="tfl_nvg\GPNVG18_up.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"tfl_nvg\data\l4g24_co.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class Louetta_GPNVG_1_alt: NVGoggles
	{
		author="Louetta x Zahra";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[ASEC] GPNVG-18 Alt Green Phosphor";
		model="tfl_nvg\GPNVG18_up.p3d";
		picture="\tfl_nvg\ui\18.paa";
		ace_nightvision_generation=4;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\tfl_nvg\optics\gp_Optic";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"tfl_nvg\data\l4g24_blk_co.paa"
		};
		descriptionShort="Green Phosphor";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="tfl_nvg\GPNVG18_down_g.p3d";
			modelOff="tfl_nvg\GPNVG18_up.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"tfl_nvg\data\l4g24_blk_co.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class Louetta_GPNVG_2: NVGoggles
	{
		author="Louetta x Zahra";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[ASEC] GPNVG-18 White Phosphor";
		model="tfl_nvg\GPNVG18_up.p3d";
		picture="\tfl_nvg\ui\18.paa";
		ace_nightvision_generation=4;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\tfl_nvg\optics\gp_Optic";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"tfl_nvg\data\l4g24_co.paa"
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
			uniformModel="tfl_nvg\GPNVG18_down_w.p3d";
			modelOff="tfl_nvg\GPNVG18_up.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"tfl_nvg\data\l4g24_co.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class Louetta_GPNVG_2_alt: NVGoggles
	{
		author="Louetta x Zahra";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[ASEC] GPNVG-18 Alt White Phosphor";
		model="tfl_nvg\GPNVG18_up.p3d";
		picture="\tfl_nvg\ui\18.paa";
		ace_nightvision_generation=4;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\tfl_nvg\optics\gp_Optic";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"tfl_nvg\data\l4g24_blk_co.paa"
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
			uniformModel="tfl_nvg\GPNVG18_down_w.p3d";
			modelOff="tfl_nvg\GPNVG18_up.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"tfl_nvg\data\l4g24_blk_co.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class Louetta_GPNVG_1_blk: NVGoggles
	{
		author="Louetta x Zahra";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[ASEC] GPNVG-18 Blk Green Phosphor";
		model="tfl_nvg\GPNVG18_up.p3d";
		picture="\tfl_nvg\ui\18.paa";
		ace_nightvision_generation=4;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\tfl_nvg\optics\gp_Optic";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"mount2"
		};
		hiddenSelectionsTextures[]=
		{
			"tfl_nvg\data\l4g24_co.paa",
			"tfl_nvg\data\gpnvg18_blk_co.paa",
			"tfl_nvg\data\gpnvgmount_blk_co.paa"
		};
		descriptionShort="Green Phosphor";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="tfl_nvg\GPNVG18_down_g.p3d";
			modelOff="tfl_nvg\GPNVG18_up.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"mount2"
			};
			hiddenSelectionsTextures[]=
			{
				"tfl_nvg\data\l4g24_co.paa",
				"tfl_nvg\data\gpnvg18_blk_co.paa",
				"tfl_nvg\data\gpnvgmount_blk_co.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class Louetta_GPNVG_1_blk_alt: NVGoggles
	{
		author="Louetta x Zahra";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[ASEC] GPNVG-18 Blk Alt Green Phosphor";
		model="tfl_nvg\GPNVG18_up.p3d";
		picture="\tfl_nvg\ui\18.paa";
		ace_nightvision_generation=4;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\tfl_nvg\optics\gp_Optic";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"mount2"
		};
		hiddenSelectionsTextures[]=
		{
			"tfl_nvg\data\l4g24_co.paa",
			"tfl_nvg\data\gpnvg18_blk_co.paa",
			"tfl_nvg\data\gpnvgmount_blk_co.paa"
		};
		descriptionShort="Green Phosphor";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="tfl_nvg\GPNVG18_down_g.p3d";
			modelOff="tfl_nvg\GPNVG18_up.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"mount2"
			};
			hiddenSelectionsTextures[]=
			{
				"tfl_nvg\data\l4g24_co.paa",
				"tfl_nvg\data\gpnvg18_blk_co.paa",
				"tfl_nvg\data\gpnvgmount_blk_co.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class Louetta_GPNVG_2_blk: NVGoggles
	{
		author="Louetta x Zahra";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[ASEC] GPNVG-18 Blk White Phosphor";
		model="tfl_nvg\GPNVG18_up.p3d";
		picture="\tfl_nvg\ui\18.paa";
		ace_nightvision_generation=4;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\tfl_nvg\optics\gp_Optic";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"mount2"
		};
		hiddenSelectionsTextures[]=
		{
			"tfl_nvg\data\l4g24_co.paa",
			"tfl_nvg\data\gpnvg18_blk_co.paa",
			"tfl_nvg\data\gpnvgmount_blk_co.paa"
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
			uniformModel="tfl_nvg\GPNVG18_down_w.p3d";
			modelOff="tfl_nvg\GPNVG18_up.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"mount2"
			};
			hiddenSelectionsTextures[]=
			{
				"tfl_nvg\data\l4g24_co.paa",
				"tfl_nvg\data\gpnvg18_blk_co.paa",
				"tfl_nvg\data\gpnvgmount_blk_co.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class Louetta_GPNVG_2_blk_alt: NVGoggles
	{
		author="Louetta x Zahra";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[ASEC] GPNVG-18 Blk Alt White Phosphor";
		model="tfl_nvg\GPNVG18_up.p3d";
		picture="\tfl_nvg\ui\18.paa";
		ace_nightvision_generation=4;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\tfl_nvg\optics\gp_Optic";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"mount2"
		};
		hiddenSelectionsTextures[]=
		{
			"tfl_nvg\data\l4g24_co.paa",
			"tfl_nvg\data\gpnvg18_blk_co.paa",
			"tfl_nvg\data\gpnvgmount_blk_co.paa"
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
			uniformModel="tfl_nvg\GPNVG18_down_w.p3d";
			modelOff="tfl_nvg\GPNVG18_up.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"mount2"
			};
			hiddenSelectionsTextures[]=
			{
				"tfl_nvg\data\l4g24_co.paa",
				"tfl_nvg\data\gpnvg18_blk_co.paa",
				"tfl_nvg\data\gpnvgmount_blk_co.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class Louetta_G24_1: NVGoggles
	{
		author="Louetta x Zahra";
		displayName="[ASEC] L4 G24 Black";
		model="tfl_nvg\g24.p3d";
		picture="\tfl_nvg\ui\g24.paa";
		modelOptics="-";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"tfl_nvg\data\l4g24_blk_co.paa"
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="tfl_nvg\g24.p3d";
			modelOff="tfl_nvg\g24.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"tfl_nvg\data\l4g24_blk_co.paa"
			};
			mass=1;
		};
	};
	class Louetta_G24_2: NVGoggles
	{
		author="Louetta x Zahra";
		displayName="[ASEC] L4 G24 Grey";
		model="tfl_nvg\g24.p3d";
		picture="\tfl_nvg\ui\g24.paa";
		modelOptics="-";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"tfl_nvg\data\l4g24_co.paa"
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="tfl_nvg\g24.p3d";
			modelOff="tfl_nvg\g24.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"tfl_nvg\data\l4g24_co.paa"
			};
			mass=1;
		};
	};
	class Louetta_G24_3: NVGoggles
	{
		author="Louetta x Zahra";
		displayName="[ASEC] L4 G24 Gold";
		model="tfl_nvg\g24.p3d";
		picture="\tfl_nvg\ui\g24.paa";
		modelOptics="-";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"tfl_nvg\data\l4g24_gold_co.paa"
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="tfl_nvg\g24.p3d";
			modelOff="tfl_nvg\g24.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"tfl_nvg\data\l4g24_gold_co.paa"
			};
			mass=1;
		};
	};
	class Louetta_GSGM: NVGoggles
	{
		author="Louetta x Zahra";
		displayName="[ASEC] GSGM";
		model="tfl_nvg\gsgm.p3d";
		picture="\tfl_nvg\ui\gsgm.paa";
		modelOptics="-";
		nameSound="nvgoggles";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="tfl_nvg\gsgm.p3d";
			modelOff="tfl_nvg\gsgm.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			mass=1;
		};
	};
	class Louetta_GSGM_GPNVG_tan: NVGoggles
	{
		author="Louetta x Zahra";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[ASEC] GSGM GPNVG-18 White Phosphor";
		model="tfl_nvg\GSGM_GPNVG18_up.p3d";
		picture="\tfl_nvg\ui\18.paa";
		ace_nightvision_generation=4;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\tfl_nvg\optics\gp_Optic";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tfl_nvg\data\gpnvg18_tan_co.paa"
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
			uniformModel="tfl_nvg\GSGM_GPNVG18_down_w.p3d";
			modelOff="tfl_nvg\GSGM_GPNVG18_up.p3d";
			hiddenSelections[]=
			{
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"tfl_nvg\data\gpnvg18_tan_co.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class Louetta_GSGM_GPNVG_blk: NVGoggles
	{
		author="Louetta x Zahra";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[ASEC] GSGM Blk GPNVG-18 White Phosphor";
		model="tfl_nvg\GSGM_GPNVG18_up.p3d";
		picture="\tfl_nvg\ui\18.paa";
		ace_nightvision_generation=4;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\tfl_nvg\optics\gp_Optic";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tfl_nvg\data\gpnvg18_blk_co.paa"
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
			uniformModel="tfl_nvg\GSGM_GPNVG18_down_w.p3d";
			modelOff="tfl_nvg\GSGM_GPNVG18_up.p3d";
			hiddenSelections[]=
			{
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"tfl_nvg\data\gpnvg18_blk_co.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
};

