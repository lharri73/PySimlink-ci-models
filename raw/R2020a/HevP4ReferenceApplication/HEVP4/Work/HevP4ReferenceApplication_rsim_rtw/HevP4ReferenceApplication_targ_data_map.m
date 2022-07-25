  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 3;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (HevP4ReferenceApplication_P)
    ;%
      section.nData     = 117;
      section.data(117)  = dumData; %prealloc
      
	  ;% HevP4ReferenceApplication_P.LongitudinalDriver_GearInit
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% HevP4ReferenceApplication_P.SignalHold_IC
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% HevP4ReferenceApplication_P.SignalHold_IC_b
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% HevP4ReferenceApplication_P.LongitudinalDriver_Kpt
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% HevP4ReferenceApplication_P.LongitudinalDriver_L
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% HevP4ReferenceApplication_P.LongitudinalDriver_aR
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% HevP4ReferenceApplication_P.LongitudinalDriver_bR
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% HevP4ReferenceApplication_P.LongitudinalDriver_cR
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% HevP4ReferenceApplication_P.LongitudinalDriver_g
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% HevP4ReferenceApplication_P.LongitudinalDriver_m
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% HevP4ReferenceApplication_P.LongitudinalDriver_tShift
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% HevP4ReferenceApplication_P.LongitudinalDriver_tau
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% HevP4ReferenceApplication_P.u1_UpperSat
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% HevP4ReferenceApplication_P.u1_LowerSat
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% HevP4ReferenceApplication_P.u0_UpperSat
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% HevP4ReferenceApplication_P.u0_LowerSat
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% HevP4ReferenceApplication_P.Constant_Value
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% HevP4ReferenceApplication_P.Constant_Value_l
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% HevP4ReferenceApplication_P.tFinal_Value
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% HevP4ReferenceApplication_P.repeat_Value
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 19;
	
	  ;% HevP4ReferenceApplication_P.Switch_Threshold
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 20;
	
	  ;% HevP4ReferenceApplication_P.uDLookupTable_tableData
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 21;
	
	  ;% HevP4ReferenceApplication_P.uDLookupTable_bp01Data
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 2495;
	
	  ;% HevP4ReferenceApplication_P.TransferFcn_A
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 4969;
	
	  ;% HevP4ReferenceApplication_P.TransferFcn_C
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 4970;
	
	  ;% HevP4ReferenceApplication_P.mstomph_Gain
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 4971;
	
	  ;% HevP4ReferenceApplication_P.FirstOrderHold12_IniOut
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 4972;
	
	  ;% HevP4ReferenceApplication_P.FirstOrderHold12_ErrTol
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 4973;
	
	  ;% HevP4ReferenceApplication_P.SensorDynamics_A
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 4974;
	
	  ;% HevP4ReferenceApplication_P.SensorDynamics_C
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 4975;
	
	  ;% HevP4ReferenceApplication_P.radstorpm_Gain
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 4976;
	
	  ;% HevP4ReferenceApplication_P.MotorCouplingDynamics_A
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 4977;
	
	  ;% HevP4ReferenceApplication_P.MotorCouplingDynamics_C
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 4978;
	
	  ;% HevP4ReferenceApplication_P.BatteryDischargeDynamics_A
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 4979;
	
	  ;% HevP4ReferenceApplication_P.BatteryDischargeDynamics_C
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 4980;
	
	  ;% HevP4ReferenceApplication_P.Constant6_Value
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 4981;
	
	  ;% HevP4ReferenceApplication_P.Integrator_IC
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 4982;
	
	  ;% HevP4ReferenceApplication_P.mtomile_Gain
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 4983;
	
	  ;% HevP4ReferenceApplication_P.Integrator1_IC
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 4984;
	
	  ;% HevP4ReferenceApplication_P.m3toUSGal_Gain
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 4985;
	
	  ;% HevP4ReferenceApplication_P.Saturation1_UpperSat
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 4986;
	
	  ;% HevP4ReferenceApplication_P.Saturation1_LowerSat
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 4987;
	
	  ;% HevP4ReferenceApplication_P.Integrator_IC_p
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 4988;
	
	  ;% HevP4ReferenceApplication_P.mtomi_Gain
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 4989;
	
	  ;% HevP4ReferenceApplication_P.Saturation_UpperSat
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 4990;
	
	  ;% HevP4ReferenceApplication_P.Saturation_LowerSat
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 4991;
	
	  ;% HevP4ReferenceApplication_P.Integrator1_IC_k
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 4992;
	
	  ;% HevP4ReferenceApplication_P.Kgtog_Gain
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 4993;
	
	  ;% HevP4ReferenceApplication_P.Integrator2_IC
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 4994;
	
	  ;% HevP4ReferenceApplication_P.Kgtog_Gain_l
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 4995;
	
	  ;% HevP4ReferenceApplication_P.Integrator3_IC
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 4996;
	
	  ;% HevP4ReferenceApplication_P.Kgtog_Gain_f
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 4997;
	
	  ;% HevP4ReferenceApplication_P.mtokm_Gain
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 4998;
	
	  ;% HevP4ReferenceApplication_P.Saturation1_UpperSat_h
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 4999;
	
	  ;% HevP4ReferenceApplication_P.Saturation1_LowerSat_d
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 5000;
	
	  ;% HevP4ReferenceApplication_P.Integrator4_IC
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 5001;
	
	  ;% HevP4ReferenceApplication_P.Kgtog_Gain_c
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 5002;
	
	  ;% HevP4ReferenceApplication_P.wperkw_Value
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 5003;
	
	  ;% HevP4ReferenceApplication_P.USEPAkwhUSgalequivalent_Value
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 5004;
	
	  ;% HevP4ReferenceApplication_P.sperh_Value
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 5005;
	
	  ;% HevP4ReferenceApplication_P.m3pergal_Gain
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 5006;
	
	  ;% HevP4ReferenceApplication_P.mto100Km_Gain
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 5007;
	
	  ;% HevP4ReferenceApplication_P.Saturation_UpperSat_p
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 5008;
	
	  ;% HevP4ReferenceApplication_P.Saturation_LowerSat_a
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 5009;
	
	  ;% HevP4ReferenceApplication_P.Constant_Value_f
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 5010;
	
	  ;% HevP4ReferenceApplication_P.Integrator1_IC_f
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 5011;
	
	  ;% HevP4ReferenceApplication_P.Saturation_UpperSat_j
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 5012;
	
	  ;% HevP4ReferenceApplication_P.Saturation_LowerSat_f
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 5013;
	
	  ;% HevP4ReferenceApplication_P.Constant_Value_fg
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 5014;
	
	  ;% HevP4ReferenceApplication_P.Saturation_UpperSat_o
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 5015;
	
	  ;% HevP4ReferenceApplication_P.Saturation_LowerSat_n
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 5016;
	
	  ;% HevP4ReferenceApplication_P.Constant1_Value
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 5017;
	
	  ;% HevP4ReferenceApplication_P.Constant_Value_a
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 5018;
	
	  ;% HevP4ReferenceApplication_P.Constant7_Value
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 5019;
	
	  ;% HevP4ReferenceApplication_P.FromWs_Time0
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 5020;
	
	  ;% HevP4ReferenceApplication_P.FromWs_Data0
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 5026;
	
	  ;% HevP4ReferenceApplication_P.HitCrossing_Offset
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 5032;
	
	  ;% HevP4ReferenceApplication_P.Constant2_Value
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 5033;
	
	  ;% HevP4ReferenceApplication_P.Constant3_Value
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 5034;
	
	  ;% HevP4ReferenceApplication_P.Integrator2_IC_o
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 5035;
	
	  ;% HevP4ReferenceApplication_P.UnitDelay_InitialCondition
	  section.data(81).logicalSrcIdx = 80;
	  section.data(81).dtTransOffset = 5036;
	
	  ;% HevP4ReferenceApplication_P.FirstOrderHold_IniOut
	  section.data(82).logicalSrcIdx = 81;
	  section.data(82).dtTransOffset = 5038;
	
	  ;% HevP4ReferenceApplication_P.FirstOrderHold_ErrTol
	  section.data(83).logicalSrcIdx = 82;
	  section.data(83).dtTransOffset = 5039;
	
	  ;% HevP4ReferenceApplication_P.FirstOrderHold1_IniOut
	  section.data(84).logicalSrcIdx = 83;
	  section.data(84).dtTransOffset = 5040;
	
	  ;% HevP4ReferenceApplication_P.FirstOrderHold1_ErrTol
	  section.data(85).logicalSrcIdx = 84;
	  section.data(85).dtTransOffset = 5041;
	
	  ;% HevP4ReferenceApplication_P.FirstOrderHold2_IniOut
	  section.data(86).logicalSrcIdx = 85;
	  section.data(86).dtTransOffset = 5042;
	
	  ;% HevP4ReferenceApplication_P.FirstOrderHold2_ErrTol
	  section.data(87).logicalSrcIdx = 86;
	  section.data(87).dtTransOffset = 5043;
	
	  ;% HevP4ReferenceApplication_P.FirstOrderHold_IniOut_o
	  section.data(88).logicalSrcIdx = 87;
	  section.data(88).dtTransOffset = 5044;
	
	  ;% HevP4ReferenceApplication_P.FirstOrderHold_ErrTol_f
	  section.data(89).logicalSrcIdx = 88;
	  section.data(89).dtTransOffset = 5045;
	
	  ;% HevP4ReferenceApplication_P.FirstOrderHold_IniOut_m
	  section.data(90).logicalSrcIdx = 89;
	  section.data(90).dtTransOffset = 5046;
	
	  ;% HevP4ReferenceApplication_P.FirstOrderHold_ErrTol_g
	  section.data(91).logicalSrcIdx = 90;
	  section.data(91).dtTransOffset = 5047;
	
	  ;% HevP4ReferenceApplication_P.FirstOrderHold1_IniOut_d
	  section.data(92).logicalSrcIdx = 91;
	  section.data(92).dtTransOffset = 5048;
	
	  ;% HevP4ReferenceApplication_P.FirstOrderHold1_ErrTol_j
	  section.data(93).logicalSrcIdx = 92;
	  section.data(93).dtTransOffset = 5049;
	
	  ;% HevP4ReferenceApplication_P.FirstOrderHold10_IniOut
	  section.data(94).logicalSrcIdx = 93;
	  section.data(94).dtTransOffset = 5050;
	
	  ;% HevP4ReferenceApplication_P.FirstOrderHold10_ErrTol
	  section.data(95).logicalSrcIdx = 94;
	  section.data(95).dtTransOffset = 5051;
	
	  ;% HevP4ReferenceApplication_P.FirstOrderHold11_IniOut
	  section.data(96).logicalSrcIdx = 95;
	  section.data(96).dtTransOffset = 5052;
	
	  ;% HevP4ReferenceApplication_P.FirstOrderHold11_ErrTol
	  section.data(97).logicalSrcIdx = 96;
	  section.data(97).dtTransOffset = 5053;
	
	  ;% HevP4ReferenceApplication_P.FirstOrderHold13_IniOut
	  section.data(98).logicalSrcIdx = 97;
	  section.data(98).dtTransOffset = 5054;
	
	  ;% HevP4ReferenceApplication_P.FirstOrderHold13_ErrTol
	  section.data(99).logicalSrcIdx = 98;
	  section.data(99).dtTransOffset = 5055;
	
	  ;% HevP4ReferenceApplication_P.FirstOrderHold14_IniOut
	  section.data(100).logicalSrcIdx = 99;
	  section.data(100).dtTransOffset = 5056;
	
	  ;% HevP4ReferenceApplication_P.FirstOrderHold14_ErrTol
	  section.data(101).logicalSrcIdx = 100;
	  section.data(101).dtTransOffset = 5057;
	
	  ;% HevP4ReferenceApplication_P.FirstOrderHold2_IniOut_g
	  section.data(102).logicalSrcIdx = 101;
	  section.data(102).dtTransOffset = 5058;
	
	  ;% HevP4ReferenceApplication_P.FirstOrderHold2_ErrTol_f
	  section.data(103).logicalSrcIdx = 102;
	  section.data(103).dtTransOffset = 5059;
	
	  ;% HevP4ReferenceApplication_P.FirstOrderHold3_IniOut
	  section.data(104).logicalSrcIdx = 103;
	  section.data(104).dtTransOffset = 5060;
	
	  ;% HevP4ReferenceApplication_P.FirstOrderHold3_ErrTol
	  section.data(105).logicalSrcIdx = 104;
	  section.data(105).dtTransOffset = 5061;
	
	  ;% HevP4ReferenceApplication_P.FirstOrderHold4_IniOut
	  section.data(106).logicalSrcIdx = 105;
	  section.data(106).dtTransOffset = 5062;
	
	  ;% HevP4ReferenceApplication_P.FirstOrderHold4_ErrTol
	  section.data(107).logicalSrcIdx = 106;
	  section.data(107).dtTransOffset = 5063;
	
	  ;% HevP4ReferenceApplication_P.FirstOrderHold5_IniOut
	  section.data(108).logicalSrcIdx = 107;
	  section.data(108).dtTransOffset = 5064;
	
	  ;% HevP4ReferenceApplication_P.FirstOrderHold5_ErrTol
	  section.data(109).logicalSrcIdx = 108;
	  section.data(109).dtTransOffset = 5065;
	
	  ;% HevP4ReferenceApplication_P.FirstOrderHold6_IniOut
	  section.data(110).logicalSrcIdx = 109;
	  section.data(110).dtTransOffset = 5066;
	
	  ;% HevP4ReferenceApplication_P.FirstOrderHold6_ErrTol
	  section.data(111).logicalSrcIdx = 110;
	  section.data(111).dtTransOffset = 5067;
	
	  ;% HevP4ReferenceApplication_P.FirstOrderHold7_IniOut
	  section.data(112).logicalSrcIdx = 111;
	  section.data(112).dtTransOffset = 5068;
	
	  ;% HevP4ReferenceApplication_P.FirstOrderHold7_ErrTol
	  section.data(113).logicalSrcIdx = 112;
	  section.data(113).dtTransOffset = 5069;
	
	  ;% HevP4ReferenceApplication_P.FirstOrderHold8_IniOut
	  section.data(114).logicalSrcIdx = 113;
	  section.data(114).dtTransOffset = 5070;
	
	  ;% HevP4ReferenceApplication_P.FirstOrderHold8_ErrTol
	  section.data(115).logicalSrcIdx = 114;
	  section.data(115).dtTransOffset = 5071;
	
	  ;% HevP4ReferenceApplication_P.FirstOrderHold9_IniOut
	  section.data(116).logicalSrcIdx = 115;
	  section.data(116).dtTransOffset = 5072;
	
	  ;% HevP4ReferenceApplication_P.FirstOrderHold9_ErrTol
	  section.data(117).logicalSrcIdx = 116;
	  section.data(117).dtTransOffset = 5073;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% HevP4ReferenceApplication_P.Constant_Value_e
	  section.data(1).logicalSrcIdx = 117;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% HevP4ReferenceApplication_P.ManualSwitch_CurrentSetting
	  section.data(1).logicalSrcIdx = 118;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 4;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (HevP4ReferenceApplication_B)
    ;%
      section.nData     = 141;
      section.data(141)  = dumData; %prealloc
      
	  ;% HevP4ReferenceApplication_B.tFinal
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% HevP4ReferenceApplication_B.repeat
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% HevP4ReferenceApplication_B.uDLookupTable
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% HevP4ReferenceApplication_B.TransferFcn
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% HevP4ReferenceApplication_B.xdot
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% HevP4ReferenceApplication_B.Drivetrain_o2
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% HevP4ReferenceApplication_B.Drivetrain_o5
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% HevP4ReferenceApplication_B.Drivetrain_o6
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% HevP4ReferenceApplication_B.mstomph
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% HevP4ReferenceApplication_B.FirstOrderHold12
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 10;
	
	  ;% HevP4ReferenceApplication_B.UnitConversion15
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 11;
	
	  ;% HevP4ReferenceApplication_B.SiMappedEngine_o1
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 12;
	
	  ;% HevP4ReferenceApplication_B.EngSpd
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 13;
	
	  ;% HevP4ReferenceApplication_B.SiMappedEngine_o5
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 14;
	
	  ;% HevP4ReferenceApplication_B.SiMappedEngine_o6
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 15;
	
	  ;% HevP4ReferenceApplication_B.SiMappedEngine_o7
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 16;
	
	  ;% HevP4ReferenceApplication_B.SiMappedEngine_o8
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 17;
	
	  ;% HevP4ReferenceApplication_B.SiMappedEngine_o9
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 18;
	
	  ;% HevP4ReferenceApplication_B.SiMappedEngine_o10
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 19;
	
	  ;% HevP4ReferenceApplication_B.SiMappedEngine_o11
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 20;
	
	  ;% HevP4ReferenceApplication_B.SiMappedEngine_o12
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 21;
	
	  ;% HevP4ReferenceApplication_B.SiMappedEngine_o13
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 22;
	
	  ;% HevP4ReferenceApplication_B.SiMappedEngine_o14
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 23;
	
	  ;% HevP4ReferenceApplication_B.SiMappedEngine_o16
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 24;
	
	  ;% HevP4ReferenceApplication_B.ExhManGasTemp
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 25;
	
	  ;% HevP4ReferenceApplication_B.SiMappedEngine_o20
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 26;
	
	  ;% HevP4ReferenceApplication_B.SiMappedEngine_o31
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 27;
	
	  ;% HevP4ReferenceApplication_B.SiMappedEngine_o32
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 28;
	
	  ;% HevP4ReferenceApplication_B.SiMappedEngine_o33
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 29;
	
	  ;% HevP4ReferenceApplication_B.SiMappedEngine_o34
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 30;
	
	  ;% HevP4ReferenceApplication_B.SiMappedEngine_o36
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 31;
	
	  ;% HevP4ReferenceApplication_B.radstorpm
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 32;
	
	  ;% HevP4ReferenceApplication_B.MotTrq
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 33;
	
	  ;% HevP4ReferenceApplication_B.BatteryDischargeDynamics
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 34;
	
	  ;% HevP4ReferenceApplication_B.Temp
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 35;
	
	  ;% HevP4ReferenceApplication_B.BattSoc
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 36;
	
	  ;% HevP4ReferenceApplication_B.BattV
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 37;
	
	  ;% HevP4ReferenceApplication_B.BattCrnt
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 38;
	
	  ;% HevP4ReferenceApplication_B.Battery_o4
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 39;
	
	  ;% HevP4ReferenceApplication_B.m3toUSGal
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 40;
	
	  ;% HevP4ReferenceApplication_B.USMPGCalc
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 41;
	
	  ;% HevP4ReferenceApplication_B.mtomi
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 42;
	
	  ;% HevP4ReferenceApplication_B.L100KmCalc
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 43;
	
	  ;% HevP4ReferenceApplication_B.L100KmCalc1
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 44;
	
	  ;% HevP4ReferenceApplication_B.L100KmCalc2
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 45;
	
	  ;% HevP4ReferenceApplication_B.mtokm
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 46;
	
	  ;% HevP4ReferenceApplication_B.L100KmCalc3
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 47;
	
	  ;% HevP4ReferenceApplication_B.wperkw
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 48;
	
	  ;% HevP4ReferenceApplication_B.USEPAkwhUSgalequivalent
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 49;
	
	  ;% HevP4ReferenceApplication_B.sperh
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 50;
	
	  ;% HevP4ReferenceApplication_B.Add
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 51;
	
	  ;% HevP4ReferenceApplication_B.mto100Km
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 52;
	
	  ;% HevP4ReferenceApplication_B.Sqrt
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 53;
	
	  ;% HevP4ReferenceApplication_B.Constant
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 54;
	
	  ;% HevP4ReferenceApplication_B.Gain
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 55;
	
	  ;% HevP4ReferenceApplication_B.Constant_n
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 56;
	
	  ;% HevP4ReferenceApplication_B.Constant1
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 57;
	
	  ;% HevP4ReferenceApplication_B.Constant_g
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 58;
	
	  ;% HevP4ReferenceApplication_B.Switch
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 59;
	
	  ;% HevP4ReferenceApplication_B.AccelPdl
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 61;
	
	  ;% HevP4ReferenceApplication_B.DecelPdl
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 62;
	
	  ;% HevP4ReferenceApplication_B.VehSpdFdbk
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 63;
	
	  ;% HevP4ReferenceApplication_B.BattSoc_l
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 64;
	
	  ;% HevP4ReferenceApplication_B.MotSpd
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 65;
	
	  ;% HevP4ReferenceApplication_B.TransGear
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 66;
	
	  ;% HevP4ReferenceApplication_B.BattV_k
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 67;
	
	  ;% HevP4ReferenceApplication_B.EngTrqCmd
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 68;
	
	  ;% HevP4ReferenceApplication_B.MtrTrqCmd
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 69;
	
	  ;% HevP4ReferenceApplication_B.BrkCmd
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 70;
	
	  ;% HevP4ReferenceApplication_B.Cltch1Cmd
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 71;
	
	  ;% HevP4ReferenceApplication_B.Neutral
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 72;
	
	  ;% HevP4ReferenceApplication_B.WhlTrqCmd
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 73;
	
	  ;% HevP4ReferenceApplication_B.RateTransition1
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 74;
	
	  ;% HevP4ReferenceApplication_B.RateTransition10
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 75;
	
	  ;% HevP4ReferenceApplication_B.RateTransition11
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 76;
	
	  ;% HevP4ReferenceApplication_B.EngSpd_d
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 77;
	
	  ;% HevP4ReferenceApplication_B.RateTransition2
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 78;
	
	  ;% HevP4ReferenceApplication_B.RateTransition21
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 79;
	
	  ;% HevP4ReferenceApplication_B.RateTransition22
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 80;
	
	  ;% HevP4ReferenceApplication_B.RateTransition23
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 81;
	
	  ;% HevP4ReferenceApplication_B.RateTransition25
	  section.data(81).logicalSrcIdx = 80;
	  section.data(81).dtTransOffset = 82;
	
	  ;% HevP4ReferenceApplication_B.RateTransition26
	  section.data(82).logicalSrcIdx = 81;
	  section.data(82).dtTransOffset = 83;
	
	  ;% HevP4ReferenceApplication_B.RateTransition27
	  section.data(83).logicalSrcIdx = 82;
	  section.data(83).dtTransOffset = 84;
	
	  ;% HevP4ReferenceApplication_B.RateTransition28
	  section.data(84).logicalSrcIdx = 83;
	  section.data(84).dtTransOffset = 85;
	
	  ;% HevP4ReferenceApplication_B.RateTransition3
	  section.data(85).logicalSrcIdx = 84;
	  section.data(85).dtTransOffset = 86;
	
	  ;% HevP4ReferenceApplication_B.RateTransition30
	  section.data(86).logicalSrcIdx = 85;
	  section.data(86).dtTransOffset = 87;
	
	  ;% HevP4ReferenceApplication_B.RateTransition32
	  section.data(87).logicalSrcIdx = 86;
	  section.data(87).dtTransOffset = 88;
	
	  ;% HevP4ReferenceApplication_B.RateTransition33
	  section.data(88).logicalSrcIdx = 87;
	  section.data(88).dtTransOffset = 89;
	
	  ;% HevP4ReferenceApplication_B.RateTransition4
	  section.data(89).logicalSrcIdx = 88;
	  section.data(89).dtTransOffset = 90;
	
	  ;% HevP4ReferenceApplication_B.RateTransition5
	  section.data(90).logicalSrcIdx = 89;
	  section.data(90).dtTransOffset = 91;
	
	  ;% HevP4ReferenceApplication_B.RateTransition6
	  section.data(91).logicalSrcIdx = 90;
	  section.data(91).dtTransOffset = 92;
	
	  ;% HevP4ReferenceApplication_B.RateTransition7
	  section.data(92).logicalSrcIdx = 91;
	  section.data(92).dtTransOffset = 93;
	
	  ;% HevP4ReferenceApplication_B.RateTransition9
	  section.data(93).logicalSrcIdx = 92;
	  section.data(93).dtTransOffset = 94;
	
	  ;% HevP4ReferenceApplication_B.Baro
	  section.data(94).logicalSrcIdx = 93;
	  section.data(94).dtTransOffset = 95;
	
	  ;% HevP4ReferenceApplication_B.RateTransition31
	  section.data(95).logicalSrcIdx = 94;
	  section.data(95).dtTransOffset = 96;
	
	  ;% HevP4ReferenceApplication_B.SiEngineController_o1
	  section.data(96).logicalSrcIdx = 95;
	  section.data(96).dtTransOffset = 97;
	
	  ;% HevP4ReferenceApplication_B.SiEngineController_o2
	  section.data(97).logicalSrcIdx = 96;
	  section.data(97).dtTransOffset = 98;
	
	  ;% HevP4ReferenceApplication_B.SiEngineController_o3
	  section.data(98).logicalSrcIdx = 97;
	  section.data(98).dtTransOffset = 99;
	
	  ;% HevP4ReferenceApplication_B.SiEngineController_o4
	  section.data(99).logicalSrcIdx = 98;
	  section.data(99).dtTransOffset = 100;
	
	  ;% HevP4ReferenceApplication_B.SiEngineController_o5
	  section.data(100).logicalSrcIdx = 99;
	  section.data(100).dtTransOffset = 101;
	
	  ;% HevP4ReferenceApplication_B.SiEngineController_o6
	  section.data(101).logicalSrcIdx = 100;
	  section.data(101).dtTransOffset = 102;
	
	  ;% HevP4ReferenceApplication_B.SiEngineController_o7
	  section.data(102).logicalSrcIdx = 101;
	  section.data(102).dtTransOffset = 103;
	
	  ;% HevP4ReferenceApplication_B.SiEngineController_o8
	  section.data(103).logicalSrcIdx = 102;
	  section.data(103).dtTransOffset = 104;
	
	  ;% HevP4ReferenceApplication_B.SiEngineController_o9
	  section.data(104).logicalSrcIdx = 103;
	  section.data(104).dtTransOffset = 105;
	
	  ;% HevP4ReferenceApplication_B.SiEngineController_o10
	  section.data(105).logicalSrcIdx = 104;
	  section.data(105).dtTransOffset = 106;
	
	  ;% HevP4ReferenceApplication_B.SiEngineController_o11
	  section.data(106).logicalSrcIdx = 105;
	  section.data(106).dtTransOffset = 107;
	
	  ;% HevP4ReferenceApplication_B.SiEngineController_o12
	  section.data(107).logicalSrcIdx = 106;
	  section.data(107).dtTransOffset = 108;
	
	  ;% HevP4ReferenceApplication_B.ClsdLpFuelMult
	  section.data(108).logicalSrcIdx = 107;
	  section.data(108).dtTransOffset = 109;
	
	  ;% HevP4ReferenceApplication_B.SiEngineController_o14
	  section.data(109).logicalSrcIdx = 108;
	  section.data(109).dtTransOffset = 110;
	
	  ;% HevP4ReferenceApplication_B.SiEngineController_o15
	  section.data(110).logicalSrcIdx = 109;
	  section.data(110).dtTransOffset = 111;
	
	  ;% HevP4ReferenceApplication_B.GearCmd
	  section.data(111).logicalSrcIdx = 110;
	  section.data(111).dtTransOffset = 112;
	
	  ;% HevP4ReferenceApplication_B.DigitalClock
	  section.data(112).logicalSrcIdx = 111;
	  section.data(112).dtTransOffset = 113;
	
	  ;% HevP4ReferenceApplication_B.Add1
	  section.data(113).logicalSrcIdx = 112;
	  section.data(113).dtTransOffset = 114;
	
	  ;% HevP4ReferenceApplication_B.Grade
	  section.data(114).logicalSrcIdx = 113;
	  section.data(114).dtTransOffset = 115;
	
	  ;% HevP4ReferenceApplication_B.wind_x
	  section.data(115).logicalSrcIdx = 114;
	  section.data(115).dtTransOffset = 116;
	
	  ;% HevP4ReferenceApplication_B.Constant_f
	  section.data(116).logicalSrcIdx = 115;
	  section.data(116).dtTransOffset = 117;
	
	  ;% HevP4ReferenceApplication_B.Divide
	  section.data(117).logicalSrcIdx = 116;
	  section.data(117).dtTransOffset = 118;
	
	  ;% HevP4ReferenceApplication_B.Product
	  section.data(118).logicalSrcIdx = 117;
	  section.data(118).dtTransOffset = 119;
	
	  ;% HevP4ReferenceApplication_B.UnitDelay
	  section.data(119).logicalSrcIdx = 118;
	  section.data(119).dtTransOffset = 120;
	
	  ;% HevP4ReferenceApplication_B.Switch_c
	  section.data(120).logicalSrcIdx = 119;
	  section.data(120).dtTransOffset = 122;
	
	  ;% HevP4ReferenceApplication_B.Cltch1Cmd_j
	  section.data(121).logicalSrcIdx = 120;
	  section.data(121).dtTransOffset = 124;
	
	  ;% HevP4ReferenceApplication_B.BrkCmd_f
	  section.data(122).logicalSrcIdx = 121;
	  section.data(122).dtTransOffset = 125;
	
	  ;% HevP4ReferenceApplication_B.GearCmd_g
	  section.data(123).logicalSrcIdx = 122;
	  section.data(123).dtTransOffset = 126;
	
	  ;% HevP4ReferenceApplication_B.MotMapped_o1
	  section.data(124).logicalSrcIdx = 123;
	  section.data(124).dtTransOffset = 127;
	
	  ;% HevP4ReferenceApplication_B.MotMapped_o2
	  section.data(125).logicalSrcIdx = 124;
	  section.data(125).dtTransOffset = 128;
	
	  ;% HevP4ReferenceApplication_B.MotTrqCmd
	  section.data(126).logicalSrcIdx = 125;
	  section.data(126).dtTransOffset = 129;
	
	  ;% HevP4ReferenceApplication_B.FirstOrderHold
	  section.data(127).logicalSrcIdx = 126;
	  section.data(127).dtTransOffset = 130;
	
	  ;% HevP4ReferenceApplication_B.FirstOrderHold1
	  section.data(128).logicalSrcIdx = 127;
	  section.data(128).dtTransOffset = 131;
	
	  ;% HevP4ReferenceApplication_B.FirstOrderHold10
	  section.data(129).logicalSrcIdx = 128;
	  section.data(129).dtTransOffset = 132;
	
	  ;% HevP4ReferenceApplication_B.FirstOrderHold11
	  section.data(130).logicalSrcIdx = 129;
	  section.data(130).dtTransOffset = 133;
	
	  ;% HevP4ReferenceApplication_B.FirstOrderHold13
	  section.data(131).logicalSrcIdx = 130;
	  section.data(131).dtTransOffset = 134;
	
	  ;% HevP4ReferenceApplication_B.FirstOrderHold14
	  section.data(132).logicalSrcIdx = 131;
	  section.data(132).dtTransOffset = 135;
	
	  ;% HevP4ReferenceApplication_B.FirstOrderHold2
	  section.data(133).logicalSrcIdx = 132;
	  section.data(133).dtTransOffset = 136;
	
	  ;% HevP4ReferenceApplication_B.FirstOrderHold3
	  section.data(134).logicalSrcIdx = 133;
	  section.data(134).dtTransOffset = 137;
	
	  ;% HevP4ReferenceApplication_B.FirstOrderHold4
	  section.data(135).logicalSrcIdx = 134;
	  section.data(135).dtTransOffset = 138;
	
	  ;% HevP4ReferenceApplication_B.FirstOrderHold5
	  section.data(136).logicalSrcIdx = 135;
	  section.data(136).dtTransOffset = 139;
	
	  ;% HevP4ReferenceApplication_B.FirstOrderHold6
	  section.data(137).logicalSrcIdx = 136;
	  section.data(137).dtTransOffset = 140;
	
	  ;% HevP4ReferenceApplication_B.FirstOrderHold7
	  section.data(138).logicalSrcIdx = 137;
	  section.data(138).dtTransOffset = 141;
	
	  ;% HevP4ReferenceApplication_B.FirstOrderHold8
	  section.data(139).logicalSrcIdx = 138;
	  section.data(139).dtTransOffset = 142;
	
	  ;% HevP4ReferenceApplication_B.FirstOrderHold9
	  section.data(140).logicalSrcIdx = 139;
	  section.data(140).dtTransOffset = 143;
	
	  ;% HevP4ReferenceApplication_B.Gear
	  section.data(141).logicalSrcIdx = 140;
	  section.data(141).dtTransOffset = 144;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 9;
      section.data(9)  = dumData; %prealloc
      
	  ;% HevP4ReferenceApplication_B.Drivetrain_o4
	  section.data(1).logicalSrcIdx = 141;
	  section.data(1).dtTransOffset = 0;
	
	  ;% HevP4ReferenceApplication_B.LogicalOperator2
	  section.data(2).logicalSrcIdx = 142;
	  section.data(2).dtTransOffset = 1;
	
	  ;% HevP4ReferenceApplication_B.NOT
	  section.data(3).logicalSrcIdx = 143;
	  section.data(3).dtTransOffset = 2;
	
	  ;% HevP4ReferenceApplication_B.LogicalOperator2_o
	  section.data(4).logicalSrcIdx = 144;
	  section.data(4).dtTransOffset = 3;
	
	  ;% HevP4ReferenceApplication_B.NOT_n
	  section.data(5).logicalSrcIdx = 145;
	  section.data(5).dtTransOffset = 4;
	
	  ;% HevP4ReferenceApplication_B.LogicalOperator
	  section.data(6).logicalSrcIdx = 146;
	  section.data(6).dtTransOffset = 5;
	
	  ;% HevP4ReferenceApplication_B.Constant_fb
	  section.data(7).logicalSrcIdx = 147;
	  section.data(7).dtTransOffset = 6;
	
	  ;% HevP4ReferenceApplication_B.IgSw
	  section.data(8).logicalSrcIdx = 148;
	  section.data(8).dtTransOffset = 7;
	
	  ;% HevP4ReferenceApplication_B.IgnSwtch
	  section.data(9).logicalSrcIdx = 149;
	  section.data(9).dtTransOffset = 8;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% HevP4ReferenceApplication_B.PassThrough_b.u
	  section.data(1).logicalSrcIdx = 150;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% HevP4ReferenceApplication_B.PassThrough.u
	  section.data(1).logicalSrcIdx = 151;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(4) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 16;
    sectIdxOffset = 4;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (HevP4ReferenceApplication_DW)
    ;%
      section.nData     = 123;
      section.data(123)  = dumData; %prealloc
      
	  ;% HevP4ReferenceApplication_DW.UnitDelay_DSTATE
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition4_Buffer0
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 2;
	
	  ;% HevP4ReferenceApplication_DW.Tk
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 4;
	
	  ;% HevP4ReferenceApplication_DW.Ck
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 5;
	
	  ;% HevP4ReferenceApplication_DW.Mk
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 6;
	
	  ;% HevP4ReferenceApplication_DW.Uk
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 7;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition2_Buffer0
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 8;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition5_Buffer0
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 9;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition7_Buffer0
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 10;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition8_Buffer0
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 11;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition10_Buffer0
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 12;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition1_Buffer0
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 13;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition3_Buffer0
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 14;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition_Buffer0
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 15;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition1_Buffer0_m
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 16;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition2_Buffer0_j
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 17;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition3_Buffer0_p
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 18;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition_Buffer0_f
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 19;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition8_Buffer0_a
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 20;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition16_Buffer0
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 21;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition19_Buffer0
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 22;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition15_Buffer0
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 23;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition18_Buffer0
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 24;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition13_Buffer0
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 25;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition1_Buffer0_i
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 26;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition10_Buffer
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 27;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition11_Buffer
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 28;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition17_Buffer0
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 29;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition2_Buffer
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 30;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition21_Buffer
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 31;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition22_Buffer
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 32;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition23_Buffer
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 33;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition25_Buffer
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 34;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition26_Buffer
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 35;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition27_Buffer
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 36;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition28_Buffer
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 37;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition3_Buffer
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 38;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition30_Buffer
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 39;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition32_Buffer
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 40;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition33_Buffer
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 41;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition4_Buffer
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 42;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition5_Buffer
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 43;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition6_Buffer
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 44;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition7_Buffer
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 45;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition9_Buffer
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 46;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition31_Buffer0
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 47;
	
	  ;% HevP4ReferenceApplication_DW.Tk_m
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 48;
	
	  ;% HevP4ReferenceApplication_DW.Ck_c
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 49;
	
	  ;% HevP4ReferenceApplication_DW.Mk_h
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 50;
	
	  ;% HevP4ReferenceApplication_DW.Uk_i
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 51;
	
	  ;% HevP4ReferenceApplication_DW.Tk_i
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 52;
	
	  ;% HevP4ReferenceApplication_DW.Ck_k
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 53;
	
	  ;% HevP4ReferenceApplication_DW.Mk_j
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 54;
	
	  ;% HevP4ReferenceApplication_DW.Uk_e
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 55;
	
	  ;% HevP4ReferenceApplication_DW.Tk_j
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 56;
	
	  ;% HevP4ReferenceApplication_DW.Ck_a
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 57;
	
	  ;% HevP4ReferenceApplication_DW.Mk_d
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 58;
	
	  ;% HevP4ReferenceApplication_DW.Uk_p
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 59;
	
	  ;% HevP4ReferenceApplication_DW.Tk_o
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 60;
	
	  ;% HevP4ReferenceApplication_DW.Ck_h
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 61;
	
	  ;% HevP4ReferenceApplication_DW.Mk_c
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 62;
	
	  ;% HevP4ReferenceApplication_DW.Uk_n
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 63;
	
	  ;% HevP4ReferenceApplication_DW.Tk_p
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 64;
	
	  ;% HevP4ReferenceApplication_DW.Ck_hq
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 65;
	
	  ;% HevP4ReferenceApplication_DW.Mk_l
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 66;
	
	  ;% HevP4ReferenceApplication_DW.Uk_nh
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 67;
	
	  ;% HevP4ReferenceApplication_DW.Tk_e
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 68;
	
	  ;% HevP4ReferenceApplication_DW.Ck_ht
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 69;
	
	  ;% HevP4ReferenceApplication_DW.Mk_k
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 70;
	
	  ;% HevP4ReferenceApplication_DW.Uk_c
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 71;
	
	  ;% HevP4ReferenceApplication_DW.Tk_b
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 72;
	
	  ;% HevP4ReferenceApplication_DW.Ck_j
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 73;
	
	  ;% HevP4ReferenceApplication_DW.Mk_hm
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 74;
	
	  ;% HevP4ReferenceApplication_DW.Uk_o
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 75;
	
	  ;% HevP4ReferenceApplication_DW.Tk_f
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 76;
	
	  ;% HevP4ReferenceApplication_DW.Ck_aq
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 77;
	
	  ;% HevP4ReferenceApplication_DW.Mk_n
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 78;
	
	  ;% HevP4ReferenceApplication_DW.Uk_ol
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 79;
	
	  ;% HevP4ReferenceApplication_DW.Tk_ii
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 80;
	
	  ;% HevP4ReferenceApplication_DW.Ck_ch
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 81;
	
	  ;% HevP4ReferenceApplication_DW.Mk_nu
	  section.data(81).logicalSrcIdx = 80;
	  section.data(81).dtTransOffset = 82;
	
	  ;% HevP4ReferenceApplication_DW.Uk_l
	  section.data(82).logicalSrcIdx = 81;
	  section.data(82).dtTransOffset = 83;
	
	  ;% HevP4ReferenceApplication_DW.Tk_oz
	  section.data(83).logicalSrcIdx = 82;
	  section.data(83).dtTransOffset = 84;
	
	  ;% HevP4ReferenceApplication_DW.Ck_o
	  section.data(84).logicalSrcIdx = 83;
	  section.data(84).dtTransOffset = 85;
	
	  ;% HevP4ReferenceApplication_DW.Mk_d3
	  section.data(85).logicalSrcIdx = 84;
	  section.data(85).dtTransOffset = 86;
	
	  ;% HevP4ReferenceApplication_DW.Uk_il
	  section.data(86).logicalSrcIdx = 85;
	  section.data(86).dtTransOffset = 87;
	
	  ;% HevP4ReferenceApplication_DW.Tk_g
	  section.data(87).logicalSrcIdx = 86;
	  section.data(87).dtTransOffset = 88;
	
	  ;% HevP4ReferenceApplication_DW.Ck_p
	  section.data(88).logicalSrcIdx = 87;
	  section.data(88).dtTransOffset = 89;
	
	  ;% HevP4ReferenceApplication_DW.Mk_i
	  section.data(89).logicalSrcIdx = 88;
	  section.data(89).dtTransOffset = 90;
	
	  ;% HevP4ReferenceApplication_DW.Uk_pm
	  section.data(90).logicalSrcIdx = 89;
	  section.data(90).dtTransOffset = 91;
	
	  ;% HevP4ReferenceApplication_DW.Tk_h
	  section.data(91).logicalSrcIdx = 90;
	  section.data(91).dtTransOffset = 92;
	
	  ;% HevP4ReferenceApplication_DW.Ck_f
	  section.data(92).logicalSrcIdx = 91;
	  section.data(92).dtTransOffset = 93;
	
	  ;% HevP4ReferenceApplication_DW.Mk_a
	  section.data(93).logicalSrcIdx = 92;
	  section.data(93).dtTransOffset = 94;
	
	  ;% HevP4ReferenceApplication_DW.Uk_iu
	  section.data(94).logicalSrcIdx = 93;
	  section.data(94).dtTransOffset = 95;
	
	  ;% HevP4ReferenceApplication_DW.Tk_b2
	  section.data(95).logicalSrcIdx = 94;
	  section.data(95).dtTransOffset = 96;
	
	  ;% HevP4ReferenceApplication_DW.Ck_g
	  section.data(96).logicalSrcIdx = 95;
	  section.data(96).dtTransOffset = 97;
	
	  ;% HevP4ReferenceApplication_DW.Mk_dk
	  section.data(97).logicalSrcIdx = 96;
	  section.data(97).dtTransOffset = 98;
	
	  ;% HevP4ReferenceApplication_DW.Uk_g
	  section.data(98).logicalSrcIdx = 97;
	  section.data(98).dtTransOffset = 99;
	
	  ;% HevP4ReferenceApplication_DW.Tk_ej
	  section.data(99).logicalSrcIdx = 98;
	  section.data(99).dtTransOffset = 100;
	
	  ;% HevP4ReferenceApplication_DW.Ck_i
	  section.data(100).logicalSrcIdx = 99;
	  section.data(100).dtTransOffset = 101;
	
	  ;% HevP4ReferenceApplication_DW.Mk_f
	  section.data(101).logicalSrcIdx = 100;
	  section.data(101).dtTransOffset = 102;
	
	  ;% HevP4ReferenceApplication_DW.Uk_m
	  section.data(102).logicalSrcIdx = 101;
	  section.data(102).dtTransOffset = 103;
	
	  ;% HevP4ReferenceApplication_DW.Tk_d
	  section.data(103).logicalSrcIdx = 102;
	  section.data(103).dtTransOffset = 104;
	
	  ;% HevP4ReferenceApplication_DW.Ck_cz
	  section.data(104).logicalSrcIdx = 103;
	  section.data(104).dtTransOffset = 105;
	
	  ;% HevP4ReferenceApplication_DW.Mk_l5
	  section.data(105).logicalSrcIdx = 104;
	  section.data(105).dtTransOffset = 106;
	
	  ;% HevP4ReferenceApplication_DW.Uk_ob
	  section.data(106).logicalSrcIdx = 105;
	  section.data(106).dtTransOffset = 107;
	
	  ;% HevP4ReferenceApplication_DW.Tk_bv
	  section.data(107).logicalSrcIdx = 106;
	  section.data(107).dtTransOffset = 108;
	
	  ;% HevP4ReferenceApplication_DW.Ck_m
	  section.data(108).logicalSrcIdx = 107;
	  section.data(108).dtTransOffset = 109;
	
	  ;% HevP4ReferenceApplication_DW.Mk_kb
	  section.data(109).logicalSrcIdx = 108;
	  section.data(109).dtTransOffset = 110;
	
	  ;% HevP4ReferenceApplication_DW.Uk_ez
	  section.data(110).logicalSrcIdx = 109;
	  section.data(110).dtTransOffset = 111;
	
	  ;% HevP4ReferenceApplication_DW.Tk_n
	  section.data(111).logicalSrcIdx = 110;
	  section.data(111).dtTransOffset = 112;
	
	  ;% HevP4ReferenceApplication_DW.Ck_d
	  section.data(112).logicalSrcIdx = 111;
	  section.data(112).dtTransOffset = 113;
	
	  ;% HevP4ReferenceApplication_DW.Mk_ix
	  section.data(113).logicalSrcIdx = 112;
	  section.data(113).dtTransOffset = 114;
	
	  ;% HevP4ReferenceApplication_DW.Uk_k
	  section.data(114).logicalSrcIdx = 113;
	  section.data(114).dtTransOffset = 115;
	
	  ;% HevP4ReferenceApplication_DW.Tk_pr
	  section.data(115).logicalSrcIdx = 114;
	  section.data(115).dtTransOffset = 116;
	
	  ;% HevP4ReferenceApplication_DW.Ck_pu
	  section.data(116).logicalSrcIdx = 115;
	  section.data(116).dtTransOffset = 117;
	
	  ;% HevP4ReferenceApplication_DW.Mk_jb
	  section.data(117).logicalSrcIdx = 116;
	  section.data(117).dtTransOffset = 118;
	
	  ;% HevP4ReferenceApplication_DW.Uk_gg
	  section.data(118).logicalSrcIdx = 117;
	  section.data(118).dtTransOffset = 119;
	
	  ;% HevP4ReferenceApplication_DW.GearState
	  section.data(119).logicalSrcIdx = 118;
	  section.data(119).dtTransOffset = 120;
	
	  ;% HevP4ReferenceApplication_DW.temporalCounter_i1
	  section.data(120).logicalSrcIdx = 119;
	  section.data(120).dtTransOffset = 121;
	
	  ;% HevP4ReferenceApplication_DW.presentTime
	  section.data(121).logicalSrcIdx = 120;
	  section.data(121).dtTransOffset = 122;
	
	  ;% HevP4ReferenceApplication_DW.elapsedTime
	  section.data(122).logicalSrcIdx = 121;
	  section.data(122).dtTransOffset = 123;
	
	  ;% HevP4ReferenceApplication_DW.previousTime
	  section.data(123).logicalSrcIdx = 122;
	  section.data(123).dtTransOffset = 124;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% HevP4ReferenceApplication_DW.PerformanceandFEScope_PWORK.LoggedData
	  section.data(1).logicalSrcIdx = 123;
	  section.data(1).dtTransOffset = 0;
	
	  ;% HevP4ReferenceApplication_DW.TPEmissionsScope_PWORK.LoggedData
	  section.data(2).logicalSrcIdx = 124;
	  section.data(2).dtTransOffset = 6;
	
	  ;% HevP4ReferenceApplication_DW.FromWs_PWORK.TimePtr
	  section.data(3).logicalSrcIdx = 125;
	  section.data(3).dtTransOffset = 10;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% HevP4ReferenceApplication_DW.m_bpIndex
	  section.data(1).logicalSrcIdx = 126;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 7;
      section.data(7)  = dumData; %prealloc
      
	  ;% HevP4ReferenceApplication_DW.FromWs_ZCTimeIndices
	  section.data(1).logicalSrcIdx = 127;
	  section.data(1).dtTransOffset = 0;
	
	  ;% HevP4ReferenceApplication_DW.FromWs_CurZCTimeIndIdx
	  section.data(2).logicalSrcIdx = 128;
	  section.data(2).dtTransOffset = 2;
	
	  ;% HevP4ReferenceApplication_DW.FromWs_IWORK.PrevIndex
	  section.data(3).logicalSrcIdx = 129;
	  section.data(3).dtTransOffset = 3;
	
	  ;% HevP4ReferenceApplication_DW.Saturation1_MODE
	  section.data(4).logicalSrcIdx = 130;
	  section.data(4).dtTransOffset = 4;
	
	  ;% HevP4ReferenceApplication_DW.Saturation_MODE
	  section.data(5).logicalSrcIdx = 131;
	  section.data(5).dtTransOffset = 5;
	
	  ;% HevP4ReferenceApplication_DW.Saturation1_MODE_h
	  section.data(6).logicalSrcIdx = 132;
	  section.data(6).dtTransOffset = 6;
	
	  ;% HevP4ReferenceApplication_DW.Saturation_MODE_f
	  section.data(7).logicalSrcIdx = 133;
	  section.data(7).dtTransOffset = 7;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 23;
      section.data(23)  = dumData; %prealloc
      
	  ;% HevP4ReferenceApplication_DW.RateTransition4_semaphoreTaken
	  section.data(1).logicalSrcIdx = 134;
	  section.data(1).dtTransOffset = 0;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition2_semaphoreTaken
	  section.data(2).logicalSrcIdx = 135;
	  section.data(2).dtTransOffset = 1;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition5_semaphoreTaken
	  section.data(3).logicalSrcIdx = 136;
	  section.data(3).dtTransOffset = 2;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition7_semaphoreTaken
	  section.data(4).logicalSrcIdx = 137;
	  section.data(4).dtTransOffset = 3;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition8_semaphoreTaken
	  section.data(5).logicalSrcIdx = 138;
	  section.data(5).dtTransOffset = 4;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition10_semaphoreTaken
	  section.data(6).logicalSrcIdx = 139;
	  section.data(6).dtTransOffset = 5;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition1_semaphoreTaken
	  section.data(7).logicalSrcIdx = 140;
	  section.data(7).dtTransOffset = 6;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition3_semaphoreTaken
	  section.data(8).logicalSrcIdx = 141;
	  section.data(8).dtTransOffset = 7;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition_semaphoreTaken
	  section.data(9).logicalSrcIdx = 142;
	  section.data(9).dtTransOffset = 8;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition1_semaphoreTaken_h
	  section.data(10).logicalSrcIdx = 143;
	  section.data(10).dtTransOffset = 9;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition2_semaphoreTaken_j
	  section.data(11).logicalSrcIdx = 144;
	  section.data(11).dtTransOffset = 10;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition3_semaphoreTaken_l
	  section.data(12).logicalSrcIdx = 145;
	  section.data(12).dtTransOffset = 11;
	
	  ;% HevP4ReferenceApplication_DW.Sqrt_DWORK1
	  section.data(13).logicalSrcIdx = 146;
	  section.data(13).dtTransOffset = 12;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition_semaphoreTaken_k
	  section.data(14).logicalSrcIdx = 147;
	  section.data(14).dtTransOffset = 13;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition8_semaphoreTaken_k
	  section.data(15).logicalSrcIdx = 148;
	  section.data(15).dtTransOffset = 14;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition16_semaphoreTaken
	  section.data(16).logicalSrcIdx = 149;
	  section.data(16).dtTransOffset = 15;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition19_semaphoreTaken
	  section.data(17).logicalSrcIdx = 150;
	  section.data(17).dtTransOffset = 16;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition15_semaphoreTaken
	  section.data(18).logicalSrcIdx = 151;
	  section.data(18).dtTransOffset = 17;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition18_semaphoreTaken
	  section.data(19).logicalSrcIdx = 152;
	  section.data(19).dtTransOffset = 18;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition13_semaphoreTaken
	  section.data(20).logicalSrcIdx = 153;
	  section.data(20).dtTransOffset = 19;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition1_semaphoreTaken_m
	  section.data(21).logicalSrcIdx = 154;
	  section.data(21).dtTransOffset = 20;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition17_semaphoreTaken
	  section.data(22).logicalSrcIdx = 155;
	  section.data(22).dtTransOffset = 21;
	
	  ;% HevP4ReferenceApplication_DW.RateTransition31_semaphoreTaken
	  section.data(23).logicalSrcIdx = 156;
	  section.data(23).dtTransOffset = 22;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% HevP4ReferenceApplication_DW.is_active_c6_autolibsharedcommon
	  section.data(1).logicalSrcIdx = 157;
	  section.data(1).dtTransOffset = 0;
	
	  ;% HevP4ReferenceApplication_DW.is_GearSelect
	  section.data(2).logicalSrcIdx = 158;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% HevP4ReferenceApplication_DW.Compare_Mode
	  section.data(1).logicalSrcIdx = 159;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% HevP4ReferenceApplication_DW.Drivetrain_InstanceData
	  section.data(1).logicalSrcIdx = 160;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(8) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% HevP4ReferenceApplication_DW.SiMappedEngine_InstanceData
	  section.data(1).logicalSrcIdx = 161;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(9) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% HevP4ReferenceApplication_DW.Battery_InstanceData
	  section.data(1).logicalSrcIdx = 162;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(10) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% HevP4ReferenceApplication_DW.HybridControlModuleHCMOptimal_InstanceData
	  section.data(1).logicalSrcIdx = 163;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(11) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% HevP4ReferenceApplication_DW.SiEngineController_InstanceData
	  section.data(1).logicalSrcIdx = 164;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(12) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% HevP4ReferenceApplication_DW.TransmissionControlModuleTCM_InstanceData
	  section.data(1).logicalSrcIdx = 165;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(13) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% HevP4ReferenceApplication_DW.MotMapped_InstanceData
	  section.data(1).logicalSrcIdx = 166;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(14) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% HevP4ReferenceApplication_DW.PassThrough_b.PassThrough_MODE
	  section.data(1).logicalSrcIdx = 167;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(15) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% HevP4ReferenceApplication_DW.PassThrough.PassThrough_MODE
	  section.data(1).logicalSrcIdx = 168;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(16) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 2013117554;
  targMap.checksum1 = 3741032854;
  targMap.checksum2 = 4261710212;
  targMap.checksum3 = 4282437628;

