class cfgvehicles {
  class Man;
  class B_Soldier_F;
  class B_Helipilot_F;
  class I_pilot_F;
  class B_diver_F;
  class B_sniper_F;
  class ReammoBox;
  class B_Kitbag_cbr;
  class B_AssaultPack_Kerry;
  class B_FieldPack_blk;
  class B_Carryall_cbr;
  class B_Bergen_rgr;
  class B_Bergen_mcamo_F;
  class gR3F_sac_moyen_CE;

  //normal backpacks
  class R3F_sac_moyen_CE_big : B_Kitbag_cbr {
    scope = 2;
    dlc = "R3F_Uniformes_mod";
    author = "Team R3F";
    displayName = "$STR_R3F_sac_moyen_CE_big";
    picture = "\R3F_uniformes\data\ui\icon_R3F_sac_moyen_CE_ca.paa";
    model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
    hiddenSelectionsTextures[] = {"\R3F_uniformes\data\sacmoyen_R3F_CE_CO.paa"};
    maximumLoad = 400;
    transportMaxWeapons = 10;
    transportMaxMagazines = 100;
    mass = 20;
  };
  // medic backpacks
  class R3F_sac_moyen_medic_CE_big : B_Bergen_rgr {
    scope = 2;
    dlc = "R3F_Uniformes_mod";
    author = "Team R3F";
    displayName = "$STR_R3F_sac_moyen_medic_CE";
    picture = "\R3F_uniformes\data\ui\icon_R3F_sac_moyen_medic_CE_ca.paa";
    model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Small";
    hiddenSelectionsTextures[] = {
        "\R3F_uniformes\data\sacmoyen_R3F_medic_CE_CO.paa"};
    maximumLoad = 400;
    transportMaxWeapons = 10;
    transportMaxMagazines = 100;
    mass = 20;
  };
  class R3F_sac_moyen_medic_TAN_big : B_Bergen_rgr {
    scope = 2;
    dlc = "R3F_Uniformes_mod";
    author = "Team R3F";
    displayName = "$STR_R3F_sac_moyen_medic_TAN";
    picture = "\R3F_uniformes\data\ui\icon_R3F_sac_moyen_medic_TAN_ca.paa";
    model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Small";
    hiddenSelectionsTextures[] = {
        "\R3F_uniformes\data\sacmoyen_R3F_medic_TAN_CO.paa"};
    maximumLoad = 400;
    transportMaxWeapons = 10;
    transportMaxMagazines = 100;
    mass = 20;
  };
  class R3F_sac_moyen_medic_SNOW_big : B_Bergen_rgr {
    scope = 2;
    dlc = "R3F_Uniformes_mod";
    author = "Team R3F";
    displayName = "$STR_R3F_sac_moyen_medic_SNOW";
    picture = "\R3F_uniformes\data\ui\icon_R3F_sac_moyen_medic_SNOW_ca.paa";
    model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Small";
    hiddenSelectionsTextures[] = {
        "\R3F_uniformes\data\sacmoyen_R3F_medic_SNOW_CO.paa"};
    maximumLoad = 400;
    transportMaxWeapons = 10;
    transportMaxMagazines = 100;
    mass = 20;
  };
  // radio backpacks
  class R3F_sac_radio_TFR_Lourd_CE_big : R3F_sac_moyen_CE {
    scope = 2;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_hasLRradio = 1;
    scopeCurator = 2;
    maximumLoad = 400;
    mass = 20;
    dlc = "R3F_Uniformes_mod";
    author = "Team R3F";
    displayName = "$STR_R3F_sac_radio_TFR_CE";
    picture = "\R3F_uniformes\data\ui\icon_R3F_sac_radio_TFR_CE_ca.paa";
    model = "\R3F_uniformes\sacradioTFR.p3d";
    hiddenSelectionsTextures[] = {"\R3F_uniformes\data\sacradioTFR_CE_co.paa"};
    tf_encryptionCode = "tf_guer_radio_code";
    tf_dialog = "anprc155_radio_dialog";
    tf_subtype = "digital_lr";
    class TransportMagazines {};
    class TransportItems {};
  };
  class R3F_sac_radio_TFR_Lourd_TAN_big : R3F_sac_radio_TFR_Lourd_CE_big {
    scope = 2;
    dlc = "R3F_Uniformes_mod";
    author = "Team R3F";
    displayName = "$STR_R3F_sac_radio_TFR_TAN";
    picture = "\R3F_uniformes\data\ui\icon_R3F_sac_radio_TFR_TAN_ca.paa";
    hiddenSelectionsTextures[] = {"\R3F_uniformes\data\sacradioTFR_TAN_co.paa"};
  };
  class R3F_sac_radio_TFR_Lourd_SNOW_big : R3F_sac_radio_TFR_Lourd_CE_big {
    scope = 2;
    dlc = "R3F_Uniformes_mod";
    author = "Team R3F";
    displayName = "$STR_R3F_sac_radio_TFR_SNOW";
    picture = "\R3F_uniformes\data\ui\icon_R3F_sac_radio_TFR_SNOW_ca.paa";
    hiddenSelectionsTextures[] = {
        "\R3F_uniformes\data\sacradioTFR_SNOW_co.paa"};
  };
};
