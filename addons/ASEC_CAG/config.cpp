class CfgPatches
{
	class ASEC_CAG
	{
		magazines[]={};
		ammo[]={};
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_data_F",
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
	class InventoryItem_Base_F;
	class VestItem;
	class HeadgearItem;
	class H_Beret_Gen_F;
	class UniformItem;
	class Uniform_Base;
	class H_HelmetB;
	class ASEC_avs1: ItemCore
	{
		scope=2;
		displayName=" [ASEC] Lip's AVS  ";
		author="Jup, Lip, Thunder";
		picture="";
		logo="";
		model="ASEC_addedvest\Crye_SwimAVS_MC_GrenadierA.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="ASEC_addedvest\Crye_SwimAVS_MC_GrenadierA.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			containerClass="Supply400";
			mass=20;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
		class XtdGearInfo
		{
			model="ASEC_Vest";
			vest="yes";
			belt="yes";
		};
	};
	class ASEC_avs2: ItemCore
	{
		scope=2;
		displayName=" [ASEC] Lip's AVS [NV]  ";
		author="Jup, Lip, Thunder";
		picture="";
		logo="";
		model="ASEC_addedvest\worm_battlebeltGL.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="ASEC_addedvest\worm_battlebeltGL.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			containerClass="Supply200";
			mass=80;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=4;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=4;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=4;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
		class XtdGearInfo
		{
			model="ASEC_Vest";
			vest="no";
			belt="yes";
		};
	};
	class ASEC_avs3: ItemCore
	{
		scope=2;
		displayName=" [ASEC] Lip's AVS [NB/V] ";
		author="Jup, Lip, Thunder";
		picture="";
		logo="";
		model="\ASEC_CAG\ASEC_vest3.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="\ASEC_CAG\ASEC_vest3.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			containerClass="Supply200";
			mass=80;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=4;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=4;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=4;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
		class XtdGearInfo
		{
			model="ASEC_Vest";
			vest="no";
			belt="no";
		};
	};
	class ASEC_Helmet1: ItemCore
	{
		author="Jup, Lip, Thunder";
		scope=0;
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.15000001;
		displayName="[CAG] Lip's Opscore";
		model="\ASEC_CAG\ASEC_Helmet_1.p3d";
		Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left_ARC";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: HeadgearItem
		{
			mass=20;
			uniformModel="\ASEC_CAG\ASEC_Helmet_1.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.15000001;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				""
			};
		};
		class XtdGearInfo
		{
			model="ASEC_CAG_Helmet";
			strap="fastened";
			Stow="No";
			Headset="On";
		};
	};
	class ASEC_Helmet2: ItemCore
	{
		author="Jup, Lip, Thunder";
		scope=0;
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.15000001;
		displayName="[CAG] Lip's Opscore (UN)";
		model="\ASEC_CAG\ASEC_Helmet_2.p3d";
		Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left_ARC";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: HeadgearItem
		{
			mass=20;
			uniformModel="\ASEC_CAG\ASEC_Helmet_2.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.15000001;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				""
			};
		};
		class XtdGearInfo
		{
			model="ASEC_CAG_Helmet";
			strap="unfastened";
			Stow="No";
			Headset="On";
		};
	};
	class ASEC_Helmet3: ItemCore
	{
		author="Jup, Lip, Thunder";
		scope=0;
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.15000001;
		displayName="[CAG] Lip's Opscore (MC/Stowed)";
		model="\ASEC_CAG\ASEC_Helmet_3.p3d";
		Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left_ARC";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: HeadgearItem
		{
			mass=20;
			uniformModel="\ASEC_CAG\ASEC_Helmet_3.p3d";
			modelSides[]={3,1};
			armor=0;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.15000001;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				""
			};
		};
		class XtdGearInfo
		{
			model="ASEC_CAG_Helmet";
			Stow="Yes";
			strap="fastened";
			Headset="On";
		};
	};
	class ASEC_Helmet4: ItemCore
	{
		author="Jup, Lip, Thunder";
		scope=0;
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.15000001;
		displayName="[CAG] Lip's Opscore (Comtacs Off, Strapped)";
		model="\ASEC_CAG\ASEC_helmet_4.p3d";
		Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left_ARC";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: HeadgearItem
		{
			mass=20;
			uniformModel="\ASEC_CAG\ASEC_helmet_4.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.15000001;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				""
			};
		};
		class XtdGearInfo
		{
			model="ASEC_CAG_Helmet";
			strap="fastened";
			Stow="No";
			Headset="Off";
		};
	};
	class ASEC_Helmet5: ItemCore
	{
		author="Jup, Lip, Thunder";
		scope=0;
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.15000001;
		displayName="[CAG] Lip's Opscore (Comtacs Off, Unstraped)";
		model="\ASEC_CAG\ASEC_helmet_5.p3d";
		Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Left_ARC";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: HeadgearItem
		{
			mass=20;
			uniformModel="\ASEC_CAG\ASEC_helmet_5.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.15000001;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				""
			};
		};
		class XtdGearInfo
		{
			model="ASEC_CAG_Helmet";
			strap="unfastened";
			Stow="No";
			Headset="Off";
		};
	};
	class ASEC_Helmet6: ItemCore
	{
		author="Jup, Lip, Thunder";
		scope=0;
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.15000001;
		displayName="[CAG] Lip's Opscore (Stowed, No Headset)";
		model="\ASEC_CAG\ASEC_helmet_6.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: HeadgearItem
		{
			mass=20;
			uniformModel="\ASEC_CAG\ASEC_helmet_6.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.15000001;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				""
			};
		};
		class XtdGearInfo
		{
			model="ASEC_CAG_Helmet";
			strap="fastened";
			Stow="Yes";
			Headset="Off";
		};
	};
	class ASEC_Hat1: ItemCore
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[CAG] Lip's Hat";
		model="\ASEC_CAG\ASEC_hat_1.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: HeadgearItem
		{
			mass=20;
			uniformModel="\121_ASEC_CAG\ASEC_hat_1.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				""
			};
		};
		class XtdGearInfo
		{
			model="ASEC_Hat";
			Headset="None";
		};
	};
	class ASEC_Hat2: ItemCore
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[CAG] Lip's Hat (No Headset)";
		model="\ASEC_CAG\ASEC_hat_2.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: HeadgearItem
		{
			mass=20;
			uniformModel="\ASEC_CAG\ASEC_hat_2.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				""
			};
		};
		class XtdGearInfo
		{
			model="ASEC_Hat";
			Headset="Off";
		};
	};
	class ASEC_Hat3: ItemCore
	{
		author="Jup, Lip, Thunder";
		scope=0;
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.15000001;
		displayName="[CAG] Lip's Hat (Headset)";
		model="\ASEC_CAG\ASEC_hat_3.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: HeadgearItem
		{
			mass=20;
			uniformModel="\ASEC_CAG\ASEC_hat_3.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.15000001;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				""
			};
		};
		class XtdGearInfo
		{
			model="ASEC_Hat";
			Headset="On";
		};
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class CAG_Equipment_Actions
			{
				displayName="Kit Modifications";
				class ASEC_CAGOpscore_Unfasten1
				{
					displayName="Unstrap";
					condition="headgear player == 'ASEC_Helmet1'";
					exceptions[]={};
					statement="_player addHeadgear 'ASEC_Helmet2'";
				};
				class ASEC_CAGOpscore_Fasten1
				{
					displayName="Strap";
					condition="headgear player == 'ASEC_Helmet2'";
					exceptions[]={};
					statement="_player addHeadgear 'ASEC_Helmet1'";
				};
				class ASEC_CAGOpscore_Stowed1
				{
					displayName="Take Off Helmet";
					condition="headgear player == 'ASEC_Helmet1'";
					exceptions[]={};
					statement="_player addHeadgear 'ASEC_Helmet3'";
				};
				class ASEC_CAGOpscore_Unstowed2
				{
					displayName="Put On Helmet";
					condition="headgear player == 'ASEC_Helmet3'";
					exceptions[]={};
					statement="_player addHeadgear 'ASEC_Helmet1'";
				};
				class ASEC_CAGOpscore_Stowed2
				{
					displayName="Take Off Helmet";
					condition="headgear player == 'ASEC_Helmet2'";
					exceptions[]={};
					statement="_player addHeadgear 'ASEC_Helmet3'";
				};
				class ASEC_CAG_AmpOff1
				{
					displayName="Remove Headset";
					condition="headgear player == 'ASEC_Helmet1'";
					exceptions[]={};
					statement="_player addHeadgear 'ASEC_Helmet4'";
				};
				class ASEC_CAG_AmpOff2
				{
					displayName="Remove Headset";
					condition="headgear player == 'ASEC_Helmet2'";
					exceptions[]={};
					statement="_player addHeadgear 'ASEC_Helmet5'";
				};
				class ASEC_CAG_AmpOffHat1
				{
					displayName="Remove Headset";
					condition="headgear player == 'ASEC_Helmet3'";
					exceptions[]={};
					statement="_player addHeadgear 'ASEC_Helmet6'";
				};
				class ASEC_CAG_AmpOn1
				{
					displayName="Put on Headset";
					condition="headgear player == 'ASEC_Helmet4'";
					exceptions[]={};
					statement="_player addHeadgear 'ASEC_Helmet1'";
				};
				class ASEC_CAG_AmpOn2
				{
					displayName="Put on Headset";
					condition="headgear player == 'ASEC_Helmet5'";
					exceptions[]={};
					statement="_player addHeadgear 'ASEC_Helmet2'";
				};
				class ASEC_CAG_AmpOnHat1
				{
					displayName="Put on Headset";
					condition="headgear player == 'ASEC_Helmet6'";
					exceptions[]={};
					statement="_player addHeadgear 'ASEC_Helmet3'";
				};
				class ASEC_CAG_AmpHatOff1
				{
					displayName="Remove Headset";
					condition="headgear player == 'ASEC_Hat3'";
					exceptions[]={};
					statement="_player addHeadgear 'ASEC_Hat2'";
				};
				class ASEC_CAG_AmpHatOn1
				{
					displayName="Put on Headset";
					condition="headgear player == 'ASEC_Hat2'";
					exceptions[]={};
					statement="_player addHeadgear 'ASEC_Hat1'";
				};
			};
		};
	};
};
class XtdGearModels
{
	class CfgWeapons
	{
		class ASEC_Vest
		{
			label="CAG";
			author="Jup, Lip, Thunder";
			options[]=
			{
				"belt",
				"vest"
			};
			class belt
			{
				label="Belt";
				values[]=
				{
					"yes",
					"no"
				};
				class yes
				{
					label="Yes";
				};
				class no
				{
					label="No";
				};
			};
			class vest
			{
				label="Vest";
				values[]=
				{
					"yes",
					"no"
				};
				class yes
				{
					label="Yes";
				};
				class no
				{
					label="No";
				};
			};
		};
		class ASEC_CAG_Helmet
		{
			label="CAG";
			author="Jup, Lip, Thunder";
			options[]=
			{
				"strap",
				"Stow",
				"Headset"
			};
			class strap
			{
				label="Strap";
				values[]=
				{
					"fastened",
					"unfastened"
				};
				class fastened
				{
					label="Tight";
				};
				class unfastened
				{
					label="Loose";
				};
			};
			class Headset
			{
				label="Headset";
				values[]=
				{
					"On",
					"Off"
				};
				class On
				{
					label="On";
				};
				class Off
				{
					label="Off";
				};
			};
			class Stow
			{
				label="Stow";
				values[]=
				{
					"Yes",
					"No"
				};
				class Yes
				{
					label="Yes";
				};
				class No
				{
					label="No";
				};
			};
		};
		class ASEC_Hat
		{
			label="CAG";
			author="Jup, Lip, Thunder";
			options[]=
			{
				"Headset"
			};
			class Headset
			{
				label="Headset";
				values[]=
				{
					"None",
					"On",
					"Off"
				};
				class none
				{
					label="None";
				};
				class On
				{
					label="On";
				};
				class Off
				{
					label="Off";
				};
			};
		};
	};
};