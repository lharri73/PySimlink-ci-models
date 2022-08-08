/*
 * HevP4ReferenceApplication.c
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

#include "rt_logging_mmi.h"
#include "HevP4ReferenceApplication_capi.h"
#include <math.h>
#include "HevP4ReferenceApplication.h"
#include "HevP4ReferenceApplication_private.h"
#include "HevP4ReferenceApplication_dt.h"

/* user code (top of parameter file) */
const int_T gblNumToFiles = 0;
const int_T gblNumFrFiles = 0;
const int_T gblNumFrWksBlocks = 1;
static DataMapInfo rt_dataMapInfo;
DataMapInfo* rt_dataMapInfoPtr = &rt_dataMapInfo;
rtwCAPI_ModelMappingInfo* rt_modelMapInfoPtr = &(rt_dataMapInfo.mmi);
const char *gblSlvrJacPatternFileName =
  "HevP4ReferenceApplication_rsim_rtw//HevP4ReferenceApplication_Jpattern.mat";

/* Root inports information  */
const int_T gblNumRootInportBlks = 0;
const int_T gblNumModelInputs = 0;
extern rtInportTUtable *gblInportTUtables;
extern const char *gblInportFileName;
const int_T gblInportDataTypeIdx[] = { -1 };

const int_T gblInportDims[] = { -1 } ;

const int_T gblInportComplex[] = { -1 };

const int_T gblInportInterpoFlag[] = { -1 };

const int_T gblInportContinuous[] = { -1 };

#include "simstruc.h"
#include "fixedpoint.h"
#include "expm_9DBYDrz1.h"
#include "look1_pbinlcapw.h"
#include "mpower_MkJA5ZKD.h"
#include "rt_modd_snf.h"
#include "rt_powd_snf.h"

/* Named constants for Chart: '<S42>/Shift Controller' */
#define HevP4ReferenceApplication_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define HevP4ReferenceApplication_IN_Neutral ((uint8_T)1U)
#define HevP4ReferenceApplication_IN_Odd ((uint8_T)2U)
#define HevP4ReferenceApplication_IN_Reverse ((uint8_T)3U)

/* Block signals (default storage) */
B_HevP4ReferenceApplication_T HevP4ReferenceApplication_B;

/* Continuous states */
X_HevP4ReferenceApplication_T HevP4ReferenceApplication_X;

/* Block states (default storage) */
DW_HevP4ReferenceApplication_T HevP4ReferenceApplication_DW;

/* Periodic continuous states */
PeriodicIndX_HevP4ReferenceApplication_T HevP4ReferenceApplication_PeriodicIndX;
PeriodicRngX_HevP4ReferenceApplication_T HevP4ReferenceApplication_PeriodicRngX;

/* Parent Simstruct */
static SimStruct model_S;
SimStruct *const rtS = &model_S;

/*
 * System initialize for enable system:
 *    '<S35>/Pass Through'
 *    '<S37>/Pass Through'
 */
void HevP4ReferenceApplication_PassThrough_Init(real_T rtp_IC,
  B_PassThrough_HevP4ReferenceApplication_T *localB)
{
  /* SystemInitialize for Outport: '<S36>/y' incorporates:
   *  Inport: '<S36>/u'
   */
  localB->u = rtp_IC;
}

/*
 * Disable for enable system:
 *    '<S35>/Pass Through'
 *    '<S37>/Pass Through'
 */
void HevP4ReferenceApplication_PassThrough_Disable
  (DW_PassThrough_HevP4ReferenceApplication_T *localDW)
{
  localDW->PassThrough_MODE = false;
}

/*
 * Start for enable system:
 *    '<S35>/Pass Through'
 *    '<S37>/Pass Through'
 */
void HevP4ReferenceApplication_PassThrough_Start(SimStruct * const rtS_0,
  DW_PassThrough_HevP4ReferenceApplication_T *localDW)
{
  localDW->PassThrough_MODE = false;
  ssSetBlockStateForSolverChangedAtMajorStep(rtS_0);
}

/*
 * Output and update for enable system:
 *    '<S35>/Pass Through'
 *    '<S37>/Pass Through'
 */
void HevP4ReferenceApplication_PassThrough(SimStruct * const rtS_2, boolean_T
  rtu_Enable, real_T rtu_u, B_PassThrough_HevP4ReferenceApplication_T *localB,
  DW_PassThrough_HevP4ReferenceApplication_T *localDW)
{
  /* Outputs for Enabled SubSystem: '<S35>/Pass Through' incorporates:
   *  EnablePort: '<S36>/Enable'
   */
  if (ssIsSampleHit(rtS_2, 1, 0) && ssIsMajorTimeStep(rtS_2)) {
    if (rtu_Enable) {
      if (!localDW->PassThrough_MODE) {
        if (ssGetTaskTime(rtS_2,1) != ssGetTStart(rtS_2)) {
          ssSetBlockStateForSolverChangedAtMajorStep(rtS_2);
        }

        localDW->PassThrough_MODE = true;
      }
    } else if (localDW->PassThrough_MODE) {
      ssSetBlockStateForSolverChangedAtMajorStep(rtS_2);
      HevP4ReferenceApplication_PassThrough_Disable(localDW);
    }
  }

  if (localDW->PassThrough_MODE) {
    /* Inport: '<S36>/u' */
    localB->u = rtu_u;
  }

  /* End of Outputs for SubSystem: '<S35>/Pass Through' */
}

/* System initialize for root system: '<Root>' */
void MdlInitialize(void)
{
  /* local block i/o variables */
  real_T rtb_SiMappedEngine_o3;
  real_T rtb_SiMappedEngine_o4;
  real_T rtb_SiMappedEngine_o21;
  real_T rtb_SiMappedEngine_o22;
  real_T rtb_SiMappedEngine_o23;
  real_T rtb_SiMappedEngine_o24;
  real_T rtb_SiMappedEngine_o25;
  real_T rtb_SiMappedEngine_o26;
  real_T rtb_SiMappedEngine_o27;
  real_T rtb_SiMappedEngine_o28;
  real_T rtb_SiMappedEngine_o29;
  real_T rtb_SiMappedEngine_o35;
  real_T rtb_SiMappedEngine_o37;
  real_T rtb_SiMappedEngine_o38;
  real_T rtb_SiMappedEngine_o39;
  real_T rtb_SiMappedEngine_o40;
  real_T rtb_SiMappedEngine_o41;
  real_T rtb_StartCmd;

  /* InitializeConditions for TransferFcn: '<S49>/Transfer Fcn' */
  HevP4ReferenceApplication_X.TransferFcn_CSTATE = 0.0;

  /* InitializeConditions for FirstOrderHold: '<S54>/First Order Hold12' */
  HevP4ReferenceApplication_DW.Tk = (rtInf);
  HevP4ReferenceApplication_DW.Ck =
    HevP4ReferenceApplication_P.FirstOrderHold12_IniOut;
  HevP4ReferenceApplication_DW.Uk = (rtInf);
  HevP4ReferenceApplication_DW.Mk = 0.0;

  /* InitializeConditions for TransferFcn: '<S54>/Sensor Dynamics' */
  HevP4ReferenceApplication_X.SensorDynamics_CSTATE = 0.0;

  /* InitializeConditions for TransferFcn: '<S50>/Motor Coupling Dynamics' */
  HevP4ReferenceApplication_X.MotorCouplingDynamics_CSTATE = 0.0;

  /* InitializeConditions for TransferFcn: '<S50>/Battery Discharge Dynamics' */
  HevP4ReferenceApplication_X.BatteryDischargeDynamics_CSTATE = 0.0;

  /* InitializeConditions for Integrator: '<S58>/Integrator' */
  HevP4ReferenceApplication_X.Integrator_CSTATE =
    HevP4ReferenceApplication_P.Integrator_IC;

  /* InitializeConditions for Integrator: '<S58>/Integrator1' */
  HevP4ReferenceApplication_X.Integrator1_CSTATE =
    HevP4ReferenceApplication_P.Integrator1_IC;

  /* InitializeConditions for Integrator: '<S57>/Integrator' */
  HevP4ReferenceApplication_X.Integrator_CSTATE_m =
    HevP4ReferenceApplication_P.Integrator_IC_p;

  /* InitializeConditions for Integrator: '<S57>/Integrator1' */
  HevP4ReferenceApplication_X.Integrator1_CSTATE_a =
    HevP4ReferenceApplication_P.Integrator1_IC_k;

  /* InitializeConditions for Integrator: '<S57>/Integrator2' */
  HevP4ReferenceApplication_X.Integrator2_CSTATE =
    HevP4ReferenceApplication_P.Integrator2_IC;

  /* InitializeConditions for Integrator: '<S57>/Integrator3' */
  HevP4ReferenceApplication_X.Integrator3_CSTATE =
    HevP4ReferenceApplication_P.Integrator3_IC;

  /* InitializeConditions for Integrator: '<S57>/Integrator4' */
  HevP4ReferenceApplication_X.Integrator4_CSTATE =
    HevP4ReferenceApplication_P.Integrator4_IC;

  /* InitializeConditions for Integrator: '<S30>/Integrator1' */
  HevP4ReferenceApplication_X.Integrator1_CSTATE_o =
    HevP4ReferenceApplication_P.Integrator1_IC_f;

  /* InitializeConditions for Integrator: '<S41>/Integrator2' */
  HevP4ReferenceApplication_X.Integrator2_CSTATE_m =
    HevP4ReferenceApplication_P.Integrator2_IC_o;

  /* InitializeConditions for UnitDelay: '<S41>/Unit Delay' */
  HevP4ReferenceApplication_DW.UnitDelay_DSTATE[0] =
    HevP4ReferenceApplication_P.UnitDelay_InitialCondition[0];
  HevP4ReferenceApplication_DW.UnitDelay_DSTATE[1] =
    HevP4ReferenceApplication_P.UnitDelay_InitialCondition[1];

  /* InitializeConditions for FirstOrderHold: '<S49>/First Order Hold' */
  HevP4ReferenceApplication_DW.Tk_m = (rtInf);
  HevP4ReferenceApplication_DW.Ck_c =
    HevP4ReferenceApplication_P.FirstOrderHold_IniOut;
  HevP4ReferenceApplication_DW.Uk_i = (rtInf);
  HevP4ReferenceApplication_DW.Mk_h = 0.0;

  /* InitializeConditions for FirstOrderHold: '<S49>/First Order Hold1' */
  HevP4ReferenceApplication_DW.Tk_i = (rtInf);
  HevP4ReferenceApplication_DW.Ck_k =
    HevP4ReferenceApplication_P.FirstOrderHold1_IniOut;
  HevP4ReferenceApplication_DW.Uk_e = (rtInf);
  HevP4ReferenceApplication_DW.Mk_j = 0.0;

  /* InitializeConditions for FirstOrderHold: '<S49>/First Order Hold2' */
  HevP4ReferenceApplication_DW.Tk_j = (rtInf);
  HevP4ReferenceApplication_DW.Ck_a =
    HevP4ReferenceApplication_P.FirstOrderHold2_IniOut;
  HevP4ReferenceApplication_DW.Uk_p = (rtInf);
  HevP4ReferenceApplication_DW.Mk_d = 0.0;

  /* InitializeConditions for FirstOrderHold: '<S51>/First Order Hold' */
  HevP4ReferenceApplication_DW.Tk_o = (rtInf);
  HevP4ReferenceApplication_DW.Ck_h =
    HevP4ReferenceApplication_P.FirstOrderHold_IniOut_o;
  HevP4ReferenceApplication_DW.Uk_n = (rtInf);
  HevP4ReferenceApplication_DW.Mk_c = 0.0;

  /* InitializeConditions for FirstOrderHold: '<S54>/First Order Hold' */
  HevP4ReferenceApplication_DW.Tk_p = (rtInf);
  HevP4ReferenceApplication_DW.Ck_hq =
    HevP4ReferenceApplication_P.FirstOrderHold_IniOut_m;
  HevP4ReferenceApplication_DW.Uk_nh = (rtInf);
  HevP4ReferenceApplication_DW.Mk_l = 0.0;

  /* InitializeConditions for FirstOrderHold: '<S54>/First Order Hold1' */
  HevP4ReferenceApplication_DW.Tk_e = (rtInf);
  HevP4ReferenceApplication_DW.Ck_ht =
    HevP4ReferenceApplication_P.FirstOrderHold1_IniOut_d;
  HevP4ReferenceApplication_DW.Uk_c = (rtInf);
  HevP4ReferenceApplication_DW.Mk_k = 0.0;

  /* InitializeConditions for FirstOrderHold: '<S54>/First Order Hold10' */
  HevP4ReferenceApplication_DW.Tk_b = (rtInf);
  HevP4ReferenceApplication_DW.Ck_j =
    HevP4ReferenceApplication_P.FirstOrderHold10_IniOut;
  HevP4ReferenceApplication_DW.Uk_o = (rtInf);
  HevP4ReferenceApplication_DW.Mk_hm = 0.0;

  /* InitializeConditions for FirstOrderHold: '<S54>/First Order Hold11' */
  HevP4ReferenceApplication_DW.Tk_f = (rtInf);
  HevP4ReferenceApplication_DW.Ck_aq =
    HevP4ReferenceApplication_P.FirstOrderHold11_IniOut;
  HevP4ReferenceApplication_DW.Uk_ol = (rtInf);
  HevP4ReferenceApplication_DW.Mk_n = 0.0;

  /* InitializeConditions for FirstOrderHold: '<S54>/First Order Hold13' */
  HevP4ReferenceApplication_DW.Tk_ii = (rtInf);
  HevP4ReferenceApplication_DW.Ck_ch =
    HevP4ReferenceApplication_P.FirstOrderHold13_IniOut;
  HevP4ReferenceApplication_DW.Uk_l = (rtInf);
  HevP4ReferenceApplication_DW.Mk_nu = 0.0;

  /* InitializeConditions for FirstOrderHold: '<S54>/First Order Hold14' */
  HevP4ReferenceApplication_DW.Tk_oz = (rtInf);
  HevP4ReferenceApplication_DW.Ck_o =
    HevP4ReferenceApplication_P.FirstOrderHold14_IniOut;
  HevP4ReferenceApplication_DW.Uk_il = (rtInf);
  HevP4ReferenceApplication_DW.Mk_d3 = 0.0;

  /* InitializeConditions for FirstOrderHold: '<S54>/First Order Hold2' */
  HevP4ReferenceApplication_DW.Tk_g = (rtInf);
  HevP4ReferenceApplication_DW.Ck_p =
    HevP4ReferenceApplication_P.FirstOrderHold2_IniOut_g;
  HevP4ReferenceApplication_DW.Uk_pm = (rtInf);
  HevP4ReferenceApplication_DW.Mk_i = 0.0;

  /* InitializeConditions for FirstOrderHold: '<S54>/First Order Hold3' */
  HevP4ReferenceApplication_DW.Tk_h = (rtInf);
  HevP4ReferenceApplication_DW.Ck_f =
    HevP4ReferenceApplication_P.FirstOrderHold3_IniOut;
  HevP4ReferenceApplication_DW.Uk_iu = (rtInf);
  HevP4ReferenceApplication_DW.Mk_a = 0.0;

  /* InitializeConditions for FirstOrderHold: '<S54>/First Order Hold4' */
  HevP4ReferenceApplication_DW.Tk_b2 = (rtInf);
  HevP4ReferenceApplication_DW.Ck_g =
    HevP4ReferenceApplication_P.FirstOrderHold4_IniOut;
  HevP4ReferenceApplication_DW.Uk_g = (rtInf);
  HevP4ReferenceApplication_DW.Mk_dk = 0.0;

  /* InitializeConditions for FirstOrderHold: '<S54>/First Order Hold5' */
  HevP4ReferenceApplication_DW.Tk_ej = (rtInf);
  HevP4ReferenceApplication_DW.Ck_i =
    HevP4ReferenceApplication_P.FirstOrderHold5_IniOut;
  HevP4ReferenceApplication_DW.Uk_m = (rtInf);
  HevP4ReferenceApplication_DW.Mk_f = 0.0;

  /* InitializeConditions for FirstOrderHold: '<S54>/First Order Hold6' */
  HevP4ReferenceApplication_DW.Tk_d = (rtInf);
  HevP4ReferenceApplication_DW.Ck_cz =
    HevP4ReferenceApplication_P.FirstOrderHold6_IniOut;
  HevP4ReferenceApplication_DW.Uk_ob = (rtInf);
  HevP4ReferenceApplication_DW.Mk_l5 = 0.0;

  /* InitializeConditions for FirstOrderHold: '<S54>/First Order Hold7' */
  HevP4ReferenceApplication_DW.Tk_bv = (rtInf);
  HevP4ReferenceApplication_DW.Ck_m =
    HevP4ReferenceApplication_P.FirstOrderHold7_IniOut;
  HevP4ReferenceApplication_DW.Uk_ez = (rtInf);
  HevP4ReferenceApplication_DW.Mk_kb = 0.0;

  /* InitializeConditions for FirstOrderHold: '<S54>/First Order Hold8' */
  HevP4ReferenceApplication_DW.Tk_n = (rtInf);
  HevP4ReferenceApplication_DW.Ck_d =
    HevP4ReferenceApplication_P.FirstOrderHold8_IniOut;
  HevP4ReferenceApplication_DW.Uk_k = (rtInf);
  HevP4ReferenceApplication_DW.Mk_ix = 0.0;

  /* InitializeConditions for FirstOrderHold: '<S54>/First Order Hold9' */
  HevP4ReferenceApplication_DW.Tk_pr = (rtInf);
  HevP4ReferenceApplication_DW.Ck_pu =
    HevP4ReferenceApplication_P.FirstOrderHold9_IniOut;
  HevP4ReferenceApplication_DW.Uk_gg = (rtInf);
  HevP4ReferenceApplication_DW.Mk_jb = 0.0;

  /* SystemInitialize for ModelReference: '<S47>/Drivetrain' */
  DrivetrainHevP4_Init
    (&(HevP4ReferenceApplication_DW.Drivetrain_InstanceData.rtm),
     &HevP4ReferenceApplication_B.Drivetrain_o2,
     &(HevP4ReferenceApplication_DW.Drivetrain_InstanceData.rtb),
     &(HevP4ReferenceApplication_DW.Drivetrain_InstanceData.rtdw),
     &(HevP4ReferenceApplication_X.Drivetrain_CSTATE));

  /* SystemInitialize for ModelReference: '<S53>/SiMappedEngine' */
  SiMappedEngine_Init(&rtb_SiMappedEngine_o3, &rtb_SiMappedEngine_o4,
                      &rtb_SiMappedEngine_o21, &rtb_SiMappedEngine_o22,
                      &rtb_SiMappedEngine_o23, &rtb_SiMappedEngine_o24,
                      &rtb_SiMappedEngine_o25, &rtb_SiMappedEngine_o26,
                      &rtb_SiMappedEngine_o27, &rtb_SiMappedEngine_o28,
                      &rtb_SiMappedEngine_o29,
                      &HevP4ReferenceApplication_B.SiMappedEngine_o31,
                      &HevP4ReferenceApplication_B.SiMappedEngine_o32,
                      &HevP4ReferenceApplication_B.SiMappedEngine_o33,
                      &rtb_SiMappedEngine_o35, &rtb_SiMappedEngine_o37,
                      &rtb_SiMappedEngine_o38, &rtb_SiMappedEngine_o39,
                      &rtb_SiMappedEngine_o40, &rtb_SiMappedEngine_o41,
                      &(HevP4ReferenceApplication_X.SiMappedEngine_CSTATE));

  /* SystemInitialize for ModelReference: '<S50>/Battery' */
  BattHevP4_Init(&(HevP4ReferenceApplication_DW.Battery_InstanceData.rtm),
                 &(HevP4ReferenceApplication_DW.Battery_InstanceData.rtdw),
                 &(HevP4ReferenceApplication_X.Battery_CSTATE));

  /* SystemInitialize for Enabled SubSystem: '<S35>/Pass Through' */
  HevP4ReferenceApplication_PassThrough_Init
    (HevP4ReferenceApplication_P.SignalHold_IC,
     &HevP4ReferenceApplication_B.PassThrough);

  /* End of SystemInitialize for SubSystem: '<S35>/Pass Through' */

  /* SystemInitialize for Enabled SubSystem: '<S37>/Pass Through' */
  HevP4ReferenceApplication_PassThrough_Init
    (HevP4ReferenceApplication_P.SignalHold_IC_b,
     &HevP4ReferenceApplication_B.PassThrough_b);

  /* End of SystemInitialize for SubSystem: '<S37>/Pass Through' */

  /* SystemInitialize for Chart: '<S42>/Shift Controller' */
  HevP4ReferenceApplication_DW.is_GearSelect =
    HevP4ReferenceApplication_IN_NO_ACTIVE_CHILD;
  HevP4ReferenceApplication_DW.temporalCounter_i1 = 0.0;
  HevP4ReferenceApplication_DW.is_active_c6_autolibsharedcommon = 0U;
  HevP4ReferenceApplication_DW.GearState = 0.0;
  HevP4ReferenceApplication_B.Gear = 0.0;
  HevP4ReferenceApplication_DW.presentTime = 0.0;
  HevP4ReferenceApplication_DW.elapsedTime = 0.0;
  HevP4ReferenceApplication_DW.previousTime = 0.0;

  /* SystemInitialize for ModelReference: '<S10>/Hybrid Control Module (HCM) - Optimal' */
  HevP4OptimalController_Init(&HevP4ReferenceApplication_B.EngTrqCmd,
    &HevP4ReferenceApplication_B.MtrTrqCmd,
    &HevP4ReferenceApplication_B.Cltch1Cmd, &rtb_StartCmd,
    &HevP4ReferenceApplication_B.Neutral,
    &(HevP4ReferenceApplication_DW.HybridControlModuleHCMOptimal_InstanceData.rtdw));

  /* SystemInitialize for ModelReference: '<S9>/SiEngineController' */
  SiEngineController_Init
    (&(HevP4ReferenceApplication_DW.SiEngineController_InstanceData.rtb),
     &(HevP4ReferenceApplication_DW.SiEngineController_InstanceData.rtdw));

  /* SystemInitialize for ModelReference: '<S9>/Transmission Control Module (TCM)' */
  HevP4TransmissionController_Init(&HevP4ReferenceApplication_B.GearCmd,
    &(HevP4ReferenceApplication_DW.TransmissionControlModuleTCM_InstanceData.rtb),
    &(HevP4ReferenceApplication_DW.TransmissionControlModuleTCM_InstanceData.rtdw));

  /* SystemInitialize for ModelReference: '<S56>/MotMapped' */
  MotMappedP4_Init(&(HevP4ReferenceApplication_X.MotMapped_CSTATE));

  /* InitializeConditions for root-level periodic continuous states */
  {
    int_T rootPeriodicContStateIndices[1] = { 36 };

    real_T rootPeriodicContStateRanges[2] = { 0.0, 720.0 };

    (void) memcpy((void*)HevP4ReferenceApplication_PeriodicIndX,
                  rootPeriodicContStateIndices,
                  1*sizeof(int_T));
    (void) memcpy((void*)HevP4ReferenceApplication_PeriodicRngX,
                  rootPeriodicContStateRanges,
                  2*sizeof(real_T));
  }
}

/* Enable for root system: '<Root>' */
void MdlEnable(void)
{
  /* Enable for Chart: '<S42>/Shift Controller' */
  HevP4ReferenceApplication_DW.presentTime = ssGetTaskTime(rtS,1);
  HevP4ReferenceApplication_DW.previousTime =
    HevP4ReferenceApplication_DW.presentTime;
}

/* Start for root system: '<Root>' */
void MdlStart(void)
{
  /* Start for ModelReference: '<S47>/Drivetrain' */
  DrivetrainHevP4_Start
    (&(HevP4ReferenceApplication_DW.Drivetrain_InstanceData.rtm),
     &(HevP4ReferenceApplication_DW.Drivetrain_InstanceData.rtb),
     &(HevP4ReferenceApplication_DW.Drivetrain_InstanceData.rtdw),
     &(((XDis_HevP4ReferenceApplication_T *) ssGetContStateDisabled(rtS))
       ->Drivetrain_CSTATE));

  /* Start for ModelReference: '<S53>/SiMappedEngine' */
  SiMappedEngine_Start
    (&(HevP4ReferenceApplication_DW.SiMappedEngine_InstanceData.rtm),
     &HevP4ReferenceApplication_B.SiMappedEngine_o36,
     &(HevP4ReferenceApplication_DW.SiMappedEngine_InstanceData.rtdw));

  /* Start for Sqrt: '<S58>/Sqrt' */
  HevP4ReferenceApplication_DW.Sqrt_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S35>/Pass Through' */
  HevP4ReferenceApplication_PassThrough_Start(rtS,
    &HevP4ReferenceApplication_DW.PassThrough);

  /* End of Start for SubSystem: '<S35>/Pass Through' */

  /* Start for Enabled SubSystem: '<S37>/Pass Through' */
  HevP4ReferenceApplication_PassThrough_Start(rtS,
    &HevP4ReferenceApplication_DW.PassThrough_b);

  /* End of Start for SubSystem: '<S37>/Pass Through' */

  /* Start for ModelReference: '<S10>/Hybrid Control Module (HCM) - Optimal' */
  HevP4OptimalController_Start
    (&(HevP4ReferenceApplication_DW.HybridControlModuleHCMOptimal_InstanceData.rtm),
     &(HevP4ReferenceApplication_DW.HybridControlModuleHCMOptimal_InstanceData.rtdw));

  /* Start for FromWorkspace: '<S20>/FromWs' */
  {
    FWksInfo *fromwksInfo;
    if ((fromwksInfo = (FWksInfo *) calloc(1, sizeof(FWksInfo))) == (NULL)) {
      ssSetErrorStatus(rtS,
                       "from workspace STRING(Name) memory allocation error");
    } else {
      fromwksInfo->origWorkspaceVarName = "tuvar";
      fromwksInfo->origDataTypeId = 0;
      fromwksInfo->origIsComplex = 0;
      fromwksInfo->origWidth = 1;
      fromwksInfo->origElSize = sizeof(real_T);
      fromwksInfo->data = (void *)HevP4ReferenceApplication_P.FromWs_Data0;
      fromwksInfo->nDataPoints = 6;
      fromwksInfo->time = (double *)HevP4ReferenceApplication_P.FromWs_Time0;
      HevP4ReferenceApplication_DW.FromWs_PWORK.TimePtr = fromwksInfo->time;
      HevP4ReferenceApplication_DW.FromWs_PWORK.DataPtr = fromwksInfo->data;
      HevP4ReferenceApplication_DW.FromWs_PWORK.RSimInfoPtr = fromwksInfo;
    }

    HevP4ReferenceApplication_DW.FromWs_IWORK.PrevIndex = 0;

    {
      int_T* zcTimeIndices = &HevP4ReferenceApplication_DW.FromWs_ZCTimeIndices
        [0];
      const double* timePoints = (double*)
        HevP4ReferenceApplication_DW.FromWs_PWORK.TimePtr;
      boolean_T justHadZcTime = false;
      int_T zcIdx = 0;
      int_T i;
      for (i = 0; i < 6-1; i++) {
        if (!justHadZcTime && timePoints[i] == timePoints[i+1]) {
          zcTimeIndices[zcIdx++] = i;
          justHadZcTime = true;
        } else {
          justHadZcTime = false;
        }
      }

      HevP4ReferenceApplication_DW.FromWs_CurZCTimeIndIdx = 0;
    }
  }

  /* Start for ModelReference: '<S9>/SiEngineController' */
  SiEngineController_Start
    (&(HevP4ReferenceApplication_DW.SiEngineController_InstanceData.rtm),
     &HevP4ReferenceApplication_B.SiEngineController_o4,
     &HevP4ReferenceApplication_B.SiEngineController_o8,
     &HevP4ReferenceApplication_B.SiEngineController_o10,
     &HevP4ReferenceApplication_B.SiEngineController_o11,
     &HevP4ReferenceApplication_B.SiEngineController_o12,
     &HevP4ReferenceApplication_B.SiEngineController_o14,
     &(HevP4ReferenceApplication_DW.SiEngineController_InstanceData.rtdw));
  MdlInitialize();
  MdlEnable();
}

/* Outputs for root system: '<Root>' */
void MdlOutputs(int_T tid)
{
  /* local block i/o variables */
  real_T rtb_SiMappedEngine_o15;
  real_T rtb_IntkGasMassFlw;
  real_T rtb_NrmlzdAirChrg;
  real_T rtb_Bsfc;
  real_T rtb_Saturation_m;
  real_T rtb_Saturation_n;
  real_T rtb_FromWs;
  real_T rtb_SiMappedEngine_o3;
  real_T rtb_SiMappedEngine_o4;
  real_T rtb_SiMappedEngine_o21;
  real_T rtb_SiMappedEngine_o22;
  real_T rtb_SiMappedEngine_o23;
  real_T rtb_SiMappedEngine_o24;
  real_T rtb_SiMappedEngine_o25;
  real_T rtb_SiMappedEngine_o26;
  real_T rtb_SiMappedEngine_o27;
  real_T rtb_SiMappedEngine_o28;
  real_T rtb_SiMappedEngine_o29;
  real_T rtb_SiMappedEngine_o35;
  real_T rtb_SiMappedEngine_o37;
  real_T rtb_SiMappedEngine_o38;
  real_T rtb_SiMappedEngine_o39;
  real_T rtb_SiMappedEngine_o40;
  real_T rtb_SiMappedEngine_o41;
  boolean_T rtb_Cltch1State;
  real_T rtb_StartCmd;
  real_T rtb_LdCmd;
  real_T rtb_EstIntkPortMassFlw;
  real_T rtb_F[4];
  real_T rtb_F_0[4];
  real_T sigmaA[4];
  real_T sigmaA_tmp[4];
  real_T rtb_TraceVelocityTargetActualmph[2];
  real_T rtb_BatteryCurrentA;
  real_T rtb_BatterySOC;
  real_T rtb_Clock_tmp;
  real_T rtb_Integrator;
  real_T rtb_RateTransition2;
  real_T rtb_RateTransition5;
  real_T rtb_RateTransition7;
  real_T rtb_RateTransition8;
  real_T rtb_TPCOMassgmi;
  real_T rtb_TPHCMassgmi;
  real_T rtb_TPNOxMassgmi;
  real_T z_data;
  int32_T loop_ub_tmp;
  int_T iy;
  boolean_T NOT_tmp;
  static const real_T f[170] = { 1.0, 2.0, 6.0, 24.0, 120.0, 720.0, 5040.0,
    40320.0, 362880.0, 3.6288E+6, 3.99168E+7, 4.790016E+8, 6.2270208E+9,
    8.71782912E+10, 1.307674368E+12, 2.0922789888E+13, 3.55687428096E+14,
    6.402373705728E+15, 1.21645100408832E+17, 2.43290200817664E+18,
    5.109094217170944E+19, 1.1240007277776077E+21, 2.5852016738884978E+22,
    6.2044840173323941E+23, 1.5511210043330986E+25, 4.0329146112660565E+26,
    1.0888869450418352E+28, 3.0488834461171384E+29, 8.8417619937397008E+30,
    2.6525285981219103E+32, 8.2228386541779224E+33, 2.6313083693369352E+35,
    8.6833176188118859E+36, 2.9523279903960412E+38, 1.0333147966386144E+40,
    3.7199332678990118E+41, 1.3763753091226343E+43, 5.23022617466601E+44,
    2.0397882081197442E+46, 8.1591528324789768E+47, 3.3452526613163803E+49,
    1.4050061177528798E+51, 6.0415263063373834E+52, 2.6582715747884485E+54,
    1.1962222086548019E+56, 5.5026221598120885E+57, 2.5862324151116818E+59,
    1.2413915592536073E+61, 6.0828186403426752E+62, 3.0414093201713376E+64,
    1.5511187532873822E+66, 8.0658175170943877E+67, 4.2748832840600255E+69,
    2.3084369733924138E+71, 1.2696403353658276E+73, 7.1099858780486348E+74,
    4.0526919504877221E+76, 2.3505613312828789E+78, 1.3868311854568986E+80,
    8.3209871127413916E+81, 5.0758021387722484E+83, 3.1469973260387939E+85,
    1.98260831540444E+87, 1.2688693218588417E+89, 8.2476505920824715E+90,
    5.4434493907744307E+92, 3.6471110918188683E+94, 2.4800355424368305E+96,
    1.711224524281413E+98, 1.197857166996989E+100, 8.5047858856786218E+101,
    6.1234458376886077E+103, 4.4701154615126834E+105, 3.3078854415193856E+107,
    2.4809140811395391E+109, 1.8854947016660498E+111, 1.4518309202828584E+113,
    1.1324281178206295E+115, 8.9461821307829729E+116, 7.1569457046263779E+118,
    5.7971260207473655E+120, 4.75364333701284E+122, 3.9455239697206569E+124,
    3.314240134565352E+126, 2.8171041143805494E+128, 2.4227095383672724E+130,
    2.1077572983795269E+132, 1.8548264225739836E+134, 1.6507955160908452E+136,
    1.4857159644817607E+138, 1.3520015276784023E+140, 1.24384140546413E+142,
    1.1567725070816409E+144, 1.0873661566567424E+146, 1.0329978488239052E+148,
    9.916779348709491E+149, 9.6192759682482062E+151, 9.426890448883242E+153,
    9.33262154439441E+155, 9.33262154439441E+157, 9.4259477598383536E+159,
    9.6144667150351211E+161, 9.9029007164861754E+163, 1.0299016745145622E+166,
    1.0813967582402903E+168, 1.1462805637347078E+170, 1.2265202031961373E+172,
    1.3246418194518284E+174, 1.4438595832024928E+176, 1.5882455415227421E+178,
    1.7629525510902437E+180, 1.9745068572210728E+182, 2.2311927486598123E+184,
    2.5435597334721862E+186, 2.9250936934930141E+188, 3.3931086844518965E+190,
    3.969937160808719E+192, 4.6845258497542883E+194, 5.5745857612076033E+196,
    6.6895029134491239E+198, 8.09429852527344E+200, 9.8750442008335976E+202,
    1.2146304367025325E+205, 1.5061417415111404E+207, 1.8826771768889254E+209,
    2.3721732428800459E+211, 3.0126600184576582E+213, 3.8562048236258025E+215,
    4.9745042224772855E+217, 6.4668554892204716E+219, 8.4715806908788174E+221,
    1.1182486511960039E+224, 1.4872707060906852E+226, 1.9929427461615181E+228,
    2.6904727073180495E+230, 3.6590428819525472E+232, 5.01288874827499E+234,
    6.9177864726194859E+236, 9.6157231969410859E+238, 1.346201247571752E+241,
    1.89814375907617E+243, 2.6953641378881614E+245, 3.8543707171800706E+247,
    5.5502938327393013E+249, 8.0479260574719866E+251, 1.17499720439091E+254,
    1.7272458904546376E+256, 2.5563239178728637E+258, 3.8089226376305671E+260,
    5.7133839564458505E+262, 8.6272097742332346E+264, 1.3113358856834518E+267,
    2.0063439050956811E+269, 3.0897696138473489E+271, 4.7891429014633912E+273,
    7.47106292628289E+275, 1.1729568794264138E+278, 1.8532718694937338E+280,
    2.9467022724950369E+282, 4.714723635992059E+284, 7.5907050539472148E+286,
    1.2296942187394488E+289, 2.0044015765453015E+291, 3.2872185855342945E+293,
    5.423910666131586E+295, 9.0036917057784329E+297, 1.5036165148649983E+300,
    2.5260757449731969E+302, 4.2690680090047027E+304, 7.257415615307994E+306 };

  /* Clock: '<S13>/Clock' incorporates:
   *  FirstOrderHold: '<S49>/First Order Hold'
   *  FirstOrderHold: '<S49>/First Order Hold1'
   *  FirstOrderHold: '<S49>/First Order Hold2'
   *  FirstOrderHold: '<S51>/First Order Hold'
   *  FirstOrderHold: '<S54>/First Order Hold'
   *  FirstOrderHold: '<S54>/First Order Hold1'
   *  FirstOrderHold: '<S54>/First Order Hold10'
   *  FirstOrderHold: '<S54>/First Order Hold11'
   *  FirstOrderHold: '<S54>/First Order Hold12'
   *  FirstOrderHold: '<S54>/First Order Hold13'
   *  FirstOrderHold: '<S54>/First Order Hold14'
   *  FirstOrderHold: '<S54>/First Order Hold2'
   *  FirstOrderHold: '<S54>/First Order Hold3'
   *  FirstOrderHold: '<S54>/First Order Hold4'
   *  FirstOrderHold: '<S54>/First Order Hold5'
   *  FirstOrderHold: '<S54>/First Order Hold6'
   *  FirstOrderHold: '<S54>/First Order Hold7'
   *  FirstOrderHold: '<S54>/First Order Hold8'
   *  FirstOrderHold: '<S54>/First Order Hold9'
   */
  rtb_Clock_tmp = ssGetT(rtS);
  if (ssIsSampleHit(rtS, 1, 0)) {
    /* Constant: '<S13>/tFinal' */
    HevP4ReferenceApplication_B.tFinal =
      HevP4ReferenceApplication_P.tFinal_Value;

    /* Constant: '<S13>/repeat' */
    HevP4ReferenceApplication_B.repeat =
      HevP4ReferenceApplication_P.repeat_Value;
  }

  /* Switch: '<S13>/Switch' incorporates:
   *  Clock: '<S13>/Clock'
   *  Math: '<S13>/Math Function'
   */
  if (HevP4ReferenceApplication_B.repeat >
      HevP4ReferenceApplication_P.Switch_Threshold) {
    rtb_Integrator = rt_modd_snf(rtb_Clock_tmp,
      HevP4ReferenceApplication_B.tFinal);
  } else {
    rtb_Integrator = rtb_Clock_tmp;
  }

  /* End of Switch: '<S13>/Switch' */

  /* Lookup_n-D: '<S13>/1-D Lookup Table' incorporates:
   *  Integrator: '<S58>/Integrator'
   */
  HevP4ReferenceApplication_B.uDLookupTable = look1_pbinlcapw(rtb_Integrator,
    HevP4ReferenceApplication_P.uDLookupTable_bp01Data,
    HevP4ReferenceApplication_P.uDLookupTable_tableData,
    &HevP4ReferenceApplication_DW.m_bpIndex, 2473U);

  /* TransferFcn: '<S49>/Transfer Fcn' */
  HevP4ReferenceApplication_B.TransferFcn = 0.0;
  HevP4ReferenceApplication_B.TransferFcn +=
    HevP4ReferenceApplication_P.TransferFcn_C *
    HevP4ReferenceApplication_X.TransferFcn_CSTATE;

  /* ModelReference: '<S47>/Drivetrain' */
  DrivetrainHevP4(&(HevP4ReferenceApplication_DW.Drivetrain_InstanceData.rtm),
                  &HevP4ReferenceApplication_B.TransferFcn,
                  &HevP4ReferenceApplication_B.xdot,
                  &HevP4ReferenceApplication_B.Drivetrain_o2, &rtb_Cltch1State,
                  &HevP4ReferenceApplication_B.Drivetrain_o4,
                  &HevP4ReferenceApplication_B.Drivetrain_o5,
                  &HevP4ReferenceApplication_B.Drivetrain_o6,
                  &(HevP4ReferenceApplication_DW.Drivetrain_InstanceData.rtb),
                  &(HevP4ReferenceApplication_DW.Drivetrain_InstanceData.rtdw),
                  &(HevP4ReferenceApplication_X.Drivetrain_CSTATE),
                  &(HevP4ReferenceApplication_DW.Drivetrain_InstanceData.rtzce),
                  &(((XDis_HevP4ReferenceApplication_T *) ssGetContStateDisabled
                     (rtS))->Drivetrain_CSTATE));

  /* Gain: '<S6>/m//s to mph' */
  HevP4ReferenceApplication_B.mstomph[0] =
    HevP4ReferenceApplication_P.mstomph_Gain *
    HevP4ReferenceApplication_B.uDLookupTable;
  HevP4ReferenceApplication_B.mstomph[1] =
    HevP4ReferenceApplication_P.mstomph_Gain * HevP4ReferenceApplication_B.xdot;

  /* RateTransition: '<S6>/Rate Transition4' */
  if (ssIsSampleHit(rtS, 1, 0) &&
      (HevP4ReferenceApplication_DW.RateTransition4_semaphoreTaken == 0)) {
    HevP4ReferenceApplication_DW.RateTransition4_Buffer0[0] =
      HevP4ReferenceApplication_B.mstomph[0];
    HevP4ReferenceApplication_DW.RateTransition4_Buffer0[1] =
      HevP4ReferenceApplication_B.mstomph[1];
  }

  if (ssIsSampleHit(rtS, 3, 0)) {
    HevP4ReferenceApplication_DW.RateTransition4_semaphoreTaken = 1;
    rtb_TraceVelocityTargetActualmph[0] =
      HevP4ReferenceApplication_DW.RateTransition4_Buffer0[0];
    rtb_TraceVelocityTargetActualmph[1] =
      HevP4ReferenceApplication_DW.RateTransition4_Buffer0[1];
    HevP4ReferenceApplication_DW.RateTransition4_semaphoreTaken = 0;
  }

  /* End of RateTransition: '<S6>/Rate Transition4' */

  /* FirstOrderHold: '<S54>/First Order Hold12' */
  HevP4ReferenceApplication_B.FirstOrderHold12 = HevP4ReferenceApplication_DW.Ck;

  /* FirstOrderHold: '<S54>/First Order Hold12' */
  if (HevP4ReferenceApplication_DW.Tk != (rtInf)) {
    /* FirstOrderHold: '<S54>/First Order Hold12' */
    HevP4ReferenceApplication_B.FirstOrderHold12 += (rtb_Clock_tmp -
      HevP4ReferenceApplication_DW.Tk) * HevP4ReferenceApplication_DW.Mk;
  }

  /* TransferFcn: '<S54>/Sensor Dynamics' */
  rtb_Integrator = HevP4ReferenceApplication_P.SensorDynamics_C *
    HevP4ReferenceApplication_X.SensorDynamics_CSTATE;

  /* UnitConversion: '<S54>/Unit Conversion15' */
  /* Unit Conversion - from: rad/s to: rev/min
     Expression: output = (9.5493*input) + (0) */
  HevP4ReferenceApplication_B.UnitConversion15 = 9.5492965855137211 *
    rtb_Integrator;

  /* ModelReference: '<S53>/SiMappedEngine' */
  SiMappedEngine(&(HevP4ReferenceApplication_DW.SiMappedEngine_InstanceData.rtm),
                 &HevP4ReferenceApplication_B.FirstOrderHold12,
                 &HevP4ReferenceApplication_B.UnitConversion15,
                 &HevP4ReferenceApplication_B.SiMappedEngine_o1,
                 &HevP4ReferenceApplication_B.EngSpd, &rtb_SiMappedEngine_o3,
                 &rtb_SiMappedEngine_o4,
                 &HevP4ReferenceApplication_B.SiMappedEngine_o5,
                 &HevP4ReferenceApplication_B.SiMappedEngine_o6,
                 &HevP4ReferenceApplication_B.SiMappedEngine_o7,
                 &HevP4ReferenceApplication_B.SiMappedEngine_o8,
                 &HevP4ReferenceApplication_B.SiMappedEngine_o9,
                 &HevP4ReferenceApplication_B.SiMappedEngine_o10,
                 &HevP4ReferenceApplication_B.SiMappedEngine_o11,
                 &HevP4ReferenceApplication_B.SiMappedEngine_o12,
                 &HevP4ReferenceApplication_B.SiMappedEngine_o13,
                 &HevP4ReferenceApplication_B.SiMappedEngine_o14,
                 &rtb_SiMappedEngine_o15,
                 &HevP4ReferenceApplication_B.SiMappedEngine_o16,
                 &rtb_IntkGasMassFlw, &rtb_NrmlzdAirChrg,
                 &HevP4ReferenceApplication_B.ExhManGasTemp,
                 &HevP4ReferenceApplication_B.SiMappedEngine_o20,
                 &rtb_SiMappedEngine_o21, &rtb_SiMappedEngine_o22,
                 &rtb_SiMappedEngine_o23, &rtb_SiMappedEngine_o24,
                 &rtb_SiMappedEngine_o25, &rtb_SiMappedEngine_o26,
                 &rtb_SiMappedEngine_o27, &rtb_SiMappedEngine_o28,
                 &rtb_SiMappedEngine_o29, &rtb_Bsfc,
                 &HevP4ReferenceApplication_B.SiMappedEngine_o31,
                 &HevP4ReferenceApplication_B.SiMappedEngine_o32,
                 &HevP4ReferenceApplication_B.SiMappedEngine_o33,
                 &HevP4ReferenceApplication_B.SiMappedEngine_o34,
                 &rtb_SiMappedEngine_o35,
                 &HevP4ReferenceApplication_B.SiMappedEngine_o36,
                 &rtb_SiMappedEngine_o37, &rtb_SiMappedEngine_o38,
                 &rtb_SiMappedEngine_o39, &rtb_SiMappedEngine_o40,
                 &rtb_SiMappedEngine_o41,
                 &(HevP4ReferenceApplication_DW.SiMappedEngine_InstanceData.rtb),
                 &(HevP4ReferenceApplication_DW.SiMappedEngine_InstanceData.rtdw),
                 &(HevP4ReferenceApplication_X.SiMappedEngine_CSTATE));

  /* RateTransition: '<S6>/Rate Transition2' */
  if (ssIsSampleHit(rtS, 1, 0) &&
      (HevP4ReferenceApplication_DW.RateTransition2_semaphoreTaken == 0)) {
    HevP4ReferenceApplication_DW.RateTransition2_Buffer0 =
      HevP4ReferenceApplication_B.EngSpd;
  }

  if (ssIsSampleHit(rtS, 3, 0)) {
    HevP4ReferenceApplication_DW.RateTransition2_semaphoreTaken = 1;
    rtb_RateTransition2 = HevP4ReferenceApplication_DW.RateTransition2_Buffer0;
    HevP4ReferenceApplication_DW.RateTransition2_semaphoreTaken = 0;
  }

  /* End of RateTransition: '<S6>/Rate Transition2' */

  /* Gain: '<S6>/rad//s to rpm' */
  HevP4ReferenceApplication_B.radstorpm =
    HevP4ReferenceApplication_P.radstorpm_Gain *
    HevP4ReferenceApplication_B.Drivetrain_o5;

  /* RateTransition: '<S6>/Rate Transition5' incorporates:
   *  RateTransition: '<S6>/Rate Transition7'
   */
  if (ssIsSampleHit(rtS, 1, 0)) {
    if (HevP4ReferenceApplication_DW.RateTransition5_semaphoreTaken == 0) {
      HevP4ReferenceApplication_DW.RateTransition5_Buffer0 =
        HevP4ReferenceApplication_B.radstorpm;
    }

    if (HevP4ReferenceApplication_DW.RateTransition7_semaphoreTaken == 0) {
      HevP4ReferenceApplication_DW.RateTransition7_Buffer0 =
        HevP4ReferenceApplication_B.SiMappedEngine_o1;
    }
  }

  if (ssIsSampleHit(rtS, 3, 0)) {
    HevP4ReferenceApplication_DW.RateTransition5_semaphoreTaken = 1;
    rtb_RateTransition5 = HevP4ReferenceApplication_DW.RateTransition5_Buffer0;
    HevP4ReferenceApplication_DW.RateTransition5_semaphoreTaken = 0;
    HevP4ReferenceApplication_DW.RateTransition7_semaphoreTaken = 1;
    rtb_RateTransition7 = HevP4ReferenceApplication_DW.RateTransition7_Buffer0;
    HevP4ReferenceApplication_DW.RateTransition7_semaphoreTaken = 0;
  }

  /* End of RateTransition: '<S6>/Rate Transition5' */

  /* TransferFcn: '<S50>/Motor Coupling Dynamics' */
  HevP4ReferenceApplication_B.MotTrq = 0.0;
  HevP4ReferenceApplication_B.MotTrq +=
    HevP4ReferenceApplication_P.MotorCouplingDynamics_C *
    HevP4ReferenceApplication_X.MotorCouplingDynamics_CSTATE;

  /* RateTransition: '<S6>/Rate Transition8' */
  if (ssIsSampleHit(rtS, 1, 0) &&
      (HevP4ReferenceApplication_DW.RateTransition8_semaphoreTaken == 0)) {
    HevP4ReferenceApplication_DW.RateTransition8_Buffer0 =
      HevP4ReferenceApplication_B.MotTrq;
  }

  if (ssIsSampleHit(rtS, 3, 0)) {
    HevP4ReferenceApplication_DW.RateTransition8_semaphoreTaken = 1;
    rtb_RateTransition8 = HevP4ReferenceApplication_DW.RateTransition8_Buffer0;
    HevP4ReferenceApplication_DW.RateTransition8_semaphoreTaken = 0;
  }

  /* End of RateTransition: '<S6>/Rate Transition8' */

  /* TransferFcn: '<S50>/Battery Discharge Dynamics' */
  HevP4ReferenceApplication_B.BatteryDischargeDynamics = 0.0;
  HevP4ReferenceApplication_B.BatteryDischargeDynamics +=
    HevP4ReferenceApplication_P.BatteryDischargeDynamics_C *
    HevP4ReferenceApplication_X.BatteryDischargeDynamics_CSTATE;
  if (ssIsSampleHit(rtS, 1, 0)) {
    /* Constant: '<S3>/Constant6' */
    HevP4ReferenceApplication_B.Temp =
      HevP4ReferenceApplication_P.Constant6_Value;
  }

  /* ModelReference: '<S50>/Battery' */
  BattHevP4(&(HevP4ReferenceApplication_DW.Battery_InstanceData.rtm),
            &HevP4ReferenceApplication_B.BatteryDischargeDynamics,
            &HevP4ReferenceApplication_B.Temp,
            &HevP4ReferenceApplication_B.BattSoc,
            &HevP4ReferenceApplication_B.BattV,
            &HevP4ReferenceApplication_B.BattCrnt,
            &HevP4ReferenceApplication_B.Battery_o4,
            &(HevP4ReferenceApplication_DW.Battery_InstanceData.rtb),
            &(HevP4ReferenceApplication_DW.Battery_InstanceData.rtdw),
            &(HevP4ReferenceApplication_X.Battery_CSTATE));

  /* RateTransition: '<S6>/Rate Transition10' incorporates:
   *  RateTransition: '<S6>/Rate Transition1'
   */
  if (ssIsSampleHit(rtS, 1, 0)) {
    if (HevP4ReferenceApplication_DW.RateTransition10_semaphoreTaken == 0) {
      HevP4ReferenceApplication_DW.RateTransition10_Buffer0 =
        HevP4ReferenceApplication_B.BattCrnt;
    }

    if (HevP4ReferenceApplication_DW.RateTransition1_semaphoreTaken == 0) {
      HevP4ReferenceApplication_DW.RateTransition1_Buffer0 =
        HevP4ReferenceApplication_B.BattSoc;
    }
  }

  if (ssIsSampleHit(rtS, 3, 0)) {
    HevP4ReferenceApplication_DW.RateTransition10_semaphoreTaken = 1;
    rtb_BatteryCurrentA = HevP4ReferenceApplication_DW.RateTransition10_Buffer0;
    HevP4ReferenceApplication_DW.RateTransition10_semaphoreTaken = 0;
    HevP4ReferenceApplication_DW.RateTransition1_semaphoreTaken = 1;
    rtb_BatterySOC = HevP4ReferenceApplication_DW.RateTransition1_Buffer0;
    HevP4ReferenceApplication_DW.RateTransition1_semaphoreTaken = 0;
  }

  /* End of RateTransition: '<S6>/Rate Transition10' */

  /* Gain: '<S58>/m^3 to US Gal' incorporates:
   *  Integrator: '<S58>/Integrator1'
   */
  HevP4ReferenceApplication_B.m3toUSGal =
    HevP4ReferenceApplication_P.m3toUSGal_Gain *
    HevP4ReferenceApplication_X.Integrator1_CSTATE;

  /* Saturate: '<S58>/Saturation1' */
  if (ssIsMajorTimeStep(rtS)) {
    HevP4ReferenceApplication_DW.Saturation1_MODE =
      HevP4ReferenceApplication_B.m3toUSGal >=
      HevP4ReferenceApplication_P.Saturation1_UpperSat ? 1 :
      HevP4ReferenceApplication_B.m3toUSGal >
      HevP4ReferenceApplication_P.Saturation1_LowerSat ? 0 : -1;
  }

  /* Product: '<S58>/US MPG Calc' incorporates:
   *  Gain: '<S58>/m to mile'
   *  Integrator: '<S58>/Integrator'
   *  Saturate: '<S58>/Saturation1'
   */
  HevP4ReferenceApplication_B.USMPGCalc =
    HevP4ReferenceApplication_P.mtomile_Gain *
    HevP4ReferenceApplication_X.Integrator_CSTATE /
    (HevP4ReferenceApplication_DW.Saturation1_MODE == 1 ?
     HevP4ReferenceApplication_P.Saturation1_UpperSat :
     HevP4ReferenceApplication_DW.Saturation1_MODE == -1 ?
     HevP4ReferenceApplication_P.Saturation1_LowerSat :
     HevP4ReferenceApplication_B.m3toUSGal);

  /* RateTransition: '<S58>/Rate Transition3' */
  if (ssIsSampleHit(rtS, 1, 0) &&
      (HevP4ReferenceApplication_DW.RateTransition3_semaphoreTaken == 0)) {
    HevP4ReferenceApplication_DW.RateTransition3_Buffer0 =
      HevP4ReferenceApplication_B.USMPGCalc;
  }

  if (ssIsSampleHit(rtS, 3, 0)) {
    HevP4ReferenceApplication_DW.RateTransition3_semaphoreTaken = 1;
    rtb_Integrator = HevP4ReferenceApplication_DW.RateTransition3_Buffer0;
    HevP4ReferenceApplication_DW.RateTransition3_semaphoreTaken = 0;
  }

  /* End of RateTransition: '<S58>/Rate Transition3' */

  /* Gain: '<S57>/m to mi' incorporates:
   *  Integrator: '<S57>/Integrator'
   */
  HevP4ReferenceApplication_B.mtomi = HevP4ReferenceApplication_P.mtomi_Gain *
    HevP4ReferenceApplication_X.Integrator_CSTATE_m;

  /* Saturate: '<S57>/Saturation' */
  if (ssIsMajorTimeStep(rtS)) {
    HevP4ReferenceApplication_DW.Saturation_MODE =
      HevP4ReferenceApplication_B.mtomi >=
      HevP4ReferenceApplication_P.Saturation_UpperSat ? 1 :
      HevP4ReferenceApplication_B.mtomi >
      HevP4ReferenceApplication_P.Saturation_LowerSat ? 0 : -1;
  }

  rtb_RateTransition2 = HevP4ReferenceApplication_DW.Saturation_MODE == 1 ?
    HevP4ReferenceApplication_P.Saturation_UpperSat :
    HevP4ReferenceApplication_DW.Saturation_MODE == -1 ?
    HevP4ReferenceApplication_P.Saturation_LowerSat :
    HevP4ReferenceApplication_B.mtomi;

  /* End of Saturate: '<S57>/Saturation' */

  /* Product: '<S57>/L//100 Km Calc' incorporates:
   *  Gain: '<S57>/Kg to g'
   *  Integrator: '<S57>/Integrator1'
   */
  HevP4ReferenceApplication_B.L100KmCalc = 1.0 / rtb_RateTransition2 *
    (HevP4ReferenceApplication_P.Kgtog_Gain *
     HevP4ReferenceApplication_X.Integrator1_CSTATE_a);

  /* RateTransition: '<S57>/Rate Transition' */
  if (ssIsSampleHit(rtS, 1, 0) &&
      (HevP4ReferenceApplication_DW.RateTransition_semaphoreTaken == 0)) {
    HevP4ReferenceApplication_DW.RateTransition_Buffer0 =
      HevP4ReferenceApplication_B.L100KmCalc;
  }

  if (ssIsSampleHit(rtS, 3, 0)) {
    HevP4ReferenceApplication_DW.RateTransition_semaphoreTaken = 1;
    rtb_TPHCMassgmi = HevP4ReferenceApplication_DW.RateTransition_Buffer0;
    HevP4ReferenceApplication_DW.RateTransition_semaphoreTaken = 0;
  }

  /* End of RateTransition: '<S57>/Rate Transition' */

  /* Product: '<S57>/L//100 Km Calc1' incorporates:
   *  Gain: '<S57>/Kg to g '
   *  Integrator: '<S57>/Integrator2'
   */
  HevP4ReferenceApplication_B.L100KmCalc1 = 1.0 / rtb_RateTransition2 *
    (HevP4ReferenceApplication_P.Kgtog_Gain_l *
     HevP4ReferenceApplication_X.Integrator2_CSTATE);

  /* RateTransition: '<S57>/Rate Transition1' */
  if (ssIsSampleHit(rtS, 1, 0) &&
      (HevP4ReferenceApplication_DW.RateTransition1_semaphoreTaken_h == 0)) {
    HevP4ReferenceApplication_DW.RateTransition1_Buffer0_m =
      HevP4ReferenceApplication_B.L100KmCalc1;
  }

  if (ssIsSampleHit(rtS, 3, 0)) {
    HevP4ReferenceApplication_DW.RateTransition1_semaphoreTaken_h = 1;
    rtb_TPCOMassgmi = HevP4ReferenceApplication_DW.RateTransition1_Buffer0_m;
    HevP4ReferenceApplication_DW.RateTransition1_semaphoreTaken_h = 0;
  }

  /* End of RateTransition: '<S57>/Rate Transition1' */

  /* Product: '<S57>/L//100 Km Calc2' incorporates:
   *  Gain: '<S57>/Kg to g  '
   *  Integrator: '<S57>/Integrator3'
   */
  HevP4ReferenceApplication_B.L100KmCalc2 = 1.0 / rtb_RateTransition2 *
    (HevP4ReferenceApplication_P.Kgtog_Gain_f *
     HevP4ReferenceApplication_X.Integrator3_CSTATE);

  /* RateTransition: '<S57>/Rate Transition2' */
  if (ssIsSampleHit(rtS, 1, 0) &&
      (HevP4ReferenceApplication_DW.RateTransition2_semaphoreTaken_j == 0)) {
    HevP4ReferenceApplication_DW.RateTransition2_Buffer0_j =
      HevP4ReferenceApplication_B.L100KmCalc2;
  }

  if (ssIsSampleHit(rtS, 3, 0)) {
    HevP4ReferenceApplication_DW.RateTransition2_semaphoreTaken_j = 1;
    rtb_TPNOxMassgmi = HevP4ReferenceApplication_DW.RateTransition2_Buffer0_j;
    HevP4ReferenceApplication_DW.RateTransition2_semaphoreTaken_j = 0;
  }

  /* End of RateTransition: '<S57>/Rate Transition2' */

  /* Gain: '<S57>/m to km' incorporates:
   *  Integrator: '<S57>/Integrator'
   */
  HevP4ReferenceApplication_B.mtokm = HevP4ReferenceApplication_P.mtokm_Gain *
    HevP4ReferenceApplication_X.Integrator_CSTATE_m;

  /* Saturate: '<S57>/Saturation1' */
  if (ssIsMajorTimeStep(rtS)) {
    HevP4ReferenceApplication_DW.Saturation1_MODE_h =
      HevP4ReferenceApplication_B.mtokm >=
      HevP4ReferenceApplication_P.Saturation1_UpperSat_h ? 1 :
      HevP4ReferenceApplication_B.mtokm >
      HevP4ReferenceApplication_P.Saturation1_LowerSat_d ? 0 : -1;
  }

  /* Product: '<S57>/L//100 Km Calc3' incorporates:
   *  Gain: '<S57>/Kg to g   '
   *  Integrator: '<S57>/Integrator4'
   *  Saturate: '<S57>/Saturation1'
   */
  HevP4ReferenceApplication_B.L100KmCalc3 = 1.0 /
    (HevP4ReferenceApplication_DW.Saturation1_MODE_h == 1 ?
     HevP4ReferenceApplication_P.Saturation1_UpperSat_h :
     HevP4ReferenceApplication_DW.Saturation1_MODE_h == -1 ?
     HevP4ReferenceApplication_P.Saturation1_LowerSat_d :
     HevP4ReferenceApplication_B.mtokm) *
    (HevP4ReferenceApplication_P.Kgtog_Gain_c *
     HevP4ReferenceApplication_X.Integrator4_CSTATE);

  /* RateTransition: '<S57>/Rate Transition3' */
  if (ssIsSampleHit(rtS, 1, 0) &&
      (HevP4ReferenceApplication_DW.RateTransition3_semaphoreTaken_l == 0)) {
    HevP4ReferenceApplication_DW.RateTransition3_Buffer0_p =
      HevP4ReferenceApplication_B.L100KmCalc3;
  }

  if (ssIsSampleHit(rtS, 3, 0)) {
    HevP4ReferenceApplication_DW.RateTransition3_semaphoreTaken_l = 1;
    rtb_RateTransition2 = HevP4ReferenceApplication_DW.RateTransition3_Buffer0_p;
    HevP4ReferenceApplication_DW.RateTransition3_semaphoreTaken_l = 0;
  }

  /* End of RateTransition: '<S57>/Rate Transition3' */
  if (ssIsSampleHit(rtS, 1, 0)) {
    /* Constant: '<S58>/w per kw' */
    HevP4ReferenceApplication_B.wperkw =
      HevP4ReferenceApplication_P.wperkw_Value;

    /* Constant: '<S58>/US EPA kwh//USgal equivalent' */
    HevP4ReferenceApplication_B.USEPAkwhUSgalequivalent =
      HevP4ReferenceApplication_P.USEPAkwhUSgalequivalent_Value;

    /* Constant: '<S58>/s per h' */
    HevP4ReferenceApplication_B.sperh = HevP4ReferenceApplication_P.sperh_Value;
  }

  /* Sum: '<S58>/Add' incorporates:
   *  Gain: '<S58>/m^3 per gal'
   *  Product: '<S50>/Product2'
   *  Product: '<S58>/Divide'
   *  Product: '<S58>/Divide1'
   *  Product: '<S58>/Divide2'
   */
  HevP4ReferenceApplication_B.Add = HevP4ReferenceApplication_B.BattV *
    HevP4ReferenceApplication_B.BattCrnt / HevP4ReferenceApplication_B.wperkw /
    HevP4ReferenceApplication_B.USEPAkwhUSgalequivalent /
    HevP4ReferenceApplication_B.sperh *
    HevP4ReferenceApplication_P.m3pergal_Gain +
    HevP4ReferenceApplication_B.SiMappedEngine_o16;

  /* Product: '<S58>/Product' */
  rtb_TPHCMassgmi = HevP4ReferenceApplication_B.xdot *
    HevP4ReferenceApplication_B.xdot;

  /* Gain: '<S58>/m to 100Km' incorporates:
   *  Integrator: '<S58>/Integrator'
   */
  HevP4ReferenceApplication_B.mto100Km =
    HevP4ReferenceApplication_P.mto100Km_Gain *
    HevP4ReferenceApplication_X.Integrator_CSTATE;

  /* Saturate: '<S58>/Saturation' incorporates:
   *  Sqrt: '<S58>/Sqrt'
   */
  if (ssIsMajorTimeStep(rtS)) {
    HevP4ReferenceApplication_DW.Saturation_MODE_f =
      HevP4ReferenceApplication_B.mto100Km >=
      HevP4ReferenceApplication_P.Saturation_UpperSat_p ? 1 :
      HevP4ReferenceApplication_B.mto100Km >
      HevP4ReferenceApplication_P.Saturation_LowerSat_a ? 0 : -1;
    if (HevP4ReferenceApplication_DW.Sqrt_DWORK1 != 0) {
      ssSetBlockStateForSolverChangedAtMajorStep(rtS);
      HevP4ReferenceApplication_DW.Sqrt_DWORK1 = 0;
    }

    /* Sqrt: '<S58>/Sqrt' incorporates:
     *  Saturate: '<S58>/Saturation'
     */
    HevP4ReferenceApplication_B.Sqrt = sqrt(rtb_TPHCMassgmi);
  } else if (rtb_TPHCMassgmi < 0.0) {
    /* Sqrt: '<S58>/Sqrt' */
    HevP4ReferenceApplication_B.Sqrt = -sqrt(fabs(rtb_TPHCMassgmi));
    HevP4ReferenceApplication_DW.Sqrt_DWORK1 = 1;
  } else {
    /* Sqrt: '<S58>/Sqrt' */
    HevP4ReferenceApplication_B.Sqrt = sqrt(rtb_TPHCMassgmi);
  }

  /* End of Saturate: '<S58>/Saturation' */
  if (ssIsSampleHit(rtS, 1, 0)) {
    /* Logic: '<S29>/Logical Operator2' */
    HevP4ReferenceApplication_B.LogicalOperator2 = false;

    /* Constant: '<S29>/Constant' */
    HevP4ReferenceApplication_B.Constant =
      HevP4ReferenceApplication_P.Constant_Value_f;

    /* Gain: '<S28>/Gain' incorporates:
     *  Trigonometry: '<S28>/Trigonometric Function'
     *  UnitConversion: '<S28>/Unit Conversion2'
     */
    /* Unit Conversion - from: deg to: rad
       Expression: output = (0.0174533*input) + (0) */
    HevP4ReferenceApplication_B.Gain =
      HevP4ReferenceApplication_P.LongitudinalDriver_g *
      HevP4ReferenceApplication_P.LongitudinalDriver_m *
      HevP4ReferenceApplication_P.LongitudinalDriver_m /
      HevP4ReferenceApplication_P.LongitudinalDriver_Kpt * 0.0;
  }

  /* Integrator: '<S30>/Integrator1' */
  rtb_TPHCMassgmi = HevP4ReferenceApplication_X.Integrator1_CSTATE_o;

  /* Sum: '<S28>/Add' incorporates:
   *  Integrator: '<S30>/Integrator1'
   */
  rtb_TPCOMassgmi = HevP4ReferenceApplication_X.Integrator1_CSTATE_o -
    HevP4ReferenceApplication_B.Gain;

  /* Switch: '<S29>/Switch1' incorporates:
   *  Saturate: '<S29>/0~1'
   *  Switch: '<S29>/Switch'
   */
  if (HevP4ReferenceApplication_B.LogicalOperator2) {
    rtb_RateTransition2 = 0.0;
  } else if (rtb_TPCOMassgmi > HevP4ReferenceApplication_P.u1_UpperSat) {
    /* Saturate: '<S29>/0~1' incorporates:
     *  Switch: '<S29>/Switch'
     */
    rtb_RateTransition2 = HevP4ReferenceApplication_P.u1_UpperSat;
  } else if (rtb_TPCOMassgmi < HevP4ReferenceApplication_P.u1_LowerSat) {
    /* Saturate: '<S29>/0~1' incorporates:
     *  Switch: '<S29>/Switch'
     */
    rtb_RateTransition2 = HevP4ReferenceApplication_P.u1_LowerSat;
  } else {
    /* Switch: '<S29>/Switch' incorporates:
     *  Saturate: '<S29>/0~1'
     */
    rtb_RateTransition2 = rtb_TPCOMassgmi;
  }

  /* End of Switch: '<S29>/Switch1' */

  /* Saturate: '<S29>/Saturation' */
  if (rtb_RateTransition2 > HevP4ReferenceApplication_P.Saturation_UpperSat_j) {
    /* Saturate: '<S29>/Saturation' */
    rtb_Saturation_m = HevP4ReferenceApplication_P.Saturation_UpperSat_j;
  } else if (rtb_RateTransition2 <
             HevP4ReferenceApplication_P.Saturation_LowerSat_f) {
    /* Saturate: '<S29>/Saturation' */
    rtb_Saturation_m = HevP4ReferenceApplication_P.Saturation_LowerSat_f;
  } else {
    /* Saturate: '<S29>/Saturation' */
    rtb_Saturation_m = rtb_RateTransition2;
  }

  /* End of Saturate: '<S29>/Saturation' */
  NOT_tmp = ssIsSampleHit(rtS, 1, 0);

  /* Logic: '<S35>/NOT' */
  HevP4ReferenceApplication_B.NOT = (NOT_tmp || HevP4ReferenceApplication_B.NOT);

  /* Outputs for Enabled SubSystem: '<S35>/Pass Through' */
  HevP4ReferenceApplication_PassThrough(rtS, HevP4ReferenceApplication_B.NOT,
    rtb_Saturation_m, &HevP4ReferenceApplication_B.PassThrough,
    &HevP4ReferenceApplication_DW.PassThrough);

  /* End of Outputs for SubSystem: '<S35>/Pass Through' */
  if (ssIsSampleHit(rtS, 1, 0)) {
    /* Logic: '<S31>/Logical Operator2' */
    HevP4ReferenceApplication_B.LogicalOperator2_o = false;

    /* Constant: '<S31>/Constant' */
    HevP4ReferenceApplication_B.Constant_n =
      HevP4ReferenceApplication_P.Constant_Value_fg;
  }

  /* Switch: '<S31>/Switch1' incorporates:
   *  Saturate: '<S31>/-1~0'
   *  Switch: '<S31>/Switch'
   */
  if (HevP4ReferenceApplication_B.LogicalOperator2_o) {
    rtb_RateTransition2 = 0.0;
  } else if (rtb_TPCOMassgmi > HevP4ReferenceApplication_P.u0_UpperSat) {
    /* Saturate: '<S31>/-1~0' incorporates:
     *  Switch: '<S31>/Switch'
     *  UnaryMinus: '<S31>/Unary Minus'
     */
    rtb_RateTransition2 = -HevP4ReferenceApplication_P.u0_UpperSat;
  } else if (rtb_TPCOMassgmi < HevP4ReferenceApplication_P.u0_LowerSat) {
    /* Saturate: '<S31>/-1~0' incorporates:
     *  Switch: '<S31>/Switch'
     *  UnaryMinus: '<S31>/Unary Minus'
     */
    rtb_RateTransition2 = -HevP4ReferenceApplication_P.u0_LowerSat;
  } else {
    /* Switch: '<S31>/Switch' incorporates:
     *  Saturate: '<S31>/-1~0'
     *  UnaryMinus: '<S31>/Unary Minus'
     */
    rtb_RateTransition2 = -rtb_TPCOMassgmi;
  }

  /* End of Switch: '<S31>/Switch1' */

  /* Saturate: '<S31>/Saturation' */
  if (rtb_RateTransition2 > HevP4ReferenceApplication_P.Saturation_UpperSat_o) {
    /* Saturate: '<S31>/Saturation' */
    rtb_Saturation_n = HevP4ReferenceApplication_P.Saturation_UpperSat_o;
  } else if (rtb_RateTransition2 <
             HevP4ReferenceApplication_P.Saturation_LowerSat_n) {
    /* Saturate: '<S31>/Saturation' */
    rtb_Saturation_n = HevP4ReferenceApplication_P.Saturation_LowerSat_n;
  } else {
    /* Saturate: '<S31>/Saturation' */
    rtb_Saturation_n = rtb_RateTransition2;
  }

  /* End of Saturate: '<S31>/Saturation' */

  /* Logic: '<S37>/NOT' */
  HevP4ReferenceApplication_B.NOT_n = (NOT_tmp ||
    HevP4ReferenceApplication_B.NOT_n);

  /* Outputs for Enabled SubSystem: '<S37>/Pass Through' */
  HevP4ReferenceApplication_PassThrough(rtS, HevP4ReferenceApplication_B.NOT_n,
    rtb_Saturation_n, &HevP4ReferenceApplication_B.PassThrough_b,
    &HevP4ReferenceApplication_DW.PassThrough_b);

  /* End of Outputs for SubSystem: '<S37>/Pass Through' */
  if (ssIsSampleHit(rtS, 1, 0)) {
    /* Chart: '<S42>/Shift Controller' */
    HevP4ReferenceApplication_DW.presentTime = ssGetTaskTime(rtS,1);
    HevP4ReferenceApplication_DW.elapsedTime =
      HevP4ReferenceApplication_DW.presentTime -
      HevP4ReferenceApplication_DW.previousTime;
    HevP4ReferenceApplication_DW.previousTime =
      HevP4ReferenceApplication_DW.presentTime;
    HevP4ReferenceApplication_DW.temporalCounter_i1 +=
      HevP4ReferenceApplication_DW.elapsedTime;
    if (HevP4ReferenceApplication_DW.is_active_c6_autolibsharedcommon == 0U) {
      HevP4ReferenceApplication_DW.is_active_c6_autolibsharedcommon = 1U;

      /*  InitialGear  */
      HevP4ReferenceApplication_B.Gear =
        HevP4ReferenceApplication_P.LongitudinalDriver_GearInit;
      HevP4ReferenceApplication_DW.GearState =
        HevP4ReferenceApplication_P.LongitudinalDriver_GearInit;
      if (HevP4ReferenceApplication_P.LongitudinalDriver_GearInit < 0.0) {
        HevP4ReferenceApplication_DW.is_GearSelect =
          HevP4ReferenceApplication_IN_Reverse;
        HevP4ReferenceApplication_DW.temporalCounter_i1 = 0.0;
        HevP4ReferenceApplication_B.Gear = -1.0;
      } else if (HevP4ReferenceApplication_P.LongitudinalDriver_GearInit == 0.0)
      {
        HevP4ReferenceApplication_DW.is_GearSelect =
          HevP4ReferenceApplication_IN_Neutral;
        HevP4ReferenceApplication_DW.temporalCounter_i1 = 0.0;
        HevP4ReferenceApplication_B.Gear = 0.0;
      } else {
        HevP4ReferenceApplication_DW.is_GearSelect =
          HevP4ReferenceApplication_IN_Odd;
        HevP4ReferenceApplication_DW.temporalCounter_i1 = 0.0;
      }
    } else {
      switch (HevP4ReferenceApplication_DW.is_GearSelect) {
       case HevP4ReferenceApplication_IN_Neutral:
        rtb_TPNOxMassgmi = (ssGetTaskTime(rtS,1) -
                            HevP4ReferenceApplication_DW.previousTime) +
          HevP4ReferenceApplication_DW.temporalCounter_i1;
        if ((rtb_TPNOxMassgmi >=
             HevP4ReferenceApplication_P.LongitudinalDriver_tShift) &&
            ((HevP4ReferenceApplication_B.uDLookupTable > 0.0) &&
             (HevP4ReferenceApplication_B.PassThrough.u > 0.0))) {
          HevP4ReferenceApplication_DW.GearState++;
          HevP4ReferenceApplication_DW.is_GearSelect =
            HevP4ReferenceApplication_IN_Odd;
          HevP4ReferenceApplication_DW.temporalCounter_i1 = 0.0;
          HevP4ReferenceApplication_B.Gear =
            HevP4ReferenceApplication_DW.GearState;
        } else if ((rtb_TPNOxMassgmi >=
                    HevP4ReferenceApplication_P.LongitudinalDriver_tShift) &&
                   (HevP4ReferenceApplication_B.uDLookupTable < 0.0)) {
          HevP4ReferenceApplication_DW.GearState--;
          HevP4ReferenceApplication_DW.is_GearSelect =
            HevP4ReferenceApplication_IN_Reverse;
          HevP4ReferenceApplication_DW.temporalCounter_i1 = 0.0;
          HevP4ReferenceApplication_B.Gear = -1.0;
        }
        break;

       case HevP4ReferenceApplication_IN_Odd:
        if (((ssGetTaskTime(rtS,1) - HevP4ReferenceApplication_DW.previousTime)
             + HevP4ReferenceApplication_DW.temporalCounter_i1 >=
             HevP4ReferenceApplication_P.LongitudinalDriver_tShift) &&
            (((HevP4ReferenceApplication_B.PassThrough_b.u >= 0.0) &&
              (HevP4ReferenceApplication_B.xdot <= 0.0) &&
              (HevP4ReferenceApplication_B.PassThrough.u <= 0.0)) ||
             (HevP4ReferenceApplication_B.uDLookupTable <= 0.0))) {
          HevP4ReferenceApplication_DW.GearState--;
          HevP4ReferenceApplication_DW.is_GearSelect =
            HevP4ReferenceApplication_IN_Neutral;
          HevP4ReferenceApplication_DW.temporalCounter_i1 = 0.0;
          HevP4ReferenceApplication_B.Gear = 0.0;
        }
        break;

       default:
        /* case IN_Reverse: */
        if (((ssGetTaskTime(rtS,1) - HevP4ReferenceApplication_DW.previousTime)
             + HevP4ReferenceApplication_DW.temporalCounter_i1 >=
             HevP4ReferenceApplication_P.LongitudinalDriver_tShift) &&
            (HevP4ReferenceApplication_B.uDLookupTable >= 0.0)) {
          HevP4ReferenceApplication_DW.GearState++;
          HevP4ReferenceApplication_DW.is_GearSelect =
            HevP4ReferenceApplication_IN_Neutral;
          HevP4ReferenceApplication_DW.temporalCounter_i1 = 0.0;
          HevP4ReferenceApplication_B.Gear = 0.0;
        }
        break;
      }
    }

    /* End of Chart: '<S42>/Shift Controller' */

    /* Constant: '<S43>/Constant1' */
    HevP4ReferenceApplication_B.Constant1 =
      HevP4ReferenceApplication_P.Constant1_Value;

    /* RelationalOperator: '<S45>/Compare' incorporates:
     *  Constant: '<S45>/Constant'
     */
    if (ssGetIsOkayToUpdateMode(rtS)) {
      HevP4ReferenceApplication_DW.Compare_Mode =
        (HevP4ReferenceApplication_B.uDLookupTable !=
         HevP4ReferenceApplication_P.Constant_Value);
    }

    /* Logic: '<S43>/Logical Operator' incorporates:
     *  Constant: '<S46>/Constant'
     *  RelationalOperator: '<S45>/Compare'
     *  RelationalOperator: '<S46>/Compare'
     */
    HevP4ReferenceApplication_B.LogicalOperator =
      (HevP4ReferenceApplication_DW.Compare_Mode &&
       (HevP4ReferenceApplication_B.Gear >
        HevP4ReferenceApplication_P.Constant_Value_l));

    /* Constant: '<S43>/Constant' */
    HevP4ReferenceApplication_B.Constant_g =
      HevP4ReferenceApplication_P.Constant_Value_a;
  }

  /* Switch: '<S43>/Switch' incorporates:
   *  Switch: '<S43>/Switch1'
   */
  if (HevP4ReferenceApplication_B.LogicalOperator) {
    /* Switch: '<S43>/Switch2' */
    if (HevP4ReferenceApplication_B.Gear != 0.0) {
      /* Switch: '<S43>/Switch' */
      HevP4ReferenceApplication_B.Switch[0] =
        HevP4ReferenceApplication_B.PassThrough.u;
    } else {
      /* Switch: '<S43>/Switch' */
      HevP4ReferenceApplication_B.Switch[0] =
        HevP4ReferenceApplication_B.Constant1;
    }

    /* End of Switch: '<S43>/Switch2' */

    /* Switch: '<S43>/Switch' */
    HevP4ReferenceApplication_B.Switch[1] =
      HevP4ReferenceApplication_B.PassThrough_b.u;
  } else if (HevP4ReferenceApplication_B.Gear != 0.0) {
    /* Switch: '<S43>/Switch' incorporates:
     *  Switch: '<S43>/Switch1'
     */
    HevP4ReferenceApplication_B.Switch[0] =
      HevP4ReferenceApplication_B.PassThrough_b.u;
    HevP4ReferenceApplication_B.Switch[1] =
      HevP4ReferenceApplication_B.PassThrough.u;
  } else {
    /* Switch: '<S43>/Switch' incorporates:
     *  Switch: '<S43>/Switch1'
     */
    HevP4ReferenceApplication_B.Switch[0] =
      HevP4ReferenceApplication_B.Constant_g;

    /* MinMax: '<S43>/MinMax' incorporates:
     *  Switch: '<S43>/Switch1'
     */
    if ((HevP4ReferenceApplication_B.PassThrough_b.u >
         HevP4ReferenceApplication_B.PassThrough.u) || rtIsNaN
        (HevP4ReferenceApplication_B.PassThrough.u)) {
      /* Switch: '<S43>/Switch' */
      HevP4ReferenceApplication_B.Switch[1] =
        HevP4ReferenceApplication_B.PassThrough_b.u;
    } else {
      /* Switch: '<S43>/Switch' */
      HevP4ReferenceApplication_B.Switch[1] =
        HevP4ReferenceApplication_B.PassThrough.u;
    }

    /* End of MinMax: '<S43>/MinMax' */
  }

  /* End of Switch: '<S43>/Switch' */

  /* RateTransition: '<S7>/Rate Transition' incorporates:
   *  RateTransition: '<S7>/Rate Transition8'
   */
  if (ssIsSampleHit(rtS, 1, 0)) {
    if (HevP4ReferenceApplication_DW.RateTransition_semaphoreTaken_k == 0) {
      HevP4ReferenceApplication_DW.RateTransition_Buffer0_f =
        HevP4ReferenceApplication_B.Switch[0];
    }

    if (HevP4ReferenceApplication_DW.RateTransition8_semaphoreTaken_k == 0) {
      HevP4ReferenceApplication_DW.RateTransition8_Buffer0_a =
        HevP4ReferenceApplication_B.Switch[1];
    }
  }

  if (ssIsSampleHit(rtS, 2, 0)) {
    HevP4ReferenceApplication_DW.RateTransition_semaphoreTaken_k = 1;

    /* RateTransition: '<S7>/Rate Transition' */
    HevP4ReferenceApplication_B.AccelPdl =
      HevP4ReferenceApplication_DW.RateTransition_Buffer0_f;
    HevP4ReferenceApplication_DW.RateTransition_semaphoreTaken_k = 0;
  }

  /* End of RateTransition: '<S7>/Rate Transition' */

  /* RateTransition: '<S7>/Rate Transition16' */
  if (ssIsSampleHit(rtS, 1, 0) &&
      (HevP4ReferenceApplication_DW.RateTransition16_semaphoreTaken == 0)) {
    HevP4ReferenceApplication_DW.RateTransition16_Buffer0 =
      HevP4ReferenceApplication_B.xdot;
  }

  /* RateTransition: '<S7>/Rate Transition8' */
  if (ssIsSampleHit(rtS, 2, 0)) {
    HevP4ReferenceApplication_DW.RateTransition8_semaphoreTaken_k = 1;

    /* RateTransition: '<S7>/Rate Transition8' */
    HevP4ReferenceApplication_B.DecelPdl =
      HevP4ReferenceApplication_DW.RateTransition8_Buffer0_a;
    HevP4ReferenceApplication_DW.RateTransition8_semaphoreTaken_k = 0;
  }

  /* RateTransition: '<S7>/Rate Transition19' */
  if (ssIsSampleHit(rtS, 1, 0) &&
      (HevP4ReferenceApplication_DW.RateTransition19_semaphoreTaken == 0)) {
    HevP4ReferenceApplication_DW.RateTransition19_Buffer0 =
      HevP4ReferenceApplication_B.BattSoc;
  }

  /* RateTransition: '<S7>/Rate Transition16' */
  if (ssIsSampleHit(rtS, 2, 0)) {
    HevP4ReferenceApplication_DW.RateTransition16_semaphoreTaken = 1;

    /* RateTransition: '<S7>/Rate Transition16' */
    HevP4ReferenceApplication_B.VehSpdFdbk =
      HevP4ReferenceApplication_DW.RateTransition16_Buffer0;
    HevP4ReferenceApplication_DW.RateTransition16_semaphoreTaken = 0;
  }

  /* RateTransition: '<S7>/Rate Transition15' */
  if (ssIsSampleHit(rtS, 1, 0) &&
      (HevP4ReferenceApplication_DW.RateTransition15_semaphoreTaken == 0)) {
    HevP4ReferenceApplication_DW.RateTransition15_Buffer0 =
      HevP4ReferenceApplication_B.Drivetrain_o5;
  }

  /* RateTransition: '<S7>/Rate Transition19' */
  if (ssIsSampleHit(rtS, 2, 0)) {
    HevP4ReferenceApplication_DW.RateTransition19_semaphoreTaken = 1;

    /* RateTransition: '<S7>/Rate Transition19' */
    HevP4ReferenceApplication_B.BattSoc_l =
      HevP4ReferenceApplication_DW.RateTransition19_Buffer0;
    HevP4ReferenceApplication_DW.RateTransition19_semaphoreTaken = 0;
  }

  /* RateTransition: '<S7>/Rate Transition18' */
  if (ssIsSampleHit(rtS, 1, 0) &&
      (HevP4ReferenceApplication_DW.RateTransition18_semaphoreTaken == 0)) {
    HevP4ReferenceApplication_DW.RateTransition18_Buffer0 =
      HevP4ReferenceApplication_B.Drivetrain_o6;
  }

  /* RateTransition: '<S7>/Rate Transition15' */
  if (ssIsSampleHit(rtS, 2, 0)) {
    HevP4ReferenceApplication_DW.RateTransition15_semaphoreTaken = 1;

    /* RateTransition: '<S7>/Rate Transition15' */
    HevP4ReferenceApplication_B.MotSpd =
      HevP4ReferenceApplication_DW.RateTransition15_Buffer0;
    HevP4ReferenceApplication_DW.RateTransition15_semaphoreTaken = 0;
  }

  /* RateTransition: '<S7>/Rate Transition13' */
  if (ssIsSampleHit(rtS, 1, 0) &&
      (HevP4ReferenceApplication_DW.RateTransition13_semaphoreTaken == 0)) {
    HevP4ReferenceApplication_DW.RateTransition13_Buffer0 =
      HevP4ReferenceApplication_B.BattV;
  }

  /* RateTransition: '<S7>/Rate Transition18' incorporates:
   *  RateTransition: '<S7>/Rate Transition13'
   */
  if (ssIsSampleHit(rtS, 2, 0)) {
    HevP4ReferenceApplication_DW.RateTransition18_semaphoreTaken = 1;

    /* RateTransition: '<S7>/Rate Transition18' */
    HevP4ReferenceApplication_B.TransGear =
      HevP4ReferenceApplication_DW.RateTransition18_Buffer0;
    HevP4ReferenceApplication_DW.RateTransition18_semaphoreTaken = 0;
    HevP4ReferenceApplication_DW.RateTransition13_semaphoreTaken = 1;

    /* RateTransition: '<S7>/Rate Transition13' */
    HevP4ReferenceApplication_B.BattV_k =
      HevP4ReferenceApplication_DW.RateTransition13_Buffer0;
    HevP4ReferenceApplication_DW.RateTransition13_semaphoreTaken = 0;

    /* ModelReference: '<S10>/Hybrid Control Module (HCM) - Optimal' */
    HevP4OptimalController
      (&(HevP4ReferenceApplication_DW.HybridControlModuleHCMOptimal_InstanceData.rtm),
       &HevP4ReferenceApplication_B.AccelPdl,
       &HevP4ReferenceApplication_B.DecelPdl,
       &HevP4ReferenceApplication_B.VehSpdFdbk,
       &HevP4ReferenceApplication_B.BattSoc_l,
       &HevP4ReferenceApplication_B.MotSpd,
       &HevP4ReferenceApplication_B.TransGear,
       &HevP4ReferenceApplication_B.BattV_k,
       &HevP4ReferenceApplication_B.EngTrqCmd,
       &HevP4ReferenceApplication_B.MtrTrqCmd,
       &HevP4ReferenceApplication_B.BrkCmd,
       &HevP4ReferenceApplication_B.Cltch1Cmd, &rtb_StartCmd,
       &HevP4ReferenceApplication_B.Neutral,
       &HevP4ReferenceApplication_B.WhlTrqCmd,
       &(HevP4ReferenceApplication_DW.HybridControlModuleHCMOptimal_InstanceData.rtb),
       &(HevP4ReferenceApplication_DW.HybridControlModuleHCMOptimal_InstanceData.rtdw));

    /* RateTransition: '<S7>/Rate Transition1' */
    if (HevP4ReferenceApplication_DW.RateTransition1_semaphoreTaken_m == 0) {
      HevP4ReferenceApplication_DW.RateTransition1_Buffer0_i =
        HevP4ReferenceApplication_B.EngTrqCmd;
    }
  }

  /* RateTransition: '<S7>/Rate Transition10' */
  if (ssIsSampleHit(rtS, 1, 0) && ssIsSampleHit(rtS, 5, 0)) {
    HevP4ReferenceApplication_DW.RateTransition10_Buffer =
      HevP4ReferenceApplication_B.SiMappedEngine_o10;
  }

  /* RateTransition: '<S7>/Rate Transition1' */
  if (ssIsSampleHit(rtS, 5, 0)) {
    HevP4ReferenceApplication_DW.RateTransition1_semaphoreTaken_m = 1;

    /* RateTransition: '<S7>/Rate Transition1' */
    HevP4ReferenceApplication_B.RateTransition1 =
      HevP4ReferenceApplication_DW.RateTransition1_Buffer0_i;
    HevP4ReferenceApplication_DW.RateTransition1_semaphoreTaken_m = 0;
  }

  /* RateTransition: '<S7>/Rate Transition11' */
  if (ssIsSampleHit(rtS, 1, 0) && ssIsSampleHit(rtS, 5, 0)) {
    HevP4ReferenceApplication_DW.RateTransition11_Buffer =
      HevP4ReferenceApplication_B.SiMappedEngine_o11;
  }

  /* RateTransition: '<S7>/Rate Transition10' incorporates:
   *  RateTransition: '<S7>/Rate Transition11'
   */
  if (ssIsSampleHit(rtS, 5, 0)) {
    /* RateTransition: '<S7>/Rate Transition10' */
    HevP4ReferenceApplication_B.RateTransition10 =
      HevP4ReferenceApplication_DW.RateTransition10_Buffer;

    /* RateTransition: '<S7>/Rate Transition11' */
    HevP4ReferenceApplication_B.RateTransition11 =
      HevP4ReferenceApplication_DW.RateTransition11_Buffer;
  }

  /* RateTransition: '<S7>/Rate Transition17' incorporates:
   *  RateTransition: '<S7>/Rate Transition2'
   */
  if (ssIsSampleHit(rtS, 1, 0)) {
    if (HevP4ReferenceApplication_DW.RateTransition17_semaphoreTaken == 0) {
      HevP4ReferenceApplication_DW.RateTransition17_Buffer0 =
        HevP4ReferenceApplication_B.Drivetrain_o2;
    }

    if (ssIsSampleHit(rtS, 5, 0)) {
      HevP4ReferenceApplication_DW.RateTransition2_Buffer =
        HevP4ReferenceApplication_B.SiMappedEngine_o12;
    }
  }

  if (ssIsSampleHit(rtS, 2, 0)) {
    HevP4ReferenceApplication_DW.RateTransition17_semaphoreTaken = 1;

    /* RateTransition: '<S7>/Rate Transition17' */
    HevP4ReferenceApplication_B.EngSpd_d =
      HevP4ReferenceApplication_DW.RateTransition17_Buffer0;
    HevP4ReferenceApplication_DW.RateTransition17_semaphoreTaken = 0;
  }

  /* End of RateTransition: '<S7>/Rate Transition17' */

  /* RateTransition: '<S7>/Rate Transition21' */
  if (ssIsSampleHit(rtS, 1, 0) && ssIsSampleHit(rtS, 5, 0)) {
    HevP4ReferenceApplication_DW.RateTransition21_Buffer =
      rtb_SiMappedEngine_o37;
  }

  /* RateTransition: '<S7>/Rate Transition2' */
  if (ssIsSampleHit(rtS, 5, 0)) {
    /* RateTransition: '<S7>/Rate Transition2' */
    HevP4ReferenceApplication_B.RateTransition2 =
      HevP4ReferenceApplication_DW.RateTransition2_Buffer;
  }

  /* RateTransition: '<S7>/Rate Transition22' */
  if (ssIsSampleHit(rtS, 1, 0) && ssIsSampleHit(rtS, 5, 0)) {
    HevP4ReferenceApplication_DW.RateTransition22_Buffer =
      HevP4ReferenceApplication_B.EngSpd;
  }

  /* RateTransition: '<S7>/Rate Transition21' */
  if (ssIsSampleHit(rtS, 5, 0)) {
    /* RateTransition: '<S7>/Rate Transition21' */
    HevP4ReferenceApplication_B.RateTransition21 =
      HevP4ReferenceApplication_DW.RateTransition21_Buffer;
  }

  /* RateTransition: '<S7>/Rate Transition23' */
  if (ssIsSampleHit(rtS, 1, 0) && ssIsSampleHit(rtS, 5, 0)) {
    HevP4ReferenceApplication_DW.RateTransition23_Buffer =
      rtb_SiMappedEngine_o38;
  }

  /* RateTransition: '<S7>/Rate Transition22' */
  if (ssIsSampleHit(rtS, 5, 0)) {
    /* RateTransition: '<S7>/Rate Transition22' */
    HevP4ReferenceApplication_B.RateTransition22 =
      HevP4ReferenceApplication_DW.RateTransition22_Buffer;
  }

  /* RateTransition: '<S7>/Rate Transition25' */
  if (ssIsSampleHit(rtS, 1, 0) && ssIsSampleHit(rtS, 5, 0)) {
    HevP4ReferenceApplication_DW.RateTransition25_Buffer = rtb_SiMappedEngine_o3;
  }

  /* RateTransition: '<S7>/Rate Transition23' */
  if (ssIsSampleHit(rtS, 5, 0)) {
    /* RateTransition: '<S7>/Rate Transition23' */
    HevP4ReferenceApplication_B.RateTransition23 =
      HevP4ReferenceApplication_DW.RateTransition23_Buffer;
  }

  /* RateTransition: '<S7>/Rate Transition26' */
  if (ssIsSampleHit(rtS, 1, 0) && ssIsSampleHit(rtS, 5, 0)) {
    HevP4ReferenceApplication_DW.RateTransition26_Buffer = rtb_SiMappedEngine_o4;
  }

  /* RateTransition: '<S7>/Rate Transition25' */
  if (ssIsSampleHit(rtS, 5, 0)) {
    /* RateTransition: '<S7>/Rate Transition25' */
    HevP4ReferenceApplication_B.RateTransition25 =
      HevP4ReferenceApplication_DW.RateTransition25_Buffer;
  }

  /* RateTransition: '<S7>/Rate Transition27' */
  if (ssIsSampleHit(rtS, 1, 0) && ssIsSampleHit(rtS, 5, 0)) {
    HevP4ReferenceApplication_DW.RateTransition27_Buffer =
      HevP4ReferenceApplication_B.SiMappedEngine_o5;
  }

  /* RateTransition: '<S7>/Rate Transition26' */
  if (ssIsSampleHit(rtS, 5, 0)) {
    /* RateTransition: '<S7>/Rate Transition26' */
    HevP4ReferenceApplication_B.RateTransition26 =
      HevP4ReferenceApplication_DW.RateTransition26_Buffer;
  }

  /* RateTransition: '<S7>/Rate Transition28' */
  if (ssIsSampleHit(rtS, 1, 0) && ssIsSampleHit(rtS, 5, 0)) {
    HevP4ReferenceApplication_DW.RateTransition28_Buffer =
      HevP4ReferenceApplication_B.SiMappedEngine_o6;
  }

  /* RateTransition: '<S7>/Rate Transition27' */
  if (ssIsSampleHit(rtS, 5, 0)) {
    /* RateTransition: '<S7>/Rate Transition27' */
    HevP4ReferenceApplication_B.RateTransition27 =
      HevP4ReferenceApplication_DW.RateTransition27_Buffer;
  }

  /* RateTransition: '<S7>/Rate Transition3' */
  if (ssIsSampleHit(rtS, 1, 0) && ssIsSampleHit(rtS, 5, 0)) {
    HevP4ReferenceApplication_DW.RateTransition3_Buffer =
      HevP4ReferenceApplication_B.SiMappedEngine_o13;
  }

  /* RateTransition: '<S7>/Rate Transition28' */
  if (ssIsSampleHit(rtS, 5, 0)) {
    /* RateTransition: '<S7>/Rate Transition28' */
    HevP4ReferenceApplication_B.RateTransition28 =
      HevP4ReferenceApplication_DW.RateTransition28_Buffer;
  }

  /* RateTransition: '<S7>/Rate Transition30' */
  if (ssIsSampleHit(rtS, 1, 0) && ssIsSampleHit(rtS, 5, 0)) {
    HevP4ReferenceApplication_DW.RateTransition30_Buffer =
      HevP4ReferenceApplication_B.SiMappedEngine_o7;
  }

  /* RateTransition: '<S7>/Rate Transition3' */
  if (ssIsSampleHit(rtS, 5, 0)) {
    /* RateTransition: '<S7>/Rate Transition3' */
    HevP4ReferenceApplication_B.RateTransition3 =
      HevP4ReferenceApplication_DW.RateTransition3_Buffer;
  }

  /* RateTransition: '<S7>/Rate Transition32' */
  if (ssIsSampleHit(rtS, 1, 0) && ssIsSampleHit(rtS, 5, 0)) {
    HevP4ReferenceApplication_DW.RateTransition32_Buffer =
      HevP4ReferenceApplication_B.SiMappedEngine_o8;
  }

  /* RateTransition: '<S7>/Rate Transition30' */
  if (ssIsSampleHit(rtS, 5, 0)) {
    /* RateTransition: '<S7>/Rate Transition30' */
    HevP4ReferenceApplication_B.RateTransition30 =
      HevP4ReferenceApplication_DW.RateTransition30_Buffer;
  }

  /* RateTransition: '<S7>/Rate Transition33' */
  if (ssIsSampleHit(rtS, 1, 0) && ssIsSampleHit(rtS, 5, 0)) {
    HevP4ReferenceApplication_DW.RateTransition33_Buffer =
      HevP4ReferenceApplication_B.SiMappedEngine_o9;
  }

  /* RateTransition: '<S7>/Rate Transition32' */
  if (ssIsSampleHit(rtS, 5, 0)) {
    /* RateTransition: '<S7>/Rate Transition32' */
    HevP4ReferenceApplication_B.RateTransition32 =
      HevP4ReferenceApplication_DW.RateTransition32_Buffer;
  }

  /* RateTransition: '<S7>/Rate Transition4' */
  if (ssIsSampleHit(rtS, 1, 0) && ssIsSampleHit(rtS, 5, 0)) {
    HevP4ReferenceApplication_DW.RateTransition4_Buffer =
      HevP4ReferenceApplication_B.SiMappedEngine_o20;
  }

  /* RateTransition: '<S7>/Rate Transition33' */
  if (ssIsSampleHit(rtS, 5, 0)) {
    /* RateTransition: '<S7>/Rate Transition33' */
    HevP4ReferenceApplication_B.RateTransition33 =
      HevP4ReferenceApplication_DW.RateTransition33_Buffer;
  }

  /* RateTransition: '<S7>/Rate Transition5' */
  if (ssIsSampleHit(rtS, 1, 0) && ssIsSampleHit(rtS, 5, 0)) {
    HevP4ReferenceApplication_DW.RateTransition5_Buffer =
      HevP4ReferenceApplication_B.SiMappedEngine_o14;
  }

  /* RateTransition: '<S7>/Rate Transition4' */
  if (ssIsSampleHit(rtS, 5, 0)) {
    /* RateTransition: '<S7>/Rate Transition4' */
    HevP4ReferenceApplication_B.RateTransition4 =
      HevP4ReferenceApplication_DW.RateTransition4_Buffer;
  }

  if (ssIsSampleHit(rtS, 1, 0) && ssIsSampleHit(rtS, 5, 0)) {
    /* RateTransition: '<S7>/Rate Transition6' incorporates:
     *  UnitConversion: '<S7>/Unit Conversion14'
     */
    /* Unit Conversion - from: rad/s to: rpm
       Expression: output = (9.5493*input) + (0) */
    HevP4ReferenceApplication_DW.RateTransition6_Buffer = 9.5492965855137211 *
      rtb_SiMappedEngine_o21;
  }

  /* RateTransition: '<S7>/Rate Transition5' */
  if (ssIsSampleHit(rtS, 5, 0)) {
    /* RateTransition: '<S7>/Rate Transition5' */
    HevP4ReferenceApplication_B.RateTransition5 =
      HevP4ReferenceApplication_DW.RateTransition5_Buffer;
  }

  /* RateTransition: '<S7>/Rate Transition7' */
  if (ssIsSampleHit(rtS, 1, 0) && ssIsSampleHit(rtS, 5, 0)) {
    HevP4ReferenceApplication_DW.RateTransition7_Buffer = rtb_SiMappedEngine_o35;
  }

  /* RateTransition: '<S7>/Rate Transition6' */
  if (ssIsSampleHit(rtS, 5, 0)) {
    /* RateTransition: '<S7>/Rate Transition6' */
    HevP4ReferenceApplication_B.RateTransition6 =
      HevP4ReferenceApplication_DW.RateTransition6_Buffer;
  }

  /* RateTransition: '<S7>/Rate Transition9' */
  if (ssIsSampleHit(rtS, 1, 0) && ssIsSampleHit(rtS, 5, 0)) {
    HevP4ReferenceApplication_DW.RateTransition9_Buffer =
      HevP4ReferenceApplication_B.SiMappedEngine_o36;
  }

  /* RateTransition: '<S7>/Rate Transition7' */
  if (ssIsSampleHit(rtS, 5, 0)) {
    /* RateTransition: '<S7>/Rate Transition7' */
    HevP4ReferenceApplication_B.RateTransition7 =
      HevP4ReferenceApplication_DW.RateTransition7_Buffer;
  }

  if (ssIsSampleHit(rtS, 1, 0)) {
    /* Constant: '<S3>/Constant7' */
    HevP4ReferenceApplication_B.Baro =
      HevP4ReferenceApplication_P.Constant7_Value;

    /* RateTransition: '<S7>/Rate Transition31' */
    if (HevP4ReferenceApplication_DW.RateTransition31_semaphoreTaken == 0) {
      HevP4ReferenceApplication_DW.RateTransition31_Buffer0 =
        HevP4ReferenceApplication_B.Baro;
    }
  }

  /* RateTransition: '<S7>/Rate Transition9' incorporates:
   *  RateTransition: '<S7>/Rate Transition31'
   */
  if (ssIsSampleHit(rtS, 5, 0)) {
    /* RateTransition: '<S7>/Rate Transition9' */
    HevP4ReferenceApplication_B.RateTransition9 =
      HevP4ReferenceApplication_DW.RateTransition9_Buffer;
    HevP4ReferenceApplication_DW.RateTransition31_semaphoreTaken = 1;

    /* RateTransition: '<S7>/Rate Transition31' */
    HevP4ReferenceApplication_B.RateTransition31 =
      HevP4ReferenceApplication_DW.RateTransition31_Buffer0;
    HevP4ReferenceApplication_DW.RateTransition31_semaphoreTaken = 0;
  }

  if (ssIsSampleHit(rtS, 1, 0)) {
    /* Constant: '<S19>/Constant' */
    HevP4ReferenceApplication_B.Constant_fb =
      HevP4ReferenceApplication_P.Constant_Value_e;
  }

  /* FromWorkspace: '<S20>/FromWs' */
  {
    real_T *pDataValues = (real_T *)
      HevP4ReferenceApplication_DW.FromWs_PWORK.DataPtr;
    real_T *pTimeValues = (real_T *)
      HevP4ReferenceApplication_DW.FromWs_PWORK.TimePtr;
    int_T currTimeIndex = HevP4ReferenceApplication_DW.FromWs_IWORK.PrevIndex;
    real_T t = ssGetTaskTime(rtS,0);
    int numPoints, lastPoint;
    FWksInfo *fromwksInfo = (FWksInfo *)
      HevP4ReferenceApplication_DW.FromWs_PWORK.RSimInfoPtr;
    numPoints = fromwksInfo->nDataPoints;
    lastPoint = numPoints - 1;

    /* Get index */
    if (t <= pTimeValues[0]) {
      currTimeIndex = 0;
    } else if (t >= pTimeValues[lastPoint]) {
      currTimeIndex = lastPoint-1;
    } else {
      if (t < pTimeValues[currTimeIndex]) {
        while (t < pTimeValues[currTimeIndex]) {
          currTimeIndex--;
        }
      } else {
        while (t >= pTimeValues[currTimeIndex + 1]) {
          currTimeIndex++;
        }
      }
    }

    HevP4ReferenceApplication_DW.FromWs_IWORK.PrevIndex = currTimeIndex;

    /* Post output */
    {
      real_T t1 = pTimeValues[currTimeIndex];
      real_T t2 = pTimeValues[currTimeIndex + 1];
      if (t1 == t2) {
        if (t < t1) {
          rtb_FromWs = pDataValues[currTimeIndex];
        } else {
          rtb_FromWs = pDataValues[currTimeIndex + 1];
        }
      } else {
        real_T f1 = (t2 - t) / (t2 - t1);
        real_T f2 = 1.0 - f1;
        real_T d1;
        real_T d2;
        int_T TimeIndex = currTimeIndex;
        int_T* zcTimeIndices =
          &HevP4ReferenceApplication_DW.FromWs_ZCTimeIndices[0];
        int_T *zcTimeIndicesIdx =
          &HevP4ReferenceApplication_DW.FromWs_CurZCTimeIndIdx;
        int_T zcIdx = zcTimeIndices[*zcTimeIndicesIdx];
        int_T numZcTimes = 2;
        if (*zcTimeIndicesIdx < numZcTimes) {
          if (ssIsMajorTimeStep(rtS) ) {
            if (t > pTimeValues[zcIdx]) {
              while (*zcTimeIndicesIdx < (numZcTimes-1) &&
                     (t > pTimeValues[zcIdx]) ) {
                (*zcTimeIndicesIdx)++;
                zcIdx = zcTimeIndices[*zcTimeIndicesIdx];
              }
            }
          } else {
            if (t >= pTimeValues[zcIdx] && (ssGetTimeOfLastOutput(rtS) <
                 pTimeValues[zcIdx])) {
              t2 = pTimeValues[zcIdx];
              if (zcIdx == 0) {
                TimeIndex = 0;
                t1 = t2 - 1;
              } else {
                t1 = pTimeValues[zcIdx-1];
                TimeIndex = zcIdx - 1 ;
              }

              f1 = (t2 - t) / (t2 - t1);
              f2 = 1.0 - f1;
            }
          }
        }

        d1 = pDataValues[TimeIndex];
        d2 = pDataValues[TimeIndex + 1];
        if (zcIdx == 0) {
          d2 = d1;
        }

        rtb_FromWs = (real_T) rtInterpolate(d1, d2, f1, f2);
        pDataValues += numPoints;
      }
    }
  }

  /* ManualSwitch: '<S19>/Manual Switch' */
  if (HevP4ReferenceApplication_P.ManualSwitch_CurrentSetting == 1) {
    /* ManualSwitch: '<S19>/Manual Switch' */
    HevP4ReferenceApplication_B.IgSw = HevP4ReferenceApplication_B.Constant_fb;
  } else {
    /* ManualSwitch: '<S19>/Manual Switch' incorporates:
     *  DataTypeConversion: '<S19>/Data Type Conversion'
     */
    HevP4ReferenceApplication_B.IgSw = (rtb_FromWs != 0.0);
  }

  /* End of ManualSwitch: '<S19>/Manual Switch' */

  /* RateTransition: '<S7>/Rate Transition29' */
  if (ssIsSampleHit(rtS, 5, 0)) {
    /* RateTransition: '<S7>/Rate Transition29' */
    HevP4ReferenceApplication_B.IgnSwtch = HevP4ReferenceApplication_B.IgSw;

    /* ModelReference: '<S9>/SiEngineController' */
    SiEngineController
      (&(HevP4ReferenceApplication_DW.SiEngineController_InstanceData.rtm),
       &HevP4ReferenceApplication_B.RateTransition1,
       &HevP4ReferenceApplication_B.RateTransition22,
       &HevP4ReferenceApplication_B.RateTransition25,
       &HevP4ReferenceApplication_B.RateTransition26,
       &HevP4ReferenceApplication_B.RateTransition30,
       &HevP4ReferenceApplication_B.RateTransition32,
       &HevP4ReferenceApplication_B.RateTransition10,
       &HevP4ReferenceApplication_B.RateTransition4,
       &HevP4ReferenceApplication_B.RateTransition31,
       &HevP4ReferenceApplication_B.IgnSwtch,
       &HevP4ReferenceApplication_B.RateTransition7,
       &HevP4ReferenceApplication_B.RateTransition9,
       &HevP4ReferenceApplication_B.RateTransition21,
       &HevP4ReferenceApplication_B.RateTransition23,
       &HevP4ReferenceApplication_B.SiEngineController_o1,
       &HevP4ReferenceApplication_B.SiEngineController_o2,
       &HevP4ReferenceApplication_B.SiEngineController_o3,
       &HevP4ReferenceApplication_B.SiEngineController_o4,
       &HevP4ReferenceApplication_B.SiEngineController_o5,
       &HevP4ReferenceApplication_B.SiEngineController_o6,
       &HevP4ReferenceApplication_B.SiEngineController_o7,
       &HevP4ReferenceApplication_B.SiEngineController_o8,
       &HevP4ReferenceApplication_B.SiEngineController_o9,
       &HevP4ReferenceApplication_B.SiEngineController_o10,
       &HevP4ReferenceApplication_B.SiEngineController_o11,
       &HevP4ReferenceApplication_B.SiEngineController_o12,
       &HevP4ReferenceApplication_B.ClsdLpFuelMult,
       &HevP4ReferenceApplication_B.SiEngineController_o14,
       &HevP4ReferenceApplication_B.SiEngineController_o15, &rtb_LdCmd,
       &rtb_EstIntkPortMassFlw,
       &(HevP4ReferenceApplication_DW.SiEngineController_InstanceData.rtb),
       &(HevP4ReferenceApplication_DW.SiEngineController_InstanceData.rtdw));
  }

  /* End of RateTransition: '<S7>/Rate Transition29' */
  if (ssIsSampleHit(rtS, 2, 0)) {
    /* ModelReference: '<S9>/Transmission Control Module (TCM)' */
    HevP4TransmissionController(&HevP4ReferenceApplication_B.VehSpdFdbk,
      &HevP4ReferenceApplication_B.AccelPdl,
      &HevP4ReferenceApplication_B.Neutral, &HevP4ReferenceApplication_B.GearCmd,
      &(HevP4ReferenceApplication_DW.TransmissionControlModuleTCM_InstanceData.rtb),
      &(HevP4ReferenceApplication_DW.TransmissionControlModuleTCM_InstanceData.rtdw));
  }

  if (ssIsSampleHit(rtS, 4, 0)) {
    /* DigitalClock: '<S13>/Digital Clock' */
    HevP4ReferenceApplication_B.DigitalClock = ssGetTaskTime(rtS,4);
  }

  /* Sum: '<S13>/Add1' incorporates:
   *  Clock: '<S13>/Clock'
   */
  HevP4ReferenceApplication_B.Add1 = rtb_Clock_tmp -
    HevP4ReferenceApplication_B.DigitalClock;
  if (ssIsSampleHit(rtS, 1, 0)) {
    /* Constant: '<S3>/Constant2' */
    HevP4ReferenceApplication_B.Grade =
      HevP4ReferenceApplication_P.Constant2_Value;

    /* Constant: '<S3>/Constant3' */
    HevP4ReferenceApplication_B.wind_x =
      HevP4ReferenceApplication_P.Constant3_Value;
  }

  /* MATLAB Function: '<S28>/Setup' */
  rtb_TPNOxMassgmi = fabs(HevP4ReferenceApplication_B.xdot);
  iy = 0;
  if (rtb_TPNOxMassgmi < 0.001) {
    iy = 1;
  }

  loop_ub_tmp = iy - 1;
  if (0 <= iy - 1) {
    z_data = rtb_TPNOxMassgmi / 0.001;
  }

  if (0 <= (int8_T)iy - 1) {
    rtb_Integrator = z_data;
    z_data = rtb_Integrator * rtb_Integrator;
  }

  for (iy = 0; iy <= loop_ub_tmp; iy++) {
    z_data = 0.002 / (3.0 - z_data);
  }

  if (rtb_TPNOxMassgmi < 0.001) {
    rtb_TPNOxMassgmi = z_data;
  }

  iy = 0;
  if (HevP4ReferenceApplication_B.xdot < 0.0) {
    iy = 1;
  }

  if (0 <= iy - 1) {
    z_data = -rtb_TPNOxMassgmi;
  }

  rtb_RateTransition2 = rtb_TPNOxMassgmi;
  if (HevP4ReferenceApplication_B.xdot < 0.0) {
    rtb_RateTransition2 = z_data;
  }

  if (rtb_TPNOxMassgmi > 5.0) {
    rtb_TPNOxMassgmi = HevP4ReferenceApplication_P.LongitudinalDriver_L /
      rtb_TPNOxMassgmi;
    if ((HevP4ReferenceApplication_P.LongitudinalDriver_tau < rtb_TPNOxMassgmi) ||
        rtIsNaN(rtb_TPNOxMassgmi)) {
      rtb_TPNOxMassgmi = HevP4ReferenceApplication_P.LongitudinalDriver_tau;
    }

    if (!(rtb_TPNOxMassgmi > 0.001)) {
      rtb_TPNOxMassgmi = 0.001;
    }
  } else {
    rtb_TPNOxMassgmi = HevP4ReferenceApplication_P.LongitudinalDriver_tau;
  }

  rtb_F[0] = 0.0;
  rtb_F[2] = 1.0;
  rtb_F[1] = -((HevP4ReferenceApplication_P.LongitudinalDriver_aR /
                rtb_RateTransition2 +
                HevP4ReferenceApplication_P.LongitudinalDriver_cR *
                HevP4ReferenceApplication_B.xdot) * tanh
               (HevP4ReferenceApplication_B.xdot) +
               HevP4ReferenceApplication_P.LongitudinalDriver_bR) /
    HevP4ReferenceApplication_P.LongitudinalDriver_m;
  rtb_F[3] = 0.0;
  rtb_TraceVelocityTargetActualmph[1] =
    HevP4ReferenceApplication_P.LongitudinalDriver_Kpt /
    HevP4ReferenceApplication_P.LongitudinalDriver_m;
  sigmaA[0] = 0.0;
  rtb_Integrator = 0.0;
  sigmaA[1] = 0.0;
  rtb_RateTransition5 = 0.0;
  sigmaA[2] = 0.0;
  rtb_RateTransition7 = 0.0;
  sigmaA[3] = 0.0;
  rtb_RateTransition8 = 0.0;
  for (iy = 0; iy < 15; iy++) {
    rtb_RateTransition2 = rt_powd_snf(rtb_TPNOxMassgmi, (real_T)iy + 1.0);
    mpower_MkJA5ZKD(rtb_F, (real_T)iy + 1.0, sigmaA_tmp);
    rtb_BatteryCurrentA = f[iy + 1];
    rtb_BatterySOC = f[iy];
    z_data = sigmaA_tmp[0] * rtb_RateTransition2;
    sigmaA[0] += z_data / rtb_BatteryCurrentA;
    rtb_Integrator += z_data / rtb_BatterySOC;
    z_data = sigmaA_tmp[1] * rtb_RateTransition2;
    sigmaA[1] += z_data / rtb_BatteryCurrentA;
    rtb_RateTransition5 += z_data / rtb_BatterySOC;
    z_data = sigmaA_tmp[2] * rtb_RateTransition2;
    sigmaA[2] += z_data / rtb_BatteryCurrentA;
    rtb_RateTransition7 += z_data / rtb_BatterySOC;
    z_data = sigmaA_tmp[3] * rtb_RateTransition2;
    sigmaA[3] += z_data / rtb_BatteryCurrentA;
    rtb_RateTransition8 += z_data / rtb_BatterySOC;
  }

  rtb_TPNOxMassgmi = ((sigmaA[0] + 1.0) * rtb_TPNOxMassgmi + rtb_TPNOxMassgmi *
                      sigmaA[1]) * 0.0 + ((sigmaA[3] + 1.0) * rtb_TPNOxMassgmi +
    rtb_TPNOxMassgmi * sigmaA[2]) * rtb_TraceVelocityTargetActualmph[1];

  /* MATLAB Function: '<S28>/Vehicle' */
  rtb_F_0[0] = 0.0;
  rtb_F_0[1] = rtb_F[1] * 0.001;
  rtb_F_0[2] = 0.001;
  rtb_F_0[3] = 0.0;
  expm_9DBYDrz1(rtb_F_0, sigmaA);
  rtb_F_0[0] = 0.0;
  rtb_F_0[1] = rtb_F[1] * 0.0;
  rtb_F_0[2] = 0.0;
  rtb_F_0[3] = 0.0;
  expm_9DBYDrz1(rtb_F_0, sigmaA_tmp);
  rtb_F_0[0] = 0.0;
  rtb_F_0[1] = rtb_F[1] * 0.001;
  rtb_F_0[2] = 0.001;
  rtb_F_0[3] = 0.0;
  expm_9DBYDrz1(rtb_F_0, rtb_F);
  if (ssIsSampleHit(rtS, 1, 0)) {
    /* Constant: '<S30>/Constant' */
    HevP4ReferenceApplication_B.Constant_f = 1.0 /
      HevP4ReferenceApplication_P.LongitudinalDriver_tau * 3.1415926535897931 *
      2.0;
  }

  /* Product: '<S30>/Divide' incorporates:
   *  MATLAB Function: '<S28>/Setup'
   *  MATLAB Function: '<S28>/Vehicle'
   *  Product: '<S28>/Divide'
   *  Product: '<S28>/Product'
   *  Product: '<S28>/Product1'
   *  Sum: '<S28>/Add1'
   *  Sum: '<S28>/Add2'
   *  Sum: '<S28>/Add4'
   *  Sum: '<S30>/Sum'
   */
  HevP4ReferenceApplication_B.Divide =
    (((HevP4ReferenceApplication_B.uDLookupTable - (((((sigmaA_tmp[0] * 0.0 +
            rtb_TraceVelocityTargetActualmph[1] * sigmaA_tmp[2]) + (rtb_F[0] *
            0.0 + rtb_TraceVelocityTargetActualmph[1] * rtb_F[2])) / 2.0 * 0.001
          * rtb_TPCOMassgmi + (sigmaA[0] * HevP4ReferenceApplication_B.xdot +
           sigmaA[2] * 0.0)) * ((rtb_Integrator + 1.0) + rtb_RateTransition5) +
         (((sigmaA_tmp[1] * 0.0 + rtb_TraceVelocityTargetActualmph[1] *
            sigmaA_tmp[3]) + (rtb_F[1] * 0.0 + rtb_TraceVelocityTargetActualmph
            [1] * rtb_F[3])) / 2.0 * 0.001 * rtb_TPCOMassgmi + (sigmaA[1] *
           HevP4ReferenceApplication_B.xdot + sigmaA[3] * 0.0)) *
         ((rtb_RateTransition8 + 1.0) + rtb_RateTransition7)) + rtb_TPCOMassgmi *
        rtb_TPNOxMassgmi)) / rtb_TPNOxMassgmi + rtb_TPHCMassgmi) -
     rtb_TPHCMassgmi) * HevP4ReferenceApplication_B.Constant_f;

  /* Sum: '<S23>/Sum7' */
  rtb_TPHCMassgmi = HevP4ReferenceApplication_B.uDLookupTable -
    HevP4ReferenceApplication_B.xdot;

  /* SignalConversion generated from: '<S41>/Vector Concatenate1' */
  /* Unit Conversion - from: m/s to: m/s
     Expression: output = (1*input) + (0) */
  rtb_TraceVelocityTargetActualmph[0] = rtb_TPHCMassgmi;

  /* SignalConversion generated from: '<S41>/Vector Concatenate1' */
  rtb_TraceVelocityTargetActualmph[1] = rtb_TPHCMassgmi;

  /* Product: '<S41>/Product' */
  HevP4ReferenceApplication_B.Product = rtb_TPHCMassgmi * rtb_TPHCMassgmi;
  if (ssIsSampleHit(rtS, 2, 0)) {
    /* UnitDelay: '<S41>/Unit Delay' */
    HevP4ReferenceApplication_B.UnitDelay[0] =
      HevP4ReferenceApplication_DW.UnitDelay_DSTATE[0];
    HevP4ReferenceApplication_B.UnitDelay[1] =
      HevP4ReferenceApplication_DW.UnitDelay_DSTATE[1];
  }

  /* Switch: '<S41>/Switch' incorporates:
   *  RelationalOperator: '<S41>/Relational Operator'
   *  RelationalOperator: '<S41>/Relational Operator1'
   */
  if (rtb_TPHCMassgmi > HevP4ReferenceApplication_B.UnitDelay[0]) {
    /* Switch: '<S41>/Switch' */
    HevP4ReferenceApplication_B.Switch_c[0] = rtb_TraceVelocityTargetActualmph[0];
  } else {
    /* Switch: '<S41>/Switch' */
    HevP4ReferenceApplication_B.Switch_c[0] =
      HevP4ReferenceApplication_B.UnitDelay[0];
  }

  if (rtb_TPHCMassgmi < HevP4ReferenceApplication_B.UnitDelay[1]) {
    /* Switch: '<S41>/Switch' */
    HevP4ReferenceApplication_B.Switch_c[1] = rtb_TraceVelocityTargetActualmph[1];
  } else {
    /* Switch: '<S41>/Switch' */
    HevP4ReferenceApplication_B.Switch_c[1] =
      HevP4ReferenceApplication_B.UnitDelay[1];
  }

  /* End of Switch: '<S41>/Switch' */

  /* FirstOrderHold: '<S49>/First Order Hold' */
  HevP4ReferenceApplication_B.Cltch1Cmd_j = HevP4ReferenceApplication_DW.Ck_c;

  /* FirstOrderHold: '<S49>/First Order Hold' */
  if (HevP4ReferenceApplication_DW.Tk_m != (rtInf)) {
    /* FirstOrderHold: '<S49>/First Order Hold' */
    HevP4ReferenceApplication_B.Cltch1Cmd_j += (rtb_Clock_tmp -
      HevP4ReferenceApplication_DW.Tk_m) * HevP4ReferenceApplication_DW.Mk_h;
  }

  /* FirstOrderHold: '<S49>/First Order Hold1' */
  HevP4ReferenceApplication_B.BrkCmd_f = HevP4ReferenceApplication_DW.Ck_k;

  /* FirstOrderHold: '<S49>/First Order Hold1' */
  if (HevP4ReferenceApplication_DW.Tk_i != (rtInf)) {
    /* FirstOrderHold: '<S49>/First Order Hold1' */
    HevP4ReferenceApplication_B.BrkCmd_f += (rtb_Clock_tmp -
      HevP4ReferenceApplication_DW.Tk_i) * HevP4ReferenceApplication_DW.Mk_j;
  }

  /* FirstOrderHold: '<S49>/First Order Hold2' */
  HevP4ReferenceApplication_B.GearCmd_g = HevP4ReferenceApplication_DW.Ck_a;

  /* FirstOrderHold: '<S49>/First Order Hold2' */
  if (HevP4ReferenceApplication_DW.Tk_j != (rtInf)) {
    /* FirstOrderHold: '<S49>/First Order Hold2' */
    HevP4ReferenceApplication_B.GearCmd_g += (rtb_Clock_tmp -
      HevP4ReferenceApplication_DW.Tk_j) * HevP4ReferenceApplication_DW.Mk_d;
  }

  /* ModelReference: '<S56>/MotMapped' */
  MotMappedP4(&(HevP4ReferenceApplication_DW.MotMapped_InstanceData.rtm),
              &HevP4ReferenceApplication_B.Drivetrain_o5,
              &HevP4ReferenceApplication_B.Battery_o4,
              &HevP4ReferenceApplication_B.MotMapped_o1,
              &HevP4ReferenceApplication_B.MotMapped_o2,
              &(HevP4ReferenceApplication_DW.MotMapped_InstanceData.rtb),
              &(HevP4ReferenceApplication_DW.MotMapped_InstanceData.rtdw),
              &(HevP4ReferenceApplication_X.MotMapped_CSTATE));

  /* FirstOrderHold: '<S51>/First Order Hold' */
  HevP4ReferenceApplication_B.MotTrqCmd = HevP4ReferenceApplication_DW.Ck_h;

  /* FirstOrderHold: '<S51>/First Order Hold' */
  if (HevP4ReferenceApplication_DW.Tk_o != (rtInf)) {
    /* FirstOrderHold: '<S51>/First Order Hold' */
    HevP4ReferenceApplication_B.MotTrqCmd += (rtb_Clock_tmp -
      HevP4ReferenceApplication_DW.Tk_o) * HevP4ReferenceApplication_DW.Mk_c;
  }

  /* FirstOrderHold: '<S54>/First Order Hold' */
  HevP4ReferenceApplication_B.FirstOrderHold =
    HevP4ReferenceApplication_DW.Ck_hq;

  /* FirstOrderHold: '<S54>/First Order Hold' */
  if (HevP4ReferenceApplication_DW.Tk_p != (rtInf)) {
    /* FirstOrderHold: '<S54>/First Order Hold' */
    HevP4ReferenceApplication_B.FirstOrderHold += (rtb_Clock_tmp -
      HevP4ReferenceApplication_DW.Tk_p) * HevP4ReferenceApplication_DW.Mk_l;
  }

  /* FirstOrderHold: '<S54>/First Order Hold1' */
  HevP4ReferenceApplication_B.FirstOrderHold1 =
    HevP4ReferenceApplication_DW.Ck_ht;

  /* FirstOrderHold: '<S54>/First Order Hold1' */
  if (HevP4ReferenceApplication_DW.Tk_e != (rtInf)) {
    /* FirstOrderHold: '<S54>/First Order Hold1' */
    HevP4ReferenceApplication_B.FirstOrderHold1 += (rtb_Clock_tmp -
      HevP4ReferenceApplication_DW.Tk_e) * HevP4ReferenceApplication_DW.Mk_k;
  }

  /* FirstOrderHold: '<S54>/First Order Hold10' */
  HevP4ReferenceApplication_B.FirstOrderHold10 =
    HevP4ReferenceApplication_DW.Ck_j;

  /* FirstOrderHold: '<S54>/First Order Hold10' */
  if (HevP4ReferenceApplication_DW.Tk_b != (rtInf)) {
    /* FirstOrderHold: '<S54>/First Order Hold10' */
    HevP4ReferenceApplication_B.FirstOrderHold10 += (rtb_Clock_tmp -
      HevP4ReferenceApplication_DW.Tk_b) * HevP4ReferenceApplication_DW.Mk_hm;
  }

  /* FirstOrderHold: '<S54>/First Order Hold11' */
  HevP4ReferenceApplication_B.FirstOrderHold11 =
    HevP4ReferenceApplication_DW.Ck_aq;

  /* FirstOrderHold: '<S54>/First Order Hold11' */
  if (HevP4ReferenceApplication_DW.Tk_f != (rtInf)) {
    /* FirstOrderHold: '<S54>/First Order Hold11' */
    HevP4ReferenceApplication_B.FirstOrderHold11 += (rtb_Clock_tmp -
      HevP4ReferenceApplication_DW.Tk_f) * HevP4ReferenceApplication_DW.Mk_n;
  }

  /* FirstOrderHold: '<S54>/First Order Hold13' */
  HevP4ReferenceApplication_B.FirstOrderHold13 =
    HevP4ReferenceApplication_DW.Ck_ch;

  /* FirstOrderHold: '<S54>/First Order Hold13' */
  if (HevP4ReferenceApplication_DW.Tk_ii != (rtInf)) {
    /* FirstOrderHold: '<S54>/First Order Hold13' */
    HevP4ReferenceApplication_B.FirstOrderHold13 += (rtb_Clock_tmp -
      HevP4ReferenceApplication_DW.Tk_ii) * HevP4ReferenceApplication_DW.Mk_nu;
  }

  /* FirstOrderHold: '<S54>/First Order Hold14' */
  HevP4ReferenceApplication_B.FirstOrderHold14 =
    HevP4ReferenceApplication_DW.Ck_o;

  /* FirstOrderHold: '<S54>/First Order Hold14' */
  if (HevP4ReferenceApplication_DW.Tk_oz != (rtInf)) {
    /* FirstOrderHold: '<S54>/First Order Hold14' */
    HevP4ReferenceApplication_B.FirstOrderHold14 += (rtb_Clock_tmp -
      HevP4ReferenceApplication_DW.Tk_oz) * HevP4ReferenceApplication_DW.Mk_d3;
  }

  /* FirstOrderHold: '<S54>/First Order Hold2' */
  HevP4ReferenceApplication_B.FirstOrderHold2 =
    HevP4ReferenceApplication_DW.Ck_p;

  /* FirstOrderHold: '<S54>/First Order Hold2' */
  if (HevP4ReferenceApplication_DW.Tk_g != (rtInf)) {
    /* FirstOrderHold: '<S54>/First Order Hold2' */
    HevP4ReferenceApplication_B.FirstOrderHold2 += (rtb_Clock_tmp -
      HevP4ReferenceApplication_DW.Tk_g) * HevP4ReferenceApplication_DW.Mk_i;
  }

  /* FirstOrderHold: '<S54>/First Order Hold3' */
  HevP4ReferenceApplication_B.FirstOrderHold3 =
    HevP4ReferenceApplication_DW.Ck_f;

  /* FirstOrderHold: '<S54>/First Order Hold3' */
  if (HevP4ReferenceApplication_DW.Tk_h != (rtInf)) {
    /* FirstOrderHold: '<S54>/First Order Hold3' */
    HevP4ReferenceApplication_B.FirstOrderHold3 += (rtb_Clock_tmp -
      HevP4ReferenceApplication_DW.Tk_h) * HevP4ReferenceApplication_DW.Mk_a;
  }

  /* FirstOrderHold: '<S54>/First Order Hold4' */
  HevP4ReferenceApplication_B.FirstOrderHold4 =
    HevP4ReferenceApplication_DW.Ck_g;

  /* FirstOrderHold: '<S54>/First Order Hold4' */
  if (HevP4ReferenceApplication_DW.Tk_b2 != (rtInf)) {
    /* FirstOrderHold: '<S54>/First Order Hold4' */
    HevP4ReferenceApplication_B.FirstOrderHold4 += (rtb_Clock_tmp -
      HevP4ReferenceApplication_DW.Tk_b2) * HevP4ReferenceApplication_DW.Mk_dk;
  }

  /* FirstOrderHold: '<S54>/First Order Hold5' */
  HevP4ReferenceApplication_B.FirstOrderHold5 =
    HevP4ReferenceApplication_DW.Ck_i;

  /* FirstOrderHold: '<S54>/First Order Hold5' */
  if (HevP4ReferenceApplication_DW.Tk_ej != (rtInf)) {
    /* FirstOrderHold: '<S54>/First Order Hold5' */
    HevP4ReferenceApplication_B.FirstOrderHold5 += (rtb_Clock_tmp -
      HevP4ReferenceApplication_DW.Tk_ej) * HevP4ReferenceApplication_DW.Mk_f;
  }

  /* FirstOrderHold: '<S54>/First Order Hold6' */
  HevP4ReferenceApplication_B.FirstOrderHold6 =
    HevP4ReferenceApplication_DW.Ck_cz;

  /* FirstOrderHold: '<S54>/First Order Hold6' */
  if (HevP4ReferenceApplication_DW.Tk_d != (rtInf)) {
    /* FirstOrderHold: '<S54>/First Order Hold6' */
    HevP4ReferenceApplication_B.FirstOrderHold6 += (rtb_Clock_tmp -
      HevP4ReferenceApplication_DW.Tk_d) * HevP4ReferenceApplication_DW.Mk_l5;
  }

  /* FirstOrderHold: '<S54>/First Order Hold7' */
  HevP4ReferenceApplication_B.FirstOrderHold7 =
    HevP4ReferenceApplication_DW.Ck_m;

  /* FirstOrderHold: '<S54>/First Order Hold7' */
  if (HevP4ReferenceApplication_DW.Tk_bv != (rtInf)) {
    /* FirstOrderHold: '<S54>/First Order Hold7' */
    HevP4ReferenceApplication_B.FirstOrderHold7 += (rtb_Clock_tmp -
      HevP4ReferenceApplication_DW.Tk_bv) * HevP4ReferenceApplication_DW.Mk_kb;
  }

  /* FirstOrderHold: '<S54>/First Order Hold8' */
  HevP4ReferenceApplication_B.FirstOrderHold8 =
    HevP4ReferenceApplication_DW.Ck_d;

  /* FirstOrderHold: '<S54>/First Order Hold8' */
  if (HevP4ReferenceApplication_DW.Tk_n != (rtInf)) {
    /* FirstOrderHold: '<S54>/First Order Hold8' */
    HevP4ReferenceApplication_B.FirstOrderHold8 += (rtb_Clock_tmp -
      HevP4ReferenceApplication_DW.Tk_n) * HevP4ReferenceApplication_DW.Mk_ix;
  }

  /* FirstOrderHold: '<S54>/First Order Hold9' */
  HevP4ReferenceApplication_B.FirstOrderHold9 =
    HevP4ReferenceApplication_DW.Ck_pu;

  /* FirstOrderHold: '<S54>/First Order Hold9' */
  if (HevP4ReferenceApplication_DW.Tk_pr != (rtInf)) {
    /* FirstOrderHold: '<S54>/First Order Hold9' */
    HevP4ReferenceApplication_B.FirstOrderHold9 += (rtb_Clock_tmp -
      HevP4ReferenceApplication_DW.Tk_pr) * HevP4ReferenceApplication_DW.Mk_jb;
  }

  UNUSED_PARAMETER(tid);
}

/* Update for root system: '<Root>' */
void MdlUpdate(int_T tid)
{
  real_T Tk_m_tmp;
  real_T err;
  real_T tol;
  boolean_T guard1 = false;

  /* Update for ModelReference: '<S47>/Drivetrain' */
  DrivetrainHevP4_Update
    (&(HevP4ReferenceApplication_DW.Drivetrain_InstanceData.rtm),
     &HevP4ReferenceApplication_B.MotTrq, &HevP4ReferenceApplication_B.Grade,
     &HevP4ReferenceApplication_B.wind_x, &HevP4ReferenceApplication_B.BrkCmd_f,
     &HevP4ReferenceApplication_B.GearCmd_g,
     &HevP4ReferenceApplication_B.Drivetrain_o4,
     &(HevP4ReferenceApplication_DW.Drivetrain_InstanceData.rtb),
     &(HevP4ReferenceApplication_DW.Drivetrain_InstanceData.rtdw),
     &(HevP4ReferenceApplication_X.Drivetrain_CSTATE),
     &(((XDis_HevP4ReferenceApplication_T *) ssGetContStateDisabled(rtS))
       ->Drivetrain_CSTATE));

  /* Update for FirstOrderHold: '<S54>/First Order Hold12' */
  if (ssIsSampleHit(rtS, 5, 0)) {
    guard1 = false;
    if (!(HevP4ReferenceApplication_DW.Tk == (rtInf))) {
      if ((HevP4ReferenceApplication_B.ClsdLpFuelMult >= -1.0) &&
          (HevP4ReferenceApplication_B.ClsdLpFuelMult <= 1.0)) {
        tol = HevP4ReferenceApplication_P.FirstOrderHold12_ErrTol;
      } else if (HevP4ReferenceApplication_B.ClsdLpFuelMult > 1.0) {
        tol = HevP4ReferenceApplication_B.ClsdLpFuelMult *
          HevP4ReferenceApplication_P.FirstOrderHold12_ErrTol;
      } else {
        tol = -(HevP4ReferenceApplication_B.ClsdLpFuelMult *
                HevP4ReferenceApplication_P.FirstOrderHold12_ErrTol);
      }

      err = HevP4ReferenceApplication_B.FirstOrderHold12 -
        HevP4ReferenceApplication_B.ClsdLpFuelMult;
      if ((err > tol) || (err < -tol)) {
        guard1 = true;
      } else {
        HevP4ReferenceApplication_DW.Mk =
          (HevP4ReferenceApplication_B.ClsdLpFuelMult -
           HevP4ReferenceApplication_DW.Uk) / (ssGetT(rtS) -
          HevP4ReferenceApplication_DW.Tk);
        HevP4ReferenceApplication_DW.Ck =
          HevP4ReferenceApplication_B.FirstOrderHold12;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      if (HevP4ReferenceApplication_B.ClsdLpFuelMult !=
          HevP4ReferenceApplication_B.FirstOrderHold12) {
        ssSetBlockStateForSolverChangedAtMajorStep(rtS);
        ssSetContTimeOutputInconsistentWithStateAtMajorStep(rtS);
      }

      HevP4ReferenceApplication_DW.Ck =
        HevP4ReferenceApplication_B.ClsdLpFuelMult;
      HevP4ReferenceApplication_DW.Mk = 0.0;
    }

    HevP4ReferenceApplication_DW.Uk = HevP4ReferenceApplication_B.ClsdLpFuelMult;
    HevP4ReferenceApplication_DW.Tk = ssGetT(rtS);
  }

  /* End of Update for FirstOrderHold: '<S54>/First Order Hold12' */

  /* Update for ModelReference: '<S53>/SiMappedEngine' */
  SiMappedEngine_Update
    (&(HevP4ReferenceApplication_DW.SiMappedEngine_InstanceData.rtm));

  /* Update for ModelReference: '<S50>/Battery' */
  BattHevP4_Update(&(HevP4ReferenceApplication_DW.Battery_InstanceData.rtm),
                   &(HevP4ReferenceApplication_DW.Battery_InstanceData.rtdw));
  if (ssIsSampleHit(rtS, 2, 0)) {
    /* Update for ModelReference: '<S10>/Hybrid Control Module (HCM) - Optimal' */
    HevP4OptimalController_Update
      (&(HevP4ReferenceApplication_DW.HybridControlModuleHCMOptimal_InstanceData.rtb),
       &(HevP4ReferenceApplication_DW.HybridControlModuleHCMOptimal_InstanceData.rtdw));
  }

  if (ssIsSampleHit(rtS, 5, 0)) {
    /* Update for ModelReference: '<S9>/SiEngineController' */
    SiEngineController_Update
      (&(HevP4ReferenceApplication_DW.SiEngineController_InstanceData.rtb),
       &(HevP4ReferenceApplication_DW.SiEngineController_InstanceData.rtdw));
  }

  if (ssIsSampleHit(rtS, 2, 0)) {
    /* Update for UnitDelay: '<S41>/Unit Delay' */
    HevP4ReferenceApplication_DW.UnitDelay_DSTATE[0] =
      HevP4ReferenceApplication_B.Switch_c[0];
    HevP4ReferenceApplication_DW.UnitDelay_DSTATE[1] =
      HevP4ReferenceApplication_B.Switch_c[1];

    /* Update for FirstOrderHold: '<S49>/First Order Hold' incorporates:
     *  FirstOrderHold: '<S49>/First Order Hold1'
     *  FirstOrderHold: '<S49>/First Order Hold2'
     */
    guard1 = false;
    if (!(HevP4ReferenceApplication_DW.Tk_m == (rtInf))) {
      if ((HevP4ReferenceApplication_B.Cltch1Cmd >= -1.0) &&
          (HevP4ReferenceApplication_B.Cltch1Cmd <= 1.0)) {
        tol = HevP4ReferenceApplication_P.FirstOrderHold_ErrTol;
      } else if (HevP4ReferenceApplication_B.Cltch1Cmd > 1.0) {
        tol = HevP4ReferenceApplication_B.Cltch1Cmd *
          HevP4ReferenceApplication_P.FirstOrderHold_ErrTol;
      } else {
        tol = -(HevP4ReferenceApplication_B.Cltch1Cmd *
                HevP4ReferenceApplication_P.FirstOrderHold_ErrTol);
      }

      err = HevP4ReferenceApplication_B.Cltch1Cmd_j -
        HevP4ReferenceApplication_B.Cltch1Cmd;
      if ((err > tol) || (err < -tol)) {
        guard1 = true;
      } else {
        HevP4ReferenceApplication_DW.Mk_h =
          (HevP4ReferenceApplication_B.Cltch1Cmd -
           HevP4ReferenceApplication_DW.Uk_i) / (ssGetT(rtS) -
          HevP4ReferenceApplication_DW.Tk_m);
        HevP4ReferenceApplication_DW.Ck_c =
          HevP4ReferenceApplication_B.Cltch1Cmd_j;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      if (HevP4ReferenceApplication_B.Cltch1Cmd !=
          HevP4ReferenceApplication_B.Cltch1Cmd_j) {
        ssSetBlockStateForSolverChangedAtMajorStep(rtS);
        ssSetContTimeOutputInconsistentWithStateAtMajorStep(rtS);
      }

      HevP4ReferenceApplication_DW.Ck_c = HevP4ReferenceApplication_B.Cltch1Cmd;
      HevP4ReferenceApplication_DW.Mk_h = 0.0;
    }

    HevP4ReferenceApplication_DW.Uk_i = HevP4ReferenceApplication_B.Cltch1Cmd;
    Tk_m_tmp = ssGetT(rtS);
    HevP4ReferenceApplication_DW.Tk_m = Tk_m_tmp;

    /* End of Update for FirstOrderHold: '<S49>/First Order Hold' */

    /* Update for FirstOrderHold: '<S49>/First Order Hold1' */
    guard1 = false;
    if (!(HevP4ReferenceApplication_DW.Tk_i == (rtInf))) {
      if ((HevP4ReferenceApplication_B.BrkCmd >= -1.0) &&
          (HevP4ReferenceApplication_B.BrkCmd <= 1.0)) {
        tol = HevP4ReferenceApplication_P.FirstOrderHold1_ErrTol;
      } else if (HevP4ReferenceApplication_B.BrkCmd > 1.0) {
        tol = HevP4ReferenceApplication_B.BrkCmd *
          HevP4ReferenceApplication_P.FirstOrderHold1_ErrTol;
      } else {
        tol = -(HevP4ReferenceApplication_B.BrkCmd *
                HevP4ReferenceApplication_P.FirstOrderHold1_ErrTol);
      }

      err = HevP4ReferenceApplication_B.BrkCmd_f -
        HevP4ReferenceApplication_B.BrkCmd;
      if ((err > tol) || (err < -tol)) {
        guard1 = true;
      } else {
        HevP4ReferenceApplication_DW.Mk_j = (HevP4ReferenceApplication_B.BrkCmd
          - HevP4ReferenceApplication_DW.Uk_e) / (Tk_m_tmp -
          HevP4ReferenceApplication_DW.Tk_i);
        HevP4ReferenceApplication_DW.Ck_k = HevP4ReferenceApplication_B.BrkCmd_f;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      if (HevP4ReferenceApplication_B.BrkCmd !=
          HevP4ReferenceApplication_B.BrkCmd_f) {
        ssSetBlockStateForSolverChangedAtMajorStep(rtS);
        ssSetContTimeOutputInconsistentWithStateAtMajorStep(rtS);
      }

      HevP4ReferenceApplication_DW.Ck_k = HevP4ReferenceApplication_B.BrkCmd;
      HevP4ReferenceApplication_DW.Mk_j = 0.0;
    }

    HevP4ReferenceApplication_DW.Uk_e = HevP4ReferenceApplication_B.BrkCmd;
    HevP4ReferenceApplication_DW.Tk_i = Tk_m_tmp;

    /* Update for FirstOrderHold: '<S49>/First Order Hold2' */
    guard1 = false;
    if (!(HevP4ReferenceApplication_DW.Tk_j == (rtInf))) {
      if ((HevP4ReferenceApplication_B.GearCmd >= -1.0) &&
          (HevP4ReferenceApplication_B.GearCmd <= 1.0)) {
        tol = HevP4ReferenceApplication_P.FirstOrderHold2_ErrTol;
      } else if (HevP4ReferenceApplication_B.GearCmd > 1.0) {
        tol = HevP4ReferenceApplication_B.GearCmd *
          HevP4ReferenceApplication_P.FirstOrderHold2_ErrTol;
      } else {
        tol = -(HevP4ReferenceApplication_B.GearCmd *
                HevP4ReferenceApplication_P.FirstOrderHold2_ErrTol);
      }

      err = HevP4ReferenceApplication_B.GearCmd_g -
        HevP4ReferenceApplication_B.GearCmd;
      if ((err > tol) || (err < -tol)) {
        guard1 = true;
      } else {
        HevP4ReferenceApplication_DW.Mk_d = (HevP4ReferenceApplication_B.GearCmd
          - HevP4ReferenceApplication_DW.Uk_p) / (Tk_m_tmp -
          HevP4ReferenceApplication_DW.Tk_j);
        HevP4ReferenceApplication_DW.Ck_a =
          HevP4ReferenceApplication_B.GearCmd_g;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      if (HevP4ReferenceApplication_B.GearCmd !=
          HevP4ReferenceApplication_B.GearCmd_g) {
        ssSetBlockStateForSolverChangedAtMajorStep(rtS);
        ssSetContTimeOutputInconsistentWithStateAtMajorStep(rtS);
      }

      HevP4ReferenceApplication_DW.Ck_a = HevP4ReferenceApplication_B.GearCmd;
      HevP4ReferenceApplication_DW.Mk_d = 0.0;
    }

    HevP4ReferenceApplication_DW.Uk_p = HevP4ReferenceApplication_B.GearCmd;
    HevP4ReferenceApplication_DW.Tk_j = Tk_m_tmp;
  }

  /* Update for ModelReference: '<S56>/MotMapped' */
  MotMappedP4_Update(&HevP4ReferenceApplication_B.MotTrqCmd,
                     &(HevP4ReferenceApplication_DW.MotMapped_InstanceData.rtb));

  /* Update for FirstOrderHold: '<S51>/First Order Hold' */
  if (ssIsSampleHit(rtS, 2, 0)) {
    guard1 = false;
    if (!(HevP4ReferenceApplication_DW.Tk_o == (rtInf))) {
      if ((HevP4ReferenceApplication_B.MtrTrqCmd >= -1.0) &&
          (HevP4ReferenceApplication_B.MtrTrqCmd <= 1.0)) {
        tol = HevP4ReferenceApplication_P.FirstOrderHold_ErrTol_f;
      } else if (HevP4ReferenceApplication_B.MtrTrqCmd > 1.0) {
        tol = HevP4ReferenceApplication_B.MtrTrqCmd *
          HevP4ReferenceApplication_P.FirstOrderHold_ErrTol_f;
      } else {
        tol = -(HevP4ReferenceApplication_B.MtrTrqCmd *
                HevP4ReferenceApplication_P.FirstOrderHold_ErrTol_f);
      }

      err = HevP4ReferenceApplication_B.MotTrqCmd -
        HevP4ReferenceApplication_B.MtrTrqCmd;
      if ((err > tol) || (err < -tol)) {
        guard1 = true;
      } else {
        HevP4ReferenceApplication_DW.Mk_c =
          (HevP4ReferenceApplication_B.MtrTrqCmd -
           HevP4ReferenceApplication_DW.Uk_n) / (ssGetT(rtS) -
          HevP4ReferenceApplication_DW.Tk_o);
        HevP4ReferenceApplication_DW.Ck_h =
          HevP4ReferenceApplication_B.MotTrqCmd;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      if (HevP4ReferenceApplication_B.MtrTrqCmd !=
          HevP4ReferenceApplication_B.MotTrqCmd) {
        ssSetBlockStateForSolverChangedAtMajorStep(rtS);
        ssSetContTimeOutputInconsistentWithStateAtMajorStep(rtS);
      }

      HevP4ReferenceApplication_DW.Ck_h = HevP4ReferenceApplication_B.MtrTrqCmd;
      HevP4ReferenceApplication_DW.Mk_c = 0.0;
    }

    HevP4ReferenceApplication_DW.Uk_n = HevP4ReferenceApplication_B.MtrTrqCmd;
    HevP4ReferenceApplication_DW.Tk_o = ssGetT(rtS);
  }

  /* End of Update for FirstOrderHold: '<S51>/First Order Hold' */

  /* Update for FirstOrderHold: '<S54>/First Order Hold' */
  if (ssIsSampleHit(rtS, 5, 0)) {
    guard1 = false;
    if (!(HevP4ReferenceApplication_DW.Tk_p == (rtInf))) {
      if ((HevP4ReferenceApplication_B.SiEngineController_o1 >= -1.0) &&
          (HevP4ReferenceApplication_B.SiEngineController_o1 <= 1.0)) {
        tol = HevP4ReferenceApplication_P.FirstOrderHold_ErrTol_g;
      } else if (HevP4ReferenceApplication_B.SiEngineController_o1 > 1.0) {
        tol = HevP4ReferenceApplication_B.SiEngineController_o1 *
          HevP4ReferenceApplication_P.FirstOrderHold_ErrTol_g;
      } else {
        tol = -(HevP4ReferenceApplication_B.SiEngineController_o1 *
                HevP4ReferenceApplication_P.FirstOrderHold_ErrTol_g);
      }

      err = HevP4ReferenceApplication_B.FirstOrderHold -
        HevP4ReferenceApplication_B.SiEngineController_o1;
      if ((err > tol) || (err < -tol)) {
        guard1 = true;
      } else {
        HevP4ReferenceApplication_DW.Mk_l =
          (HevP4ReferenceApplication_B.SiEngineController_o1 -
           HevP4ReferenceApplication_DW.Uk_nh) / (ssGetT(rtS) -
          HevP4ReferenceApplication_DW.Tk_p);
        HevP4ReferenceApplication_DW.Ck_hq =
          HevP4ReferenceApplication_B.FirstOrderHold;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      if (HevP4ReferenceApplication_B.SiEngineController_o1 !=
          HevP4ReferenceApplication_B.FirstOrderHold) {
        ssSetBlockStateForSolverChangedAtMajorStep(rtS);
        ssSetContTimeOutputInconsistentWithStateAtMajorStep(rtS);
      }

      HevP4ReferenceApplication_DW.Ck_hq =
        HevP4ReferenceApplication_B.SiEngineController_o1;
      HevP4ReferenceApplication_DW.Mk_l = 0.0;
    }

    HevP4ReferenceApplication_DW.Uk_nh =
      HevP4ReferenceApplication_B.SiEngineController_o1;
    HevP4ReferenceApplication_DW.Tk_p = ssGetT(rtS);

    /* Update for FirstOrderHold: '<S54>/First Order Hold1' incorporates:
     *  FirstOrderHold: '<S54>/First Order Hold'
     */
    guard1 = false;
    if (!(HevP4ReferenceApplication_DW.Tk_e == (rtInf))) {
      if ((HevP4ReferenceApplication_B.SiEngineController_o2 >= -1.0) &&
          (HevP4ReferenceApplication_B.SiEngineController_o2 <= 1.0)) {
        tol = HevP4ReferenceApplication_P.FirstOrderHold1_ErrTol_j;
      } else if (HevP4ReferenceApplication_B.SiEngineController_o2 > 1.0) {
        tol = HevP4ReferenceApplication_B.SiEngineController_o2 *
          HevP4ReferenceApplication_P.FirstOrderHold1_ErrTol_j;
      } else {
        tol = -(HevP4ReferenceApplication_B.SiEngineController_o2 *
                HevP4ReferenceApplication_P.FirstOrderHold1_ErrTol_j);
      }

      err = HevP4ReferenceApplication_B.FirstOrderHold1 -
        HevP4ReferenceApplication_B.SiEngineController_o2;
      if ((err > tol) || (err < -tol)) {
        guard1 = true;
      } else {
        HevP4ReferenceApplication_DW.Mk_k =
          (HevP4ReferenceApplication_B.SiEngineController_o2 -
           HevP4ReferenceApplication_DW.Uk_c) / (ssGetT(rtS) -
          HevP4ReferenceApplication_DW.Tk_e);
        HevP4ReferenceApplication_DW.Ck_ht =
          HevP4ReferenceApplication_B.FirstOrderHold1;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      if (HevP4ReferenceApplication_B.SiEngineController_o2 !=
          HevP4ReferenceApplication_B.FirstOrderHold1) {
        ssSetBlockStateForSolverChangedAtMajorStep(rtS);
        ssSetContTimeOutputInconsistentWithStateAtMajorStep(rtS);
      }

      HevP4ReferenceApplication_DW.Ck_ht =
        HevP4ReferenceApplication_B.SiEngineController_o2;
      HevP4ReferenceApplication_DW.Mk_k = 0.0;
    }

    HevP4ReferenceApplication_DW.Uk_c =
      HevP4ReferenceApplication_B.SiEngineController_o2;
    HevP4ReferenceApplication_DW.Tk_e = ssGetT(rtS);

    /* End of Update for FirstOrderHold: '<S54>/First Order Hold1' */

    /* Update for FirstOrderHold: '<S54>/First Order Hold10' */
    guard1 = false;
    if (!(HevP4ReferenceApplication_DW.Tk_b == (rtInf))) {
      if ((HevP4ReferenceApplication_B.SiEngineController_o11 >= -1.0) &&
          (HevP4ReferenceApplication_B.SiEngineController_o11 <= 1.0)) {
        tol = HevP4ReferenceApplication_P.FirstOrderHold10_ErrTol;
      } else if (HevP4ReferenceApplication_B.SiEngineController_o11 > 1.0) {
        tol = HevP4ReferenceApplication_B.SiEngineController_o11 *
          HevP4ReferenceApplication_P.FirstOrderHold10_ErrTol;
      } else {
        tol = -(HevP4ReferenceApplication_B.SiEngineController_o11 *
                HevP4ReferenceApplication_P.FirstOrderHold10_ErrTol);
      }

      err = HevP4ReferenceApplication_B.FirstOrderHold10 -
        HevP4ReferenceApplication_B.SiEngineController_o11;
      if ((err > tol) || (err < -tol)) {
        guard1 = true;
      } else {
        HevP4ReferenceApplication_DW.Mk_hm =
          (HevP4ReferenceApplication_B.SiEngineController_o11 -
           HevP4ReferenceApplication_DW.Uk_o) / (ssGetT(rtS) -
          HevP4ReferenceApplication_DW.Tk_b);
        HevP4ReferenceApplication_DW.Ck_j =
          HevP4ReferenceApplication_B.FirstOrderHold10;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      if (HevP4ReferenceApplication_B.SiEngineController_o11 !=
          HevP4ReferenceApplication_B.FirstOrderHold10) {
        ssSetBlockStateForSolverChangedAtMajorStep(rtS);
        ssSetContTimeOutputInconsistentWithStateAtMajorStep(rtS);
      }

      HevP4ReferenceApplication_DW.Ck_j =
        HevP4ReferenceApplication_B.SiEngineController_o11;
      HevP4ReferenceApplication_DW.Mk_hm = 0.0;
    }

    HevP4ReferenceApplication_DW.Uk_o =
      HevP4ReferenceApplication_B.SiEngineController_o11;
    HevP4ReferenceApplication_DW.Tk_b = ssGetT(rtS);

    /* End of Update for FirstOrderHold: '<S54>/First Order Hold10' */

    /* Update for FirstOrderHold: '<S54>/First Order Hold11' */
    guard1 = false;
    if (!(HevP4ReferenceApplication_DW.Tk_f == (rtInf))) {
      if ((HevP4ReferenceApplication_B.SiEngineController_o12 >= -1.0) &&
          (HevP4ReferenceApplication_B.SiEngineController_o12 <= 1.0)) {
        tol = HevP4ReferenceApplication_P.FirstOrderHold11_ErrTol;
      } else if (HevP4ReferenceApplication_B.SiEngineController_o12 > 1.0) {
        tol = HevP4ReferenceApplication_B.SiEngineController_o12 *
          HevP4ReferenceApplication_P.FirstOrderHold11_ErrTol;
      } else {
        tol = -(HevP4ReferenceApplication_B.SiEngineController_o12 *
                HevP4ReferenceApplication_P.FirstOrderHold11_ErrTol);
      }

      err = HevP4ReferenceApplication_B.FirstOrderHold11 -
        HevP4ReferenceApplication_B.SiEngineController_o12;
      if ((err > tol) || (err < -tol)) {
        guard1 = true;
      } else {
        HevP4ReferenceApplication_DW.Mk_n =
          (HevP4ReferenceApplication_B.SiEngineController_o12 -
           HevP4ReferenceApplication_DW.Uk_ol) / (ssGetT(rtS) -
          HevP4ReferenceApplication_DW.Tk_f);
        HevP4ReferenceApplication_DW.Ck_aq =
          HevP4ReferenceApplication_B.FirstOrderHold11;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      if (HevP4ReferenceApplication_B.SiEngineController_o12 !=
          HevP4ReferenceApplication_B.FirstOrderHold11) {
        ssSetBlockStateForSolverChangedAtMajorStep(rtS);
        ssSetContTimeOutputInconsistentWithStateAtMajorStep(rtS);
      }

      HevP4ReferenceApplication_DW.Ck_aq =
        HevP4ReferenceApplication_B.SiEngineController_o12;
      HevP4ReferenceApplication_DW.Mk_n = 0.0;
    }

    HevP4ReferenceApplication_DW.Uk_ol =
      HevP4ReferenceApplication_B.SiEngineController_o12;
    HevP4ReferenceApplication_DW.Tk_f = ssGetT(rtS);

    /* End of Update for FirstOrderHold: '<S54>/First Order Hold11' */

    /* Update for FirstOrderHold: '<S54>/First Order Hold13' */
    guard1 = false;
    if (!(HevP4ReferenceApplication_DW.Tk_ii == (rtInf))) {
      if ((HevP4ReferenceApplication_B.SiEngineController_o14 >= -1.0) &&
          (HevP4ReferenceApplication_B.SiEngineController_o14 <= 1.0)) {
        tol = HevP4ReferenceApplication_P.FirstOrderHold13_ErrTol;
      } else if (HevP4ReferenceApplication_B.SiEngineController_o14 > 1.0) {
        tol = HevP4ReferenceApplication_B.SiEngineController_o14 *
          HevP4ReferenceApplication_P.FirstOrderHold13_ErrTol;
      } else {
        tol = -(HevP4ReferenceApplication_B.SiEngineController_o14 *
                HevP4ReferenceApplication_P.FirstOrderHold13_ErrTol);
      }

      err = HevP4ReferenceApplication_B.FirstOrderHold13 -
        HevP4ReferenceApplication_B.SiEngineController_o14;
      if ((err > tol) || (err < -tol)) {
        guard1 = true;
      } else {
        HevP4ReferenceApplication_DW.Mk_nu =
          (HevP4ReferenceApplication_B.SiEngineController_o14 -
           HevP4ReferenceApplication_DW.Uk_l) / (ssGetT(rtS) -
          HevP4ReferenceApplication_DW.Tk_ii);
        HevP4ReferenceApplication_DW.Ck_ch =
          HevP4ReferenceApplication_B.FirstOrderHold13;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      if (HevP4ReferenceApplication_B.SiEngineController_o14 !=
          HevP4ReferenceApplication_B.FirstOrderHold13) {
        ssSetBlockStateForSolverChangedAtMajorStep(rtS);
        ssSetContTimeOutputInconsistentWithStateAtMajorStep(rtS);
      }

      HevP4ReferenceApplication_DW.Ck_ch =
        HevP4ReferenceApplication_B.SiEngineController_o14;
      HevP4ReferenceApplication_DW.Mk_nu = 0.0;
    }

    HevP4ReferenceApplication_DW.Uk_l =
      HevP4ReferenceApplication_B.SiEngineController_o14;
    HevP4ReferenceApplication_DW.Tk_ii = ssGetT(rtS);

    /* End of Update for FirstOrderHold: '<S54>/First Order Hold13' */

    /* Update for FirstOrderHold: '<S54>/First Order Hold14' */
    guard1 = false;
    if (!(HevP4ReferenceApplication_DW.Tk_oz == (rtInf))) {
      if ((HevP4ReferenceApplication_B.SiEngineController_o15 >= -1.0) &&
          (HevP4ReferenceApplication_B.SiEngineController_o15 <= 1.0)) {
        tol = HevP4ReferenceApplication_P.FirstOrderHold14_ErrTol;
      } else if (HevP4ReferenceApplication_B.SiEngineController_o15 > 1.0) {
        tol = HevP4ReferenceApplication_B.SiEngineController_o15 *
          HevP4ReferenceApplication_P.FirstOrderHold14_ErrTol;
      } else {
        tol = -(HevP4ReferenceApplication_B.SiEngineController_o15 *
                HevP4ReferenceApplication_P.FirstOrderHold14_ErrTol);
      }

      err = HevP4ReferenceApplication_B.FirstOrderHold14 -
        HevP4ReferenceApplication_B.SiEngineController_o15;
      if ((err > tol) || (err < -tol)) {
        guard1 = true;
      } else {
        HevP4ReferenceApplication_DW.Mk_d3 =
          (HevP4ReferenceApplication_B.SiEngineController_o15 -
           HevP4ReferenceApplication_DW.Uk_il) / (ssGetT(rtS) -
          HevP4ReferenceApplication_DW.Tk_oz);
        HevP4ReferenceApplication_DW.Ck_o =
          HevP4ReferenceApplication_B.FirstOrderHold14;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      if (HevP4ReferenceApplication_B.SiEngineController_o15 !=
          HevP4ReferenceApplication_B.FirstOrderHold14) {
        ssSetBlockStateForSolverChangedAtMajorStep(rtS);
        ssSetContTimeOutputInconsistentWithStateAtMajorStep(rtS);
      }

      HevP4ReferenceApplication_DW.Ck_o =
        HevP4ReferenceApplication_B.SiEngineController_o15;
      HevP4ReferenceApplication_DW.Mk_d3 = 0.0;
    }

    HevP4ReferenceApplication_DW.Uk_il =
      HevP4ReferenceApplication_B.SiEngineController_o15;
    HevP4ReferenceApplication_DW.Tk_oz = ssGetT(rtS);

    /* End of Update for FirstOrderHold: '<S54>/First Order Hold14' */

    /* Update for FirstOrderHold: '<S54>/First Order Hold2' */
    guard1 = false;
    if (!(HevP4ReferenceApplication_DW.Tk_g == (rtInf))) {
      if ((HevP4ReferenceApplication_B.SiEngineController_o3 >= -1.0) &&
          (HevP4ReferenceApplication_B.SiEngineController_o3 <= 1.0)) {
        tol = HevP4ReferenceApplication_P.FirstOrderHold2_ErrTol_f;
      } else if (HevP4ReferenceApplication_B.SiEngineController_o3 > 1.0) {
        tol = HevP4ReferenceApplication_B.SiEngineController_o3 *
          HevP4ReferenceApplication_P.FirstOrderHold2_ErrTol_f;
      } else {
        tol = -(HevP4ReferenceApplication_B.SiEngineController_o3 *
                HevP4ReferenceApplication_P.FirstOrderHold2_ErrTol_f);
      }

      err = HevP4ReferenceApplication_B.FirstOrderHold2 -
        HevP4ReferenceApplication_B.SiEngineController_o3;
      if ((err > tol) || (err < -tol)) {
        guard1 = true;
      } else {
        HevP4ReferenceApplication_DW.Mk_i =
          (HevP4ReferenceApplication_B.SiEngineController_o3 -
           HevP4ReferenceApplication_DW.Uk_pm) / (ssGetT(rtS) -
          HevP4ReferenceApplication_DW.Tk_g);
        HevP4ReferenceApplication_DW.Ck_p =
          HevP4ReferenceApplication_B.FirstOrderHold2;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      if (HevP4ReferenceApplication_B.SiEngineController_o3 !=
          HevP4ReferenceApplication_B.FirstOrderHold2) {
        ssSetBlockStateForSolverChangedAtMajorStep(rtS);
        ssSetContTimeOutputInconsistentWithStateAtMajorStep(rtS);
      }

      HevP4ReferenceApplication_DW.Ck_p =
        HevP4ReferenceApplication_B.SiEngineController_o3;
      HevP4ReferenceApplication_DW.Mk_i = 0.0;
    }

    HevP4ReferenceApplication_DW.Uk_pm =
      HevP4ReferenceApplication_B.SiEngineController_o3;
    HevP4ReferenceApplication_DW.Tk_g = ssGetT(rtS);

    /* End of Update for FirstOrderHold: '<S54>/First Order Hold2' */

    /* Update for FirstOrderHold: '<S54>/First Order Hold3' */
    guard1 = false;
    if (!(HevP4ReferenceApplication_DW.Tk_h == (rtInf))) {
      if ((HevP4ReferenceApplication_B.SiEngineController_o4 >= -1.0) &&
          (HevP4ReferenceApplication_B.SiEngineController_o4 <= 1.0)) {
        tol = HevP4ReferenceApplication_P.FirstOrderHold3_ErrTol;
      } else if (HevP4ReferenceApplication_B.SiEngineController_o4 > 1.0) {
        tol = HevP4ReferenceApplication_B.SiEngineController_o4 *
          HevP4ReferenceApplication_P.FirstOrderHold3_ErrTol;
      } else {
        tol = -(HevP4ReferenceApplication_B.SiEngineController_o4 *
                HevP4ReferenceApplication_P.FirstOrderHold3_ErrTol);
      }

      err = HevP4ReferenceApplication_B.FirstOrderHold3 -
        HevP4ReferenceApplication_B.SiEngineController_o4;
      if ((err > tol) || (err < -tol)) {
        guard1 = true;
      } else {
        HevP4ReferenceApplication_DW.Mk_a =
          (HevP4ReferenceApplication_B.SiEngineController_o4 -
           HevP4ReferenceApplication_DW.Uk_iu) / (ssGetT(rtS) -
          HevP4ReferenceApplication_DW.Tk_h);
        HevP4ReferenceApplication_DW.Ck_f =
          HevP4ReferenceApplication_B.FirstOrderHold3;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      if (HevP4ReferenceApplication_B.SiEngineController_o4 !=
          HevP4ReferenceApplication_B.FirstOrderHold3) {
        ssSetBlockStateForSolverChangedAtMajorStep(rtS);
        ssSetContTimeOutputInconsistentWithStateAtMajorStep(rtS);
      }

      HevP4ReferenceApplication_DW.Ck_f =
        HevP4ReferenceApplication_B.SiEngineController_o4;
      HevP4ReferenceApplication_DW.Mk_a = 0.0;
    }

    HevP4ReferenceApplication_DW.Uk_iu =
      HevP4ReferenceApplication_B.SiEngineController_o4;
    HevP4ReferenceApplication_DW.Tk_h = ssGetT(rtS);

    /* End of Update for FirstOrderHold: '<S54>/First Order Hold3' */

    /* Update for FirstOrderHold: '<S54>/First Order Hold4' */
    guard1 = false;
    if (!(HevP4ReferenceApplication_DW.Tk_b2 == (rtInf))) {
      if ((HevP4ReferenceApplication_B.SiEngineController_o5 >= -1.0) &&
          (HevP4ReferenceApplication_B.SiEngineController_o5 <= 1.0)) {
        tol = HevP4ReferenceApplication_P.FirstOrderHold4_ErrTol;
      } else if (HevP4ReferenceApplication_B.SiEngineController_o5 > 1.0) {
        tol = HevP4ReferenceApplication_B.SiEngineController_o5 *
          HevP4ReferenceApplication_P.FirstOrderHold4_ErrTol;
      } else {
        tol = -(HevP4ReferenceApplication_B.SiEngineController_o5 *
                HevP4ReferenceApplication_P.FirstOrderHold4_ErrTol);
      }

      err = HevP4ReferenceApplication_B.FirstOrderHold4 -
        HevP4ReferenceApplication_B.SiEngineController_o5;
      if ((err > tol) || (err < -tol)) {
        guard1 = true;
      } else {
        HevP4ReferenceApplication_DW.Mk_dk =
          (HevP4ReferenceApplication_B.SiEngineController_o5 -
           HevP4ReferenceApplication_DW.Uk_g) / (ssGetT(rtS) -
          HevP4ReferenceApplication_DW.Tk_b2);
        HevP4ReferenceApplication_DW.Ck_g =
          HevP4ReferenceApplication_B.FirstOrderHold4;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      if (HevP4ReferenceApplication_B.SiEngineController_o5 !=
          HevP4ReferenceApplication_B.FirstOrderHold4) {
        ssSetBlockStateForSolverChangedAtMajorStep(rtS);
        ssSetContTimeOutputInconsistentWithStateAtMajorStep(rtS);
      }

      HevP4ReferenceApplication_DW.Ck_g =
        HevP4ReferenceApplication_B.SiEngineController_o5;
      HevP4ReferenceApplication_DW.Mk_dk = 0.0;
    }

    HevP4ReferenceApplication_DW.Uk_g =
      HevP4ReferenceApplication_B.SiEngineController_o5;
    HevP4ReferenceApplication_DW.Tk_b2 = ssGetT(rtS);

    /* End of Update for FirstOrderHold: '<S54>/First Order Hold4' */

    /* Update for FirstOrderHold: '<S54>/First Order Hold5' */
    guard1 = false;
    if (!(HevP4ReferenceApplication_DW.Tk_ej == (rtInf))) {
      if ((HevP4ReferenceApplication_B.SiEngineController_o6 >= -1.0) &&
          (HevP4ReferenceApplication_B.SiEngineController_o6 <= 1.0)) {
        tol = HevP4ReferenceApplication_P.FirstOrderHold5_ErrTol;
      } else if (HevP4ReferenceApplication_B.SiEngineController_o6 > 1.0) {
        tol = HevP4ReferenceApplication_B.SiEngineController_o6 *
          HevP4ReferenceApplication_P.FirstOrderHold5_ErrTol;
      } else {
        tol = -(HevP4ReferenceApplication_B.SiEngineController_o6 *
                HevP4ReferenceApplication_P.FirstOrderHold5_ErrTol);
      }

      err = HevP4ReferenceApplication_B.FirstOrderHold5 -
        HevP4ReferenceApplication_B.SiEngineController_o6;
      if ((err > tol) || (err < -tol)) {
        guard1 = true;
      } else {
        HevP4ReferenceApplication_DW.Mk_f =
          (HevP4ReferenceApplication_B.SiEngineController_o6 -
           HevP4ReferenceApplication_DW.Uk_m) / (ssGetT(rtS) -
          HevP4ReferenceApplication_DW.Tk_ej);
        HevP4ReferenceApplication_DW.Ck_i =
          HevP4ReferenceApplication_B.FirstOrderHold5;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      if (HevP4ReferenceApplication_B.SiEngineController_o6 !=
          HevP4ReferenceApplication_B.FirstOrderHold5) {
        ssSetBlockStateForSolverChangedAtMajorStep(rtS);
        ssSetContTimeOutputInconsistentWithStateAtMajorStep(rtS);
      }

      HevP4ReferenceApplication_DW.Ck_i =
        HevP4ReferenceApplication_B.SiEngineController_o6;
      HevP4ReferenceApplication_DW.Mk_f = 0.0;
    }

    HevP4ReferenceApplication_DW.Uk_m =
      HevP4ReferenceApplication_B.SiEngineController_o6;
    HevP4ReferenceApplication_DW.Tk_ej = ssGetT(rtS);

    /* End of Update for FirstOrderHold: '<S54>/First Order Hold5' */

    /* Update for FirstOrderHold: '<S54>/First Order Hold6' */
    guard1 = false;
    if (!(HevP4ReferenceApplication_DW.Tk_d == (rtInf))) {
      if ((HevP4ReferenceApplication_B.SiEngineController_o7 >= -1.0) &&
          (HevP4ReferenceApplication_B.SiEngineController_o7 <= 1.0)) {
        tol = HevP4ReferenceApplication_P.FirstOrderHold6_ErrTol;
      } else if (HevP4ReferenceApplication_B.SiEngineController_o7 > 1.0) {
        tol = HevP4ReferenceApplication_B.SiEngineController_o7 *
          HevP4ReferenceApplication_P.FirstOrderHold6_ErrTol;
      } else {
        tol = -(HevP4ReferenceApplication_B.SiEngineController_o7 *
                HevP4ReferenceApplication_P.FirstOrderHold6_ErrTol);
      }

      err = HevP4ReferenceApplication_B.FirstOrderHold6 -
        HevP4ReferenceApplication_B.SiEngineController_o7;
      if ((err > tol) || (err < -tol)) {
        guard1 = true;
      } else {
        HevP4ReferenceApplication_DW.Mk_l5 =
          (HevP4ReferenceApplication_B.SiEngineController_o7 -
           HevP4ReferenceApplication_DW.Uk_ob) / (ssGetT(rtS) -
          HevP4ReferenceApplication_DW.Tk_d);
        HevP4ReferenceApplication_DW.Ck_cz =
          HevP4ReferenceApplication_B.FirstOrderHold6;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      if (HevP4ReferenceApplication_B.SiEngineController_o7 !=
          HevP4ReferenceApplication_B.FirstOrderHold6) {
        ssSetBlockStateForSolverChangedAtMajorStep(rtS);
        ssSetContTimeOutputInconsistentWithStateAtMajorStep(rtS);
      }

      HevP4ReferenceApplication_DW.Ck_cz =
        HevP4ReferenceApplication_B.SiEngineController_o7;
      HevP4ReferenceApplication_DW.Mk_l5 = 0.0;
    }

    HevP4ReferenceApplication_DW.Uk_ob =
      HevP4ReferenceApplication_B.SiEngineController_o7;
    HevP4ReferenceApplication_DW.Tk_d = ssGetT(rtS);

    /* End of Update for FirstOrderHold: '<S54>/First Order Hold6' */

    /* Update for FirstOrderHold: '<S54>/First Order Hold7' */
    guard1 = false;
    if (!(HevP4ReferenceApplication_DW.Tk_bv == (rtInf))) {
      if ((HevP4ReferenceApplication_B.SiEngineController_o8 >= -1.0) &&
          (HevP4ReferenceApplication_B.SiEngineController_o8 <= 1.0)) {
        tol = HevP4ReferenceApplication_P.FirstOrderHold7_ErrTol;
      } else if (HevP4ReferenceApplication_B.SiEngineController_o8 > 1.0) {
        tol = HevP4ReferenceApplication_B.SiEngineController_o8 *
          HevP4ReferenceApplication_P.FirstOrderHold7_ErrTol;
      } else {
        tol = -(HevP4ReferenceApplication_B.SiEngineController_o8 *
                HevP4ReferenceApplication_P.FirstOrderHold7_ErrTol);
      }

      err = HevP4ReferenceApplication_B.FirstOrderHold7 -
        HevP4ReferenceApplication_B.SiEngineController_o8;
      if ((err > tol) || (err < -tol)) {
        guard1 = true;
      } else {
        HevP4ReferenceApplication_DW.Mk_kb =
          (HevP4ReferenceApplication_B.SiEngineController_o8 -
           HevP4ReferenceApplication_DW.Uk_ez) / (ssGetT(rtS) -
          HevP4ReferenceApplication_DW.Tk_bv);
        HevP4ReferenceApplication_DW.Ck_m =
          HevP4ReferenceApplication_B.FirstOrderHold7;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      if (HevP4ReferenceApplication_B.SiEngineController_o8 !=
          HevP4ReferenceApplication_B.FirstOrderHold7) {
        ssSetBlockStateForSolverChangedAtMajorStep(rtS);
        ssSetContTimeOutputInconsistentWithStateAtMajorStep(rtS);
      }

      HevP4ReferenceApplication_DW.Ck_m =
        HevP4ReferenceApplication_B.SiEngineController_o8;
      HevP4ReferenceApplication_DW.Mk_kb = 0.0;
    }

    HevP4ReferenceApplication_DW.Uk_ez =
      HevP4ReferenceApplication_B.SiEngineController_o8;
    HevP4ReferenceApplication_DW.Tk_bv = ssGetT(rtS);

    /* End of Update for FirstOrderHold: '<S54>/First Order Hold7' */

    /* Update for FirstOrderHold: '<S54>/First Order Hold8' */
    guard1 = false;
    if (!(HevP4ReferenceApplication_DW.Tk_n == (rtInf))) {
      if ((HevP4ReferenceApplication_B.SiEngineController_o9 >= -1.0) &&
          (HevP4ReferenceApplication_B.SiEngineController_o9 <= 1.0)) {
        tol = HevP4ReferenceApplication_P.FirstOrderHold8_ErrTol;
      } else if (HevP4ReferenceApplication_B.SiEngineController_o9 > 1.0) {
        tol = HevP4ReferenceApplication_B.SiEngineController_o9 *
          HevP4ReferenceApplication_P.FirstOrderHold8_ErrTol;
      } else {
        tol = -(HevP4ReferenceApplication_B.SiEngineController_o9 *
                HevP4ReferenceApplication_P.FirstOrderHold8_ErrTol);
      }

      err = HevP4ReferenceApplication_B.FirstOrderHold8 -
        HevP4ReferenceApplication_B.SiEngineController_o9;
      if ((err > tol) || (err < -tol)) {
        guard1 = true;
      } else {
        HevP4ReferenceApplication_DW.Mk_ix =
          (HevP4ReferenceApplication_B.SiEngineController_o9 -
           HevP4ReferenceApplication_DW.Uk_k) / (ssGetT(rtS) -
          HevP4ReferenceApplication_DW.Tk_n);
        HevP4ReferenceApplication_DW.Ck_d =
          HevP4ReferenceApplication_B.FirstOrderHold8;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      if (HevP4ReferenceApplication_B.SiEngineController_o9 !=
          HevP4ReferenceApplication_B.FirstOrderHold8) {
        ssSetBlockStateForSolverChangedAtMajorStep(rtS);
        ssSetContTimeOutputInconsistentWithStateAtMajorStep(rtS);
      }

      HevP4ReferenceApplication_DW.Ck_d =
        HevP4ReferenceApplication_B.SiEngineController_o9;
      HevP4ReferenceApplication_DW.Mk_ix = 0.0;
    }

    HevP4ReferenceApplication_DW.Uk_k =
      HevP4ReferenceApplication_B.SiEngineController_o9;
    HevP4ReferenceApplication_DW.Tk_n = ssGetT(rtS);

    /* End of Update for FirstOrderHold: '<S54>/First Order Hold8' */

    /* Update for FirstOrderHold: '<S54>/First Order Hold9' */
    guard1 = false;
    if (!(HevP4ReferenceApplication_DW.Tk_pr == (rtInf))) {
      if ((HevP4ReferenceApplication_B.SiEngineController_o10 >= -1.0) &&
          (HevP4ReferenceApplication_B.SiEngineController_o10 <= 1.0)) {
        tol = HevP4ReferenceApplication_P.FirstOrderHold9_ErrTol;
      } else if (HevP4ReferenceApplication_B.SiEngineController_o10 > 1.0) {
        tol = HevP4ReferenceApplication_B.SiEngineController_o10 *
          HevP4ReferenceApplication_P.FirstOrderHold9_ErrTol;
      } else {
        tol = -(HevP4ReferenceApplication_B.SiEngineController_o10 *
                HevP4ReferenceApplication_P.FirstOrderHold9_ErrTol);
      }

      err = HevP4ReferenceApplication_B.FirstOrderHold9 -
        HevP4ReferenceApplication_B.SiEngineController_o10;
      if ((err > tol) || (err < -tol)) {
        guard1 = true;
      } else {
        HevP4ReferenceApplication_DW.Mk_jb =
          (HevP4ReferenceApplication_B.SiEngineController_o10 -
           HevP4ReferenceApplication_DW.Uk_gg) / (ssGetT(rtS) -
          HevP4ReferenceApplication_DW.Tk_pr);
        HevP4ReferenceApplication_DW.Ck_pu =
          HevP4ReferenceApplication_B.FirstOrderHold9;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      if (HevP4ReferenceApplication_B.SiEngineController_o10 !=
          HevP4ReferenceApplication_B.FirstOrderHold9) {
        ssSetBlockStateForSolverChangedAtMajorStep(rtS);
        ssSetContTimeOutputInconsistentWithStateAtMajorStep(rtS);
      }

      HevP4ReferenceApplication_DW.Ck_pu =
        HevP4ReferenceApplication_B.SiEngineController_o10;
      HevP4ReferenceApplication_DW.Mk_jb = 0.0;
    }

    HevP4ReferenceApplication_DW.Uk_gg =
      HevP4ReferenceApplication_B.SiEngineController_o10;
    HevP4ReferenceApplication_DW.Tk_pr = ssGetT(rtS);

    /* End of Update for FirstOrderHold: '<S54>/First Order Hold9' */
  }

  /* End of Update for FirstOrderHold: '<S54>/First Order Hold' */
  UNUSED_PARAMETER(tid);
}

/* Derivatives for root system: '<Root>' */
void MdlDerivatives(void)
{
  XDot_HevP4ReferenceApplication_T *_rtXdot;
  _rtXdot = ((XDot_HevP4ReferenceApplication_T *) ssGetdX(rtS));

  /* Derivatives for TransferFcn: '<S49>/Transfer Fcn' */
  _rtXdot->TransferFcn_CSTATE = 0.0;
  _rtXdot->TransferFcn_CSTATE += HevP4ReferenceApplication_P.TransferFcn_A *
    HevP4ReferenceApplication_X.TransferFcn_CSTATE;
  _rtXdot->TransferFcn_CSTATE += HevP4ReferenceApplication_B.SiMappedEngine_o1;

  /* Derivatives for ModelReference: '<S47>/Drivetrain' */
  DrivetrainHevP4_Deriv
    (&(HevP4ReferenceApplication_DW.Drivetrain_InstanceData.rtm),
     &HevP4ReferenceApplication_B.MotTrq, &HevP4ReferenceApplication_B.Grade,
     &HevP4ReferenceApplication_B.wind_x, &HevP4ReferenceApplication_B.BrkCmd_f,
     &HevP4ReferenceApplication_B.GearCmd_g,
     &(HevP4ReferenceApplication_DW.Drivetrain_InstanceData.rtb),
     &(HevP4ReferenceApplication_DW.Drivetrain_InstanceData.rtdw),
     &(HevP4ReferenceApplication_X.Drivetrain_CSTATE),
     &(((XDis_HevP4ReferenceApplication_T *) ssGetContStateDisabled(rtS))
       ->Drivetrain_CSTATE), &(((XDot_HevP4ReferenceApplication_T *) ssGetdX(rtS))
      ->Drivetrain_CSTATE));

  /* Derivatives for TransferFcn: '<S54>/Sensor Dynamics' */
  _rtXdot->SensorDynamics_CSTATE = 0.0;
  _rtXdot->SensorDynamics_CSTATE += HevP4ReferenceApplication_P.SensorDynamics_A
    * HevP4ReferenceApplication_X.SensorDynamics_CSTATE;
  _rtXdot->SensorDynamics_CSTATE += HevP4ReferenceApplication_B.Drivetrain_o2;

  /* Derivatives for ModelReference: '<S53>/SiMappedEngine' */
  SiMappedEngine_Deriv(&HevP4ReferenceApplication_B.FirstOrderHold,
                       &HevP4ReferenceApplication_B.FirstOrderHold1,
                       &HevP4ReferenceApplication_B.FirstOrderHold5,
                       &HevP4ReferenceApplication_B.FirstOrderHold6,
                       &HevP4ReferenceApplication_B.FirstOrderHold7,
                       &HevP4ReferenceApplication_B.FirstOrderHold8,
                       &HevP4ReferenceApplication_B.FirstOrderHold9,
                       &HevP4ReferenceApplication_B.FirstOrderHold10,
                       &HevP4ReferenceApplication_B.FirstOrderHold11,
                       &HevP4ReferenceApplication_B.FirstOrderHold13,
                       &HevP4ReferenceApplication_B.FirstOrderHold14,
                       &(HevP4ReferenceApplication_DW.SiMappedEngine_InstanceData.rtb),
                       &(HevP4ReferenceApplication_X.SiMappedEngine_CSTATE),
                       &(((XDot_HevP4ReferenceApplication_T *) ssGetdX(rtS))
    ->SiMappedEngine_CSTATE));

  /* Derivatives for TransferFcn: '<S50>/Motor Coupling Dynamics' */
  _rtXdot->MotorCouplingDynamics_CSTATE = 0.0;
  _rtXdot->MotorCouplingDynamics_CSTATE +=
    HevP4ReferenceApplication_P.MotorCouplingDynamics_A *
    HevP4ReferenceApplication_X.MotorCouplingDynamics_CSTATE;
  _rtXdot->MotorCouplingDynamics_CSTATE +=
    HevP4ReferenceApplication_B.MotMapped_o1;

  /* Derivatives for TransferFcn: '<S50>/Battery Discharge Dynamics' */
  _rtXdot->BatteryDischargeDynamics_CSTATE = 0.0;
  _rtXdot->BatteryDischargeDynamics_CSTATE +=
    HevP4ReferenceApplication_P.BatteryDischargeDynamics_A *
    HevP4ReferenceApplication_X.BatteryDischargeDynamics_CSTATE;
  _rtXdot->BatteryDischargeDynamics_CSTATE +=
    HevP4ReferenceApplication_B.MotMapped_o2;

  /* Derivatives for ModelReference: '<S50>/Battery' */
  BattHevP4_Deriv(&(HevP4ReferenceApplication_DW.Battery_InstanceData.rtb),
                  &(HevP4ReferenceApplication_X.Battery_CSTATE),
                  &(((XDot_HevP4ReferenceApplication_T *) ssGetdX(rtS))
                    ->Battery_CSTATE));

  /* Derivatives for Integrator: '<S58>/Integrator' */
  _rtXdot->Integrator_CSTATE = HevP4ReferenceApplication_B.Sqrt;

  /* Derivatives for Integrator: '<S58>/Integrator1' */
  _rtXdot->Integrator1_CSTATE = HevP4ReferenceApplication_B.Add;

  /* Derivatives for Integrator: '<S57>/Integrator' */
  _rtXdot->Integrator_CSTATE_m = HevP4ReferenceApplication_B.uDLookupTable;

  /* Derivatives for Integrator: '<S57>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_a = HevP4ReferenceApplication_B.SiMappedEngine_o31;

  /* Derivatives for Integrator: '<S57>/Integrator2' */
  _rtXdot->Integrator2_CSTATE = HevP4ReferenceApplication_B.SiMappedEngine_o32;

  /* Derivatives for Integrator: '<S57>/Integrator3' */
  _rtXdot->Integrator3_CSTATE = HevP4ReferenceApplication_B.SiMappedEngine_o33;

  /* Derivatives for Integrator: '<S57>/Integrator4' */
  _rtXdot->Integrator4_CSTATE = HevP4ReferenceApplication_B.SiMappedEngine_o34;

  /* Derivatives for Integrator: '<S30>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_o = HevP4ReferenceApplication_B.Divide;

  /* Derivatives for Integrator: '<S41>/Integrator2' */
  _rtXdot->Integrator2_CSTATE_m = HevP4ReferenceApplication_B.Product;

  /* Derivatives for ModelReference: '<S56>/MotMapped' */
  MotMappedP4_Deriv(&HevP4ReferenceApplication_B.MotTrqCmd,
                    &(HevP4ReferenceApplication_DW.MotMapped_InstanceData.rtb),
                    &(((XDot_HevP4ReferenceApplication_T *) ssGetdX(rtS))
                      ->MotMapped_CSTATE));
}

/* Projection for root system: '<Root>' */
void MdlProjection(void)
{
}

/* ZeroCrossings for root system: '<Root>' */
void MdlZeroCrossings(void)
{
  /* ZeroCrossings for ModelReference: '<S47>/Drivetrain' */
  DrivetrainHevP4_ZC(&(HevP4ReferenceApplication_DW.Drivetrain_InstanceData.rtm),
                     &HevP4ReferenceApplication_B.MotTrq,
                     &HevP4ReferenceApplication_B.Grade,
                     &HevP4ReferenceApplication_B.wind_x,
                     &HevP4ReferenceApplication_B.BrkCmd_f,
                     &HevP4ReferenceApplication_B.GearCmd_g,
                     &HevP4ReferenceApplication_B.Drivetrain_o2,
                     &HevP4ReferenceApplication_B.Drivetrain_o6,
                     &(HevP4ReferenceApplication_DW.Drivetrain_InstanceData.rtb),
                     &(HevP4ReferenceApplication_DW.Drivetrain_InstanceData.rtdw),
                     &(HevP4ReferenceApplication_X.Drivetrain_CSTATE),
                     &(((ZCV_HevP4ReferenceApplication_T *)
                        ssGetSolverZcSignalVector(rtS))->Drivetrain_Reset_ZC));

  /* ZeroCrossings for ModelReference: '<S53>/SiMappedEngine' */
  SiMappedEngine_ZC(&HevP4ReferenceApplication_B.EngSpd,
                    &HevP4ReferenceApplication_B.ExhManGasTemp,
                    &(((ZCV_HevP4ReferenceApplication_T *)
                       ssGetSolverZcSignalVector(rtS))->SiMappedEngine_UprLim_ZC));

  /* ZeroCrossings for Saturate: '<S58>/Saturation1' */
  ((ZCV_HevP4ReferenceApplication_T *) ssGetSolverZcSignalVector(rtS))
    ->Saturation1_UprLim_ZC = HevP4ReferenceApplication_B.m3toUSGal -
    HevP4ReferenceApplication_P.Saturation1_UpperSat;
  ((ZCV_HevP4ReferenceApplication_T *) ssGetSolverZcSignalVector(rtS))
    ->Saturation1_LwrLim_ZC = HevP4ReferenceApplication_B.m3toUSGal -
    HevP4ReferenceApplication_P.Saturation1_LowerSat;

  /* ZeroCrossings for Saturate: '<S57>/Saturation' */
  ((ZCV_HevP4ReferenceApplication_T *) ssGetSolverZcSignalVector(rtS))
    ->Saturation_UprLim_ZC = HevP4ReferenceApplication_B.mtomi -
    HevP4ReferenceApplication_P.Saturation_UpperSat;
  ((ZCV_HevP4ReferenceApplication_T *) ssGetSolverZcSignalVector(rtS))
    ->Saturation_LwrLim_ZC = HevP4ReferenceApplication_B.mtomi -
    HevP4ReferenceApplication_P.Saturation_LowerSat;

  /* ZeroCrossings for Saturate: '<S57>/Saturation1' */
  ((ZCV_HevP4ReferenceApplication_T *) ssGetSolverZcSignalVector(rtS))
    ->Saturation1_UprLim_ZC_c = HevP4ReferenceApplication_B.mtokm -
    HevP4ReferenceApplication_P.Saturation1_UpperSat_h;
  ((ZCV_HevP4ReferenceApplication_T *) ssGetSolverZcSignalVector(rtS))
    ->Saturation1_LwrLim_ZC_o = HevP4ReferenceApplication_B.mtokm -
    HevP4ReferenceApplication_P.Saturation1_LowerSat_d;

  /* ZeroCrossings for Saturate: '<S58>/Saturation' */
  ((ZCV_HevP4ReferenceApplication_T *) ssGetSolverZcSignalVector(rtS))
    ->Saturation_UprLim_ZC_f = HevP4ReferenceApplication_B.mto100Km -
    HevP4ReferenceApplication_P.Saturation_UpperSat_p;
  ((ZCV_HevP4ReferenceApplication_T *) ssGetSolverZcSignalVector(rtS))
    ->Saturation_LwrLim_ZC_p = HevP4ReferenceApplication_B.mto100Km -
    HevP4ReferenceApplication_P.Saturation_LowerSat_a;

  /* ZeroCrossings for RelationalOperator: '<S45>/Compare' incorporates:
   *  Constant: '<S45>/Constant'
   */
  ((ZCV_HevP4ReferenceApplication_T *) ssGetSolverZcSignalVector(rtS))
    ->Compare_RelopInput_ZC = HevP4ReferenceApplication_B.uDLookupTable -
    HevP4ReferenceApplication_P.Constant_Value;

  /* ZeroCrossings for FromWorkspace: '<S20>/FromWs' */
  {
    const double* timePtr = (double *)
      HevP4ReferenceApplication_DW.FromWs_PWORK.TimePtr;
    int_T* zcTimeIndices = &HevP4ReferenceApplication_DW.FromWs_ZCTimeIndices[0];
    int_T zcTimeIndicesIdx = HevP4ReferenceApplication_DW.FromWs_CurZCTimeIndIdx;
    ((ZCV_HevP4ReferenceApplication_T *) ssGetSolverZcSignalVector(rtS))
      ->FromWs_repeatedTime_ZC = ssGetT(rtS) -
      timePtr[zcTimeIndices[zcTimeIndicesIdx]];
  }

  /* ZeroCrossings for HitCross: '<S13>/Hit  Crossing' */
  ((ZCV_HevP4ReferenceApplication_T *) ssGetSolverZcSignalVector(rtS))
    ->HitCrossing_HitNoOutput_ZC = HevP4ReferenceApplication_B.Add1 -
    HevP4ReferenceApplication_P.HitCrossing_Offset;

  /* ZeroCrossings for ModelReference: '<S56>/MotMapped' */
  MotMappedP4_ZC(&HevP4ReferenceApplication_B.MotTrqCmd,
                 &HevP4ReferenceApplication_B.Battery_o4,
                 &(HevP4ReferenceApplication_DW.MotMapped_InstanceData.rtb),
                 &(((ZCV_HevP4ReferenceApplication_T *)
                    ssGetSolverZcSignalVector(rtS))->MotMapped_UprLim_ZC));
}

/* Termination for root system: '<Root>' */
void MdlTerminate(void)
{
  /* Terminate for FromWorkspace: '<S20>/FromWs' */
  rt_FREE(HevP4ReferenceApplication_DW.FromWs_PWORK.RSimInfoPtr);
}

/* Function to initialize sizes */
void MdlInitializeSizes(void)
{
  ssSetNumContStates(rtS, 63);         /* Number of continuous states */
  ssSetNumPeriodicContStates(rtS, 1); /* Number of periodic continuous states */
  ssSetNumY(rtS, 0);                   /* Number of model outputs */
  ssSetNumU(rtS, 0);                   /* Number of model inputs */
  ssSetDirectFeedThrough(rtS, 0);      /* The model is not direct feedthrough */
  ssSetNumSampleTimes(rtS, 6);         /* Number of sample times */
  ssSetNumBlocks(rtS, 205);            /* Number of blocks */
  ssSetNumBlockIO(rtS, 152);           /* Number of block outputs */
  ssSetNumBlockParams(rtS, 5076);      /* Sum of parameter "widths" */
}

/* Function to initialize sample times. */
void MdlInitializeSampleTimes(void)
{
  /* task periods */
  ssSetSampleTime(rtS, 0, 0.0);
  ssSetSampleTime(rtS, 1, 0.0);
  ssSetSampleTime(rtS, 2, 0.01);
  ssSetSampleTime(rtS, 3, 0.1);
  ssSetSampleTime(rtS, 4, 0.5);
  ssSetSampleTime(rtS, 5, 49.480000000000004);

  /* task offsets */
  ssSetOffsetTime(rtS, 0, 0.0);
  ssSetOffsetTime(rtS, 1, 1.0);
  ssSetOffsetTime(rtS, 2, 0.0);
  ssSetOffsetTime(rtS, 3, 0.0);
  ssSetOffsetTime(rtS, 4, 0.0);
  ssSetOffsetTime(rtS, 5, 0.0);
}

/* Function to register the model */
/* Turns off all optimizations on Windows because of issues with VC 2015 compiler.
   This function is not performance-critical, hence this is not a problem.
 */
#if defined(_MSC_VER)

#pragma optimize( "", off )

#endif

SimStruct * HevP4ReferenceApplication(void)
{
  static struct _ssMdlInfo mdlInfo;
  ssNonContDerivSigFeedingOutports *mr_DrivetrainHevP4_13_1_0nonContOutputArray
    [6] = { (NULL), (NULL), (NULL), (NULL), (NULL), (NULL) };

  ssNonContDerivSigFeedingOutports mr_DrivetrainHevP4_13_1_0nonContDerivSig3[2];
  ssNonContDerivSigFeedingOutports mr_DrivetrainHevP4_13_1_0nonContDerivSig4[1];
  ssNonContDerivSigFeedingOutports *mr_BattHevP4_13_3_0nonContOutputArray[4] = {
    (NULL), (NULL), (NULL), (NULL) };

  ssNonContDerivSigFeedingOutports mr_BattHevP4_13_3_0nonContDerivSig2[3];
  ssNonContDerivSigFeedingOutports *mr_SiMappedEngine_13_2_0nonContOutputArray
    [41] = { (NULL), (NULL), (NULL), (NULL), (NULL), (NULL), (NULL), (NULL),
    (NULL), (NULL), (NULL), (NULL), (NULL), (NULL), (NULL), (NULL), (NULL),
    (NULL), (NULL), (NULL), (NULL), (NULL), (NULL), (NULL), (NULL), (NULL),
    (NULL), (NULL), (NULL), (NULL), (NULL), (NULL), (NULL), (NULL), (NULL),
    (NULL), (NULL), (NULL), (NULL), (NULL), (NULL) };

  ssNonContDerivSigFeedingOutports mr_SiMappedEngine_13_2_0nonContDerivSig14[1];
  ssNonContDerivSigFeedingOutports mr_SiMappedEngine_13_2_0nonContDerivSig15[2];
  ssNonContDerivSigFeedingOutports mr_SiMappedEngine_13_2_0nonContDerivSig17[1];
  ssNonContDerivSigFeedingOutports mr_SiMappedEngine_13_2_0nonContDerivSig19[3];
  mr_DrivetrainHevP4_13_1_0nonContOutputArray[3] =
    mr_DrivetrainHevP4_13_1_0nonContDerivSig3;
  mr_DrivetrainHevP4_13_1_0nonContOutputArray[4] =
    mr_DrivetrainHevP4_13_1_0nonContDerivSig4;
  mr_BattHevP4_13_3_0nonContOutputArray[2] = mr_BattHevP4_13_3_0nonContDerivSig2;
  mr_SiMappedEngine_13_2_0nonContOutputArray[14] =
    mr_SiMappedEngine_13_2_0nonContDerivSig14;
  mr_SiMappedEngine_13_2_0nonContOutputArray[15] =
    mr_SiMappedEngine_13_2_0nonContDerivSig15;
  mr_SiMappedEngine_13_2_0nonContOutputArray[17] =
    mr_SiMappedEngine_13_2_0nonContDerivSig17;
  mr_SiMappedEngine_13_2_0nonContOutputArray[19] =
    mr_SiMappedEngine_13_2_0nonContDerivSig19;
  (void) memset((char *)rtS, 0,
                sizeof(SimStruct));
  (void) memset((char *)&mdlInfo, 0,
                sizeof(struct _ssMdlInfo));
  ssSetMdlInfoPtr(rtS, &mdlInfo);

  /* timing info */
  {
    static time_T mdlPeriod[NSAMPLE_TIMES];
    static time_T mdlOffset[NSAMPLE_TIMES];
    static time_T mdlTaskTimes[NSAMPLE_TIMES];
    static int_T mdlTsMap[NSAMPLE_TIMES];
    static int_T mdlSampleHits[NSAMPLE_TIMES];
    static boolean_T mdlTNextWasAdjustedPtr[NSAMPLE_TIMES];
    static int_T mdlPerTaskSampleHits[NSAMPLE_TIMES * NSAMPLE_TIMES];
    static time_T mdlTimeOfNextSampleHit[NSAMPLE_TIMES];

    {
      int_T i;
      for (i = 0; i < NSAMPLE_TIMES; i++) {
        mdlPeriod[i] = 0.0;
        mdlOffset[i] = 0.0;
        mdlTaskTimes[i] = 0.0;
        mdlTsMap[i] = i;
        mdlSampleHits[i] = 1;
      }
    }

    ssSetSampleTimePtr(rtS, &mdlPeriod[0]);
    ssSetOffsetTimePtr(rtS, &mdlOffset[0]);
    ssSetSampleTimeTaskIDPtr(rtS, &mdlTsMap[0]);
    ssSetTPtr(rtS, &mdlTaskTimes[0]);
    ssSetSampleHitPtr(rtS, &mdlSampleHits[0]);
    ssSetTNextWasAdjustedPtr(rtS, &mdlTNextWasAdjustedPtr[0]);
    ssSetPerTaskSampleHitsPtr(rtS, &mdlPerTaskSampleHits[0]);
    ssSetTimeOfNextSampleHitPtr(rtS, &mdlTimeOfNextSampleHit[0]);
  }

  ssSetSolverMode(rtS, SOLVER_MODE_SINGLETASKING);

  /*
   * initialize model vectors and cache them in SimStruct
   */

  /* block I/O */
  {
    ssSetBlockIO(rtS, ((void *) &HevP4ReferenceApplication_B));
    (void) memset(((void *) &HevP4ReferenceApplication_B), 0,
                  sizeof(B_HevP4ReferenceApplication_T));
  }

  /* states (continuous)*/
  {
    real_T *x = (real_T *) &HevP4ReferenceApplication_X;
    ssSetContStates(rtS, x);
    (void) memset((void *)x, 0,
                  sizeof(X_HevP4ReferenceApplication_T));
  }

  /* states (dwork) */
  {
    void *dwork = (void *) &HevP4ReferenceApplication_DW;
    ssSetRootDWork(rtS, dwork);
    (void) memset(dwork, 0,
                  sizeof(DW_HevP4ReferenceApplication_T));
  }

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    ssSetModelMappingInfo(rtS, &dtInfo);
    dtInfo.numDataTypes = 21;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  HevP4ReferenceApplication_InitializeDataMapInfo();

  /* Model specific registration */
  ssSetRootSS(rtS, rtS);
  ssSetVersion(rtS, SIMSTRUCT_VERSION_LEVEL2);
  ssSetModelName(rtS, "HevP4ReferenceApplication");
  ssSetPath(rtS, "HevP4ReferenceApplication");
  ssSetTStart(rtS, 0.0);
  ssSetTFinal(rtS, 2474.0);

  /* Model Initialize function for ModelReference Block: '<S10>/Hybrid Control Module (HCM) - Optimal' */
  HevP4OptimalController_initialize(rtS, 2,
    &(HevP4ReferenceApplication_DW.HybridControlModuleHCMOptimal_InstanceData.rtm),
    &(HevP4ReferenceApplication_DW.HybridControlModuleHCMOptimal_InstanceData.rtb),
    &(HevP4ReferenceApplication_DW.HybridControlModuleHCMOptimal_InstanceData.rtdw),
    &(rt_dataMapInfoPtr->mmi),
    "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/Hybrid Control Module (HCM)/Hybrid Control Module (HCM) - Optimal",
    0, -1);

  /* Model Initialize function for ModelReference Block: '<S9>/SiEngineController' */
  SiEngineController_initialize(rtS, 5,
    &(HevP4ReferenceApplication_DW.SiEngineController_InstanceData.rtm),
    &(HevP4ReferenceApplication_DW.SiEngineController_InstanceData.rtb),
    &(HevP4ReferenceApplication_DW.SiEngineController_InstanceData.rtdw),
    &(rt_dataMapInfoPtr->mmi),
    "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/SiEngineController",
    1, -1);

  /* Model Initialize function for ModelReference Block: '<S9>/Transmission Control Module (TCM)' */
  HevP4TransmissionController_initialize(rtS, 2,
    &(HevP4ReferenceApplication_DW.TransmissionControlModuleTCM_InstanceData.rtm),
    &(HevP4ReferenceApplication_DW.TransmissionControlModuleTCM_InstanceData.rtb),
    &(HevP4ReferenceApplication_DW.TransmissionControlModuleTCM_InstanceData.rtdw),
    &(rt_dataMapInfoPtr->mmi),
    "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/Transmission Control Module (TCM)",
    2, -1);

  /* Model Initialize function for ModelReference Block: '<S47>/Drivetrain' */
  DrivetrainHevP4_initialize(rtS, mr_DrivetrainHevP4_13_1_0nonContOutputArray, 0,
    1, &(HevP4ReferenceApplication_DW.Drivetrain_InstanceData.rtm),
    &(HevP4ReferenceApplication_DW.Drivetrain_InstanceData.rtb),
    &(HevP4ReferenceApplication_DW.Drivetrain_InstanceData.rtdw),
    &(HevP4ReferenceApplication_X.Drivetrain_CSTATE),
    &(HevP4ReferenceApplication_DW.Drivetrain_InstanceData.rtzce),
    &(rt_dataMapInfoPtr->mmi),
    "HevP4ReferenceApplication/Passenger Car/Drivetrain/Drivetrain", 3, 1);

  /* Model Initialize function for ModelReference Block: '<S50>/Battery' */
  BattHevP4_initialize(rtS, mr_BattHevP4_13_3_0nonContOutputArray, 0, 1,
                       &(HevP4ReferenceApplication_DW.Battery_InstanceData.rtm),
                       &(HevP4ReferenceApplication_DW.Battery_InstanceData.rtb),
                       &(HevP4ReferenceApplication_DW.Battery_InstanceData.rtdw),
                       &(HevP4ReferenceApplication_X.Battery_CSTATE),
                       &(rt_dataMapInfoPtr->mmi),
                       "HevP4ReferenceApplication/Passenger Car/Electric Plant/Battery",
                       4, 50);

  /* Model Initialize function for ModelReference Block: '<S56>/MotMapped' */
  MotMappedP4_initialize(rtS, 0, 1,
    &(HevP4ReferenceApplication_DW.MotMapped_InstanceData.rtm),
    &(HevP4ReferenceApplication_DW.MotMapped_InstanceData.rtb),
    &(HevP4ReferenceApplication_DW.MotMapped_InstanceData.rtdw),
    &(HevP4ReferenceApplication_X.MotMapped_CSTATE), &(rt_dataMapInfoPtr->mmi),
    "HevP4ReferenceApplication/Passenger Car/Electric Plant/Electric Machine/MotMapped",
    5, 62);

  /* Model Initialize function for ModelReference Block: '<S53>/SiMappedEngine' */
  SiMappedEngine_initialize(rtS, mr_SiMappedEngine_13_2_0nonContOutputArray, 0,
    1, &(HevP4ReferenceApplication_DW.SiMappedEngine_InstanceData.rtm),
    &(HevP4ReferenceApplication_DW.SiMappedEngine_InstanceData.rtb),
    &(HevP4ReferenceApplication_DW.SiMappedEngine_InstanceData.rtdw),
    &(HevP4ReferenceApplication_X.SiMappedEngine_CSTATE),
    &(rt_dataMapInfoPtr->mmi),
    "HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine", 6, 34);

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (NULL);
    ssSetRTWLogInfo(rtS, &rt_DataLoggingInfo);
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(ssGetRTWLogInfo(rtS), (NULL));
    rtliSetLogXSignalPtrs(ssGetRTWLogInfo(rtS), (NULL));
    rtliSetLogT(ssGetRTWLogInfo(rtS), "");
    rtliSetLogX(ssGetRTWLogInfo(rtS), "");
    rtliSetLogXFinal(ssGetRTWLogInfo(rtS), "");
    rtliSetLogVarNameModifier(ssGetRTWLogInfo(rtS), "rt_");
    rtliSetLogFormat(ssGetRTWLogInfo(rtS), 4);
    rtliSetLogMaxRows(ssGetRTWLogInfo(rtS), 0);
    rtliSetLogDecimation(ssGetRTWLogInfo(rtS), 1);
    rtliSetLogY(ssGetRTWLogInfo(rtS), "");
    rtliSetLogYSignalInfo(ssGetRTWLogInfo(rtS), (NULL));
    rtliSetLogYSignalPtrs(ssGetRTWLogInfo(rtS), (NULL));
  }

  {
    static struct _ssStatesInfo2 statesInfo2;
    ssSetStatesInfo2(rtS, &statesInfo2);
  }

  {
    static ssPeriodicStatesInfo periodicStatesInfo;
    ssSetPeriodicStatesInfo(rtS, &periodicStatesInfo);
    ssSetPeriodicContStateIndices(rtS, HevP4ReferenceApplication_PeriodicIndX);
    (void) memset((void*) HevP4ReferenceApplication_PeriodicIndX, 0,
                  1*sizeof(int_T));
    ssSetPeriodicContStateRanges(rtS, HevP4ReferenceApplication_PeriodicRngX);
    (void) memset((void*) HevP4ReferenceApplication_PeriodicRngX, 0,
                  2*sizeof(real_T));
  }

  {
    static ssJacobianPerturbationBounds jacobianPerturbationBounds;
    ssSetJacobianPerturbationBounds(rtS, &jacobianPerturbationBounds);
  }

  {
    static ssSolverInfo slvrInfo;
    static boolean_T contStatesDisabled[63];
    static real_T absTol[63] = { 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6 };

    static uint8_T absTolControl[63] = { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U };

    static real_T contStateJacPerturbBoundMinVec[63];
    static real_T contStateJacPerturbBoundMaxVec[63];
    static uint8_T zcAttributes[40] = { (0x40|ZC_EVENT_ALL_UP), (0x40|
      ZC_EVENT_ALL_UP), (0x40|ZC_EVENT_ALL), (0x40|ZC_EVENT_ALL_UP), (0x40|
      ZC_EVENT_ALL_UP), (ZC_EVENT_ALL), (ZC_EVENT_ALL), (ZC_EVENT_ALL),
      (ZC_EVENT_ALL), (ZC_EVENT_ALL), (0x40|ZC_EVENT_ALL_UP), (0x40|
      ZC_EVENT_ALL_UP), (ZC_EVENT_ALL), (ZC_EVENT_ALL_UP), (ZC_EVENT_ALL_DN),
      (ZC_EVENT_ALL), (ZC_EVENT_ALL_UP), (ZC_EVENT_ALL_DN), (ZC_EVENT_ALL),
      (ZC_EVENT_ALL), (ZC_EVENT_ALL), (ZC_EVENT_ALL), (ZC_EVENT_ALL),
      (ZC_EVENT_ALL), (ZC_EVENT_ALL), (ZC_EVENT_ALL), (ZC_EVENT_ALL),
      (ZC_EVENT_ALL), (ZC_EVENT_ALL), (ZC_EVENT_ALL), (ZC_EVENT_ALL),
      (ZC_EVENT_ALL), (ZC_EVENT_ALL), (ZC_EVENT_ALL), (ZC_EVENT_ALL),
      (ZC_EVENT_ALL), (ZC_EVENT_ALL_UP), (ZC_EVENT_ALL_DN), (ZC_EVENT_ALL),
      (ZC_EVENT_ALL) };

    static uint8_T zcEvents[40] = { (0x40|ZC_EVENT_ALL_UP), (0x40|
      ZC_EVENT_ALL_UP), (0x40|ZC_EVENT_ALL), (0x40|ZC_EVENT_ALL_UP), (0x40|
      ZC_EVENT_ALL_UP), (0x40|ZC_EVENT_ALL), (0x40|ZC_EVENT_ALL), (0x40|
      ZC_EVENT_ALL), (0x40|ZC_EVENT_ALL), (0x40|ZC_EVENT_ALL), (0x40|
      ZC_EVENT_ALL_UP), (0x40|ZC_EVENT_ALL_UP), (0x40|ZC_EVENT_ALL), (0x40|
      ZC_EVENT_ALL_UP), (0x40|ZC_EVENT_ALL_DN), (0x40|ZC_EVENT_ALL), (0x40|
      ZC_EVENT_ALL_UP), (0x40|ZC_EVENT_ALL_DN), (0x40|ZC_EVENT_ALL), (0x40|
      ZC_EVENT_ALL), (0x40|ZC_EVENT_ALL), (0x40|ZC_EVENT_ALL), (0x40|
      ZC_EVENT_ALL), (0x40|ZC_EVENT_ALL), (0x40|ZC_EVENT_ALL), (0x40|
      ZC_EVENT_ALL), (0x40|ZC_EVENT_ALL), (0x40|ZC_EVENT_ALL), (0x40|
      ZC_EVENT_ALL), (0x40|ZC_EVENT_ALL), (0x40|ZC_EVENT_ALL), (0x40|
      ZC_EVENT_ALL), (0x40|ZC_EVENT_ALL), (0x40|ZC_EVENT_ALL), (0x40|
      ZC_EVENT_ALL), (0x40|ZC_EVENT_ALL), (ZC_EVENT_ALL_UP), (0x40|
      ZC_EVENT_ALL_DN), (0x40|ZC_EVENT_ALL), (0x40|ZC_EVENT_ALL) };

    static ssNonContDerivSigInfo nonContDerivSigInfo[7] = {
      { 1*sizeof(real_T), (char*)(&HevP4ReferenceApplication_B.Gain), (NULL) }
      , { 0, (NULL), (NULL) }
      , { 0, (NULL), (NULL) }
      , { 0, (NULL), (NULL) }
      , { 0, (NULL), (NULL) }
      , { 0, (NULL), (NULL) }
      , { 0, (NULL), (NULL) }
    };

    nonContDerivSigInfo[1].sizeInBytes = mr_BattHevP4_13_3_0nonContOutputArray[2]
      [0].sizeInBytes;
    nonContDerivSigInfo[1].pCurrVal = (char *)
      mr_BattHevP4_13_3_0nonContOutputArray[2][0].currVal;
    nonContDerivSigInfo[2].sizeInBytes = mr_BattHevP4_13_3_0nonContOutputArray[2]
      [1].sizeInBytes;
    nonContDerivSigInfo[2].pCurrVal = (char *)
      mr_BattHevP4_13_3_0nonContOutputArray[2][1].currVal;
    nonContDerivSigInfo[3].sizeInBytes = mr_BattHevP4_13_3_0nonContOutputArray[2]
      [2].sizeInBytes;
    nonContDerivSigInfo[3].pCurrVal = (char *)
      mr_BattHevP4_13_3_0nonContOutputArray[2][2].currVal;
    nonContDerivSigInfo[4].sizeInBytes =
      mr_SiMappedEngine_13_2_0nonContOutputArray[15][0].sizeInBytes;
    nonContDerivSigInfo[4].pCurrVal = (char *)
      mr_SiMappedEngine_13_2_0nonContOutputArray[15][0].currVal;
    nonContDerivSigInfo[5].sizeInBytes =
      mr_SiMappedEngine_13_2_0nonContOutputArray[15][1].sizeInBytes;
    nonContDerivSigInfo[5].pCurrVal = (char *)
      mr_SiMappedEngine_13_2_0nonContOutputArray[15][1].currVal;
    nonContDerivSigInfo[6].sizeInBytes =
      mr_DrivetrainHevP4_13_1_0nonContOutputArray[4][0].sizeInBytes;
    nonContDerivSigInfo[6].pCurrVal = (char *)
      mr_DrivetrainHevP4_13_1_0nonContOutputArray[4][0].currVal;

    /* Initialize cont state perturbation bound */
    {
      int i;
      for (i = 0; i < 63; ++i) {
        contStateJacPerturbBoundMinVec[i] = 0;
        contStateJacPerturbBoundMaxVec[i] = rtGetInf();
      }
    }

    ssSetSolverRelTol(rtS, 0.001);
    ssSetStepSize(rtS, 0.0);
    ssSetMinStepSize(rtS, 0.0);
    ssSetMaxNumMinSteps(rtS, -1);
    ssSetMinStepViolatedError(rtS, 0);
    ssSetMaxStepSize(rtS, 0.01);
    ssSetSolverMaxOrder(rtS, -1);
    ssSetSolverRefineFactor(rtS, 1);
    ssSetOutputTimes(rtS, (NULL));
    ssSetNumOutputTimes(rtS, 0);
    ssSetOutputTimesOnly(rtS, 0);
    ssSetOutputTimesIndex(rtS, 0);
    ssSetZCCacheNeedsReset(rtS, 1);
    ssSetDerivCacheNeedsReset(rtS, 0);
    ssSetNumNonContDerivSigInfos(rtS, 7);
    ssSetNonContDerivSigInfos(rtS, nonContDerivSigInfo);
    ssSetSolverInfo(rtS, &slvrInfo);
    ssSetSolverName(rtS, "ode23tb");
    ssSetVariableStepSolver(rtS, 1);
    ssSetSolverConsistencyChecking(rtS, 0);
    ssSetSolverAdaptiveZcDetection(rtS, 1);
    ssSetSolverRobustResetMethod(rtS, 0);
    ssSetAbsTolVector(rtS, absTol);
    ssSetAbsTolControlVector(rtS, absTolControl);
    ssSetSolverAbsTol_Obsolete(rtS, absTol);
    ssSetSolverAbsTolControl_Obsolete(rtS, absTolControl);
    ssSetJacobianPerturbationBoundsMinVec(rtS, contStateJacPerturbBoundMinVec);
    ssSetJacobianPerturbationBoundsMaxVec(rtS, contStateJacPerturbBoundMaxVec);
    ssSetSolverStateProjection(rtS, 0);
    ssSetSolverMassMatrixType(rtS, (ssMatrixType)0);
    ssSetSolverMassMatrixNzMax(rtS, 0);
    ssSetModelOutputs(rtS, MdlOutputs);
    ssSetModelLogData(rtS, rt_UpdateTXYLogVars);
    ssSetModelLogDataIfInInterval(rtS, rt_UpdateTXXFYLogVars);
    ssSetModelUpdate(rtS, MdlUpdate);
    ssSetModelDerivatives(rtS, MdlDerivatives);
    ssSetSolverZcSignalAttrib(rtS, zcAttributes);
    ssSetSolverZcEventsVector(rtS, zcEvents);
    ssSetSolverNumZcSignals(rtS, 40);
    ssSetModelZeroCrossings(rtS, MdlZeroCrossings);
    ssSetSolverConsecutiveZCsStepRelTol(rtS, 2.8421709430404007E-13);
    ssSetSolverMaxConsecutiveZCs(rtS, 1000);
    ssSetSolverConsecutiveZCsError(rtS, 2);
    ssSetSolverMaskedZcDiagnostic(rtS, 0);
    ssSetSolverIgnoredZcDiagnostic(rtS, 0);
    ssSetSolverZcThreshold(rtS, 0.001);
    ssSetSolverMaxConsecutiveMinStep(rtS, 100);
    ssSetSolverShapePreserveControl(rtS, 2);
    ssSetTNextTid(rtS, INT_MIN);
    ssSetTNext(rtS, rtMinusInf);
    ssSetSolverNeedsReset(rtS);
    ssSetNumNonsampledZCs(rtS, 33);
    ssSetContStateDisabled(rtS, contStatesDisabled);
    ssSetSolverMaxConsecutiveMinStep(rtS, 100);
  }

  ssSetChecksumVal(rtS, 0, 2013117554U);
  ssSetChecksumVal(rtS, 1, 3741032854U);
  ssSetChecksumVal(rtS, 2, 4261710212U);
  ssSetChecksumVal(rtS, 3, 4282437628U);

  /* non-finite (run-time) assignments */
  HevP4ReferenceApplication_P.FirstOrderHold12_ErrTol = rtInf;
  HevP4ReferenceApplication_P.Saturation1_UpperSat = rtInf;
  HevP4ReferenceApplication_P.Saturation_UpperSat = rtInf;
  HevP4ReferenceApplication_P.Saturation1_UpperSat_h = rtInf;
  HevP4ReferenceApplication_P.Saturation_UpperSat_p = rtInf;
  HevP4ReferenceApplication_P.FirstOrderHold_ErrTol = rtInf;
  HevP4ReferenceApplication_P.FirstOrderHold1_ErrTol = rtInf;
  HevP4ReferenceApplication_P.FirstOrderHold2_ErrTol = rtInf;
  HevP4ReferenceApplication_P.FirstOrderHold_ErrTol_f = rtInf;
  HevP4ReferenceApplication_P.FirstOrderHold_ErrTol_g = rtInf;
  HevP4ReferenceApplication_P.FirstOrderHold1_ErrTol_j = rtInf;
  HevP4ReferenceApplication_P.FirstOrderHold10_ErrTol = rtInf;
  HevP4ReferenceApplication_P.FirstOrderHold11_ErrTol = rtInf;
  HevP4ReferenceApplication_P.FirstOrderHold13_ErrTol = rtInf;
  HevP4ReferenceApplication_P.FirstOrderHold14_ErrTol = rtInf;
  HevP4ReferenceApplication_P.FirstOrderHold2_ErrTol_f = rtInf;
  HevP4ReferenceApplication_P.FirstOrderHold3_ErrTol = rtInf;
  HevP4ReferenceApplication_P.FirstOrderHold4_ErrTol = rtInf;
  HevP4ReferenceApplication_P.FirstOrderHold5_ErrTol = rtInf;
  HevP4ReferenceApplication_P.FirstOrderHold6_ErrTol = rtInf;
  HevP4ReferenceApplication_P.FirstOrderHold7_ErrTol = rtInf;
  HevP4ReferenceApplication_P.FirstOrderHold8_ErrTol = rtInf;
  HevP4ReferenceApplication_P.FirstOrderHold9_ErrTol = rtInf;
  return rtS;
}

/* When you use the on parameter, it resets the optimizations to those that you
   specified with the /O compiler option. */
#if defined(_MSC_VER)

#pragma optimize( "", on )

#endif
