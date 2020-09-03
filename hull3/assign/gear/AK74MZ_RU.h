class AK74MZ_RU {
    class Rifleman {
        primaryWeapon = "CUP_arifle_AK74M_railed";
        primaryWeaponItems[] = {"CUP_optic_TrijiconRx01_black", "CUP_acc_Flashlight"};
        secondaryWeapon = "";
        secondaryWeaponItems[] = {};
        handgunWeapon = "";
        handgunItems[] = {};
        uniformWeapons[] = {};
        vestWeapons[] = {};
        backpackWeapons[] = {};
        uniformMagazines[] = {
            {"HandGrenade", 1},
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        vestMagazines[] = {
            {"CUP_30Rnd_545x39_AK74M_M", 6},
            {"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_30Rnd_545x39_AK74M_M", 4},
            {"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M", 2}
        };
        basicAssignItems[] = {"ItemMap", "ItemCompass", "ItemWatch"};
        assignItems[] = {};
        binocular = "";
        uniformItems[] = {
            {"ACE_Flashlight_KSF1", 1},
            {"ACE_wirecutter", 1}
        };
        vestItems[] = {};
        backpackItems[] = {};
        uniformRadios[] = {"ACRE_PRC343"};
        vestRadios[] = {};
        backpackRadios[] = {};
        uniformMedicalItems[] = {
            {"ACE_fieldDressing", 10},
            {"ACE_tourniquet", 2}
        };
        vestMedicalItems[] = {};
        backpackMedicalItems[] = {};
        code = "";
        headGear = "";
        uniform = "";
        goggles = "";
        vest = "";
        backpack = "";
    };

    class Leader : Rifleman {
        primaryWeapon = "CUP_arifle_AK74M_GL_railed";
        primaryWeaponItems[] = {"CUP_optic_Eotech553_Black", "CUP_acc_Flashlight"};
        handgunWeapon = "hgun_Rook40_F";
        vestMagazines[] = {
            {"CUP_30Rnd_545x39_AK74M_M", 6},
            {"CUP_1Rnd_HE_GP25_M", 4},
            {"CUP_1Rnd_SMOKE_GP25_M", 2},
            {"CUP_1Rnd_SmokeRed_GP25_M", 2},
            {"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M", 1},
            {"16Rnd_9x21_Mag", 3}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_30Rnd_545x39_AK74M_M", 4},
            {"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M", 2},
            {"CUP_1Rnd_SMOKE_GP25_M", 2},
            {"CUP_FlareWhite_GP25_M", 2},
            {"CUP_1Rnd_SmokeRed_GP25_M", 2}
        };
        assignItems[] = {"ItemGPS"};
        binocular = "Binocular";
    };

    class Officer : Leader {
        assignItems[] = {"ItemGPS"};
        binocular = "ACE_VectorDay";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class Crew : Rifleman {
        primaryWeapon = "CUP_arifle_AKS74U_railed";
        primaryWeaponItems[] = {};
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        vestMagazines[] = {{"CUP_30Rnd_545x39_AK74M_M", 4}};
        backpackMagazines[] = {};
        assignItems[] = {"ItemGPS", "ACE_NVG_Wide"};
    };

    class CO : Officer {
    };

    class XO : CO {
        backpackMagazines[] = {
            {"CUP_1Rnd_SMOKE_GP25_M", 8},
            {"CUP_FlareWhite_GP25_M", 8},
            {"CUP_1Rnd_SmokeRed_GP25_M", 8}
        };
        backpackRadios[] = {"ACRE_PRC117F"};
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        primaryWeapon = "CUP_arifle_AKS74U_railed";
        primaryWeaponItems[] = {"CUP_optic_TrijiconRx01_black", "CUP_acc_Flashlight"};
        vestMagazines[] = {
            {"CUP_30Rnd_545x39_AK74M_M", 6},
            {"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M", 2},
            {"SmokeShell", 4}
        };
        backpackMagazines[] = {
            {"SmokeShellBlue", 4},
            {"CUP_30Rnd_545x39_AK74M_M", 2}
        };
        assignItems[] = {"ItemGPS"};
        binocular = "Binocular";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        backpackMedicalItems[] = {
            {"ACE_fieldDressing", 30},
            {"ACE_morphine", 30},
            {"ACE_epinephrine", 30},
            {"ACE_bloodIV_500", 24},
            {"ACE_splint", 4}
        };
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        primaryWeapon = "CUP_arifle_RPK74M_railed";
        primaryWeaponItems[] = {"CUP_optic_Eotech553_Black", "CUP_acc_Flashlight"};
        vestMagazines[] = {{"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M", 2}};
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M", 6}
        };
    };

    class AAR : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M", 4}
        };
        binocular = "Binocular";
    };

    class RAT : Rifleman {
        secondaryWeapon = "CUP_launch_RPG7V";
        secondaryWeaponItems[] = {"CUP_PG7VL_M"};
        vestMagazines[] = {
            {"CUP_30Rnd_545x39_AK74M_M", 6},
            {"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_30Rnd_545x39_AK74M_M", 4},
            {"CUP_PG7VL_M", 2}
        };
    };

    class MMGG : Rifleman {
        primaryWeapon = "CUP_lmg_Pecheneg";
        primaryWeaponItems[] = {"CUP_optic_PechenegScope"};
        vestMagazines[] = {{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", 1}};
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", 3}
        };
    };

    class MMGAG : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M", 2},
            {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", 3}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class HMGG : Rifleman {
        primaryWeapon = "CUP_arifle_AKS74U_railed";
        primaryWeaponItems[] = {"CUP_optic_TrijiconRx01_black", "CUP_acc_Flashlight"};
        backpack = "CUP_B_Kord_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class HMGAG : HMGG {
        backpack = "CUP_B_Kord_Tripod_Bag";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class HMGAC : Rifleman {
    };

    class MATG : RAT {
        primaryWeapon = "CUP_arifle_AKS74U_railed";
        primaryWeaponItems[] = {"CUP_optic_TrijiconRx01_black", "CUP_acc_Flashlight"};
        secondaryWeapon = "CUP_launch_RPG7V";
        secondaryWeaponItems[] = {"CUP_PG7VL_M", "CUP_optic_PGO7V3"};
        backpackMagazines[] = {
            {"CUP_PG7VL_M", 2},
            {"CUP_PG7VR_M", 1},
            {"CUP_OG7_M", 1}
        };
    };

    class MATAG : Rifleman {
        backpackMagazines[] = {
            {"CUP_PG7VL_M", 2},
            {"CUP_PG7VR_M", 1},
            {"CUP_OG7_M", 1}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class MATAC : MATAG {
        assignItems[] = {};
        binocular = "Binocular";
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class HATG : MATG {
        primaryWeapon = "CUP_arifle_AKS74U_railed";
        primaryWeaponItems[] = {"CUP_optic_TrijiconRx01_black", "CUP_acc_Flashlight"};
        secondaryWeapon = "CUP_launch_Metis";
        secondaryWeaponItems[] = {"CUP_AT13_M"};
        backpackMagazines[] = {{"CUP_AT13_M", 1}};
    };

    class HATAG : MATAG {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"CUP_AT13_M", 1}
        };
    };

    class HATAC : HATAG {
        assignItems[] = {};
        binocular = "Binocular";
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class DHATG : Rifleman {
        primaryWeapon = "CUP_arifle_AKS74U_railed";
        primaryWeaponItems[] = {"CUP_optic_TrijiconRx01_black", "CUP_acc_Flashlight"};
        backpack = "CUP_B_Metis_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class DHATAG : HMGG {
        backpack = "CUP_B_Metis_Tripod_Bag";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class DHATAC : Rifleman {
    };

    class SAMG : Rifleman {
        primaryWeapon = "CUP_arifle_AKS74U_railed";
        primaryWeaponItems[] = {"CUP_optic_TrijiconRx01_black", "CUP_acc_Flashlight"};
        secondaryWeapon = "CUP_launch_Igla";
        secondaryWeaponItems[] = {"CUP_Igla_M"};
        backpackMagazines[] = {{"CUP_Igla_M", 1}};
    };

    class SAMAG : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M", 2},
            {"CUP_Igla_M", 1}
        };
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class SAMAC : SAMAG {
        uniformRadios[] = {"ACRE_PRC343"};
        binocular = "Binocular";
        assignItems[] = {};
    };

    class GMGG : Rifleman {
        primaryWeapon = "CUP_arifle_AKS74U_railed";
        primaryWeaponItems[] = {"CUP_optic_TrijiconRx01_black", "CUP_acc_Flashlight"};
        backpack = "CUP_B_AGS30_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class GMGAG : HMGG {
        backpack = "CUP_B_AGS30_Tripod_Bag";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class GMGAC : Rifleman {
    };

    class MTRG : Rifleman {
        primaryWeapon = "CUP_arifle_AKS74U_railed";
        primaryWeaponItems[] = {"CUP_optic_TrijiconRx01_black", "CUP_acc_Flashlight"};
        backpack = "CUP_B_Podnos_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class MTRAG : MTRG {
        backpack = "CUP_B_Podnos_Bipod_Bag";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class MTRAC : Rifleman {
    };

    class ENG : Rifleman {
        primaryWeapon = "CUP_arifle_AKS74U_railed";
        primaryWeaponItems[] = {"CUP_optic_TrijiconRx01_black", "CUP_acc_Flashlight"};
        vestMagazines[] = {
            {"CUP_30Rnd_545x39_AK74M_M", 6},
            {"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M", 2}
        };
        backpackMagazines[] = {
            {"DemoCharge_Remote_Mag", 3},
            {"SLAMDirectionalMine_Wire_Mag", 2}
        };
        assignItems[] = {"ItemGPS"};
        vestItems[] = {
            {"ACE_DefusalKit", 1},
            {"ACE_M26_Clacker", 1}
        };
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class ENGA : ENG {
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class SN : Rifleman {
        primaryWeapon = "CUP_srifle_SVD";
        handgunWeapon = "hgun_Rook40_F";
        primaryWeaponItems[] = {"CUP_optic_PSO_1"};
        vestMagazines[] = {
            {"CUP_10Rnd_762x54_SVD_M", 4},
            {"16Rnd_9x21_Mag", 3}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_10Rnd_762x54_SVD_M", 3}
        };
        assignItems[] = {"ItemGPS"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class SP : Rifleman {
        binocular = "ACE_VectorDay";
        vestMagazines[] = {
            {"CUP_30Rnd_545x39_AK74M_M", 4},
            {"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M", 2}
        };
    };

    class VC : Crew {
        binocular = "ACE_VectorDay";
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
    };

    class PCM : P {
    };

    class Vehicle {
        weapons[] = {
            {"CUP_arifle_AK74M_railed", 2},
            {"CUP_launch_RPG26", 2}
        };
        magazines[] = {
            {"CUP_30Rnd_545x39_AK74M_M", 20},
            {"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M", 10},
            {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M", 10},
            {"CUP_1Rnd_SMOKE_GP25_M", 5},
            {"CUP_PG7VL_M", 2},
            {"ACE_HandFlare_White", 5},
            {"HandGrenade", 5},
            {"CUP_FlareWhite_GP25_M", 5},
            {"SmokeShell", 5}
        };
        items[] = {{"ItemGPS", 1}};
        medicalItems[] = {
            {"ACE_fieldDressing", 50},
            {"ACE_splint", 12}
        };
    };

    class Car : Vehicle {
    };

    class Truck : Vehicle {
        weapons[] = {
            {"CUP_arifle_AK74M_railed", 2},
            {"CUP_launch_RPG26", 4}
        };
        magazines[] = {
            {"CUP_30Rnd_545x39_AK74M_M", 40},
            {"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M", 20},
            {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M", 20},
            {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", 10},
            {"CUP_1Rnd_SMOKE_GP25_M", 10},
            {"CUP_PG7VL_M", 12},
            {"CUP_AT13_M", 5},
            {"SatchelCharge_Remote_Mag", 5},
            {"ACE_HandFlare_White", 10},
            {"CUP_FlareWhite_GP25_M", 10},
            {"HandGrenade", 10},
            {"SmokeShell", 10}
        };
        items[] = {
            {"ACE_M26_Clacker", 1},
            {"ItemGPS", 1}
        };
        medicalItems[] = {
            {"ACE_fieldDressing", 50},
            {"ACE_splint", 12}
        };
    };

    class Armored : Truck {
        weapons[] = {{"CUP_launch_RPG26", 4}};
        magazines[] = {
            {"CUP_30Rnd_545x39_AK74M_M", 40},
            {"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M", 20},
            {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M", 20},
            {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", 10},
            {"CUP_1Rnd_SMOKE_GP25_M", 10},
            {"CUP_PG7VL_M", 12},
            {"SatchelCharge_Remote_Mag", 5},
            {"ACE_HandFlare_White", 10},
            {"CUP_FlareWhite_GP25_M", 10},
            {"HandGrenade", 10},
            {"SmokeShell", 10}
        };
        items[] = {
            {"ACE_M26_Clacker", 1},
            {"ItemGPS", 1}
        };
        medicalItems[] = {
            {"ACE_fieldDressing", 50},
            {"ACE_splint", 12}
        };
    };

};
