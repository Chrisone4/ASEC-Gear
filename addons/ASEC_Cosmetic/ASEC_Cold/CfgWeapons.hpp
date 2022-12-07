class CfgWeapons
{
	class ItemCore;
	class UniformItem;
	class Uniform_Base;
	class InventoryItem_Base_F;
	class HeadgearItem: InventoryItem_Base_F
	{
		class ItemInfo;
		class HeadgearItem;
	};
	class tfl_fleece_hat: ItemCore
	{
		author="TFL";
		scope=2;
		scopeArsenal=2;
		weaponPoolAvailable=1;
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0;
		displayName="[TFL] Fleece Hat Green";
		picture="";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tfl_cold\data\fleece_rg_co.paa"
		};
		model="tfl_cold\fleece.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=5;
			eden=2;
			uniformModel="tfl_cold\fleece.p3d";
			hiddenSelections[]=
			{
				"Camo"
			};
			hiddenSelectionsTextures[]=
			{
				"tfl_cold\data\fleece_rg_co.paa"
			};
			modelSides[]={3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=266;
					passThrough=0.0099999998;
				};
			};
		};
	};
	class tfl_fleece_tan_hat: ItemCore
	{
		author="TFL";
		scope=2;
		scopeArsenal=2;
		weaponPoolAvailable=1;
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0;
		displayName="[TFL] Fleece Hat Tan";
		picture="";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tfl_cold\data\fleece_cb_co.paa"
		};
		model="tfl_cold\fleece.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=5;
			eden=2;
			uniformModel="tfl_cold\fleece.p3d";
			hiddenSelections[]=
			{
				"Camo"
			};
			hiddenSelectionsTextures[]=
			{
				"tfl_cold\data\fleece_cb_co.paa"
			};
			modelSides[]={3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=266;
					passThrough=0.0099999998;
				};
			};
		};
	};
	class tfl_fleece_hat_peltors: ItemCore
	{
		author="TFL";
		scope=2;
		scopeArsenal=2;
		weaponPoolAvailable=1;
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.30000001;
		displayName="[TFL] Fleece Hat Peltors Green";
		picture="";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tfl_cold\data\fleece_rg_co.paa"
		};
		model="tfl_cold\fleece_peltors.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=5;
			eden=2;
			uniformModel="tfl_cold\fleece_peltors.p3d";
			hiddenSelections[]=
			{
				"Camo"
			};
			hiddenSelectionsTextures[]=
			{
				"tfl_cold\data\fleece_rg_co.paa"
			};
			modelSides[]={3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=266;
					passThrough=0.0099999998;
				};
			};
		};
	};
	class tfl_fleece_tan_hat_peltors: ItemCore
	{
		author="TFL";
		scope=2;
		scopeArsenal=2;
		weaponPoolAvailable=1;
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.30000001;
		displayName="[TFL] Fleece Hat Peltors Tan";
		picture="";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tfl_cold\data\fleece_cb_co.paa"
		};
		model="tfl_cold\fleece_peltors.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=5;
			eden=2;
			uniformModel="tfl_cold\fleece_peltors.p3d";
			hiddenSelections[]=
			{
				"Camo"
			};
			hiddenSelectionsTextures[]=
			{
				"tfl_cold\data\fleece_cb_co.paa"
			};
			modelSides[]={3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=266;
					passThrough=0.0099999998;
				};
			};
		};
	};
	class tfl_beanie_hat: ItemCore
	{
		author="TFL";
		scope=2;
		scopeArsenal=2;
		weaponPoolAvailable=1;
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0;
		displayName="[TFL] Beanie";
		picture="";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tfl_cold\data\beanie_co.paa"
		};
		model="tfl_cold\beanie.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=5;
			eden=2;
			uniformModel="tfl_cold\beanie.p3d";
			hiddenSelections[]=
			{
				"Camo"
			};
			hiddenSelectionsTextures[]=
			{
				"tfl_cold\data\beanie_co.paa"
			};
			modelSides[]={3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=266;
					passThrough=0.0099999998;
				};
			};
		};
	};
	class tfl_beanie_hat_green: ItemCore
	{
		author="TFL";
		scope=2;
		scopeArsenal=2;
		weaponPoolAvailable=1;
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0;
		displayName="[TFL] Beanie Green";
		picture="";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tfl_cold\data\beanie_rg_co.paa"
		};
		model="tfl_cold\beanie.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=5;
			eden=2;
			uniformModel="tfl_cold\beanie.p3d";
			hiddenSelections[]=
			{
				"Camo"
			};
			hiddenSelectionsTextures[]=
			{
				"tfl_cold\data\beanie_rg_co.paa"
			};
			modelSides[]={3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=266;
					passThrough=0.0099999998;
				};
			};
		};
	};
	class tfl_beanie_tan_hat: ItemCore
	{
		author="TFL";
		scope=2;
		scopeArsenal=2;
		weaponPoolAvailable=1;
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0;
		displayName="[TFL] Beanie Tan";
		picture="";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tfl_cold\data\beanie_cb_co.paa"
		};
		model="tfl_cold\beanie.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=5;
			eden=2;
			uniformModel="tfl_cold\beanie.p3d";
			hiddenSelections[]=
			{
				"Camo"
			};
			hiddenSelectionsTextures[]=
			{
				"tfl_cold\data\beanie_cb_co.paa"
			};
			modelSides[]={3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=266;
					passThrough=0.0099999998;
				};
			};
		};
	};
	class tfl_beanie_hat_peltors: ItemCore
	{
		author="TFL";
		scope=2;
		scopeArsenal=2;
		weaponPoolAvailable=1;
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.30000001;
		displayName="[TFL] Beanie Peltors";
		picture="";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tfl_cold\data\beanie_co.paa"
		};
		model="tfl_cold\beanie_peltors.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=5;
			eden=2;
			uniformModel="tfl_cold\beanie_peltors.p3d";
			hiddenSelections[]=
			{
				"Camo"
			};
			hiddenSelectionsTextures[]=
			{
				"tfl_cold\data\beanie_co.paa"
			};
			modelSides[]={3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=266;
					passThrough=0.0099999998;
				};
			};
		};
	};
	class tfl_beanie_hat_green_peltors: ItemCore
	{
		author="TFL";
		scope=2;
		scopeArsenal=2;
		weaponPoolAvailable=1;
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.30000001;
		displayName="[TFL] Beanie Peltors Green";
		picture="";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tfl_cold\data\beanie_rg_co.paa"
		};
		model="tfl_cold\beanie_peltors.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=5;
			eden=2;
			uniformModel="tfl_cold\beanie_peltors.p3d";
			hiddenSelections[]=
			{
				"Camo"
			};
			hiddenSelectionsTextures[]=
			{
				"tfl_cold\data\beanie_rg_co.paa"
			};
			modelSides[]={3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=266;
					passThrough=0.0099999998;
				};
			};
		};
	};
	class tfl_beanie_tan_hat_peltors: ItemCore
	{
		author="TFL";
		scope=2;
		scopeArsenal=2;
		weaponPoolAvailable=1;
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.30000001;
		displayName="[TFL] Beanie Peltors Tan";
		picture="";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tfl_cold\data\beanie_cb_co.paa"
		};
		model="tfl_cold\beanie_peltors.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=5;
			eden=2;
			uniformModel="tfl_cold\beanie_peltors.p3d";
			hiddenSelections[]=
			{
				"Camo"
			};
			hiddenSelectionsTextures[]=
			{
				"tfl_cold\data\beanie_cb_co.paa"
			};
			modelSides[]={3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=266;
					passThrough=0.0099999998;
				};
			};
		};
	};
	class tfl_puff_mc_g_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="TFL";
		displayName="[TFL] G3 Puff (BLACK/MC)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tfl_puff_mc_g";
			containerClass="Supply100";
			mass=5;
			uniformType="Neopren";
		};
	};
	class tfl_puff_aor1_g_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="TFL";
		displayName="[TFL] G3 Puff (BLACK/AOR1)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tfl_puff_aor1_g";
			containerClass="Supply100";
			mass=5;
			uniformType="Neopren";
		};
	};
	class tfl_puff_aor2_g_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="TFL";
		displayName="[TFL] G3 Puff (BLACK/AOR2)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tfl_puff_aor2_g";
			containerClass="Supply100";
			mass=5;
			uniformType="Neopren";
		};
	};
	class tfl_puff_mca_g_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="TFL";
		displayName="[TFL] G3 Puff (BLACK/MCA)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tfl_puff_mca_g";
			containerClass="Supply100";
			mass=5;
			uniformType="Neopren";
		};
	};
	class tfl_puff_m81_g_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="TFL";
		displayName="[TFL] G3 Puff (BLACK/M81)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tfl_puff_m81_g";
			containerClass="Supply100";
			mass=5;
			uniformType="Neopren";
		};
	};
	class tfl_puff_mcal_g_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="TFL";
		displayName="[TFL] G3 Puff (BLACK/MCAL)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tfl_puff_mcal_g";
			containerClass="Supply100";
			mass=5;
			uniformType="Neopren";
		};
	};
	class tfl_puff_s_mc_g_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="TFL";
		displayName="[TFL] G3 Puff (SAND/MC)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tfl_puff_s_mc_g";
			containerClass="Supply100";
			mass=5;
			uniformType="Neopren";
		};
	};
	class tfl_puff_s_aor1_g_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="TFL";
		displayName="[TFL] G3 Puff (SAND/AOR1)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tfl_puff_s_aor1_g";
			containerClass="Supply100";
			mass=5;
			uniformType="Neopren";
		};
	};
	class tfl_puff_s_aor2_g_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="TFL";
		displayName="[TFL] G3 Puff (SAND/AOR2)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tfl_puff_s_aor2_g";
			containerClass="Supply100";
			mass=5;
			uniformType="Neopren";
		};
	};
	class tfl_puff_s_mca_g_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="TFL";
		displayName="[TFL] G3 Puff (SAND/MCA)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tfl_puff_s_mca_g";
			containerClass="Supply100";
			mass=5;
			uniformType="Neopren";
		};
	};
	class tfl_puff_s_m81_g_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="TFL";
		displayName="[TFL] G3 Puff (SAND/M81)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tfl_puff_s_m81_g";
			containerClass="Supply100";
			mass=5;
			uniformType="Neopren";
		};
	};
	class tfl_puff_s_mcal_g_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="TFL";
		displayName="[TFL] G3 Puff (SAND/MCAL)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tfl_puff_s_mcal_g";
			containerClass="Supply100";
			mass=5;
			uniformType="Neopren";
		};
	};
	class tfl_pcu_mc_g_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="TFL";
		displayName="[TFL] G3 PCU (GREY/MC)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tfl_pcu_mc_g";
			containerClass="Supply100";
			mass=5;
			uniformType="Neopren";
		};
	};
	class tfl_pcu_aor1_g_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="TFL";
		displayName="[TFL] G3 PCU (GREY/AOR1)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tfl_pcu_aor1_g";
			containerClass="Supply100";
			mass=5;
			uniformType="Neopren";
		};
	};
	class tfl_pcu_aor2_g_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="TFL";
		displayName="[TFL] G3 PCU (GREY/AOR2)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tfl_pcu_aor2_g";
			containerClass="Supply100";
			mass=5;
			uniformType="Neopren";
		};
	};
	class tfl_pcu_mca_g_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="TFL";
		displayName="[TFL] G3 PCU (GREY/MCA)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tfl_pcu_mca_g";
			containerClass="Supply100";
			mass=5;
			uniformType="Neopren";
		};
	};
	class tfl_pcu_m81_g_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="TFL";
		displayName="[TFL] G3 PCU (GREY/M81)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tfl_pcu_m81_g";
			containerClass="Supply100";
			mass=5;
			uniformType="Neopren";
		};
	};
	class tfl_pcu_mcal_g_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="TFL";
		displayName="[TFL] G3 PCU (GREY/MCAL)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tfl_pcu_mcal_g";
			containerClass="Supply100";
			mass=5;
			uniformType="Neopren";
		};
	};
	class tfl_pcu_b_mc_g_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="TFL";
		displayName="[TFL] G3 PCU (BLACK/MC)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tfl_pcu_b_mc_g";
			containerClass="Supply100";
			mass=5;
			uniformType="Neopren";
		};
	};
	class tfl_pcu_b_aor1_g_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="TFL";
		displayName="[TFL] G3 PCU (BLACK/AOR1)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tfl_pcu_b_aor1_g";
			containerClass="Supply100";
			mass=5;
			uniformType="Neopren";
		};
	};
	class tfl_pcu_b_aor2_g_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="TFL";
		displayName="[TFL] G3 PCU (BLACK/AOR2)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tfl_pcu_b_aor2_g";
			containerClass="Supply100";
			mass=5;
			uniformType="Neopren";
		};
	};
	class tfl_pcu_b_mca_g_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="TFL";
		displayName="[TFL] G3 PCU (BLACK/MCA)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tfl_pcu_b_mca_g";
			containerClass="Supply100";
			mass=5;
			uniformType="Neopren";
		};
	};
	class tfl_pcu_b_m81_g_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="TFL";
		displayName="[TFL] G3 PCU (BLACK/M81)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tfl_pcu_b_m81_g";
			containerClass="Supply100";
			mass=5;
			uniformType="Neopren";
		};
	};
	class tfl_pcu_b_mcal_g_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="TFL";
		displayName="[TFL] G3 PCU (BLACK/MCAL)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tfl_pcu_b_mcal_g";
			containerClass="Supply100";
			mass=5;
			uniformType="Neopren";
		};
	};
	class tfl_pcu_mca_mc_g_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="TFL";
		displayName="[TFL] G3 PCU (MCAL/MC)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tfl_pcu_mca_mc_g";
			containerClass="Supply100";
			mass=5;
			uniformType="Neopren";
		};
	};
	class tfl_pcu_mca_aor1_g_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="TFL";
		displayName="[TFL] G3 PCU (MCAL/AOR1)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tfl_pcu_mca_aor1_g";
			containerClass="Supply100";
			mass=5;
			uniformType="Neopren";
		};
	};
	class tfl_pcu_mca_aor2_g_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="TFL";
		displayName="[TFL] G3 PCU (MCAL/AOR2)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tfl_pcu_mca_aor2_g";
			containerClass="Supply100";
			mass=5;
			uniformType="Neopren";
		};
	};
	class tfl_pcu_mca_mca_g_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="TFL";
		displayName="[TFL] G3 PCU (MCAL/MCA)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tfl_pcu_mca_mca_g";
			containerClass="Supply100";
			mass=5;
			uniformType="Neopren";
		};
	};
	class tfl_pcu_mca_m81_g_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="TFL";
		displayName="[TFL] G3 PCU (MCAL/M81)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tfl_pcu_mca_m81_g";
			containerClass="Supply100";
			mass=5;
			uniformType="Neopren";
		};
	};
	class tfl_pcu_mca_mcal_g_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="TFL";
		displayName="[TFL] G3 PCU (MCAL/MCAL)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tfl_pcu_mca_mcal_g";
			containerClass="Supply100";
			mass=5;
			uniformType="Neopren";
		};
	};
	class tfl_pcu_mc_mc_g_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="TFL";
		displayName="[TFL] G3 PCU (MC/MC)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tfl_pcu_mc_mc_g";
			containerClass="Supply100";
			mass=5;
			uniformType="Neopren";
		};
	};
	class tfl_pcu_mc_aor1_g_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="TFL";
		displayName="[TFL] G3 PCU (MC/AOR1)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tfl_pcu_mc_aor1_g";
			containerClass="Supply100";
			mass=5;
			uniformType="Neopren";
		};
	};
	class tfl_pcu_mc_aor2_g_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="TFL";
		displayName="[TFL] G3 PCU (MC/AOR2)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tfl_pcu_mc_aor2_g";
			containerClass="Supply100";
			mass=5;
			uniformType="Neopren";
		};
	};
	class tfl_pcu_mc_mca_g_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="TFL";
		displayName="[TFL] G3 PCU (MC/MCA)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tfl_pcu_mc_mca_g";
			containerClass="Supply100";
			mass=5;
			uniformType="Neopren";
		};
	};
	class tfl_pcu_mc_m81_g_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="TFL";
		displayName="[TFL] G3 PCU (MC/M81)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tfl_pcu_mc_m81_g";
			containerClass="Supply100";
			mass=5;
			uniformType="Neopren";
		};
	};
	class tfl_pcu_mc_mcal_g_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="TFL";
		displayName="[TFL] G3 PCU (MC/MCAL)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tfl_pcu_mc_mcal_g";
			containerClass="Supply100";
			mass=5;
			uniformType="Neopren";
		};
	};
	class tfl_pcu_brown_mc_g_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="TFL";
		displayName="[TFL] G3 PCU (TAN/MC)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tfl_pcu_brown_mc_g";
			containerClass="Supply100";
			mass=5;
			uniformType="Neopren";
		};
	};
	class tfl_pcu_brown_aor1_g_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="TFL";
		displayName="[TFL] G3 PCU (TAN/AOR1)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tfl_pcu_brown_aor1_g";
			containerClass="Supply100";
			mass=5;
			uniformType="Neopren";
		};
	};
	class tfl_pcu_brown_aor2_g_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="TFL";
		displayName="[TFL] G3 PCU (TAN/AOR2)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tfl_pcu_brown_aor2_g";
			containerClass="Supply100";
			mass=5;
			uniformType="Neopren";
		};
	};
	class tfl_pcu_brown_mca_g_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="TFL";
		displayName="[TFL] G3 PCU (TAN/MCA)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tfl_pcu_brown_mca_g";
			containerClass="Supply100";
			mass=5;
			uniformType="Neopren";
		};
	};
	class tfl_pcu_brown_m81_g_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="TFL";
		displayName="[TFL] G3 PCU (TAN/M81)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tfl_pcu_brown_m81_g";
			containerClass="Supply100";
			mass=5;
			uniformType="Neopren";
		};
	};
	class tfl_pcu_brown_mcal_g_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="TFL";
		displayName="[TFL] G3 PCU (TAN/MCAL)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tfl_pcu_brown_mcal_g";
			containerClass="Supply100";
			mass=5;
			uniformType="Neopren";
		};
	};
};