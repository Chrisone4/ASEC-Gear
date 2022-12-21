class CfgPatches
{
	class ASEC_Cold
	{
		magazines[]={};
		ammo[]={};
		units[]={};
		weapons[]={};
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
class CfgVehicles
{
	class B_Soldier_F;
	class B_diver_F;
	class tfl_puff_mc_g: B_Soldier_F
	{
		scope=0;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=0;
		faction="sof_rangers";
		author="Jup, Lip, Thunder";
		model="ASEC_Cold\tfl_northface_g.p3d";
		uniformClass="tfl_puff_mc_g_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]=
		{
			"camo",
			"rightknee",
			"leftknee",
			"camo1",
			"glove"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_g3\g3\pants_mc.paa",
			"ASEC_g3\g3\pants_mc.paa",
			"ASEC_g3\g3\pants_mc.paa",
			"ASEC_Cold\data\northface_blk_co.paa",
			"ASEC_Cold\data\gunglove_grey_co.paa"
		};
	};
	class tfl_puff_aor1_g: B_Soldier_F
	{
		scope=0;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=0;
		faction="sof_rangers";
		author="Jup, Lip, Thunder";
		model="ASEC_Cold\tfl_northface_g.p3d";
		uniformClass="tfl_puff_aor1_g_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]=
		{
			"camo",
			"rightknee",
			"leftknee",
			"camo1",
			"glove"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_g3\g3\pants_aor1.paa",
			"ASEC_g3\g3\pants_aor1.paa",
			"ASEC_g3\g3\pants_aor1.paa",
			"ASEC_Cold\data\northface_blk_co.paa",
			"ASEC_Cold\data\gunglove_grey_co.paa"
		};
	};
	class tfl_puff_aor2_g: B_Soldier_F
	{
		scope=0;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=0;
		faction="sof_rangers";
		author="Jup, Lip, Thunder";
		model="ASEC_Cold\tfl_northface_g.p3d";
		uniformClass="tfl_puff_aor2_g_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]=
		{
			"camo",
			"rightknee",
			"leftknee",
			"camo1",
			"glove"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_g3\g3\pants_aor2.paa",
			"ASEC_g3\g3\pants_aor2.paa",
			"ASEC_g3\g3\pants_aor2.paa",
			"ASEC_Cold\data\northface_blk_co.paa",
			"ASEC_Cold\data\gunglove_grey_co.paa"
		};
	};
	class tfl_puff_mca_g: B_Soldier_F
	{
		scope=0;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=0;
		faction="sof_rangers";
		author="Jup, Lip, Thunder";
		model="ASEC_Cold\tfl_northface_g.p3d";
		uniformClass="tfl_puff_mca_g_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]=
		{
			"camo",
			"rightknee",
			"leftknee",
			"camo1",
			"glove"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_g3\g3\pants_mca.paa",
			"ASEC_g3\g3\pants_mca.paa",
			"ASEC_g3\g3\pants_mca.paa",
			"ASEC_Cold\data\northface_blk_co.paa",
			"ASEC_Cold\data\gunglove_grey_co.paa"
		};
	};
	class tfl_puff_m81_g: B_Soldier_F
	{
		scope=0;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=0;
		faction="sof_rangers";
		author="Jup, Lip, Thunder";
		model="ASEC_Cold\tfl_northface_g.p3d";
		uniformClass="tfl_puff_m81_g_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]=
		{
			"camo",
			"rightknee",
			"leftknee",
			"camo1",
			"glove"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_g3\g3\pants_m81.paa",
			"ASEC_g3\g3\pants_m81.paa",
			"ASEC_g3\g3\pants_m81.paa",
			"ASEC_Cold\data\northface_blk_co.paa",
			"ASEC_Cold\data\gunglove_grey_co.paa"
		};
	};
	class tfl_puff_mcal_g: B_Soldier_F
	{
		scope=0;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=0;
		faction="sof_rangers";
		author="Jup, Lip, Thunder";
		model="ASEC_Cold\tfl_northface_g.p3d";
		uniformClass="tfl_puff_mcal_g_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]=
		{
			"camo",
			"rightknee",
			"leftknee",
			"camo1",
			"glove"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_g3\g3\pants_mcal.paa",
			"ASEC_g3\g3\pants_mcal.paa",
			"ASEC_g3\g3\pants_mcal.paa",
			"ASEC_Cold\data\northface_blk_co.paa",
			"ASEC_Cold\data\gunglove_grey_co.paa"
		};
	};
	class tfl_puff_s_mc_g: B_Soldier_F
	{
		scope=0;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=0;
		faction="sof_rangers";
		author="Jup, Lip, Thunder";
		model="ASEC_Cold\tfl_northface_g.p3d";
		uniformClass="tfl_puff_s_mc_g_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]=
		{
			"camo",
			"rightknee",
			"leftknee",
			"camo1",
			"glove"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_g3\g3\pants_mc.paa",
			"ASEC_g3\g3\pants_mc.paa",
			"ASEC_g3\g3\pants_mc.paa",
			"ASEC_Cold\data\northface_sand_co.paa",
			"ASEC_Cold\data\gunglove_co.paa"
		};
	};
	class tfl_puff_s_aor1_g: B_Soldier_F
	{
		scope=0;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=0;
		faction="sof_rangers";
		author="Jup, Lip, Thunder";
		model="ASEC_Cold\tfl_northface_g.p3d";
		uniformClass="tfl_puff_s_aor1_g_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]=
		{
			"camo",
			"rightknee",
			"leftknee",
			"camo1",
			"glove"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_g3\g3\pants_aor1.paa",
			"ASEC_g3\g3\pants_aor1.paa",
			"ASEC_g3\g3\pants_aor1.paa",
			"ASEC_Cold\data\northface_sand_co.paa",
			"ASEC_Cold\data\gunglove_co.paa"
		};
	};
	class tfl_puff_s_aor2_g: B_Soldier_F
	{
		scope=0;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=0;
		faction="sof_rangers";
		author="Jup, Lip, Thunder";
		model="ASEC_Cold\tfl_northface_g.p3d";
		uniformClass="tfl_puff_s_aor2_g_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]=
		{
			"camo",
			"rightknee",
			"leftknee",
			"camo1",
			"glove"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_g3\g3\pants_aor2.paa",
			"ASEC_g3\g3\pants_aor2.paa",
			"ASEC_g3\g3\pants_aor2.paa",
			"ASEC_Cold\data\northface_sand_co.paa",
			"ASEC_Cold\data\gunglove_co.paa"
		};
	};
	class tfl_puff_s_mca_g: B_Soldier_F
	{
		scope=0;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=0;
		faction="sof_rangers";
		author="Jup, Lip, Thunder";
		model="ASEC_Cold\tfl_northface_g.p3d";
		uniformClass="tfl_puff_s_mca_g_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]=
		{
			"camo",
			"rightknee",
			"leftknee",
			"camo1",
			"glove"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_g3\g3\pants_mca.paa",
			"ASEC_g3\g3\pants_mca.paa",
			"ASEC_g3\g3\pants_mca.paa",
			"ASEC_Cold\data\northface_sand_co.paa",
			"ASEC_Cold\data\gunglove_co.paa"
		};
	};
	class tfl_puff_s_m81_g: B_Soldier_F
	{
		scope=0;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=0;
		faction="sof_rangers";
		author="Jup, Lip, Thunder";
		model="ASEC_Cold\tfl_northface_g.p3d";
		uniformClass="tfl_puff_s_m81_g_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]=
		{
			"camo",
			"rightknee",
			"leftknee",
			"camo1",
			"glove"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_g3\g3\pants_m81.paa",
			"ASEC_g3\g3\pants_m81.paa",
			"ASEC_g3\g3\pants_m81.paa",
			"ASEC_Cold\data\northface_sand_co.paa",
			"ASEC_Cold\data\gunglove_co.paa"
		};
	};
	class tfl_puff_s_mcal_g: B_Soldier_F
	{
		scope=0;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=0;
		faction="sof_rangers";
		author="Jup, Lip, Thunder";
		model="ASEC_Cold\tfl_northface_g.p3d";
		uniformClass="tfl_puff_s_mcal_g_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]=
		{
			"camo",
			"rightknee",
			"leftknee",
			"camo1",
			"glove"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_g3\g3\pants_mcal.paa",
			"ASEC_g3\g3\pants_mcal.paa",
			"ASEC_g3\g3\pants_mcal.paa",
			"ASEC_Cold\data\northface_sand_co.paa",
			"ASEC_Cold\data\gunglove_co.paa"
		};
	};
	class tfl_pcu_mc_g: B_Soldier_F
	{
		scope=0;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=0;
		faction="sof_rangers";
		author="Jup, Lip, Thunder";
		model="ASEC_Cold\tfl_pcu_g.p3d";
		uniformClass="tfl_pcu_mc_g_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]=
		{
			"camo",
			"rightknee",
			"leftknee",
			"camo1",
			"glove"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_g3\g3\pants_mc.paa",
			"ASEC_g3\g3\pants_mc.paa",
			"ASEC_g3\g3\pants_mc.paa",
			"ASEC_Cold\data\pcu_grey_co.paa",
			"ASEC_Cold\data\gunglove_co.paa"
		};
	};
	class tfl_pcu_aor1_g: B_Soldier_F
	{
		scope=0;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=0;
		faction="sof_rangers";
		author="Jup, Lip, Thunder";
		model="ASEC_Cold\tfl_pcu_g.p3d";
		uniformClass="tfl_pcu_aor1_g_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]=
		{
			"camo",
			"rightknee",
			"leftknee",
			"camo1",
			"glove"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_g3\g3\pants_aor1.paa",
			"ASEC_g3\g3\pants_aor1.paa",
			"ASEC_g3\g3\pants_aor1.paa",
			"ASEC_Cold\data\pcu_grey_co.paa",
			"ASEC_Cold\data\gunglove_co.paa"
		};
	};
	class tfl_pcu_aor2_g: B_Soldier_F
	{
		scope=0;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=0;
		faction="sof_rangers";
		author="Jup, Lip, Thunder";
		model="ASEC_Cold\tfl_pcu_g.p3d";
		uniformClass="tfl_pcu_aor2_g_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]=
		{
			"camo",
			"rightknee",
			"leftknee",
			"camo1",
			"glove"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_g3\g3\pants_aor2.paa",
			"ASEC_g3\g3\pants_aor2.paa",
			"ASEC_g3\g3\pants_aor2.paa",
			"ASEC_Cold\data\pcu_grey_co.paa",
			"ASEC_Cold\data\gunglove_co.paa"
		};
	};
	class tfl_pcu_mca_g: B_Soldier_F
	{
		scope=0;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=0;
		faction="sof_rangers";
		author="Jup, Lip, Thunder";
		model="ASEC_Cold\tfl_pcu_g.p3d";
		uniformClass="tfl_pcu_mca_g_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]=
		{
			"camo",
			"rightknee",
			"leftknee",
			"camo1",
			"glove"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_g3\g3\pants_mca.paa",
			"ASEC_g3\g3\pants_mca.paa",
			"ASEC_g3\g3\pants_mca.paa",
			"ASEC_Cold\data\pcu_grey_co.paa",
			"ASEC_Cold\data\gunglove_co.paa"
		};
	};
	class tfl_pcu_m81_g: B_Soldier_F
	{
		scope=0;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=0;
		faction="sof_rangers";
		author="Jup, Lip, Thunder";
		model="ASEC_Cold\tfl_pcu_g.p3d";
		uniformClass="tfl_pcu_m81_g_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]=
		{
			"camo",
			"rightknee",
			"leftknee",
			"camo1",
			"glove"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_g3\g3\pants_m81.paa",
			"ASEC_g3\g3\pants_m81.paa",
			"ASEC_g3\g3\pants_m81.paa",
			"ASEC_Cold\data\pcu_grey_co.paa",
			"ASEC_Cold\data\gunglove_co.paa"
		};
	};
	class tfl_pcu_mcal_g: B_Soldier_F
	{
		scope=0;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=0;
		faction="sof_rangers";
		author="Jup, Lip, Thunder";
		model="ASEC_Cold\tfl_pcu_g.p3d";
		uniformClass="tfl_pcu_mcal_g_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]=
		{
			"camo",
			"rightknee",
			"leftknee",
			"camo1",
			"glove"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_g3\g3\pants_mcal.paa",
			"ASEC_g3\g3\pants_mcal.paa",
			"ASEC_g3\g3\pants_mcal.paa",
			"ASEC_Cold\data\pcu_grey_co.paa",
			"ASEC_Cold\data\gunglove_co.paa"
		};
	};
	class tfl_pcu_b_mc_g: B_Soldier_F
	{
		scope=0;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=0;
		faction="sof_rangers";
		author="Jup, Lip, Thunder";
		model="ASEC_Cold\tfl_pcu_g.p3d";
		uniformClass="tfl_pcu_b_mc_g_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]=
		{
			"camo",
			"rightknee",
			"leftknee",
			"camo1",
			"glove"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_g3\g3\pants_mc.paa",
			"ASEC_g3\g3\pants_mc.paa",
			"ASEC_g3\g3\pants_mc.paa",
			"ASEC_Cold\data\pcu_black_co.paa",
			"ASEC_Cold\data\gunglove_grey_co.paa"
		};
	};
	class tfl_pcu_b_aor1_g: B_Soldier_F
	{
		scope=0;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=0;
		faction="sof_rangers";
		author="Jup, Lip, Thunder";
		model="ASEC_Cold\tfl_pcu_g.p3d";
		uniformClass="tfl_pcu_b_aor1_g_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]=
		{
			"camo",
			"rightknee",
			"leftknee",
			"camo1",
			"glove"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_g3\g3\pants_aor1.paa",
			"ASEC_g3\g3\pants_aor1.paa",
			"ASEC_g3\g3\pants_aor1.paa",
			"ASEC_Cold\data\pcu_black_co.paa",
			"ASEC_Cold\data\gunglove_grey_co.paa"
		};
	};
	class tfl_pcu_b_aor2_g: B_Soldier_F
	{
		scope=0;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=0;
		faction="sof_rangers";
		author="Jup, Lip, Thunder";
		model="ASEC_Cold\tfl_pcu_g.p3d";
		uniformClass="tfl_pcu_b_aor2_g_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]=
		{
			"camo",
			"rightknee",
			"leftknee",
			"camo1",
			"glove"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_g3\g3\pants_aor2.paa",
			"ASEC_g3\g3\pants_aor2.paa",
			"ASEC_g3\g3\pants_aor2.paa",
			"ASEC_Cold\data\pcu_black_co.paa",
			"ASEC_Cold\data\gunglove_grey_co.paa"
		};
	};
	class tfl_pcu_b_mca_g: B_Soldier_F
	{
		scope=0;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=0;
		faction="sof_rangers";
		author="Jup, Lip, Thunder";
		model="ASEC_Cold\tfl_pcu_g.p3d";
		uniformClass="tfl_pcu_b_mca_g_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]=
		{
			"camo",
			"rightknee",
			"leftknee",
			"camo1",
			"glove"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_g3\g3\pants_mca.paa",
			"ASEC_g3\g3\pants_mca.paa",
			"ASEC_g3\g3\pants_mca.paa",
			"ASEC_Cold\data\pcu_black_co.paa",
			"ASEC_Cold\data\gunglove_grey_co.paa"
		};
	};
	class tfl_pcu_b_m81_g: B_Soldier_F
	{
		scope=0;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=0;
		faction="sof_rangers";
		author="Jup, Lip, Thunder";
		model="ASEC_Cold\tfl_pcu_g.p3d";
		uniformClass="tfl_pcu_b_m81_g_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]=
		{
			"camo",
			"rightknee",
			"leftknee",
			"camo1",
			"glove"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_g3\g3\pants_m81.paa",
			"ASEC_g3\g3\pants_m81.paa",
			"ASEC_g3\g3\pants_m81.paa",
			"ASEC_Cold\data\pcu_black_co.paa",
			"ASEC_Cold\data\gunglove_grey_co.paa"
		};
	};
	class tfl_pcu_b_mcal_g: B_Soldier_F
	{
		scope=0;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=0;
		faction="sof_rangers";
		author="Jup, Lip, Thunder";
		model="ASEC_Cold\tfl_pcu_g.p3d";
		uniformClass="tfl_pcu_b_mcal_g_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]=
		{
			"camo",
			"rightknee",
			"leftknee",
			"camo1",
			"glove"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_g3\g3\pants_mcal.paa",
			"ASEC_g3\g3\pants_mcal.paa",
			"ASEC_g3\g3\pants_mcal.paa",
			"ASEC_Cold\data\pcu_black_co.paa",
			"ASEC_Cold\data\gunglove_grey_co.paa"
		};
	};
	class tfl_pcu_mca_mc_g: B_Soldier_F
	{
		scope=0;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=0;
		faction="sof_rangers";
		author="Jup, Lip, Thunder";
		model="ASEC_Cold\tfl_pcu_g.p3d";
		uniformClass="tfl_pcu_mca_mc_g_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]=
		{
			"camo",
			"rightknee",
			"leftknee",
			"camo1",
			"glove"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_g3\g3\pants_mc.paa",
			"ASEC_g3\g3\pants_mc.paa",
			"ASEC_g3\g3\pants_mc.paa",
			"ASEC_Cold\data\pcu_mca_co.paa",
			"ASEC_Cold\data\gunglove_co.paa"
		};
	};
	class tfl_pcu_mca_aor1_g: B_Soldier_F
	{
		scope=0;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=0;
		faction="sof_rangers";
		author="Jup, Lip, Thunder";
		model="ASEC_Cold\tfl_pcu_g.p3d";
		uniformClass="tfl_pcu_mca_aor1_g_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]=
		{
			"camo",
			"rightknee",
			"leftknee",
			"camo1",
			"glove"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_g3\g3\pants_aor1.paa",
			"ASEC_g3\g3\pants_aor1.paa",
			"ASEC_g3\g3\pants_aor1.paa",
			"ASEC_Cold\data\pcu_mca_co.paa",
			"ASEC_Cold\data\gunglove_co.paa"
		};
	};
	class tfl_pcu_mca_aor2_g: B_Soldier_F
	{
		scope=0;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=0;
		faction="sof_rangers";
		author="Jup, Lip, Thunder";
		model="ASEC_Cold\tfl_pcu_g.p3d";
		uniformClass="tfl_pcu_mca_aor2_g_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]=
		{
			"camo",
			"rightknee",
			"leftknee",
			"camo1",
			"glove"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_g3\g3\pants_aor2.paa",
			"ASEC_g3\g3\pants_aor2.paa",
			"ASEC_g3\g3\pants_aor2.paa",
			"ASEC_Cold\data\pcu_mca_co.paa",
			"ASEC_Cold\data\gunglove_co.paa"
		};
	};
	class tfl_pcu_mca_mca_g: B_Soldier_F
	{
		scope=0;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=0;
		faction="sof_rangers";
		author="Jup, Lip, Thunder";
		model="ASEC_Cold\tfl_pcu_g.p3d";
		uniformClass="tfl_pcu_mca_mca_g_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]=
		{
			"camo",
			"rightknee",
			"leftknee",
			"camo1",
			"glove"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_g3\g3\pants_mca.paa",
			"ASEC_g3\g3\pants_mca.paa",
			"ASEC_g3\g3\pants_mca.paa",
			"ASEC_Cold\data\pcu_mca_co.paa",
			"ASEC_Cold\data\gunglove_co.paa"
		};
	};
	class tfl_pcu_mca_m81_g: B_Soldier_F
	{
		scope=0;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=0;
		faction="sof_rangers";
		author="Jup, Lip, Thunder";
		model="ASEC_Cold\tfl_pcu_g.p3d";
		uniformClass="tfl_pcu_mca_m81_g_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]=
		{
			"camo",
			"rightknee",
			"leftknee",
			"camo1",
			"glove"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_g3\g3\pants_m81.paa",
			"ASEC_g3\g3\pants_m81.paa",
			"ASEC_g3\g3\pants_m81.paa",
			"ASEC_Cold\data\pcu_mca_co.paa",
			"ASEC_Cold\data\gunglove_co.paa"
		};
	};
	class tfl_pcu_mca_mcal_g: B_Soldier_F
	{
		scope=0;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=0;
		faction="sof_rangers";
		author="Jup, Lip, Thunder";
		model="ASEC_Cold\tfl_pcu_g.p3d";
		uniformClass="tfl_pcu_mca_mcal_g_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]=
		{
			"camo",
			"rightknee",
			"leftknee",
			"camo1",
			"glove"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_g3\g3\pants_mcal.paa",
			"ASEC_g3\g3\pants_mcal.paa",
			"ASEC_g3\g3\pants_mcal.paa",
			"ASEC_Cold\data\pcu_mca_co.paa",
			"ASEC_Cold\data\gunglove_co.paa"
		};
	};
	class tfl_pcu_mc_mc_g: B_Soldier_F
	{
		scope=0;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=0;
		faction="sof_rangers";
		author="Jup, Lip, Thunder";
		model="ASEC_Cold\tfl_pcu_g.p3d";
		uniformClass="tfl_pcu_mc_mc_g_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]=
		{
			"camo",
			"rightknee",
			"leftknee",
			"camo1",
			"glove"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_g3\g3\pants_mc.paa",
			"ASEC_g3\g3\pants_mc.paa",
			"ASEC_g3\g3\pants_mc.paa",
			"ASEC_Cold\data\pcu_multicam_co.paa",
			"ASEC_Cold\data\gunglove_grey_co.paa"
		};
	};
	class tfl_pcu_mc_aor1_g: B_Soldier_F
	{
		scope=0;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=0;
		faction="sof_rangers";
		author="Jup, Lip, Thunder";
		model="ASEC_Cold\tfl_pcu_g.p3d";
		uniformClass="tfl_pcu_mc_aor1_g_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]=
		{
			"camo",
			"rightknee",
			"leftknee",
			"camo1",
			"glove"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_g3\g3\pants_aor1.paa",
			"ASEC_g3\g3\pants_aor1.paa",
			"ASEC_g3\g3\pants_aor1.paa",
			"ASEC_Cold\data\pcu_multicam_co.paa",
			"ASEC_Cold\data\gunglove_grey_co.paa"
		};
	};
	class tfl_pcu_mc_aor2_g: B_Soldier_F
	{
		scope=0;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=0;
		faction="sof_rangers";
		author="Jup, Lip, Thunder";
		model="ASEC_Cold\tfl_pcu_g.p3d";
		uniformClass="tfl_pcu_mc_aor2_g_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]=
		{
			"camo",
			"rightknee",
			"leftknee",
			"camo1",
			"glove"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_g3\g3\pants_aor2.paa",
			"ASEC_g3\g3\pants_aor2.paa",
			"ASEC_g3\g3\pants_aor2.paa",
			"ASEC_Cold\data\pcu_multicam_co.paa",
			"ASEC_Cold\data\gunglove_grey_co.paa"
		};
	};
	class tfl_pcu_mc_mca_g: B_Soldier_F
	{
		scope=0;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=0;
		faction="sof_rangers";
		author="Jup, Lip, Thunder";
		model="ASEC_Cold\tfl_pcu_g.p3d";
		uniformClass="tfl_pcu_mc_mca_g_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]=
		{
			"camo",
			"rightknee",
			"leftknee",
			"camo1",
			"glove"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_g3\g3\pants_mca.paa",
			"ASEC_g3\g3\pants_mca.paa",
			"ASEC_g3\g3\pants_mca.paa",
			"ASEC_Cold\data\pcu_multicam_co.paa",
			"ASEC_Cold\data\gunglove_grey_co.paa"
		};
	};
	class tfl_pcu_mc_m81_g: B_Soldier_F
	{
		scope=0;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=0;
		faction="sof_rangers";
		author="Jup, Lip, Thunder";
		model="ASEC_Cold\tfl_pcu_g.p3d";
		uniformClass="tfl_pcu_mc_m81_g_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]=
		{
			"camo",
			"rightknee",
			"leftknee",
			"camo1",
			"glove"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_g3\g3\pants_m81.paa",
			"ASEC_g3\g3\pants_m81.paa",
			"ASEC_g3\g3\pants_m81.paa",
			"ASEC_Cold\data\pcu_multicam_co.paa",
			"ASEC_Cold\data\gunglove_grey_co.paa"
		};
	};
	class tfl_pcu_mc_mcal_g: B_Soldier_F
	{
		scope=0;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=0;
		faction="sof_rangers";
		author="Jup, Lip, Thunder";
		model="ASEC_Cold\tfl_pcu_g.p3d";
		uniformClass="tfl_pcu_mc_mcal_g_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]=
		{
			"camo",
			"rightknee",
			"leftknee",
			"camo1",
			"glove"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_g3\g3\pants_mcal.paa",
			"ASEC_g3\g3\pants_mcal.paa",
			"ASEC_g3\g3\pants_mcal.paa",
			"ASEC_Cold\data\pcu_multicam_co.paa",
			"ASEC_Cold\data\gunglove_grey_co.paa"
		};
	};
	class tfl_pcu_brown_mc_g: B_Soldier_F
	{
		scope=0;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=0;
		faction="sof_rangers";
		author="Jup, Lip, Thunder";
		model="ASEC_Cold\tfl_pcu_g.p3d";
		uniformClass="tfl_pcu_brown_mc_g_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]=
		{
			"camo",
			"rightknee",
			"leftknee",
			"camo1",
			"glove"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_g3\g3\pants_mc.paa",
			"ASEC_g3\g3\pants_mc.paa",
			"ASEC_g3\g3\pants_mc.paa",
			"ASEC_Cold\data\pcu_brown_co.paa",
			"ASEC_Cold\data\gunglove_co.paa"
		};
	};
	class tfl_pcu_brown_aor1_g: B_Soldier_F
	{
		scope=0;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=0;
		faction="sof_rangers";
		author="Jup, Lip, Thunder";
		model="ASEC_Cold\tfl_pcu_g.p3d";
		uniformClass="tfl_pcu_brown_aor1_g_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]=
		{
			"camo",
			"rightknee",
			"leftknee",
			"camo1",
			"glove"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_g3\g3\pants_aor1.paa",
			"ASEC_g3\g3\pants_aor1.paa",
			"ASEC_g3\g3\pants_aor1.paa",
			"ASEC_Cold\data\pcu_brown_co.paa",
			"ASEC_Cold\data\gunglove_co.paa"
		};
	};
	class tfl_pcu_brown_aor2_g: B_Soldier_F
	{
		scope=0;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=0;
		faction="sof_rangers";
		author="Jup, Lip, Thunder";
		model="ASEC_Cold\tfl_pcu_g.p3d";
		uniformClass="tfl_pcu_brown_aor2_g_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]=
		{
			"camo",
			"rightknee",
			"leftknee",
			"camo1",
			"glove"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_g3\g3\pants_aor2.paa",
			"ASEC_g3\g3\pants_aor2.paa",
			"ASEC_g3\g3\pants_aor2.paa",
			"ASEC_Cold\data\pcu_brown_co.paa",
			"ASEC_Cold\data\gunglove_co.paa"
		};
	};
	class tfl_pcu_brown_mca_g: B_Soldier_F
	{
		scope=0;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=0;
		faction="sof_rangers";
		author="Jup, Lip, Thunder";
		model="ASEC_Cold\tfl_pcu_g.p3d";
		uniformClass="tfl_pcu_brown_mca_g_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]=
		{
			"camo",
			"rightknee",
			"leftknee",
			"camo1",
			"glove"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_g3\g3\pants_mca.paa",
			"ASEC_g3\g3\pants_mca.paa",
			"ASEC_g3\g3\pants_mca.paa",
			"ASEC_Cold\data\pcu_brown_co.paa",
			"ASEC_Cold\data\gunglove_co.paa"
		};
	};
	class tfl_pcu_brown_m81_g: B_Soldier_F
	{
		scope=0;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=0;
		faction="sof_rangers";
		author="Jup, Lip, Thunder";
		model="ASEC_Cold\tfl_pcu_g.p3d";
		uniformClass="tfl_pcu_brown_m81_g_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]=
		{
			"camo",
			"rightknee",
			"leftknee",
			"camo1",
			"glove"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_g3\g3\pants_m81.paa",
			"ASEC_g3\g3\pants_m81.paa",
			"ASEC_g3\g3\pants_m81.paa",
			"ASEC_Cold\data\pcu_brown_co.paa",
			"ASEC_Cold\data\gunglove_co.paa"
		};
	};
	class tfl_pcu_brown_mcal_g: B_Soldier_F
	{
		scope=0;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=0;
		faction="sof_rangers";
		author="Jup, Lip, Thunder";
		model="ASEC_Cold\tfl_pcu_g.p3d";
		uniformClass="tfl_pcu_brown_mcal_g_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]=
		{
			"camo",
			"rightknee",
			"leftknee",
			"camo1",
			"glove"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_g3\g3\pants_mcal.paa",
			"ASEC_g3\g3\pants_mcal.paa",
			"ASEC_g3\g3\pants_mcal.paa",
			"ASEC_Cold\data\pcu_brown_co.paa",
			"ASEC_Cold\data\gunglove_co.paa"
		};
	};
};
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
		author="Jup, Lip, Thunder";
		scope=0;
		scopeArsenal=0;
		weaponPoolAvailable=1;
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0;
		displayName="[ASEC] Fleece Hat Green";
		picture="";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cold\data\fleece_rg_co.paa"
		};
		model="ASEC_Cold\fleece.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=5;
			eden=2;
			uniformModel="ASEC_Cold\fleece.p3d";
			hiddenSelections[]=
			{
				"Camo"
			};
			hiddenSelectionsTextures[]=
			{
				"ASEC_Cold\data\fleece_rg_co.paa"
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
		author="Jup, Lip, Thunder";
		scope=0;
		scopeArsenal=0;
		weaponPoolAvailable=1;
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0;
		displayName="[ASEC] Fleece Hat Tan";
		picture="";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cold\data\fleece_cb_co.paa"
		};
		model="ASEC_Cold\fleece.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=5;
			eden=2;
			uniformModel="ASEC_Cold\fleece.p3d";
			hiddenSelections[]=
			{
				"Camo"
			};
			hiddenSelectionsTextures[]=
			{
				"ASEC_Cold\data\fleece_cb_co.paa"
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
		author="Jup, Lip, Thunder";
		scope=0;
		scopeArsenal=0;
		weaponPoolAvailable=1;
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.30000001;
		displayName="[ASEC] Fleece Hat Peltors Green";
		picture="";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cold\data\fleece_rg_co.paa"
		};
		model="ASEC_Cold\fleece_peltors.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=5;
			eden=2;
			uniformModel="ASEC_Cold\fleece_peltors.p3d";
			hiddenSelections[]=
			{
				"Camo"
			};
			hiddenSelectionsTextures[]=
			{
				"ASEC_Cold\data\fleece_rg_co.paa"
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
		author="Jup, Lip, Thunder";
		scope=0;
		scopeArsenal=0;
		weaponPoolAvailable=1;
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.30000001;
		displayName="[ASEC] Fleece Hat Peltors Tan";
		picture="";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cold\data\fleece_cb_co.paa"
		};
		model="ASEC_Cold\fleece_peltors.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=5;
			eden=2;
			uniformModel="ASEC_Cold\fleece_peltors.p3d";
			hiddenSelections[]=
			{
				"Camo"
			};
			hiddenSelectionsTextures[]=
			{
				"ASEC_Cold\data\fleece_cb_co.paa"
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
		author="Jup, Lip, Thunder";
		scope=0;
		scopeArsenal=0;
		weaponPoolAvailable=1;
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0;
		displayName="[ASEC] Beanie";
		picture="";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cold\data\beanie_co.paa"
		};
		model="ASEC_Cold\beanie.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=5;
			eden=2;
			uniformModel="ASEC_Cold\beanie.p3d";
			hiddenSelections[]=
			{
				"Camo"
			};
			hiddenSelectionsTextures[]=
			{
				"ASEC_Cold\data\beanie_co.paa"
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
		author="Jup, Lip, Thunder";
		scope=0;
		scopeArsenal=0;
		weaponPoolAvailable=1;
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0;
		displayName="[ASEC] Beanie Green";
		picture="";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cold\data\beanie_rg_co.paa"
		};
		model="ASEC_Cold\beanie.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=5;
			eden=2;
			uniformModel="ASEC_Cold\beanie.p3d";
			hiddenSelections[]=
			{
				"Camo"
			};
			hiddenSelectionsTextures[]=
			{
				"ASEC_Cold\data\beanie_rg_co.paa"
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
		author="Jup, Lip, Thunder";
		scope=0;
		scopeArsenal=0;
		weaponPoolAvailable=1;
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0;
		displayName="[ASEC] Beanie Tan";
		picture="";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cold\data\beanie_cb_co.paa"
		};
		model="ASEC_Cold\beanie.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=5;
			eden=2;
			uniformModel="ASEC_Cold\beanie.p3d";
			hiddenSelections[]=
			{
				"Camo"
			};
			hiddenSelectionsTextures[]=
			{
				"ASEC_Cold\data\beanie_cb_co.paa"
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
		author="Jup, Lip, Thunder";
		scope=0;
		scopeArsenal=0;
		weaponPoolAvailable=1;
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.30000001;
		displayName="[ASEC] Beanie Peltors";
		picture="";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cold\data\beanie_co.paa"
		};
		model="ASEC_Cold\beanie_peltors.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=5;
			eden=2;
			uniformModel="ASEC_Cold\beanie_peltors.p3d";
			hiddenSelections[]=
			{
				"Camo"
			};
			hiddenSelectionsTextures[]=
			{
				"ASEC_Cold\data\beanie_co.paa"
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
		author="Jup, Lip, Thunder";
		scope=0;
		scopeArsenal=0;
		weaponPoolAvailable=1;
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.30000001;
		displayName="[ASEC] Beanie Peltors Green";
		picture="";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cold\data\beanie_rg_co.paa"
		};
		model="ASEC_Cold\beanie_peltors.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=5;
			eden=2;
			uniformModel="ASEC_Cold\beanie_peltors.p3d";
			hiddenSelections[]=
			{
				"Camo"
			};
			hiddenSelectionsTextures[]=
			{
				"ASEC_Cold\data\beanie_rg_co.paa"
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
		author="Jup, Lip, Thunder";
		scope=0;
		scopeArsenal=0;
		weaponPoolAvailable=1;
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.30000001;
		displayName="[ASEC] Beanie Peltors Tan";
		picture="";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ASEC_Cold\data\beanie_cb_co.paa"
		};
		model="ASEC_Cold\beanie_peltors.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=5;
			eden=2;
			uniformModel="ASEC_Cold\beanie_peltors.p3d";
			hiddenSelections[]=
			{
				"Camo"
			};
			hiddenSelectionsTextures[]=
			{
				"ASEC_Cold\data\beanie_cb_co.paa"
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
		scope=0;
		scopeArsenal=0;
		author="Jup, Lip, Thunder";
		displayName="[ASEC] G3 Puff (BLACK/MC)";
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
		scope=0;
		scopeArsenal=0;
		author="Jup, Lip, Thunder";
		displayName="[ASEC] G3 Puff (BLACK/AOR1)";
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
		scope=0;
		scopeArsenal=0;
		author="Jup, Lip, Thunder";
		displayName="[ASEC] G3 Puff (BLACK/AOR2)";
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
		scope=0;
		scopeArsenal=0;
		author="Jup, Lip, Thunder";
		displayName="[ASEC] G3 Puff (BLACK/MCA)";
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
		scope=0;
		scopeArsenal=0;
		author="Jup, Lip, Thunder";
		displayName="[ASEC] G3 Puff (BLACK/M81)";
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
		scope=0;
		scopeArsenal=0;
		author="Jup, Lip, Thunder";
		displayName="[ASEC] G3 Puff (BLACK/MCAL)";
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
		scope=0;
		scopeArsenal=0;
		author="Jup, Lip, Thunder";
		displayName="[ASEC] G3 Puff (SAND/MC)";
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
		scope=0;
		scopeArsenal=0;
		author="Jup, Lip, Thunder";
		displayName="[ASEC] G3 Puff (SAND/AOR1)";
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
		scope=0;
		scopeArsenal=0;
		author="Jup, Lip, Thunder";
		displayName="[ASEC] G3 Puff (SAND/AOR2)";
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
		scope=0;
		scopeArsenal=0;
		author="Jup, Lip, Thunder";
		displayName="[ASEC] G3 Puff (SAND/MCA)";
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
		scope=0;
		scopeArsenal=0;
		author="Jup, Lip, Thunder";
		displayName="[ASEC] G3 Puff (SAND/M81)";
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
		scope=0;
		scopeArsenal=0;
		author="Jup, Lip, Thunder";
		displayName="[ASEC] G3 Puff (SAND/MCAL)";
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
		scope=0;
		scopeArsenal=0;
		author="Jup, Lip, Thunder";
		displayName="[ASEC] G3 PCU (GREY/MC)";
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
		scope=0;
		scopeArsenal=0;
		author="Jup, Lip, Thunder";
		displayName="[ASEC] G3 PCU (GREY/AOR1)";
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
		scope=0;
		scopeArsenal=0;
		author="Jup, Lip, Thunder";
		displayName="[ASEC] G3 PCU (GREY/AOR2)";
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
		scope=0;
		scopeArsenal=0;
		author="Jup, Lip, Thunder";
		displayName="[ASEC] G3 PCU (GREY/MCA)";
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
		scope=0;
		scopeArsenal=0;
		author="Jup, Lip, Thunder";
		displayName="[ASEC] G3 PCU (GREY/M81)";
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
		scope=0;
		scopeArsenal=0;
		author="Jup, Lip, Thunder";
		displayName="[ASEC] G3 PCU (GREY/MCAL)";
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
		scope=0;
		scopeArsenal=0;
		author="Jup, Lip, Thunder";
		displayName="[ASEC] G3 PCU (BLACK/MC)";
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
		scope=0;
		scopeArsenal=0;
		author="Jup, Lip, Thunder";
		displayName="[ASEC] G3 PCU (BLACK/AOR1)";
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
		scope=0;
		scopeArsenal=0;
		author="Jup, Lip, Thunder";
		displayName="[ASEC] G3 PCU (BLACK/AOR2)";
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
		scope=0;
		scopeArsenal=0;
		author="Jup, Lip, Thunder";
		displayName="[ASEC] G3 PCU (BLACK/MCA)";
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
		scope=0;
		scopeArsenal=0;
		author="Jup, Lip, Thunder";
		displayName="[ASEC] G3 PCU (BLACK/M81)";
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
		scope=0;
		scopeArsenal=0;
		author="Jup, Lip, Thunder";
		displayName="[ASEC] G3 PCU (BLACK/MCAL)";
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
		scope=0;
		scopeArsenal=0;
		author="Jup, Lip, Thunder";
		displayName="[ASEC] G3 PCU (MCAL/MC)";
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
		scope=0;
		scopeArsenal=0;
		author="Jup, Lip, Thunder";
		displayName="[ASEC] G3 PCU (MCAL/AOR1)";
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
		scope=0;
		scopeArsenal=0;
		author="Jup, Lip, Thunder";
		displayName="[ASEC] G3 PCU (MCAL/AOR2)";
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
		scope=0;
		scopeArsenal=0;
		author="Jup, Lip, Thunder";
		displayName="[ASEC] G3 PCU (MCAL/MCA)";
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
		scope=0;
		scopeArsenal=0;
		author="Jup, Lip, Thunder";
		displayName="[ASEC] G3 PCU (MCAL/M81)";
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
		scope=0;
		scopeArsenal=0;
		author="Jup, Lip, Thunder";
		displayName="[ASEC] G3 PCU (MCAL/MCAL)";
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
		scope=0;
		scopeArsenal=0;
		author="Jup, Lip, Thunder";
		displayName="[ASEC] G3 PCU (MC/MC)";
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
		scope=0;
		scopeArsenal=0;
		author="Jup, Lip, Thunder";
		displayName="[ASEC] G3 PCU (MC/AOR1)";
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
		scope=0;
		scopeArsenal=0;
		author="Jup, Lip, Thunder";
		displayName="[ASEC] G3 PCU (MC/AOR2)";
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
		scope=0;
		scopeArsenal=0;
		author="Jup, Lip, Thunder";
		displayName="[ASEC] G3 PCU (MC/MCA)";
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
		scope=0;
		scopeArsenal=0;
		author="Jup, Lip, Thunder";
		displayName="[ASEC] G3 PCU (MC/M81)";
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
		scope=0;
		scopeArsenal=0;
		author="Jup, Lip, Thunder";
		displayName="[ASEC] G3 PCU (MC/MCAL)";
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
		scope=0;
		scopeArsenal=0;
		author="Jup, Lip, Thunder";
		displayName="[ASEC] G3 PCU (TAN/MC)";
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
		scope=0;
		scopeArsenal=0;
		author="Jup, Lip, Thunder";
		displayName="[ASEC] G3 PCU (TAN/AOR1)";
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
		scope=0;
		scopeArsenal=0;
		author="Jup, Lip, Thunder";
		displayName="[ASEC] G3 PCU (TAN/AOR2)";
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
		scope=0;
		scopeArsenal=0;
		author="Jup, Lip, Thunder";
		displayName="[ASEC] G3 PCU (TAN/MCA)";
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
		scope=0;
		scopeArsenal=0;
		author="Jup, Lip, Thunder";
		displayName="[ASEC] G3 PCU (TAN/M81)";
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
		scope=0;
		scopeArsenal=0;
		author="Jup, Lip, Thunder";
		displayName="[ASEC] G3 PCU (TAN/MCAL)";
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
