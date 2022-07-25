/*
 * HevP4ReferenceApplication_dt.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "HevP4ReferenceApplication".
 *
 * Model version              : 2.47
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Sat Jul 23 23:55:03 2022
 *
 * Target selection: rsim.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(void*),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(MdlrefDW_HevP4OptimalController_T),
  sizeof(MdlrefDW_SiEngineController_T),
  sizeof(MdlrefDW_HevP4TransmissionController_T),
  sizeof(MdlrefDW_DrivetrainHevP4_T),
  sizeof(MdlrefDW_BattHevP4_T),
  sizeof(MdlrefDW_MotMappedP4_T),
  sizeof(MdlrefDW_SiMappedEngine_T)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "MdlrefDW_HevP4OptimalController_T",
  "MdlrefDW_SiEngineController_T",
  "MdlrefDW_HevP4TransmissionController_T",
  "MdlrefDW_DrivetrainHevP4_T",
  "MdlrefDW_BattHevP4_T",
  "MdlrefDW_MotMappedP4_T",
  "MdlrefDW_SiMappedEngine_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&HevP4ReferenceApplication_B.tFinal), 0, 0, 145 },

  { (char_T *)(&HevP4ReferenceApplication_B.Drivetrain_o4), 8, 0, 9 },

  { (char_T *)(&HevP4ReferenceApplication_B.PassThrough_b.u), 0, 0, 1 },

  { (char_T *)(&HevP4ReferenceApplication_B.PassThrough.u), 0, 0, 1 }
  ,

  { (char_T *)(&HevP4ReferenceApplication_DW.UnitDelay_DSTATE[0]), 0, 0, 125 },

  { (char_T *)
    (&HevP4ReferenceApplication_DW.PerformanceandFEScope_PWORK.LoggedData[0]),
    11, 0, 11 },

  { (char_T *)(&HevP4ReferenceApplication_DW.m_bpIndex), 7, 0, 1 },

  { (char_T *)(&HevP4ReferenceApplication_DW.FromWs_ZCTimeIndices[0]), 10, 0, 8
  },

  { (char_T *)(&HevP4ReferenceApplication_DW.RateTransition4_semaphoreTaken), 2,
    0, 23 },

  { (char_T *)(&HevP4ReferenceApplication_DW.is_active_c6_autolibsharedcommon),
    3, 0, 2 },

  { (char_T *)(&HevP4ReferenceApplication_DW.Compare_Mode), 8, 0, 1 },

  { (char_T *)(&HevP4ReferenceApplication_DW.Drivetrain_InstanceData), 17, 0, 1
  },

  { (char_T *)(&HevP4ReferenceApplication_DW.SiMappedEngine_InstanceData), 20, 0,
    1 },

  { (char_T *)(&HevP4ReferenceApplication_DW.Battery_InstanceData), 18, 0, 1 },

  { (char_T *)
    (&HevP4ReferenceApplication_DW.HybridControlModuleHCMOptimal_InstanceData),
    14, 0, 1 },

  { (char_T *)(&HevP4ReferenceApplication_DW.SiEngineController_InstanceData),
    15, 0, 1 },

  { (char_T *)
    (&HevP4ReferenceApplication_DW.TransmissionControlModuleTCM_InstanceData),
    16, 0, 1 },

  { (char_T *)(&HevP4ReferenceApplication_DW.MotMapped_InstanceData), 19, 0, 1 },

  { (char_T *)(&HevP4ReferenceApplication_DW.PassThrough_b.PassThrough_MODE), 8,
    0, 1 },

  { (char_T *)(&HevP4ReferenceApplication_DW.PassThrough.PassThrough_MODE), 8, 0,
    1 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  20U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&HevP4ReferenceApplication_P.LongitudinalDriver_GearInit), 0, 0,
    5074 },

  { (char_T *)(&HevP4ReferenceApplication_P.Constant_Value_e), 8, 0, 1 },

  { (char_T *)(&HevP4ReferenceApplication_P.ManualSwitch_CurrentSetting), 3, 0,
    1 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  3U,
  rtPTransitions
};

/* [EOF] HevP4ReferenceApplication_dt.h */
