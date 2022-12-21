////////////////////////////////////////////////////////////////////
//DeRap: ASEC_Helmets\config.bin
//Produced from mikero's Dos Tools Dll version 8.23
//https://mikero.bytex.digital/Downloads
//'now' is Fri Sep 30 16:32:12 2022 : 'file' last modified on Thu Jan 01 11:00:01 1970
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ASEC_Helmets
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F_BLUFOR","A3_Weapons_F_Ammoboxes"};
	};
};
class cfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				class ASEC_BCKL
				{
					displayName = "Buckle Strap";
					condition = "[_player] call ASEC_Helmets_fnc_checkunbckl";
					statement = "[_player] call ASEC_Helmets_fnc_turnbckl";
				};
				class ASEC_UNBCKL
				{
					displayName = "Unbuckle Strap";
					condition = "[_player] call ASEC_Helmets_fnc_checkbckl";
					statement = "[_player] call ASEC_Helmets_fnc_turnunbckl";
				};
				class ASEC_IRON
				{
					displayName = "Turn on Strobe";
					condition = "[_player] call ASEC_Helmets_fnc_checkIR";
					statement = "[_player] call ASEC_Helmets_fnc_switchIRON";
				};
				class ASEC_IROFF
				{
					displayName = "Turn off Strobe";
					condition = "[_player] call ASEC_Helmets_fnc_checkIR";
					statement = "[_player] call ASEC_Helmets_fnc_switchIROFF";
				};
				class ASEC_COMS
				{
					displayName = "Unfold Comtacs";
					condition = "[_player] call ASEC_Helmets_fnc_checknocoms";
					statement = "[_player] call ASEC_Helmets_fnc_turncoms";
				};
				class ASEC_NOCOMS
				{
					displayName = "Fold Comtacs";
					condition = "[_player] call ASEC_Helmets_fnc_checkcoms";
					statement = "[_player] call ASEC_Helmets_fnc_turnnocoms";
				};
			};
		};
	};
};
class CfgFunctions
{
	class ASEC_Helmets
	{
		tag = "ASEC_Helmets";
		class commands
		{
			file = "\ASEC_Helmets\functions\commands";
			class checkunbckl{};
			class checkbckl{};
			class turnbckl{};
			class turnunbckl{};
			class checkIR{};
			class switchIROFF{};
			class switchIRON{};
			class checkcoms{};
			class checknocoms{};
			class turncoms{};
			class turnnocoms{};
		};
	};
};
class CfgWeapons
{
	class Vest_Camo_Base;
	class H_HelmetB;
	class Default;
	class ItemCore: Default{};
	class UniformItem: ItemCore
	{
		class ItemInfo;
	};
	class InventoryItem_Base_F;
	class HeadgearItem: InventoryItem_Base_F
	{
		class ItemInfo;
		class HeadgearItem;
	};
	class VestItem: ItemCore
	{
		class ItemInfo;
	};
	class TFN_MT1_C3_H5_FDE_1_U_On: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H5/C3/FDE)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_1_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_1_U_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_C3_H5_FDE_1_B_On: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H5/C3/FDE)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_1_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_1_B_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_C3_H5_FDE_1_U_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H5/C3/FDE)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_1_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_1_U_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_C3_H5_FDE_1_B_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H5/C3/FDE)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_1_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_1_B_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_C3_H5_OD_1_U_On: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H5/C3/OD)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_1_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_1_U_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_C3_H5_OD_1_B_On: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H5/C3/OD)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_1_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_1_B_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_C3_H5_OD_1_U_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H5/C3/OD)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_1_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_1_U_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_C3_H5_OD_1_B_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H5/C3/OD)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_1_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_1_B_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_H5_FDE_1_U_On: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H5/C3/FDE)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_1_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_1_U_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_H5_FDE_1_B_On: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H5/C3/FDE)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_1_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_1_B_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_H5_FDE_1_U_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H5/C3/FDE)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_1_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_1_U_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_H5_FDE_1_B_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H5/C3/FDE)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_1_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_1_B_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_H5_OD_1_U_On: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H5/C3/OD)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_1_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_1_U_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_H5_OD_1_B_On: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H5/C3/OD)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_1_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_1_B_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_H5_OD_1_U_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H5/C3/OD)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_1_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_1_U_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_H5_OD_1_B_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H5/C3/OD)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_1_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_1_B_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_H5_Scrim_C3_FDE_1_U_On: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime 2 (H5/Scrim/C3/FDE)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_1_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_1_U_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_H5_Scrim_C3_FDE_1_B_On: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime 2 (H5/Scrim/C3/FDE)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_1_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_1_B_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_H5_Scrim_C3_FDE_1_U_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime 2 (H5/Scrim/C3/FDE)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_1_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_1_U_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_H5_Scrim_C3_FDE_1_B_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime 2 (H5/Scrim/C3/FDE)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_1_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_1_B_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_H5_Scrim_C3_OD_1_U_On: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime 2 (H5/Scrim/C3/OD)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_1_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_1_U_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_H5_Scrim_C3_OD_1_B_On: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime 2 (H5/Scrim/C3/OD)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_1_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_1_B_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_H5_Scrim_C3_OD_1_U_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime 2 (H5/Scrim/C3/OD)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_1_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_1_U_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_H5_Scrim_C3_OD_1_B_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime 2 (H5/Scrim/C3/OD)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_1_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_1_B_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_C3_FDE_1_U_On: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (C3/FDE)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_U_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_C3_FDE_1_B_On: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (C3/FDE)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_B_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_C3_FDE_1_U_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (C3/FDE)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_U_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_C3_FDE_1_B_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (C3/FDE)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_B_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_C3_OD_1_U_On: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (C3/OD)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_U_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_C3_OD_1_B_On: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (C3/OD)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_B_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_C3_OD_1_U_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (C3/OD)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_U_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_C3_OD_1_B_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (C3/OD)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_B_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_FDE_1_U_On: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (C3/FDE)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_U_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_FDE_1_B_On: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (C3/FDE)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_B_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_FDE_1_U_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (C3/FDE)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_U_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_FDE_1_B_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (C3/FDE)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_B_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_OD_1_U_On: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (C3/OD)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_U_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_OD_1_B_On: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (C3/OD)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_B_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_OD_1_U_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (C3/OD)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_U_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_OD_1_B_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (C3/OD)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_B_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_C3_H6_FDE_1_U_On: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H6/C3/FDE)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_U_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_C3_H6_FDE_1_B_On: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H6/C3/FDE)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_B_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_C3_H6_FDE_1_U_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H6/C3/FDE)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_U_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_C3_H6_FDE_1_B_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H6/C3/FDE)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_B_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_C3_H6_OD_1_U_On: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H6/C3/OD)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_U_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_C3_H6_OD_1_B_On: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H6/C3/OD)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_B_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_C3_H6_OD_1_U_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H6/C3/OD)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_U_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_C3_H6_OD_1_B_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H6/C3/OD)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_B_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_H6_FDE_1_U_On: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H6/C3/FDE)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_U_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_H6_FDE_1_B_On: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H6/C3/FDE)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_B_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_H6_FDE_1_U_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H6/C3/FDE)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_U_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_H6_FDE_1_B_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H6/C3/FDE)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_B_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_H6_OD_1_U_On: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H6/C3/OD)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_U_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_H6_OD_1_B_On: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H6/C3/OD)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_B_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_H6_OD_1_U_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H6/C3/OD)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_U_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_H6_OD_1_B_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H6/C3/OD)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_B_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_C3_Manta_FDE_1_U_On: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Manta/C3/FDE)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_U_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_C3_Manta_FDE_1_B_On: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Manta/C3/FDE)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_B_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_C3_Manta_FDE_1_U_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Manta/C3/FDE)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_U_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_C3_Manta_FDE_1_B_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Manta/C3/FDE)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_B_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_C3_Manta_OD_1_U_On: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Manta/C3/OD)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_U_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_C3_Manta_OD_1_B_On: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Manta/C3/OD)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_B_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_C3_Manta_OD_1_U_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Manta/C3/OD)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_U_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_C3_Manta_OD_1_B_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Manta/C3/OD)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_B_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_Manta_FDE_1_U_On: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Manta/C3/FDE)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_U_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_Manta_FDE_1_B_On: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Manta/C3/FDE)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_B_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_Manta_FDE_1_U_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Manta/C3/FDE)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_U_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_Manta_FDE_1_B_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Manta/C3/FDE)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_B_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_Manta_OD_1_U_On: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Manta/C3/OD)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_U_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_Manta_OD_1_B_On: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Manta/C3/OD)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_B_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_Manta_OD_1_U_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Manta/C3/OD)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_U_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_Manta_OD_1_B_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Manta/C3/OD)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_B_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_Scrim_FDE_1_U_On: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Scrim/C3/FDE)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_U_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_Scrim_FDE_1_B_On: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Scrim/C3/FDE)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_B_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_Scrim_FDE_1_U_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Scrim/C3/FDE)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_U_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_Scrim_FDE_1_B_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Scrim/C3/FDE)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_B_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_Scrim_OD_1_U_On: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Scrim/C3/OD)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_U_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_Scrim_OD_1_B_On: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Scrim/C3/OD)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_B_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_Scrim_OD_1_U_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Scrim/C3/OD)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_U_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_C3_Scrim_OD_1_B_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Scrim/C3/OD)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_C3_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_C3_2_B_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_AMP_H5_Light_1_U_On: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H5/AMP/Light)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_1_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_1_U_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_AMP_H5_Light_1_B_On: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H5/AMP/Light)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_1_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_1_B_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_AMP_H5_Light_1_U_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H5/AMP/Light)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_1_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_1_U_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_AMP_H5_Light_1_B_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H5/AMP/Light)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_1_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_1_B_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_AMP_H5_1_U_On: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H5/AMP)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_1_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_1_U_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_AMP_H5_1_B_On: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H5/AMP)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_1_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_1_B_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_AMP_H5_1_U_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H5/AMP)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_1_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_1_U_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_AMP_H5_1_B_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H5/AMP)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_1_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_1_B_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_H5_Light_1_U_On: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H5/AMP/Light)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_1_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_1_U_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_H5_Light_1_B_On: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H5/AMP/Light)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_1_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_1_B_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_H5_Light_1_U_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H5/AMP/Light)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_1_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_1_U_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_H5_Light_1_B_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H5/AMP/Light)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_1_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_1_B_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_H5_1_U_On: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H5/AMP)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_1_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_1_U_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_H5_1_B_On: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H5/AMP)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_1_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_1_B_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_H5_1_U_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H5/AMP)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_1_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_1_U_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_H5_1_B_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H5/AMP)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_1_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_1_B_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_H5_Scrim_AMP_Light_1_U_On: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime 2 (H5/Scrim/AMP/Light)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_1_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_1_U_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_H5_Scrim_AMP_Light_1_B_On: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime 2 (H5/Scrim/AMP/Light)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_1_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_1_B_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_H5_Scrim_AMP_Light_1_U_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime 2 (H5/Scrim/AMP/Light)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_1_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_1_U_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_H5_Scrim_AMP_Light_1_B_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime 2 (H5/Scrim/AMP/Light)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_1_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_1_B_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_H5_Scrim_AMP_1_U_On: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime 2 (H5/Scrim/AMP)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_1_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_1_U_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_H5_Scrim_AMP_1_B_On: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime 2 (H5/Scrim/AMP)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_1_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_1_B_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_H5_Scrim_AMP_1_U_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime 2 (H5/Scrim/AMP)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_1_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_1_U_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_H5_Scrim_AMP_1_B_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime 2 (H5/Scrim/AMP)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_1_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_1_B_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_AMP_Light_1_U_On: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (AMP/Light)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_U_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_AMP_Light_1_B_On: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (AMP/Light)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_B_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_AMP_Light_1_U_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (AMP/Light)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_U_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_AMP_Light_1_B_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (AMP/Light)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_B_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_AMP_1_U_On: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (AMP)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_U_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_AMP_1_B_On: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (AMP)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_B_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_AMP_1_U_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (AMP)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_U_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_AMP_1_B_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (AMP)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_B_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_Light_1_U_On: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (AMP/Light)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_U_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_Light_1_B_On: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (AMP/Light)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_B_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_Light_1_U_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (AMP/Light)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_U_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_Light_1_B_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (AMP/Light)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_B_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_1_U_On: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (AMP)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_U_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_1_B_On: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (AMP)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_B_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_1_U_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (AMP)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_U_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_1_B_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (AMP)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_B_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_AMP_H6_Light_1_U_On: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H6/AMP/Light)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_U_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_Manta","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_AMP_H6_Light_1_B_On: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H6/AMP/Light)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_B_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_Manta","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_AMP_H6_Light_1_U_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H6/AMP/Light)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_U_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_Manta","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_AMP_H6_Light_1_B_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H6/AMP/Light)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_B_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_Manta","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_AMP_H6_1_U_On: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H6/AMP)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_U_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_AMP_H6_1_B_On: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H6/AMP)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_B_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_AMP_H6_1_U_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H6/AMP)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_U_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_AMP_H6_1_B_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H6/AMP)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_B_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_H6_Light_1_U_On: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H6/AMP/Light)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_U_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_Manta","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_H6_Light_1_B_On: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H6/AMP/Light)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_B_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_Manta","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_H6_Light_1_U_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H6/AMP/Light)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_U_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_Manta","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_H6_Light_1_B_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H6/AMP/Light)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_B_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_Manta","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_H6_1_U_On: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H6/AMP)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_U_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_H6_1_B_On: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H6/AMP)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_B_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_H6_1_U_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H6/AMP)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_U_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_H6_1_B_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (H6/AMP)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_B_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_AMP_Manta_Light_1_U_On: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Manta/AMP/Light)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_U_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_AMP_Manta_Light_1_B_On: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Manta/AMP/Light)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_B_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_AMP_Manta_Light_1_U_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Manta/AMP/Light)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_U_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_AMP_Manta_Light_1_B_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Manta/AMP/Light)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_B_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_AMP_Manta_1_U_On: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Manta/AMP)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_U_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_AMP_Manta_1_B_On: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Manta/AMP)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_B_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_AMP_Manta_1_U_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Manta/AMP)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_U_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT1_AMP_Manta_1_B_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Manta/AMP)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_1_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_B_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_Manta_Light_1_U_On: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Manta/AMP/Light)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_U_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_Manta_Light_1_B_On: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Manta/AMP/Light)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_B_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_Manta_Light_1_U_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Manta/AMP/Light)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_U_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_Manta_Light_1_B_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Manta/AMP/Light)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_B_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_Manta_1_U_On: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Manta/AMP)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_U_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_Manta_1_B_On: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Manta/AMP)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_B_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_Manta_1_U_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Manta/AMP)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_U_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_Manta_1_B_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Manta/AMP)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_B_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_Scrim_Light_1_U_On: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Scrim/AMP/Light)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_U_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_Scrim_Light_1_B_On: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Scrim/AMP/Light)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_B_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_Scrim_Light_1_U_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Scrim/AMP/Light)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_U_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_Scrim_Light_1_B_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Scrim/AMP/Light)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_B_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_Scrim_1_U_On: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Scrim/AMP)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_U_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_Scrim_1_B_On: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Scrim/AMP)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_B_On.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_Scrim_1_U_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Scrim/AMP)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_U_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
	};
	class TFN_MT2_AMP_Scrim_1_B_Off: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "[ASEC] Opscore Maritime (Scrim/AMP)";
		author = "Lip, Jup, Thunder";
		picture = "\ASEC_Helmets\Data\UI\icon_mt_ca.paa";
		model = "ASEC_Helmets\Models\MT_AMP_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"ASEC_Helmets\Data\Cover\helmet_cover_2_co.paa","ASEC_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "ASEC_Helmets\Models\MT_AMP_2_B_Off.p3d";
			hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
			modelSides[] = {3,2,1,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
};
