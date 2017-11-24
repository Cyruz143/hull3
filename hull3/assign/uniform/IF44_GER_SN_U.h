class IF44_GER_SN_U {
    class Rifleman {
        headGear = "H_LIB_GER_Helmet_w";
        goggles = "";
        uniform = "U_LIB_GER_Soldier_camo_w";
        vest = "fow_v_heer_k98";
        backpack = "fow_b_heer_aframe";
    };

    class Leader : Rifleman {
        vest = "fow_v_heer_mp40_nco";
    };

    class Officer : Leader {
        headGear = "fow_h_ger_officer_cap";
        uniform = "U_LIB_GER_Scharfschutze_2_w";
    };

    class Crew : Rifleman {
        headGear = "fow_h_ger_m38_feldmutze_panzer";
        uniform = "fow_u_ger_tankcrew_01_shutz";
        vest = "fow_v_heer_tankcrew_p38";
        backpack = "fow_b_heer_aframe";
    };

    class CO : Officer {
        uniform = "U_LIB_GER_Scharfschutze_2_w";
        vest = "fow_v_heer_mp40_nco";
    };

    class XO : CO {
        backpack = "fow_b_torn_radio";
    };

    class SL : Officer {
        uniform = "U_LIB_GER_Scharfschutze_2_w";
    };

    class Medic : Rifleman {
        backpack = "fow_b_tornister_medic";
        vest = "fow_v_heer_g43";
        uniform = "U_LIB_GER_Scharfschutze_2_w";
        headGear = "H_LIB_GER_Helmet_Medic";
    };

    class FTL : Leader {
        headGear = "H_LIB_GER_Fieldcap";
        uniform = "U_LIB_GER_Scharfschutze_2_w";
        vest = "fow_v_heer_mp44";
    };

    class AR : Rifleman {
        vest = "fow_v_heer_mg";
        headGear = "H_LIB_GER_Helmet_Glasses_w";
        uniform = "U_LIB_GER_Soldier_camo_w";
        backpack = "fow_b_heer_ammo_belt";
    };

    class AAR : Rifleman {
        headGear = "H_LIB_GER_Helmet_net_w";
        backpack = "fow_b_ammoboxes_mg34_42";
        vest = "fow_v_heer_k98_ass";
    };

    class RAT : Rifleman {
        uniform = "U_LIB_GER_Soldier3_w";
        vest = "fow_v_heer_g43";
        backpack = "fow_b_grenadebag";
    };

    class MMGG : AR {
    };

    class MMGAG : AAR {
        uniform = "U_LIB_GER_Scharfschutze_2_w";
        vest = "fow_v_heer_k98_ass";
        backpack = "fow_b_ammoboxes";
    };

    class HMGG : AR {
    };

    class HMGAG : AAR {
    };

    class HMGAC : HMGG {
    };

    class MATG : RAT {
        backpack = "fow_b_uk_bergenpack";
    };

    class MATAG : MATG {
        headGear = "H_LIB_GER_Helmet_net_w";
        uniform = "U_LIB_GER_Soldier_camo_w";
        vest = "fow_v_heer_mp40";
    };

    class MATAC : MATG {
    };

    class HATG : Rifleman {
    };

    class HATAG : Rifleman {
    };

    class HATAC : Rifleman {
    };

    class DHATG : Rifleman {
    };

    class DHATAG : Rifleman {
    };

    class DHATAC : Rifleman {
    };

    class SAMG : Rifleman {
    };

    class SAMAG : Rifleman {
    };

    class SAMAC : Rifleman {
    };

    class GMGG : Rifleman {
    };

    class GMGAG : Rifleman {
    };

    class GMGAC : Rifleman {
    };

    class MTRG : Rifleman {
    };

    class MTRAG : Rifleman {
    };

    class MTRAC : Rifleman {
    };

    class ENG : Rifleman {
        uniform = "U_LIB_GER_Scharfschutze_2_w";
        headGear = "H_LIB_GER_Fieldcap";
        vest = "fow_v_heer_mp40";
        backpack = "fow_b_uk_bergenpack";
    };

    class ENGA : ENG {
        uniform = "U_LIB_GER_Soldier_camo_w";
        vest = "fow_v_heer_k98";
    };

    class SN : Rifleman {
    };

    class SP : SN {
    };

    class VC : Crew {
        headGear = "fow_h_ger_headset";
        uniform = "fow_u_ger_tankcrew_01_2nd_leutnant";
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
        headGear = "H_LIB_GER_LW_PilotHelmet";
        uniform = "U_LIB_GER_LW_pilot";
        vest = "V_LIB_GER_OfficerBelt";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};