class CfgPatches
{
	class ASEC_Pitvipers
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F"};
	};
};
class cfgGlasses
{
	class None;
	class ASEC_Pitvipers_test: None
	{
		displayname = "[ASEC] Pit Vipers [Test]";
		scope = 2;
		author = "Lip, Jup, Thunder";
		model = "\ASEC_Pitvipers\ASEC_Pitvipers.p3d";
		picture = "";
		mass = 5;
		identityTypes[] = {};
	};
	class ASEC_Pitvipers: None
	{
		displayname = "[ASEC] Pit Vipers [1993]";
		scope = 2;
		author = "Lip, Jup, Thunder";
		model = "\ASEC_Pitvipers\ASEC_Pitvipers.p3d";
		picture = "";
		mass = 5;
		hiddenSelections[] = {"frame", "lens_left", "lens_right", "plastic"};
		hiddenSelectionsTextures[] = {"\ASEC_Pitvipers\data\frame\_pitviper_frame_CO.paa", "\ASEC_Pitvipers\data\lens\_pitviper_lensleft_ca.paa", "\ASEC_Pitvipers\data\lens\_pitviper_lensright_ca.paa", "\ASEC_Pitvipers\data\plastic\_pitviper_plastic_CO.paa"};
		identityTypes[] = {};
	};
	class ASEC_Pitvipers_cosmos: None
	{
		displayname = "[ASEC] Pit Vipers [Cosmos]";
		scope = 2;
		author = "Lip, Jup, Thunder";
		model = "\ASEC_Pitvipers\ASEC_Pitvipers.p3d";
		picture = "";
		mass = 5;
		hiddenSelections[] = {"frame", "lens_left", "lens_right", "plastic"};
		hiddenSelectionsTextures[] = {"\ASEC_Pitvipers\data\frame\_pitviper_frame_yellow_CO.paa", "\ASEC_Pitvipers\data\lens\_pitviper_lensleft_yellow_ca.paa", "\ASEC_Pitvipers\data\lens\_pitviper_lensright_yellow_ca.paa", "\ASEC_Pitvipers\data\plastic\_pitviper_plastic_CO.paa"};
		identityTypes[] = {};
	};
	class ASEC_Pitvipers_gold: None
	{
		displayname = "[ASEC] Pit Vipers [Gold Standard]";
		scope = 2;
		author = "Lip, Jup, Thunder";
		model = "\ASEC_Pitvipers\ASEC_Pitvipers.p3d";
		picture = "";
		mass = 5;
		hiddenSelections[] = {"frame", "lens_left", "lens_right", "plastic"};
		hiddenSelectionsTextures[] = {"\ASEC_Pitvipers\data\frame\_pitviper_frame_gold_CO.paa", "\ASEC_Pitvipers\data\lens\_pitviper_lensleft_gold_ca.paa", "\ASEC_Pitvipers\data\lens\_pitviper_lensright_gold_ca.paa", "\ASEC_Pitvipers\data\plastic\_pitviper_plastic_CO.paa"};
		identityTypes[] = {};
	};
	class ASEC_Pitvipers_merika: None
	{
		displayname = "[ASEC] Pit Vipers [Merika]";
		scope = 2;
		author = "Lip, Jup, Thunder";
		model = "\ASEC_Pitvipers\ASEC_Pitvipers.p3d";
		picture = "";
		mass = 5;
		hiddenSelections[] = {"frame", "lens_left", "lens_right", "plastic"};
		hiddenSelectionsTextures[] = {"\ASEC_Pitvipers\data\frame\_pitviper_frame_murica_CO.paa", "\ASEC_Pitvipers\data\lens\_pitviper_lensleft_murica_ca.paa", "\ASEC_Pitvipers\data\lens\_pitviper_lensright_murica_ca.paa", "\ASEC_Pitvipers\data\plastic\_pitviper_plastic_CO.paa"};
		identityTypes[] = {};
	};
	class ASEC_Pitvipers_merika_clear: None
	{
		displayname = "[ASEC] Pit Vipers [Merika Clear]";
		scope = 2;
		author = "Lip, Jup, Thunder";
		model = "\ASEC_Pitvipers\ASEC_Pitvipers.p3d";
		picture = "";
		mass = 5;
		hiddenSelections[] = {"frame", "lens_left", "lens_right", "plastic"};
		hiddenSelectionsTextures[] = {"\ASEC_Pitvipers\data\frame\_pitviper_frame_murica_CO.paa", "\ASEC_Pitvipers\data\lens\_pitviper_lensleft_mclear_ca.paa", "\ASEC_Pitvipers\data\lens\_pitviper_lensright_mclear_ca.paa", "\ASEC_Pitvipers\data\plastic\_pitviper_plastic_CO.paa"};
		identityTypes[] = {};
	};
	class ASEC_Pitvipers_tropics: None
	{
		displayname = "[ASEC] Pit Vipers [Hot Tropics]";
		scope = 2;
		author = "Lip, Jup, Thunder";
		model = "\ASEC_Pitvipers\ASEC_Pitvipers.p3d";
		picture = "";
		mass = 5;
		hiddenSelections[] = {"frame", "lens_left", "lens_right", "plastic"};
		hiddenSelectionsTextures[] = {"\ASEC_Pitvipers\data\frame\_pitviper_frame_tropics_CO.paa", "\ASEC_Pitvipers\data\lens\_pitviper_lensleft_tropics_ca.paa", "\ASEC_Pitvipers\data\lens\_pitviper_lensright_tropics_ca.paa", "\ASEC_Pitvipers\data\plastic\_pitviper_plastic_CO.paa"};
		identityTypes[] = {};
	};
	class ASEC_Pitvipers_brights: None
	{
		displayname = "[ASEC] Pit Vipers [LA Brights]";
		scope = 2;
		author = "Lip, Jup, Thunder";
		model = "\ASEC_Pitvipers\ASEC_Pitvipers.p3d";
		picture = "";
		mass = 5;
		hiddenSelections[] = {"frame", "lens_left", "lens_right", "plastic"};
		hiddenSelectionsTextures[] = {"\ASEC_Pitvipers\data\frame\_pitviper_frame_brights_CO.paa", "\ASEC_Pitvipers\data\lens\_pitviper_lensleft_brights_ca.paa", "\ASEC_Pitvipers\data\lens\_pitviper_lensright_brights_ca.paa", "\ASEC_Pitvipers\data\plastic\_pitviper_plastic_CO.paa"};
		identityTypes[] = {};
	};
	class ASEC_Pitvipers_brights_clear: None
	{
		displayname = "[ASEC] Pit Vipers [LA Brights Clear]";
		scope = 2;
		author = "Lip, Jup, Thunder";
		model = "\ASEC_Pitvipers\ASEC_Pitvipers.p3d";
		picture = "";
		mass = 5;
		hiddenSelections[] = {"frame", "lens_left", "lens_right", "plastic"};
		hiddenSelectionsTextures[] = {"\ASEC_Pitvipers\data\frame\_pitviper_frame_brights_CO.paa", "\ASEC_Pitvipers\data\lens\_pitviper_lensleft_bclear_ca.paa", "\ASEC_Pitvipers\data\lens\_pitviper_lensright_bclear_ca.paa", "\ASEC_Pitvipers\data\plastic\_pitviper_plastic_CO.paa"};
		identityTypes[] = {};
	};
	class ASEC_Pitvipers_blacking: None
	{
		displayname = "[ASEC] Pit Vipers [Blacking Out]";
		scope = 2;
		author = "Lip, Jup, Thunder";
		model = "\ASEC_Pitvipers\ASEC_Pitvipers.p3d";
		picture = "";
		mass = 5;
		hiddenSelections[] = {"frame", "lens_left", "lens_right", "plastic"};
		hiddenSelectionsTextures[] = {"\ASEC_Pitvipers\data\frame\_pitviper_frame_blacking_CO.paa", "\ASEC_Pitvipers\data\lens\_pitviper_lensleft_blacking_ca.paa", "\ASEC_Pitvipers\data\lens\_pitviper_lensright_blacking_ca.paa", "\ASEC_Pitvipers\data\plastic\_pitviper_plastic_CO.paa"};
		identityTypes[] = {};
	};
	/// alt ///
	class ASEC_Pitvipers_cosmos_alt: None
	{
		displayname = "[ASEC] Pit Vipers Alt [Cosmos]";
		scope = 2;
		author = "Lip, Jup, Thunder";
		model = "\ASEC_Pitvipers\ASEC_Pitvipers_alt.p3d";
		picture = "";
		mass = 5;
		hiddenSelections[] = {"frame", "lens_left", "lens_right", "plastic"};
		hiddenSelectionsTextures[] = {"\ASEC_Pitvipers\data\frame\_pitviper_frame_yellow_CO.paa", "\ASEC_Pitvipers\data\lens\_pitviper_lensleft_yellow_co.paa", "\ASEC_Pitvipers\data\lens\_pitviper_lensright_yellow_co.paa", "\ASEC_Pitvipers\data\plastic\_pitviper_plastic_CO.paa"};
		identityTypes[] = {};
	};
	class ASEC_Pitvipers_gold_alt: None
	{
		displayname = "[ASEC] Pit Vipers Alt [Gold Standard]";
		scope = 2;
		author = "Lip, Jup, Thunder";
		model = "\ASEC_Pitvipers\ASEC_Pitvipers_alt.p3d";
		picture = "";
		mass = 5;
		hiddenSelections[] = {"frame", "lens_left", "lens_right", "plastic"};
		hiddenSelectionsTextures[] = {"\ASEC_Pitvipers\data\frame\_pitviper_frame_gold_CO.paa", "\ASEC_Pitvipers\data\lens\_pitviper_lensleft_gold_co.paa", "\ASEC_Pitvipers\data\lens\_pitviper_lensright_gold_co.paa", "\ASEC_Pitvipers\data\plastic\_pitviper_plastic_CO.paa"};
		identityTypes[] = {};
	};
	class ASEC_Pitvipers_merika_alt: None
	{
		displayname = "[ASEC] Pit Vipers Alt [Merika]";
		scope = 2;
		author = "Lip, Jup, Thunder";
		model = "\ASEC_Pitvipers\ASEC_Pitvipers_alt.p3d";
		picture = "";
		mass = 5;
		hiddenSelections[] = {"frame", "lens_left", "lens_right", "plastic"};
		hiddenSelectionsTextures[] = {"\ASEC_Pitvipers\data\frame\_pitviper_frame_murica_CO.paa", "\ASEC_Pitvipers\data\lens\_pitviper_lensleft_murica_co.paa", "\ASEC_Pitvipers\data\lens\_pitviper_lensright_murica_co.paa", "\ASEC_Pitvipers\data\plastic\_pitviper_plastic_CO.paa"};
		identityTypes[] = {};
	};
	class ASEC_Pitvipers_tropics_alt: None
	{
		displayname = "[ASEC] Pit Vipers Alt [Hot Tropics]";
		scope = 2;
		author = "Lip, Jup, Thunder";
		model = "\ASEC_Pitvipers\ASEC_Pitvipers_alt.p3d";
		picture = "";
		mass = 5;
		hiddenSelections[] = {"frame", "lens_left", "lens_right", "plastic"};
		hiddenSelectionsTextures[] = {"\ASEC_Pitvipers\data\frame\_pitviper_frame_tropics_CO.paa", "\ASEC_Pitvipers\data\lens\_pitviper_lensleft_tropics_co.paa", "\ASEC_Pitvipers\data\lens\_pitviper_lensright_tropics_co.paa", "\ASEC_Pitvipers\data\plastic\_pitviper_plastic_CO.paa"};
		identityTypes[] = {};
	};
	class ASEC_Pitvipers_brights_alt: None
	{
		displayname = "[ASEC] Pit Vipers Alt [LA Brights]";
		scope = 2;
		author = "Lip, Jup, Thunder";
		model = "\ASEC_Pitvipers\ASEC_Pitvipers_alt.p3d";
		picture = "";
		mass = 5;
		hiddenSelections[] = {"frame", "lens_left", "lens_right", "plastic"};
		hiddenSelectionsTextures[] = {"\ASEC_Pitvipers\data\frame\_pitviper_frame_brights_CO.paa", "\ASEC_Pitvipers\data\lens\_pitviper_lensleft_brights_co.paa", "\ASEC_Pitvipers\data\lens\_pitviper_lensright_brights_co.paa", "\ASEC_Pitvipers\data\plastic\_pitviper_plastic_CO.paa"};
		identityTypes[] = {};
	};
	class ASEC_Pitvipers_blacking_alt: None
	{
		displayname = "[ASEC] Pit Vipers Alt [Blacking Out]";
		scope = 2;
		author = "Lip, Jup, Thunder";
		model = "\ASEC_Pitvipers\ASEC_Pitvipers_alt.p3d";
		picture = "";
		mass = 5;
		hiddenSelections[] = {"frame", "lens_left", "lens_right", "plastic"};
		hiddenSelectionsTextures[] = {"\ASEC_Pitvipers\data\frame\_pitviper_frame_blacking_CO.paa", "\ASEC_Pitvipers\data\lens\_pitviper_lensleft_blacking_co.paa", "\ASEC_Pitvipers\data\lens\_pitviper_lensright_blacking_co.paa", "\ASEC_Pitvipers\data\plastic\_pitviper_plastic_CO.paa"};
		identityTypes[] = {};
	};
};