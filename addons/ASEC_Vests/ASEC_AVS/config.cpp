class CfgPatches
{
	class ASEC_AVS
	{
		requiredAddons[]=
		{
			"A3_Characters_F"
		};
		requiredVersion=1;
		units[]={};
		weapons[]={};
	};
};
class cfgWeapons
{
	class ItemCore;
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	class ASEC_AVS_1: Vest_Camo_Base
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] AVS 1";
		model="ASEC_AVS\AVS1.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="ASEC_AVS\AVS1.p3d";
			containerClass="Supply500";
			mass=5;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class ASEC_AVS_1_alt: Vest_Camo_Base
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] AVS 1 Alt";
		model="ASEC_AVS\AVS1ALT.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="ASEC_AVS\AVS1ALT.p3d";
			containerClass="Supply500";
			mass=5;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class ASEC_AVS_1_nb: Vest_Camo_Base
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] AVS 1 NB";
		model="ASEC_AVS\AVS1NB.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="ASEC_AVS\AVS1NB.p3d";
			containerClass="Supply500";
			mass=5;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class ASEC_AVS_2: Vest_Camo_Base
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] AVS 2";
		model="ASEC_AVS\AVS2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="ASEC_AVS\AVS2.p3d";
			containerClass="Supply500";
			mass=5;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class ASEC_AVS_2_nb: Vest_Camo_Base
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] AVS 2 NB";
		model="ASEC_AVS\AVS2NB.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="ASEC_AVS\AVS2NB.p3d";
			containerClass="Supply500";
			mass=5;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class ASEC_AVS_3: Vest_Camo_Base
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] AVS 3";
		model="ASEC_AVS\AVS3.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="ASEC_AVS\AVS3.p3d";
			containerClass="Supply500";
			mass=5;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class ASEC_AVS_3_nb: Vest_Camo_Base
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] AVS 3 NB";
		model="ASEC_AVS\AVS3NB.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="ASEC_AVS\AVS3NB.p3d";
			containerClass="Supply500";
			mass=5;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class ASEC_AVS_4: Vest_Camo_Base
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] AVS 4";
		model="ASEC_AVS\AVS4.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="ASEC_AVS\AVS4.p3d";
			containerClass="Supply500";
			mass=5;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class ASEC_AVS_4_nb: Vest_Camo_Base
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] AVS 4 NB";
		model="ASEC_AVS\AVS4NB.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="ASEC_AVS\AVS4NB.p3d";
			containerClass="Supply500";
			mass=5;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class ASEC_AVS_LMG: Vest_Camo_Base
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] AVS LMG";
		model="ASEC_AVS\AVSLMG.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="ASEC_AVS\AVSLMG.p3d";
			containerClass="Supply500";
			mass=5;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class ASEC_AVS_LMG_nb: Vest_Camo_Base
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] AVS LMG NB";
		model="ASEC_AVS\AVSLMGNB.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="ASEC_AVS\AVSLMGNB.p3d";
			containerClass="Supply500";
			mass=5;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class ASEC_AVS_GL: Vest_Camo_Base
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] AVS GL";
		model="ASEC_AVS\AVSGL.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="ASEC_AVS\AVSGL.p3d";
			containerClass="Supply500";
			mass=5;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class ASEC_AVS_GL_nb: Vest_Camo_Base
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] AVS GL NB";
		model="ASEC_AVS\AVSGLNB.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="ASEC_AVS\AVSGLNB.p3d";
			containerClass="Supply500";
			mass=5;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class ASEC_AVS_sim_1: Vest_Camo_Base
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] AVS Light 1";
		model="ASEC_AVS\AVSsim1.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="ASEC_AVS\AVSsim1.p3d";
			containerClass="Supply500";
			mass=5;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class ASEC_AVS_sim_2: Vest_Camo_Base
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] AVS Light 2";
		model="ASEC_AVS\AVSsim2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="ASEC_AVS\AVSsim2.p3d";
			containerClass="Supply500";
			mass=5;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class ASEC_AVS_sim_3: Vest_Camo_Base
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] AVS Light 3";
		model="ASEC_AVS\AVSsim3.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="ASEC_AVS\AVSsim3.p3d";
			containerClass="Supply500";
			mass=5;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class NSW_AVS_1: Vest_Camo_Base
	{
		author="Jup, Lip, Thunder";
		scope=2;
		displayName="[ASEC] AVS Assaulter 1";
		model="ASEC_AVS\NSWAVS1.p3d";
		class ItemInfo: ItemInfo
		{
			uniformmodel="ASEC_AVS\NSWAVS1.p3d";
			containerClass="Supply500";
			mass=5;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class NSW_AVS_2: Vest_Camo_Base
	{
		author="Jup, Lip, Thunder";
		scope=2;
		displayName="[ASEC] AVS Assaulter 2";
		model="ASEC_AVS\NSWAVS2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformmodel="ASEC_AVS\NSWAVS2.p3d";
			containerClass="Supply500";
			mass=5;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class NSW_AVS_3: Vest_Camo_Base
	{
		author="Jup, Lip, Thunder";
		scope=2;
		displayName="[ASEC] AVS Assaulter 3";
		model="ASEC_AVS\NSWAVS3.p3d";
		class ItemInfo: ItemInfo
		{
			uniformmodel="ASEC_AVS\NSWAVS3.p3d";
			containerClass="Supply500";
			mass=5;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class NSW_AVS_4: Vest_Camo_Base
	{
		author="Jup, Lip, Thunder";
		scope=2;
		displayName="[ASEC] AVS Assaulter 4";
		model="ASEC_AVS\NSWAVS4.p3d";
		class ItemInfo: ItemInfo
		{
			uniformmodel="ASEC_AVS\NSWAVS4.p3d";
			containerClass="Supply500";
			mass=5;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class NSW_AVS_LMG: Vest_Camo_Base
	{
		author="Jup, Lip, Thunder";
		scope=2;
		displayName="[ASEC] AVS LMG";
		model="ASEC_AVS\NSWAVSLMG.p3d";
		class ItemInfo: ItemInfo
		{
			uniformmodel="ASEC_AVS\NSWAVSLMG.p3d";
			containerClass="Supply500";
			mass=5;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class NSW_AVS_CCT: Vest_Camo_Base
	{
		author="Jup, Lip, Thunder";
		scope=2;
		displayName="[ASEC] AVS CCT";
		model="ASEC_AVS\NSWAVSCCT.p3d";
		class ItemInfo: ItemInfo
		{
			uniformmodel="ASEC_AVS\NSWAVSCCT.p3d";
			containerClass="Supply500";
			mass=5;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
};
