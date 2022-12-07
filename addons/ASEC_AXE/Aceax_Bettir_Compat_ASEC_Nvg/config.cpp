class CfgPatches
{
	class aceax_bettir_compat_ASEC_nvg
	{
		name="compat_ASEC_nvg";
		units[]={};
		weapons[]={};
		requiredVersion=1.88;
		requiredAddons[]=
		{
			"ASEC_nvg",
		};
		author="Jup, Lip, Thunder";
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
		class ASEC_pvs_31
		{
			label="[ASEC] PVS-31";
			author="Jup, Lip, Thunder";
			options[]=
			{
				"mount",
				"posit",
				"phos"
			};
			class posit
			{
				label="NVG Position (ACE)";
				values[]=
				{
					"comp",
					"low",
					"up",
					"off"
				};
				changeingame=1;
				icon="aceax_bettir_compat_ASEC_nvg\data\pvs31compact.paa";
				class comp
				{
					label="Compact";
					description="Compact PVS-31";
					icon="aceax_bettir_compat_ASEC_nvg\data\pvs31compact.paa";
					actionlabel="Compact PVS-31";
				};
				class low
				{
					label="Low";
					description="Low PVS-31";
					icon="aceax_bettir_compat_ASEC_nvg\data\pvs31widelow.paa";
					actionlabel="Low PVS-31";
				};
				class up
				{
					label="Up";
					description="Up PVS-31";
					icon="aceax_bettir_compat_ASEC_nvg\data\pvs31wideup.paa";
					actionlabel="Up PVS-31";
				};
				class off
				{
					label="Off";
					description="Dismounted PVS-31";
					icon="aceax_bettir_compat_ASEC_nvg\data\wilcoxG24.paa";
					actionlabel="Dismount PVS-31";
				};
			};
			class phos
			{
				label="Tubes";
				values[]=
				{
					"green",
					"white"
				};
				class green
				{
					label="Green";
					image="#(rgb,8,8,3)color(0,0.8,0,1)";
				};
				class white
				{
					label="White";
					image="#(rgb,8,8,3)color(0,1,1,1)";
				};
			};
			class mount
			{
				label="G24";
				values[]=
				{
					"grey",
					"black",
					"gold"
				};
				class grey
				{
					label="Grey";
					image="#(rgb,8,8,3)color(0.5,0.5,0.5,1)";
				};
				class black
				{
					label="Black";
					image="#(rgb,8,8,3)color(0.2,0.2,0.2,1)";
				};
				class gold
				{
					label="Gold";
					image="#(rgb,8,8,3)color(0.8,0.7,0.2,1)";
				};
			};
		};
		class ASEC_gpnvg
		{
			label="[ASEC] GPNVG";
			author="Jup, Lip, Thunder";
			options[]=
			{
				"mount",
				"nvg",
				"gpnvg",
				"phos"
			};
			class mount
			{
				label="Mount";
				values[]=
				{
					"gsgm",
					"grey",
					"black",
					"gold"
				};
				class gsgm
				{
					label="GSGM";
					image="#(rgb,8,8,3)color(0.8,0.6,0.2,1)";
				};
				class grey
				{
					label="G24 Grey";
					image="#(rgb,8,8,3)color(0.5,0.5,0.5,1)";
				};
				class black
				{
					label="G24 Black";
					image="#(rgb,8,8,3)color(0.2,0.2,0.2,1)";
				};
				class gold
				{
					label="G24 Gold";
					image="#(rgb,8,8,3)color(0.8,0.7,0.2,1)";
				};
			};
			class nvg
			{
				label="NVG (ACE)";
				values[]=
				{
					"off_gsgm",
					"off_g24",
					"on"
				};
				changeingame=1;
				icon="aceax_bettir_compat_ASEC_nvg\data\gpnvg.paa";
				class on
				{
					label="On";
					description="Mount GPNVG";
					icon="aceax_bettir_compat_ASEC_nvg\data\gpnvg.paa";
					actionlabel="Mount GPNVG";
				};
				class off_gsgm
				{
					label="Off (GSGM)";
					description="Dismounted GPNVG";
					icon="aceax_bettir_compat_ASEC_nvg\data\wilcoxGSGM.paa";
					actionlabel="Dismount GPNVG";
				};
				class off_g24
				{
					label="Off (G24)";
					description="Dismounted GPNVG";
					icon="aceax_bettir_compat_ASEC_nvg\data\wilcoxG24.paa";
					actionlabel="Dismount GPNVG";
				};
			};
			class gpnvg
			{
				label="GPNVG";
				values[]=
				{
					"blk",
					"tan"
				};
				class blk
				{
					label="Black";
					image="#(rgb,8,8,3)color(0.2,0.2,0.2,1)";
				};
				class tan
				{
					label="Tan";
					image="#(rgb,8,8,3)color(0.49,0.43,0.33,1)";
				};
			};
			class phos
			{
				label="Tubes";
				values[]=
				{
					"green",
					"white"
				};
				class green
				{
					label="Green";
					image="#(rgb,8,8,3)color(0,0.8,0,1)";
				};
				class white
				{
					label="White";
					image="#(rgb,8,8,3)color(0,1,1,1)";
				};
			};
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
		class XtdGearInfo
		{
			model="ASEC_pvs_31";
			mount="grey";
			posit="comp";
			phos="green";
		};
	};
	class Louetta_PVS31A_1_alt: NVGoggles
	{
		class XtdGearInfo
		{
			model="ASEC_pvs_31";
			mount="black";
			posit="comp";
			phos="green";
		};
	};
	class Louetta_PVS31A_2: NVGoggles
	{
		class XtdGearInfo
		{
			model="ASEC_pvs_31";
			mount="grey";
			posit="comp";
			phos="white";
		};
	};
	class Louetta_PVS31A_2_alt: NVGoggles
	{
		class XtdGearInfo
		{
			model="ASEC_pvs_31";
			mount="black";
			posit="comp";
			phos="white";
		};
	};
	class Louetta_PVS31A_3: NVGoggles
	{
		class XtdGearInfo
		{
			model="ASEC_pvs_31";
			mount="grey";
			posit="low";
			phos="green";
		};
	};
	class Louetta_PVS31A_3_alt: NVGoggles
	{
		class XtdGearInfo
		{
			model="ASEC_pvs_31";
			mount="black";
			posit="low";
			phos="green";
		};
	};
	class Louetta_PVS31A_4: NVGoggles
	{
		class XtdGearInfo
		{
			model="ASEC_pvs_31";
			mount="grey";
			posit="low";
			phos="white";
		};
	};
	class Louetta_PVS31A_4_alt: NVGoggles
	{
		class XtdGearInfo
		{
			model="ASEC_pvs_31";
			mount="black";
			posit="low";
			phos="white";
		};
	};
	class Louetta_PVS31A_5: NVGoggles
	{
		class XtdGearInfo
		{
			model="ASEC_pvs_31";
			mount="grey";
			posit="up";
			phos="green";
		};
	};
	class Louetta_PVS31A_5_alt: NVGoggles
	{
		class XtdGearInfo
		{
			model="ASEC_pvs_31";
			mount="black";
			posit="up";
			phos="green";
		};
	};
	class Louetta_PVS31A_6: NVGoggles
	{
		class XtdGearInfo
		{
			model="ASEC_pvs_31";
			mount="grey";
			posit="up";
			phos="white";
		};
	};
	class Louetta_PVS31A_6_alt: NVGoggles
	{
		class XtdGearInfo
		{
			model="ASEC_pvs_31";
			mount="black";
			posit="up";
			phos="white";
		};
	};
	class Louetta_PVS31A_1_gold: Louetta_PVS31A_1
	{
		displayname="[ASEC] AN/PVS-31 Up Gold";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_nvg\data\l4g24\l4g24_gold_CO.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_pvs_31";
			mount="gold";
			posit="comp";
			phos="green";
		};
	};
	class Louetta_PVS31A_2_gold: Louetta_PVS31A_2
	{
		displayname="[ASEC] AN/PVS-31 Up Gold";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_nvg\data\l4g24\l4g24_gold_CO.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_pvs_31";
			mount="gold";
			posit="comp";
			phos="white";
		};
	};
	class Louetta_PVS31A_3_gold: NVGoggles
	{
		displayname="[ASEC] AN/PVS-31 Wide Gold";
		author="Louetta x Zahra";
		scope=2;
		scopeArsenal=2;
		eden=2;
		model="ASEC_nvg\31_wide_a.p3d";
		picture="\ASEC_nvg\ui\31.paa";
		ace_nightvision_generation=3;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\ASEC_nvg\optics\pvs_Optic";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_nvg\data\l4g24_gold_co.paa"
		};
		descriptionShort="Green Phosphor";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="ASEC_nvg\31_down_g.p3d";
			modelOff="aceax_bettir_compat_ASEC_nvg\data\31_wide_g.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"ASEC_nvg\data\l4g24_gold_co.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
		class XtdGearInfo
		{
			model="ASEC_pvs_31";
			mount="gold";
			posit="low";
			phos="green";
		};
	};
	class Louetta_PVS31A_4_gold: NVGoggles
	{
		displayname="[ASEC] AN/PVS-31 Wide Gold";
		author="Louetta x Zahra";
		scope=2;
		scopeArsenal=2;
		eden=2;
		model="ASEC_nvg\31_wide_a.p3d";
		picture="\ASEC_nvg\ui\31.paa";
		ace_nightvision_generation=3;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\ASEC_nvg\optics\pvs_Optic";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_nvg\data\l4g24_gold_co.paa"
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
			uniformModel="ASEC_nvg\31_down_w.p3d";
			modelOff="aceax_bettir_compat_ASEC_nvg\data\31_wide_g.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"ASEC_nvg\data\l4g24_gold_co.paa"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
		class XtdGearInfo
		{
			model="ASEC_pvs_31";
			mount="gold";
			posit="low";
			phos="white";
		};
	};
	class Louetta_PVS31A_5_gold: Louetta_PVS31A_5
	{
		displayname="[ASEC] AN/PVS-31 Wide Up Gold";
		class XtdGearInfo
		{
			model="ASEC_pvs_31";
			mount="gold";
			posit="up";
			phos="green";
		};
	};
	class Louetta_PVS31A_6_gold: Louetta_PVS31A_6
	{
		displayname="[ASEC] AN/PVS-31 Wide Up Gold";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_nvg\data\l4g24_gold_CO.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_pvs_31";
			mount="gold";
			posit="up";
			phos="white";
		};
	};
	class Louetta_GPNVG_1: NVGoggles
	{
		class XtdGearInfo
		{
			model="ASEC_gpnvg";
			mount="grey";
			nvg="on";
			gpnvg="tan";
			phos="green";
		};
	};
	class Louetta_GPNVG_1_alt: NVGoggles
	{
		class XtdGearInfo
		{
			model="ASEC_gpnvg";
			mount="black";
			nvg="on";
			gpnvg="tan";
			phos="green";
		};
	};
	class Louetta_GPNVG_2: NVGoggles
	{
		class XtdGearInfo
		{
			model="ASEC_gpnvg";
			mount="grey";
			nvg="on";
			gpnvg="tan";
			phos="white";
		};
	};
	class Louetta_GPNVG_2_alt: NVGoggles
	{
		class XtdGearInfo
		{
			model="ASEC_gpnvg";
			mount="black";
			nvg="on";
			gpnvg="tan";
			phos="white";
		};
	};
	class Louetta_GPNVG_1_blk: NVGoggles
	{
		class XtdGearInfo
		{
			model="ASEC_gpnvg";
			mount="grey";
			nvg="on";
			gpnvg="blk";
			phos="green";
		};
	};
	class Louetta_GPNVG_1_blk_alt: NVGoggles
	{
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"mount2"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_nvg\data\l4g24_blk_co.paa",
			"ASEC_nvg\data\gpnvg18_blk_co.paa",
			"ASEC_nvg\data\gpnvgmount_blk_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_gpnvg";
			mount="black";
			nvg="on";
			gpnvg="blk";
			phos="green";
		};
	};
	class Louetta_GPNVG_2_blk: NVGoggles
	{
		class XtdGearInfo
		{
			model="ASEC_gpnvg";
			mount="grey";
			nvg="on";
			gpnvg="blk";
			phos="white";
		};
	};
	class Louetta_GPNVG_2_blk_alt: NVGoggles
	{
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"mount2"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_nvg\data\l4g24_blk_co.paa",
			"ASEC_nvg\data\gpnvg18_blk_co.paa",
			"ASEC_nvg\data\gpnvgmount_blk_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_gpnvg";
			mount="black";
			nvg="on";
			gpnvg="blk";
			phos="white";
		};
	};
	class Louetta_GPNVG_1_gold: Louetta_GPNVG_1
	{
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_nvg\data\l4g24_gold_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_gpnvg";
			mount="gold";
			nvg="on";
			gpnvg="tan";
			phos="green";
		};
	};
	class Louetta_GPNVG_2_gold: Louetta_GPNVG_2
	{
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_nvg\data\l4g24_gold_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_gpnvg";
			mount="gold";
			nvg="on";
			gpnvg="tan";
			phos="white";
		};
	};
	class Louetta_GPNVG_1_blk_gold: Louetta_GPNVG_1_blk
	{
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"mount2"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_nvg\data\l4g24_gold_co.paa",
			"ASEC_nvg\data\gpnvg18_blk_co.paa",
			"ASEC_nvg\data\gpnvgmount_blk_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_gpnvg";
			mount="gold";
			nvg="on";
			gpnvg="blk";
			phos="green";
		};
	};
	class Louetta_GPNVG_2_blk_gold: Louetta_GPNVG_2_blk
	{
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"mount2"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_nvg\data\l4g24_gold_co.paa",
			"ASEC_nvg\data\gpnvg18_blk_co.paa",
			"ASEC_nvg\data\gpnvgmount_blk_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_gpnvg";
			mount="gold";
			nvg="on";
			gpnvg="blk";
			phos="white";
		};
	};
	class Louetta_G24_1: NVGoggles
	{
		visionMode[]=
		{
			"Normal"
		};
		class XtdGearInfo
		{
			model="ASEC_pvs_31";
			mount="black";
			phos="green";
			posit="off";
		};
	};
	class Louetta_G24_1w: Louetta_G24_1
	{
		class XtdGearInfo
		{
			model="ASEC_pvs_31";
			mount="black";
			phos="white";
			posit="off";
		};
	};
	class Louetta_G24_1w_btg: Louetta_G24_1w
	{
		class XtdGearInfo
		{
			model="ASEC_gpnvg";
			mount="black";
			nvg="off_g24";
			gpnvg="tan";
			phos="green";
		};
	};
	class Louetta_G24_1w_btw: Louetta_G24_1w
	{
		class XtdGearInfo
		{
			model="ASEC_gpnvg";
			mount="black";
			nvg="off_g24";
			gpnvg="tan";
			phos="white";
		};
	};
	class Louetta_G24_1w_bbg: Louetta_G24_1w
	{
		class XtdGearInfo
		{
			model="ASEC_gpnvg";
			mount="black";
			nvg="off_g24";
			gpnvg="blk";
			phos="green";
		};
	};
	class Louetta_G24_1w_bbw: Louetta_G24_1w
	{
		class XtdGearInfo
		{
			model="ASEC_gpnvg";
			mount="black";
			nvg="off_g24";
			gpnvg="blk";
			phos="white";
		};
	};
	class Louetta_G24_2: NVGoggles
	{
		visionMode[]=
		{
			"Normal"
		};
		class XtdGearInfo
		{
			model="ASEC_pvs_31";
			mount="grey";
			phos="green";
			posit="off";
		};
	};
	class Louetta_G24_2w: Louetta_G24_2
	{
		class XtdGearInfo
		{
			model="ASEC_pvs_31";
			mount="grey";
			phos="white";
			posit="off";
		};
	};
	class Louetta_G24_2w_gtg: Louetta_G24_2w
	{
		class XtdGearInfo
		{
			model="ASEC_gpnvg";
			mount="grey";
			nvg="off_g24";
			gpnvg="tan";
			phos="green";
		};
	};
	class Louetta_G24_2w_gtw: Louetta_G24_2w
	{
		class XtdGearInfo
		{
			model="ASEC_gpnvg";
			mount="grey";
			nvg="off_g24";
			gpnvg="tan";
			phos="white";
		};
	};
	class Louetta_G24_2w_gbg: Louetta_G24_2w
	{
		class XtdGearInfo
		{
			model="ASEC_gpnvg";
			mount="grey";
			nvg="off_g24";
			gpnvg="blk";
			phos="green";
		};
	};
	class Louetta_G24_2w_gbw: Louetta_G24_2w
	{
		class XtdGearInfo
		{
			model="ASEC_gpnvg";
			mount="grey";
			nvg="off_g24";
			gpnvg="blk";
			phos="white";
		};
	};
	class Louetta_G24_3: NVGoggles
	{
		visionMode[]=
		{
			"Normal"
		};
		class XtdGearInfo
		{
			model="ASEC_pvs_31";
			mount="gold";
			phos="green";
			posit="off";
		};
	};
	class Louetta_G24_2w_goldtg: Louetta_G24_2w
	{
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"mount2"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_nvg\data\l4g24_gold_co.paa",
			"ASEC_nvg\data\GPNVG18_Tan_co.paa",
			"ASEC_nvg\data\gpnvgmount_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_gpnvg";
			mount="gold";
			nvg="off_g24";
			gpnvg="tan";
			phos="green";
		};
	};
	class Louetta_G24_2w_goldtw: Louetta_G24_2w
	{
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"mount2"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_nvg\data\l4g24_gold_co.paa",
			"ASEC_nvg\data\GPNVG18_Tan_co.paa",
			"ASEC_nvg\data\gpnvgmount_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_gpnvg";
			mount="gold";
			nvg="off_g24";
			gpnvg="tan";
			phos="white";
		};
	};
	class Louetta_G24_2w_goldbg: Louetta_G24_2w
	{
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"mount2"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_nvg\data\l4g24_gold_co.paa",
			"ASEC_nvg\data\gpnvg18_blk_co.paa",
			"ASEC_nvg\data\gpnvgmount_blk_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_gpnvg";
			mount="gold";
			nvg="off_g24";
			gpnvg="blk";
			phos="green";
		};
	};
	class Louetta_G24_2w_goldbw: Louetta_G24_2w
	{
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"mount2"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_nvg\data\l4g24_gold_co.paa",
			"ASEC_nvg\data\gpnvg18_blk_co.paa",
			"ASEC_nvg\data\gpnvgmount_blk_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_gpnvg";
			mount="gold";
			nvg="off_g24";
			gpnvg="blk";
			phos="white";
		};
	};
	class Louetta_G24_3w: Louetta_G24_3
	{
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"mount2"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_nvg\data\l4g24_gold_co.paa",
			"ASEC_nvg\data\gpnvg18_blk_co.paa",
			"ASEC_nvg\data\gpnvgmount_blk_co.paa"
		};
		class XtdGearInfo
		{
			model="ASEC_pvs_31";
			mount="gold";
			phos="white";
			posit="off";
		};
	};
	class Louetta_GSGM: NVGoggles
	{
		visionMode[]=
		{
			"Normal"
		};
		class XtdGearInfo
		{
			model="ASEC_gpnvg";
			mount="gsgm";
			nvg="off_gsgm";
			gpnvg="tan";
			phos="white";
		};
	};
	class Louetta_GSGM_b: Louetta_GSGM
	{
		class XtdGearInfo
		{
			model="ASEC_gpnvg";
			mount="gsgm";
			nvg="off_gsgm";
			gpnvg="blk";
			phos="white";
		};
	};
	class Louetta_GSGM_GPNVG_tan: NVGoggles
	{
		class XtdGearInfo
		{
			model="ASEC_gpnvg";
			mount="gsgm";
			nvg="on";
			gpnvg="tan";
			phos="white";
		};
	};
	class Louetta_GSGM_GPNVG_blk: NVGoggles
	{
		class XtdGearInfo
		{
			model="ASEC_gpnvg";
			mount="gsgm";
			nvg="on";
			gpnvg="blk";
			phos="white";
		};
	};
};
class BettIR_Config
{
	class CompatibleNightvisionGoggles
	{
		class __base_NVG;
		class Louetta_PVS31A_1: __base_NVG
		{
		};
		class Louetta_PVS31A_1_alt: __base_NVG
		{
		};
		class Louetta_PVS31A_2: __base_NVG
		{
		};
		class Louetta_PVS31A_2_alt: __base_NVG
		{
		};
		class Louetta_PVS31A_3: __base_NVG
		{
		};
		class Louetta_PVS31A_3_alt: __base_NVG
		{
		};
		class Louetta_PVS31A_4: __base_NVG
		{
		};
		class Louetta_PVS31A_4_alt: __base_NVG
		{
		};
		class Louetta_PVS31A_5: __base_NVG
		{
		};
		class Louetta_PVS31A_5_alt: __base_NVG
		{
		};
		class Louetta_PVS31A_6: __base_NVG
		{
		};
		class Louetta_PVS31A_6_alt: __base_NVG
		{
		};
		class Louetta_GPNVG_1: __base_NVG
		{
		};
		class Louetta_GPNVG_1_alt: __base_NVG
		{
		};
		class Louetta_GPNVG_2: __base_NVG
		{
		};
		class Louetta_GPNVG_2_alt: __base_NVG
		{
		};
		class Louetta_GPNVG_1_blk: __base_NVG
		{
		};
		class Louetta_GPNVG_1_blk_alt: __base_NVG
		{
		};
		class Louetta_GPNVG_2_blk: __base_NVG
		{
		};
		class Louetta_GPNVG_2_blk_alt: __base_NVG
		{
		};
		class Louetta_GSGM_GPNVG_tan: __base_NVG
		{
		};
		class Louetta_GSGM_GPNVG_blk: __base_NVG
		{
		};
		class Louetta_PVS31A_1_gold: __base_NVG
		{
		};
		class Louetta_PVS31A_2_gold: __base_NVG
		{
		};
		class Louetta_PVS31A_3_gold: __base_NVG
		{
		};
		class Louetta_PVS31A_4_gold: __base_NVG
		{
		};
		class Louetta_PVS31A_5_gold: __base_NVG
		{
		};
		class Louetta_PVS31A_6_gold: __base_NVG
		{
		};
		class Louetta_GPNVG_1_gold: __base_NVG
		{
		};
		class Louetta_GPNVG_2_gold: __base_NVG
		{
		};
		class Louetta_GPNVG_1_blk_gold: __base_NVG
		{
		};
		class Louetta_GPNVG_2_blk_gold: __base_NVG
		{
		};
	};
};
class cfgMods
{
	author="Jup, Lip, Thunder";
	timepacked="1631821719";
};
