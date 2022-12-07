class CfgPatches
{
	class ASEC_JPC
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
	class ASECJPC1: Vest_Camo_Base
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] JPC Assaulter 1";
		model="ASEC_JPC\HyunJPC1.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="ASEC_JPC\HyunJPC1.p3d";
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
	class ASECJPC1NB: Vest_Camo_Base
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] JPC Assaulter 1 NB";
		model="ASEC_JPC\HyunJPC1NB.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="ASEC_JPC\HyunJPC1NB.p3d";
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
	class ASECJPC2: Vest_Camo_Base
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] JPC Assaulter 2";
		model="ASEC_JPC\HyunJPC2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="ASEC_JPC\HyunJPC2.p3d";
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
	class ASECJPC2NB: Vest_Camo_Base
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] JPC Assaulter 2 NB";
		model="ASEC_JPC\HyunJPC2NB.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="ASEC_JPC\HyunJPC2NB.p3d";
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
	class ASECJPC3: Vest_Camo_Base
	{
		author="Jup, Lip, Thunder";
		scope=2;
		displayName="[ASEC] JPC Assaulter 3";
		model="ASEC_JPC\HyunJPC3.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="ASEC_JPC\HyunJPC3.p3d";
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
	class ASECJPC3alt: Vest_Camo_Base
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] JPC Assaulter 3 ALT";
		model="ASEC_JPC\HyunJPC3alt.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="ASEC_JPC\HyunJPC3alt.p3d";
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
	class ASECJPC3NB: Vest_Camo_Base
	{
		author="Jup, Lip, Thunder";
		scope=2;
		displayName="[ASEC] JPC Assaulter 3 NB";
		model="ASEC_JPC\HyunJPC3NB.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="ASEC_JPC\HyunJPC3NB.p3d";
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
	class ASECJPC4: Vest_Camo_Base
	{
		author="Jup, Lip, Thunder";
		scope=2;
		displayName="[ASEC] JPC Assaulter 4";
		model="ASEC_JPC\HyunJPC4.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="ASEC_JPC\HyunJPC4.p3d";
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
	class ASECJPC4NB: Vest_Camo_Base
	{
		author="Jup, Lip, Thunder";
		scope=2;
		displayName="[ASEC] JPC Assaulter 4 NB";
		model="ASEC_JPC\HyunJPC4NB.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="ASEC_JPC\HyunJPC4NB.p3d";
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
	class ASECJTAC1: Vest_Camo_Base
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] JPC JTAC 1";
		model="ASEC_JPC\HyunJTAC1.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="ASEC_JPC\HyunJTAC1.p3d";
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
	class ASECJTAC1NB: Vest_Camo_Base
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] JPC JTAC 1 NB";
		model="ASEC_JPC\HyunJTAC1NB.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="ASEC_JPC\HyunJTAC1NB.p3d";
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
	class ASECJPCGL: Vest_Camo_Base
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] JTAC JPC GL";
		model="ASEC_JPC\HyunJPCGL.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="ASEC_JPC\HyunJPCGL.p3d";
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
	class ASECJPCGLNB: Vest_Camo_Base
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] JTAC JPC GL NB";
		model="ASEC_JPC\HyunJPCGLNB.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="ASEC_JPC\HyunJPCGLNB.p3d";
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
	class ASECMedic1: Vest_Camo_Base
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] Medic JPC 1";
		model="ASEC_JPC\HyunJPCmedic.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="ASEC_JPC\HyunJPCmedic.p3d";
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
	class NSWJPC1: Vest_Camo_Base
	{
		author="Jup, Lip, Thunder";
		scope=2;
		displayName="[ASEC] JPC Assaulter 5";
		model="ASEC_JPC\NSWJPC1.p3d";
		class ItemInfo: ItemInfo
		{
			uniformmodel="ASEC_JPC\NSWJPC1.p3d";
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
	class NSWJPC2: Vest_Camo_Base
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] JPC Assaulter 2";
		model="ASEC_JPC\NSWJPC2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformmodel="ASEC_JPC\NSWJPC2.p3d";
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
	class NSWJPC3: Vest_Camo_Base
	{
		author="Jup, Lip, Thunder";
		scope=2;
		displayName="[ASEC] JPC Assaulter 6";
		model="ASEC_JPC\NSWJPC3.p3d";
		class ItemInfo: ItemInfo
		{
			uniformmodel="ASEC_JPC\NSWJPC3.p3d";
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
	class NSWJPC4: Vest_Camo_Base
	{
		author="Jup, Lip, Thunder";
		scope=2;
		displayName="[ASEC] JPC Assaulter 7";
		model="ASEC_JPC\NSWJPC4.p3d";
		class ItemInfo: ItemInfo
		{
			uniformmodel="ASEC_JPC\NSWJPC4.p3d";
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
	class NSWJPC5: Vest_Camo_Base
	{
		author="Jup, Lip, Thunder";
		scope=2;
		displayName="[ASEC] JPC Assaulter 8";
		model="ASEC_JPC\NSWJPC5.p3d";
		class ItemInfo: ItemInfo
		{
			uniformmodel="ASEC_JPC\NSWJPC5.p3d";
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
	class NSWJPCGL: Vest_Camo_Base
	{
		author="Jup, Lip, Thunder";
		scope=2;
		displayName="[ASEC] JPC Grenadier";
		model="ASEC_JPC\NSWJPCGL.p3d";
		class ItemInfo: ItemInfo
		{
			uniformmodel="ASEC_JPC\NSWJPCGL.p3d";
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
	class NSWJPCmedic: Vest_Camo_Base
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] NSW JPC medic";
		model="ASEC_JPC\NSWJPCmedic.p3d";
		class ItemInfo: ItemInfo
		{
			uniformmodel="ASEC_JPC\NSWJPCmedic.p3d";
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
	class NSWJTAC1: Vest_Camo_Base
	{
		author="Jup, Lip, Thunder";
		scope=0;
		displayName="[ASEC] NSW JPC JTAC 1";
		model="ASEC_JPC\NSWJTAC1.p3d";
		class ItemInfo: ItemInfo
		{
			uniformmodel="ASEC_JPC\NSWJTAC1.p3d";
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

