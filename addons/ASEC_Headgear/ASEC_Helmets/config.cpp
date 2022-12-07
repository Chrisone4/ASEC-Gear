////////////////////////////////////////////////////////////////////
//DeRap: TFN_Helmets\config.bin
//Produced from mikero's Dos Tools Dll version 8.23
//https://mikero.bytex.digital/Downloads
//'now' is Fri Sep 30 16:32:12 2022 : 'file' last modified on Thu Jan 01 11:00:01 1970
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class TFN_Helmets
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
				class TFN_BCKL
				{
					displayName = "Buckle Strap";
					condition = "[_player] call TFN_Helmets_fnc_checkunbckl";
					statement = "[_player] call TFN_Helmets_fnc_turnbckl";
				};
				class TFN_UNBCKL
				{
					displayName = "Unbuckle Strap";
					condition = "[_player] call TFN_Helmets_fnc_checkbckl";
					statement = "[_player] call TFN_Helmets_fnc_turnunbckl";
				};
				class TFN_IRON
				{
					displayName = "Turn on Strobe";
					condition = "[_player] call TFN_Helmets_fnc_checkIR";
					statement = "[_player] call TFN_Helmets_fnc_switchIRON";
				};
				class TFN_IROFF
				{
					displayName = "Turn off Strobe";
					condition = "[_player] call TFN_Helmets_fnc_checkIR";
					statement = "[_player] call TFN_Helmets_fnc_switchIROFF";
				};
				class TFN_COMS
				{
					displayName = "Unfold Comtacs";
					condition = "[_player] call TFN_Helmets_fnc_checknocoms";
					statement = "[_player] call TFN_Helmets_fnc_turncoms";
				};
				class TFN_NOCOMS
				{
					displayName = "Fold Comtacs";
					condition = "[_player] call TFN_Helmets_fnc_checkcoms";
					statement = "[_player] call TFN_Helmets_fnc_turnnocoms";
				};
			};
		};
	};
};
class CfgFunctions
{
	class TFN_Helmets
	{
		tag = "TFN_Helmets";
		class commands
		{
			file = "\TFN_Helmets\functions\commands";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_1_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_1_U_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_1_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_1_B_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_1_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_1_U_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_1_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_1_B_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_1_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_1_U_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_1_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_1_B_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_1_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_1_U_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_1_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_1_B_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_1_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_1_U_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_1_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_1_B_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_1_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_1_U_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_1_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_1_B_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_1_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_1_U_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_1_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_1_B_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_1_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_1_U_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_1_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_1_B_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_1_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_1_U_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_1_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_1_B_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_1_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_1_U_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_1_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_1_B_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_1_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_1_U_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_1_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_1_B_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_1_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_1_U_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_1_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_1_B_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_U_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_B_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_U_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_B_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_U_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_B_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_U_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_B_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_U_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_B_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_U_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_B_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_U_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_B_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_U_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_B_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_U_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_B_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_U_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_B_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_U_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_B_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_U_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_B_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_U_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_B_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_U_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_B_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_U_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_B_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_U_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_B_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_U_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_B_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_U_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_B_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_U_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_B_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_U_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_B_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_U_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_B_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_U_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_B_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_U_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_B_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_U_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_B_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_U_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_B_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_U_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_B_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_U_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_B_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_U_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_C3_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_C3_2_B_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_1_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_1_U_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_1_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_1_B_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_1_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_1_U_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_1_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_1_B_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_1_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_1_U_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_1_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_1_B_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_1_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_1_U_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_1_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_1_B_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_1_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_1_U_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_1_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_1_B_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_1_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_1_U_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_1_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_1_B_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_1_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_1_U_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_1_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_1_B_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_1_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_1_U_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_1_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_1_B_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_1_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_1_U_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_1_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_1_B_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_1_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_1_U_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_1_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_1_B_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_1_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_1_U_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_1_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_1_B_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_1_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_1_U_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_1_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_1_B_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_U_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_B_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_U_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_B_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_U_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_B_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_U_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_B_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_U_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_B_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_U_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_B_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_U_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_B_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_U_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_B_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_U_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_B_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_U_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_B_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_U_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_B_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_U_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_B_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_U_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_B_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_U_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_B_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_U_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_B_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_U_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_Manta","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_B_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_U_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_B_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_U_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_B_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_U_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_B_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_U_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_1_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_B_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_U_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_B_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_U_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_B_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_U_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_B_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_U_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_teccharge","_scrim"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_B_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_U_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_B_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_U_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_fde.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_B_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_U_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_U_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_B_On.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		ace_hearing_protection = 0.8;
		ace_hearing_lowerVolume = 0.6;
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_B_On.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_U_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_U_Off.p3d";
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
		author = "Task Force North";
		picture = "\TFN_Helmets\Data\UI\icon_mt_ca.paa";
		model = "TFN_Helmets\Models\MT_AMP_2_B_Off.p3d";
		hiddenSelections[] = {"_cover","_comtac","_H6","_Manta","_teccharge"};
		hiddenSelectionsTextures[] = {"TFN_Helmets\Data\Cover\helmet_cover_2_co.paa","TFN_Helmets\Data\Comtac\Comtac3_low_CO_green.paa","","","","",""};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "TFN_Helmets\Models\MT_AMP_2_B_Off.p3d";
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
class cfgMods
{
	author = "";
	timepacked = "1630246571";
};
