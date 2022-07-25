/*
 * HevP4ReferenceApplication.h
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

#ifndef RTW_HEADER_HevP4ReferenceApplication_h_
#define RTW_HEADER_HevP4ReferenceApplication_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef HevP4ReferenceApplication_COMMON_INCLUDES_
#define HevP4ReferenceApplication_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rsim.h"
#include "rt_logging.h"
#include "dt_info.h"
#endif                          /* HevP4ReferenceApplication_COMMON_INCLUDES_ */

#include "HevP4ReferenceApplication_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "model_reference_types.h"

/* Child system includes */
#include "DrivetrainHevP4.h"
#include "SiMappedEngine.h"
#include "BattHevP4.h"
#include "HevP4OptimalController.h"
#include "SiEngineController.h"
#include "HevP4TransmissionController.h"
#include "MotMappedP4.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"
#include "rt_defines.h"
#define MODEL_NAME                     HevP4ReferenceApplication
#define NSAMPLE_TIMES                  (6)                       /* Number of sample times */
#define NINPUTS                        (0)                       /* Number of model inputs */
#define NOUTPUTS                       (0)                       /* Number of model outputs */
#define NBLOCKIO                       (152)                     /* Number of data output port signals */
#define NUM_ZC_EVENTS                  (0)                       /* Number of zero-crossing events */
#ifndef NCSTATES
#define NCSTATES                       (63)                      /* Number of continuous states */
#elif NCSTATES != 63
# error Invalid specification of NCSTATES defined in compiler command
#endif

#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm)         (*rt_dataMapInfoPtr)
#endif

#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val)    (rt_dataMapInfoPtr = &val)
#endif

/* Block signals for system '<S35>/Pass Through' */
typedef struct {
  real_T u;                            /* '<S36>/u' */
} B_PassThrough_HevP4ReferenceApplication_T;

/* Block states (default storage) for system '<S35>/Pass Through' */
typedef struct {
  boolean_T PassThrough_MODE;          /* '<S35>/Pass Through' */
} DW_PassThrough_HevP4ReferenceApplication_T;

/* Block signals (default storage) */
typedef struct {
  real_T tFinal;                       /* '<S13>/tFinal' */
  real_T repeat;                       /* '<S13>/repeat' */
  real_T uDLookupTable;                /* '<S13>/1-D Lookup Table' */
  real_T TransferFcn;                  /* '<S49>/Transfer Fcn' */
  real_T xdot;                         /* '<S47>/Drivetrain' */
  real_T Drivetrain_o2;                /* '<S47>/Drivetrain' */
  real_T Drivetrain_o5;                /* '<S47>/Drivetrain' */
  real_T Drivetrain_o6;                /* '<S47>/Drivetrain' */
  real_T mstomph[2];                   /* '<S6>/m//s to mph' */
  real_T FirstOrderHold12;             /* '<S54>/First Order Hold12' */
  real_T UnitConversion15;             /* '<S54>/Unit Conversion15' */
  real_T SiMappedEngine_o1;            /* '<S53>/SiMappedEngine' */
  real_T EngSpd;                       /* '<S53>/SiMappedEngine' */
  real_T SiMappedEngine_o5;            /* '<S53>/SiMappedEngine' */
  real_T SiMappedEngine_o6;            /* '<S53>/SiMappedEngine' */
  real_T SiMappedEngine_o7;            /* '<S53>/SiMappedEngine' */
  real_T SiMappedEngine_o8;            /* '<S53>/SiMappedEngine' */
  real_T SiMappedEngine_o9;            /* '<S53>/SiMappedEngine' */
  real_T SiMappedEngine_o10;           /* '<S53>/SiMappedEngine' */
  real_T SiMappedEngine_o11;           /* '<S53>/SiMappedEngine' */
  real_T SiMappedEngine_o12;           /* '<S53>/SiMappedEngine' */
  real_T SiMappedEngine_o13;           /* '<S53>/SiMappedEngine' */
  real_T SiMappedEngine_o14;           /* '<S53>/SiMappedEngine' */
  real_T SiMappedEngine_o16;           /* '<S53>/SiMappedEngine' */
  real_T ExhManGasTemp;                /* '<S53>/SiMappedEngine' */
  real_T SiMappedEngine_o20;           /* '<S53>/SiMappedEngine' */
  real_T SiMappedEngine_o31;           /* '<S53>/SiMappedEngine' */
  real_T SiMappedEngine_o32;           /* '<S53>/SiMappedEngine' */
  real_T SiMappedEngine_o33;           /* '<S53>/SiMappedEngine' */
  real_T SiMappedEngine_o34;           /* '<S53>/SiMappedEngine' */
  real_T SiMappedEngine_o36;           /* '<S53>/SiMappedEngine' */
  real_T radstorpm;                    /* '<S6>/rad//s to rpm' */
  real_T MotTrq;                       /* '<S50>/Motor Coupling Dynamics' */
  real_T BatteryDischargeDynamics;     /* '<S50>/Battery Discharge Dynamics' */
  real_T Temp;                         /* '<S3>/Constant6' */
  real_T BattSoc;                      /* '<S50>/Battery' */
  real_T BattV;                        /* '<S50>/Battery' */
  real_T BattCrnt;                     /* '<S50>/Battery' */
  real_T Battery_o4;                   /* '<S50>/Battery' */
  real_T m3toUSGal;                    /* '<S58>/m^3 to US Gal' */
  real_T USMPGCalc;                    /* '<S58>/US MPG Calc' */
  real_T mtomi;                        /* '<S57>/m to mi' */
  real_T L100KmCalc;                   /* '<S57>/L//100 Km Calc' */
  real_T L100KmCalc1;                  /* '<S57>/L//100 Km Calc1' */
  real_T L100KmCalc2;                  /* '<S57>/L//100 Km Calc2' */
  real_T mtokm;                        /* '<S57>/m to km' */
  real_T L100KmCalc3;                  /* '<S57>/L//100 Km Calc3' */
  real_T wperkw;                       /* '<S58>/w per kw' */
  real_T USEPAkwhUSgalequivalent;     /* '<S58>/US EPA kwh//USgal equivalent' */
  real_T sperh;                        /* '<S58>/s per h' */
  real_T Add;                          /* '<S58>/Add' */
  real_T mto100Km;                     /* '<S58>/m to 100Km' */
  real_T Sqrt;                         /* '<S58>/Sqrt' */
  real_T Constant;                     /* '<S29>/Constant' */
  real_T Gain;                         /* '<S28>/Gain' */
  real_T Constant_n;                   /* '<S31>/Constant' */
  real_T Constant1;                    /* '<S43>/Constant1' */
  real_T Constant_g;                   /* '<S43>/Constant' */
  real_T Switch[2];                    /* '<S43>/Switch' */
  real_T AccelPdl;                     /* '<S7>/Rate Transition' */
  real_T DecelPdl;                     /* '<S7>/Rate Transition8' */
  real_T VehSpdFdbk;                   /* '<S7>/Rate Transition16' */
  real_T BattSoc_l;                    /* '<S7>/Rate Transition19' */
  real_T MotSpd;                       /* '<S7>/Rate Transition15' */
  real_T TransGear;                    /* '<S7>/Rate Transition18' */
  real_T BattV_k;                      /* '<S7>/Rate Transition13' */
  real_T EngTrqCmd;          /* '<S10>/Hybrid Control Module (HCM) - Optimal' */
  real_T MtrTrqCmd;          /* '<S10>/Hybrid Control Module (HCM) - Optimal' */
  real_T BrkCmd;             /* '<S10>/Hybrid Control Module (HCM) - Optimal' */
  real_T Cltch1Cmd;          /* '<S10>/Hybrid Control Module (HCM) - Optimal' */
  real_T Neutral;            /* '<S10>/Hybrid Control Module (HCM) - Optimal' */
  real_T WhlTrqCmd;          /* '<S10>/Hybrid Control Module (HCM) - Optimal' */
  real_T RateTransition1;              /* '<S7>/Rate Transition1' */
  real_T RateTransition10;             /* '<S7>/Rate Transition10' */
  real_T RateTransition11;             /* '<S7>/Rate Transition11' */
  real_T EngSpd_d;                     /* '<S7>/Rate Transition17' */
  real_T RateTransition2;              /* '<S7>/Rate Transition2' */
  real_T RateTransition21;             /* '<S7>/Rate Transition21' */
  real_T RateTransition22;             /* '<S7>/Rate Transition22' */
  real_T RateTransition23;             /* '<S7>/Rate Transition23' */
  real_T RateTransition25;             /* '<S7>/Rate Transition25' */
  real_T RateTransition26;             /* '<S7>/Rate Transition26' */
  real_T RateTransition27;             /* '<S7>/Rate Transition27' */
  real_T RateTransition28;             /* '<S7>/Rate Transition28' */
  real_T RateTransition3;              /* '<S7>/Rate Transition3' */
  real_T RateTransition30;             /* '<S7>/Rate Transition30' */
  real_T RateTransition32;             /* '<S7>/Rate Transition32' */
  real_T RateTransition33;             /* '<S7>/Rate Transition33' */
  real_T RateTransition4;              /* '<S7>/Rate Transition4' */
  real_T RateTransition5;              /* '<S7>/Rate Transition5' */
  real_T RateTransition6;              /* '<S7>/Rate Transition6' */
  real_T RateTransition7;              /* '<S7>/Rate Transition7' */
  real_T RateTransition9;              /* '<S7>/Rate Transition9' */
  real_T Baro;                         /* '<S3>/Constant7' */
  real_T RateTransition31;             /* '<S7>/Rate Transition31' */
  real_T SiEngineController_o1;        /* '<S9>/SiEngineController' */
  real_T SiEngineController_o2;        /* '<S9>/SiEngineController' */
  real_T SiEngineController_o3;        /* '<S9>/SiEngineController' */
  real_T SiEngineController_o4;        /* '<S9>/SiEngineController' */
  real_T SiEngineController_o5;        /* '<S9>/SiEngineController' */
  real_T SiEngineController_o6;        /* '<S9>/SiEngineController' */
  real_T SiEngineController_o7;        /* '<S9>/SiEngineController' */
  real_T SiEngineController_o8;        /* '<S9>/SiEngineController' */
  real_T SiEngineController_o9;        /* '<S9>/SiEngineController' */
  real_T SiEngineController_o10;       /* '<S9>/SiEngineController' */
  real_T SiEngineController_o11;       /* '<S9>/SiEngineController' */
  real_T SiEngineController_o12;       /* '<S9>/SiEngineController' */
  real_T ClsdLpFuelMult;               /* '<S9>/SiEngineController' */
  real_T SiEngineController_o14;       /* '<S9>/SiEngineController' */
  real_T SiEngineController_o15;       /* '<S9>/SiEngineController' */
  real_T GearCmd;                 /* '<S9>/Transmission Control Module (TCM)' */
  real_T DigitalClock;                 /* '<S13>/Digital Clock' */
  real_T Add1;                         /* '<S13>/Add1' */
  real_T Grade;                        /* '<S3>/Constant2' */
  real_T wind_x;                       /* '<S3>/Constant3' */
  real_T Constant_f;                   /* '<S30>/Constant' */
  real_T Divide;                       /* '<S30>/Divide' */
  real_T Product;                      /* '<S41>/Product' */
  real_T UnitDelay[2];                 /* '<S41>/Unit Delay' */
  real_T Switch_c[2];                  /* '<S41>/Switch' */
  real_T Cltch1Cmd_j;                  /* '<S49>/First Order Hold' */
  real_T BrkCmd_f;                     /* '<S49>/First Order Hold1' */
  real_T GearCmd_g;                    /* '<S49>/First Order Hold2' */
  real_T MotMapped_o1;                 /* '<S56>/MotMapped' */
  real_T MotMapped_o2;                 /* '<S56>/MotMapped' */
  real_T MotTrqCmd;                    /* '<S51>/First Order Hold' */
  real_T FirstOrderHold;               /* '<S54>/First Order Hold' */
  real_T FirstOrderHold1;              /* '<S54>/First Order Hold1' */
  real_T FirstOrderHold10;             /* '<S54>/First Order Hold10' */
  real_T FirstOrderHold11;             /* '<S54>/First Order Hold11' */
  real_T FirstOrderHold13;             /* '<S54>/First Order Hold13' */
  real_T FirstOrderHold14;             /* '<S54>/First Order Hold14' */
  real_T FirstOrderHold2;              /* '<S54>/First Order Hold2' */
  real_T FirstOrderHold3;              /* '<S54>/First Order Hold3' */
  real_T FirstOrderHold4;              /* '<S54>/First Order Hold4' */
  real_T FirstOrderHold5;              /* '<S54>/First Order Hold5' */
  real_T FirstOrderHold6;              /* '<S54>/First Order Hold6' */
  real_T FirstOrderHold7;              /* '<S54>/First Order Hold7' */
  real_T FirstOrderHold8;              /* '<S54>/First Order Hold8' */
  real_T FirstOrderHold9;              /* '<S54>/First Order Hold9' */
  real_T Gear;                         /* '<S42>/Shift Controller' */
  boolean_T Drivetrain_o4;             /* '<S47>/Drivetrain' */
  boolean_T LogicalOperator2;          /* '<S29>/Logical Operator2' */
  boolean_T NOT;                       /* '<S35>/NOT' */
  boolean_T LogicalOperator2_o;        /* '<S31>/Logical Operator2' */
  boolean_T NOT_n;                     /* '<S37>/NOT' */
  boolean_T LogicalOperator;           /* '<S43>/Logical Operator' */
  boolean_T Constant_fb;               /* '<S19>/Constant' */
  boolean_T IgSw;                      /* '<S19>/Manual Switch' */
  boolean_T IgnSwtch;                  /* '<S7>/Rate Transition29' */
  B_PassThrough_HevP4ReferenceApplication_T PassThrough_b;/* '<S37>/Pass Through' */
  B_PassThrough_HevP4ReferenceApplication_T PassThrough;/* '<S35>/Pass Through' */
} B_HevP4ReferenceApplication_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay_DSTATE[2];          /* '<S41>/Unit Delay' */
  volatile real_T RateTransition4_Buffer0[2];/* '<S6>/Rate Transition4' */
  real_T Tk;                           /* '<S54>/First Order Hold12' */
  real_T Ck;                           /* '<S54>/First Order Hold12' */
  real_T Mk;                           /* '<S54>/First Order Hold12' */
  real_T Uk;                           /* '<S54>/First Order Hold12' */
  volatile real_T RateTransition2_Buffer0;/* '<S6>/Rate Transition2' */
  volatile real_T RateTransition5_Buffer0;/* '<S6>/Rate Transition5' */
  volatile real_T RateTransition7_Buffer0;/* '<S6>/Rate Transition7' */
  volatile real_T RateTransition8_Buffer0;/* '<S6>/Rate Transition8' */
  volatile real_T RateTransition10_Buffer0;/* '<S6>/Rate Transition10' */
  volatile real_T RateTransition1_Buffer0;/* '<S6>/Rate Transition1' */
  volatile real_T RateTransition3_Buffer0;/* '<S58>/Rate Transition3' */
  volatile real_T RateTransition_Buffer0;/* '<S57>/Rate Transition' */
  volatile real_T RateTransition1_Buffer0_m;/* '<S57>/Rate Transition1' */
  volatile real_T RateTransition2_Buffer0_j;/* '<S57>/Rate Transition2' */
  volatile real_T RateTransition3_Buffer0_p;/* '<S57>/Rate Transition3' */
  volatile real_T RateTransition_Buffer0_f;/* '<S7>/Rate Transition' */
  volatile real_T RateTransition8_Buffer0_a;/* '<S7>/Rate Transition8' */
  volatile real_T RateTransition16_Buffer0;/* '<S7>/Rate Transition16' */
  volatile real_T RateTransition19_Buffer0;/* '<S7>/Rate Transition19' */
  volatile real_T RateTransition15_Buffer0;/* '<S7>/Rate Transition15' */
  volatile real_T RateTransition18_Buffer0;/* '<S7>/Rate Transition18' */
  volatile real_T RateTransition13_Buffer0;/* '<S7>/Rate Transition13' */
  volatile real_T RateTransition1_Buffer0_i;/* '<S7>/Rate Transition1' */
  real_T RateTransition10_Buffer;      /* '<S7>/Rate Transition10' */
  real_T RateTransition11_Buffer;      /* '<S7>/Rate Transition11' */
  volatile real_T RateTransition17_Buffer0;/* '<S7>/Rate Transition17' */
  real_T RateTransition2_Buffer;       /* '<S7>/Rate Transition2' */
  real_T RateTransition21_Buffer;      /* '<S7>/Rate Transition21' */
  real_T RateTransition22_Buffer;      /* '<S7>/Rate Transition22' */
  real_T RateTransition23_Buffer;      /* '<S7>/Rate Transition23' */
  real_T RateTransition25_Buffer;      /* '<S7>/Rate Transition25' */
  real_T RateTransition26_Buffer;      /* '<S7>/Rate Transition26' */
  real_T RateTransition27_Buffer;      /* '<S7>/Rate Transition27' */
  real_T RateTransition28_Buffer;      /* '<S7>/Rate Transition28' */
  real_T RateTransition3_Buffer;       /* '<S7>/Rate Transition3' */
  real_T RateTransition30_Buffer;      /* '<S7>/Rate Transition30' */
  real_T RateTransition32_Buffer;      /* '<S7>/Rate Transition32' */
  real_T RateTransition33_Buffer;      /* '<S7>/Rate Transition33' */
  real_T RateTransition4_Buffer;       /* '<S7>/Rate Transition4' */
  real_T RateTransition5_Buffer;       /* '<S7>/Rate Transition5' */
  real_T RateTransition6_Buffer;       /* '<S7>/Rate Transition6' */
  real_T RateTransition7_Buffer;       /* '<S7>/Rate Transition7' */
  real_T RateTransition9_Buffer;       /* '<S7>/Rate Transition9' */
  volatile real_T RateTransition31_Buffer0;/* '<S7>/Rate Transition31' */
  real_T Tk_m;                         /* '<S49>/First Order Hold' */
  real_T Ck_c;                         /* '<S49>/First Order Hold' */
  real_T Mk_h;                         /* '<S49>/First Order Hold' */
  real_T Uk_i;                         /* '<S49>/First Order Hold' */
  real_T Tk_i;                         /* '<S49>/First Order Hold1' */
  real_T Ck_k;                         /* '<S49>/First Order Hold1' */
  real_T Mk_j;                         /* '<S49>/First Order Hold1' */
  real_T Uk_e;                         /* '<S49>/First Order Hold1' */
  real_T Tk_j;                         /* '<S49>/First Order Hold2' */
  real_T Ck_a;                         /* '<S49>/First Order Hold2' */
  real_T Mk_d;                         /* '<S49>/First Order Hold2' */
  real_T Uk_p;                         /* '<S49>/First Order Hold2' */
  real_T Tk_o;                         /* '<S51>/First Order Hold' */
  real_T Ck_h;                         /* '<S51>/First Order Hold' */
  real_T Mk_c;                         /* '<S51>/First Order Hold' */
  real_T Uk_n;                         /* '<S51>/First Order Hold' */
  real_T Tk_p;                         /* '<S54>/First Order Hold' */
  real_T Ck_hq;                        /* '<S54>/First Order Hold' */
  real_T Mk_l;                         /* '<S54>/First Order Hold' */
  real_T Uk_nh;                        /* '<S54>/First Order Hold' */
  real_T Tk_e;                         /* '<S54>/First Order Hold1' */
  real_T Ck_ht;                        /* '<S54>/First Order Hold1' */
  real_T Mk_k;                         /* '<S54>/First Order Hold1' */
  real_T Uk_c;                         /* '<S54>/First Order Hold1' */
  real_T Tk_b;                         /* '<S54>/First Order Hold10' */
  real_T Ck_j;                         /* '<S54>/First Order Hold10' */
  real_T Mk_hm;                        /* '<S54>/First Order Hold10' */
  real_T Uk_o;                         /* '<S54>/First Order Hold10' */
  real_T Tk_f;                         /* '<S54>/First Order Hold11' */
  real_T Ck_aq;                        /* '<S54>/First Order Hold11' */
  real_T Mk_n;                         /* '<S54>/First Order Hold11' */
  real_T Uk_ol;                        /* '<S54>/First Order Hold11' */
  real_T Tk_ii;                        /* '<S54>/First Order Hold13' */
  real_T Ck_ch;                        /* '<S54>/First Order Hold13' */
  real_T Mk_nu;                        /* '<S54>/First Order Hold13' */
  real_T Uk_l;                         /* '<S54>/First Order Hold13' */
  real_T Tk_oz;                        /* '<S54>/First Order Hold14' */
  real_T Ck_o;                         /* '<S54>/First Order Hold14' */
  real_T Mk_d3;                        /* '<S54>/First Order Hold14' */
  real_T Uk_il;                        /* '<S54>/First Order Hold14' */
  real_T Tk_g;                         /* '<S54>/First Order Hold2' */
  real_T Ck_p;                         /* '<S54>/First Order Hold2' */
  real_T Mk_i;                         /* '<S54>/First Order Hold2' */
  real_T Uk_pm;                        /* '<S54>/First Order Hold2' */
  real_T Tk_h;                         /* '<S54>/First Order Hold3' */
  real_T Ck_f;                         /* '<S54>/First Order Hold3' */
  real_T Mk_a;                         /* '<S54>/First Order Hold3' */
  real_T Uk_iu;                        /* '<S54>/First Order Hold3' */
  real_T Tk_b2;                        /* '<S54>/First Order Hold4' */
  real_T Ck_g;                         /* '<S54>/First Order Hold4' */
  real_T Mk_dk;                        /* '<S54>/First Order Hold4' */
  real_T Uk_g;                         /* '<S54>/First Order Hold4' */
  real_T Tk_ej;                        /* '<S54>/First Order Hold5' */
  real_T Ck_i;                         /* '<S54>/First Order Hold5' */
  real_T Mk_f;                         /* '<S54>/First Order Hold5' */
  real_T Uk_m;                         /* '<S54>/First Order Hold5' */
  real_T Tk_d;                         /* '<S54>/First Order Hold6' */
  real_T Ck_cz;                        /* '<S54>/First Order Hold6' */
  real_T Mk_l5;                        /* '<S54>/First Order Hold6' */
  real_T Uk_ob;                        /* '<S54>/First Order Hold6' */
  real_T Tk_bv;                        /* '<S54>/First Order Hold7' */
  real_T Ck_m;                         /* '<S54>/First Order Hold7' */
  real_T Mk_kb;                        /* '<S54>/First Order Hold7' */
  real_T Uk_ez;                        /* '<S54>/First Order Hold7' */
  real_T Tk_n;                         /* '<S54>/First Order Hold8' */
  real_T Ck_d;                         /* '<S54>/First Order Hold8' */
  real_T Mk_ix;                        /* '<S54>/First Order Hold8' */
  real_T Uk_k;                         /* '<S54>/First Order Hold8' */
  real_T Tk_pr;                        /* '<S54>/First Order Hold9' */
  real_T Ck_pu;                        /* '<S54>/First Order Hold9' */
  real_T Mk_jb;                        /* '<S54>/First Order Hold9' */
  real_T Uk_gg;                        /* '<S54>/First Order Hold9' */
  real_T GearState;                    /* '<S42>/Shift Controller' */
  real_T temporalCounter_i1;           /* '<S42>/Shift Controller' */
  real_T presentTime;                  /* '<S42>/Shift Controller' */
  real_T elapsedTime;                  /* '<S42>/Shift Controller' */
  real_T previousTime;                 /* '<S42>/Shift Controller' */
  struct {
    void *LoggedData[6];
  } PerformanceandFEScope_PWORK;       /* '<S6>/Performance and FE Scope' */

  struct {
    void *LoggedData[4];
  } TPEmissionsScope_PWORK;            /* '<S6>/TP Emissions Scope' */

  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWs_PWORK;                      /* '<S20>/FromWs' */

  uint32_T m_bpIndex;                  /* '<S13>/1-D Lookup Table' */
  int_T FromWs_ZCTimeIndices[2];       /* '<S20>/FromWs' */
  int_T FromWs_CurZCTimeIndIdx;        /* '<S20>/FromWs' */
  struct {
    int_T PrevIndex;
  } FromWs_IWORK;                      /* '<S20>/FromWs' */

  int_T Saturation1_MODE;              /* '<S58>/Saturation1' */
  int_T Saturation_MODE;               /* '<S57>/Saturation' */
  int_T Saturation1_MODE_h;            /* '<S57>/Saturation1' */
  int_T Saturation_MODE_f;             /* '<S58>/Saturation' */
  volatile int8_T RateTransition4_semaphoreTaken;/* '<S6>/Rate Transition4' */
  volatile int8_T RateTransition2_semaphoreTaken;/* '<S6>/Rate Transition2' */
  volatile int8_T RateTransition5_semaphoreTaken;/* '<S6>/Rate Transition5' */
  volatile int8_T RateTransition7_semaphoreTaken;/* '<S6>/Rate Transition7' */
  volatile int8_T RateTransition8_semaphoreTaken;/* '<S6>/Rate Transition8' */
  volatile int8_T RateTransition10_semaphoreTaken;/* '<S6>/Rate Transition10' */
  volatile int8_T RateTransition1_semaphoreTaken;/* '<S6>/Rate Transition1' */
  volatile int8_T RateTransition3_semaphoreTaken;/* '<S58>/Rate Transition3' */
  volatile int8_T RateTransition_semaphoreTaken;/* '<S57>/Rate Transition' */
  volatile int8_T RateTransition1_semaphoreTaken_h;/* '<S57>/Rate Transition1' */
  volatile int8_T RateTransition2_semaphoreTaken_j;/* '<S57>/Rate Transition2' */
  volatile int8_T RateTransition3_semaphoreTaken_l;/* '<S57>/Rate Transition3' */
  int8_T Sqrt_DWORK1;                  /* '<S58>/Sqrt' */
  volatile int8_T RateTransition_semaphoreTaken_k;/* '<S7>/Rate Transition' */
  volatile int8_T RateTransition8_semaphoreTaken_k;/* '<S7>/Rate Transition8' */
  volatile int8_T RateTransition16_semaphoreTaken;/* '<S7>/Rate Transition16' */
  volatile int8_T RateTransition19_semaphoreTaken;/* '<S7>/Rate Transition19' */
  volatile int8_T RateTransition15_semaphoreTaken;/* '<S7>/Rate Transition15' */
  volatile int8_T RateTransition18_semaphoreTaken;/* '<S7>/Rate Transition18' */
  volatile int8_T RateTransition13_semaphoreTaken;/* '<S7>/Rate Transition13' */
  volatile int8_T RateTransition1_semaphoreTaken_m;/* '<S7>/Rate Transition1' */
  volatile int8_T RateTransition17_semaphoreTaken;/* '<S7>/Rate Transition17' */
  volatile int8_T RateTransition31_semaphoreTaken;/* '<S7>/Rate Transition31' */
  uint8_T is_active_c6_autolibsharedcommon;/* '<S42>/Shift Controller' */
  uint8_T is_GearSelect;               /* '<S42>/Shift Controller' */
  boolean_T Compare_Mode;              /* '<S45>/Compare' */
  MdlrefDW_DrivetrainHevP4_T Drivetrain_InstanceData;/* '<S47>/Drivetrain' */
  MdlrefDW_SiMappedEngine_T SiMappedEngine_InstanceData;/* '<S53>/SiMappedEngine' */
  MdlrefDW_BattHevP4_T Battery_InstanceData;/* '<S50>/Battery' */
  MdlrefDW_HevP4OptimalController_T HybridControlModuleHCMOptimal_InstanceData;
                             /* '<S10>/Hybrid Control Module (HCM) - Optimal' */
  MdlrefDW_SiEngineController_T SiEngineController_InstanceData;/* '<S9>/SiEngineController' */
  MdlrefDW_HevP4TransmissionController_T
    TransmissionControlModuleTCM_InstanceData;
                                  /* '<S9>/Transmission Control Module (TCM)' */
  MdlrefDW_MotMappedP4_T MotMapped_InstanceData;/* '<S56>/MotMapped' */
  DW_PassThrough_HevP4ReferenceApplication_T PassThrough_b;/* '<S37>/Pass Through' */
  DW_PassThrough_HevP4ReferenceApplication_T PassThrough;/* '<S35>/Pass Through' */
} DW_HevP4ReferenceApplication_T;

/* Continuous states (default storage) */
typedef struct {
  real_T TransferFcn_CSTATE;           /* '<S49>/Transfer Fcn' */
  X_DrivetrainHevP4_n_T Drivetrain_CSTATE;/* '<S47>/Drivetrain' */
  real_T SensorDynamics_CSTATE;        /* '<S54>/Sensor Dynamics' */
  X_SiMappedEngine_n_T SiMappedEngine_CSTATE;/* '<S53>/SiMappedEngine' */
  real_T MotorCouplingDynamics_CSTATE; /* '<S50>/Motor Coupling Dynamics' */
  real_T BatteryDischargeDynamics_CSTATE;/* '<S50>/Battery Discharge Dynamics' */
  X_BattHevP4_n_T Battery_CSTATE;      /* '<S50>/Battery' */
  real_T Integrator_CSTATE;            /* '<S58>/Integrator' */
  real_T Integrator1_CSTATE;           /* '<S58>/Integrator1' */
  real_T Integrator_CSTATE_m;          /* '<S57>/Integrator' */
  real_T Integrator1_CSTATE_a;         /* '<S57>/Integrator1' */
  real_T Integrator2_CSTATE;           /* '<S57>/Integrator2' */
  real_T Integrator3_CSTATE;           /* '<S57>/Integrator3' */
  real_T Integrator4_CSTATE;           /* '<S57>/Integrator4' */
  real_T Integrator1_CSTATE_o;         /* '<S30>/Integrator1' */
  real_T Integrator2_CSTATE_m;         /* '<S41>/Integrator2' */
  X_MotMappedP4_n_T MotMapped_CSTATE;  /* '<S56>/MotMapped' */
} X_HevP4ReferenceApplication_T;

/* Periodic continuous state vector (global) */
typedef int_T PeriodicIndX_HevP4ReferenceApplication_T[1];
typedef real_T PeriodicRngX_HevP4ReferenceApplication_T[2];

/* State derivatives (default storage) */
typedef struct {
  real_T TransferFcn_CSTATE;           /* '<S49>/Transfer Fcn' */
  XDot_DrivetrainHevP4_n_T Drivetrain_CSTATE;/* '<S47>/Drivetrain' */
  real_T SensorDynamics_CSTATE;        /* '<S54>/Sensor Dynamics' */
  XDot_SiMappedEngine_n_T SiMappedEngine_CSTATE;/* '<S53>/SiMappedEngine' */
  real_T MotorCouplingDynamics_CSTATE; /* '<S50>/Motor Coupling Dynamics' */
  real_T BatteryDischargeDynamics_CSTATE;/* '<S50>/Battery Discharge Dynamics' */
  XDot_BattHevP4_n_T Battery_CSTATE;   /* '<S50>/Battery' */
  real_T Integrator_CSTATE;            /* '<S58>/Integrator' */
  real_T Integrator1_CSTATE;           /* '<S58>/Integrator1' */
  real_T Integrator_CSTATE_m;          /* '<S57>/Integrator' */
  real_T Integrator1_CSTATE_a;         /* '<S57>/Integrator1' */
  real_T Integrator2_CSTATE;           /* '<S57>/Integrator2' */
  real_T Integrator3_CSTATE;           /* '<S57>/Integrator3' */
  real_T Integrator4_CSTATE;           /* '<S57>/Integrator4' */
  real_T Integrator1_CSTATE_o;         /* '<S30>/Integrator1' */
  real_T Integrator2_CSTATE_m;         /* '<S41>/Integrator2' */
  XDot_MotMappedP4_n_T MotMapped_CSTATE;/* '<S56>/MotMapped' */
} XDot_HevP4ReferenceApplication_T;

/* State disabled  */
typedef struct {
  boolean_T TransferFcn_CSTATE;        /* '<S49>/Transfer Fcn' */
  XDis_DrivetrainHevP4_n_T Drivetrain_CSTATE;/* '<S47>/Drivetrain' */
  boolean_T SensorDynamics_CSTATE;     /* '<S54>/Sensor Dynamics' */
  XDis_SiMappedEngine_n_T SiMappedEngine_CSTATE;/* '<S53>/SiMappedEngine' */
  boolean_T MotorCouplingDynamics_CSTATE;/* '<S50>/Motor Coupling Dynamics' */
  boolean_T BatteryDischargeDynamics_CSTATE;/* '<S50>/Battery Discharge Dynamics' */
  XDis_BattHevP4_n_T Battery_CSTATE;   /* '<S50>/Battery' */
  boolean_T Integrator_CSTATE;         /* '<S58>/Integrator' */
  boolean_T Integrator1_CSTATE;        /* '<S58>/Integrator1' */
  boolean_T Integrator_CSTATE_m;       /* '<S57>/Integrator' */
  boolean_T Integrator1_CSTATE_a;      /* '<S57>/Integrator1' */
  boolean_T Integrator2_CSTATE;        /* '<S57>/Integrator2' */
  boolean_T Integrator3_CSTATE;        /* '<S57>/Integrator3' */
  boolean_T Integrator4_CSTATE;        /* '<S57>/Integrator4' */
  boolean_T Integrator1_CSTATE_o;      /* '<S30>/Integrator1' */
  boolean_T Integrator2_CSTATE_m;      /* '<S41>/Integrator2' */
  XDis_MotMappedP4_n_T MotMapped_CSTATE;/* '<S56>/MotMapped' */
} XDis_HevP4ReferenceApplication_T;

/* Continuous State Absolute Tolerance  */
typedef struct {
  real_T TransferFcn_CSTATE;           /* '<S49>/Transfer Fcn' */
  XAbsTol_DrivetrainHevP4_T Drivetrain_CSTATE;/* '<S47>/Drivetrain' */
  real_T SensorDynamics_CSTATE;        /* '<S54>/Sensor Dynamics' */
  XAbsTol_SiMappedEngine_T SiMappedEngine_CSTATE;/* '<S53>/SiMappedEngine' */
  real_T MotorCouplingDynamics_CSTATE; /* '<S50>/Motor Coupling Dynamics' */
  real_T BatteryDischargeDynamics_CSTATE;/* '<S50>/Battery Discharge Dynamics' */
  XAbsTol_BattHevP4_T Battery_CSTATE;  /* '<S50>/Battery' */
  real_T Integrator_CSTATE;            /* '<S58>/Integrator' */
  real_T Integrator1_CSTATE;           /* '<S58>/Integrator1' */
  real_T Integrator_CSTATE_m;          /* '<S57>/Integrator' */
  real_T Integrator1_CSTATE_a;         /* '<S57>/Integrator1' */
  real_T Integrator2_CSTATE;           /* '<S57>/Integrator2' */
  real_T Integrator3_CSTATE;           /* '<S57>/Integrator3' */
  real_T Integrator4_CSTATE;           /* '<S57>/Integrator4' */
  real_T Integrator1_CSTATE_o;         /* '<S30>/Integrator1' */
  real_T Integrator2_CSTATE_m;         /* '<S41>/Integrator2' */
  XAbsTol_MotMappedP4_T MotMapped_CSTATE;/* '<S56>/MotMapped' */
} CStateAbsTol_HevP4ReferenceApplication_T;

/* Continuous State Perturb Min  */
typedef struct {
  real_T TransferFcn_CSTATE;           /* '<S49>/Transfer Fcn' */
  XPtMin_DrivetrainHevP4_T Drivetrain_CSTATE;/* '<S47>/Drivetrain' */
  real_T SensorDynamics_CSTATE;        /* '<S54>/Sensor Dynamics' */
  XPtMin_SiMappedEngine_T SiMappedEngine_CSTATE;/* '<S53>/SiMappedEngine' */
  real_T MotorCouplingDynamics_CSTATE; /* '<S50>/Motor Coupling Dynamics' */
  real_T BatteryDischargeDynamics_CSTATE;/* '<S50>/Battery Discharge Dynamics' */
  XPtMin_BattHevP4_T Battery_CSTATE;   /* '<S50>/Battery' */
  real_T Integrator_CSTATE;            /* '<S58>/Integrator' */
  real_T Integrator1_CSTATE;           /* '<S58>/Integrator1' */
  real_T Integrator_CSTATE_m;          /* '<S57>/Integrator' */
  real_T Integrator1_CSTATE_a;         /* '<S57>/Integrator1' */
  real_T Integrator2_CSTATE;           /* '<S57>/Integrator2' */
  real_T Integrator3_CSTATE;           /* '<S57>/Integrator3' */
  real_T Integrator4_CSTATE;           /* '<S57>/Integrator4' */
  real_T Integrator1_CSTATE_o;         /* '<S30>/Integrator1' */
  real_T Integrator2_CSTATE_m;         /* '<S41>/Integrator2' */
  XPtMin_MotMappedP4_T MotMapped_CSTATE;/* '<S56>/MotMapped' */
} CXPtMin_HevP4ReferenceApplication_T;

/* Continuous State Perturb Max  */
typedef struct {
  real_T TransferFcn_CSTATE;           /* '<S49>/Transfer Fcn' */
  XPtMax_DrivetrainHevP4_T Drivetrain_CSTATE;/* '<S47>/Drivetrain' */
  real_T SensorDynamics_CSTATE;        /* '<S54>/Sensor Dynamics' */
  XPtMax_SiMappedEngine_T SiMappedEngine_CSTATE;/* '<S53>/SiMappedEngine' */
  real_T MotorCouplingDynamics_CSTATE; /* '<S50>/Motor Coupling Dynamics' */
  real_T BatteryDischargeDynamics_CSTATE;/* '<S50>/Battery Discharge Dynamics' */
  XPtMax_BattHevP4_T Battery_CSTATE;   /* '<S50>/Battery' */
  real_T Integrator_CSTATE;            /* '<S58>/Integrator' */
  real_T Integrator1_CSTATE;           /* '<S58>/Integrator1' */
  real_T Integrator_CSTATE_m;          /* '<S57>/Integrator' */
  real_T Integrator1_CSTATE_a;         /* '<S57>/Integrator1' */
  real_T Integrator2_CSTATE;           /* '<S57>/Integrator2' */
  real_T Integrator3_CSTATE;           /* '<S57>/Integrator3' */
  real_T Integrator4_CSTATE;           /* '<S57>/Integrator4' */
  real_T Integrator1_CSTATE_o;         /* '<S30>/Integrator1' */
  real_T Integrator2_CSTATE_m;         /* '<S41>/Integrator2' */
  XPtMax_MotMappedP4_T MotMapped_CSTATE;/* '<S56>/MotMapped' */
} CXPtMax_HevP4ReferenceApplication_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCV_DrivetrainHevP4_g_T Drivetrain_Reset_ZC;/* '<S47>/Drivetrain' */
  ZCV_SiMappedEngine_g_T SiMappedEngine_UprLim_ZC;/* '<S53>/SiMappedEngine' */
  real_T Saturation1_UprLim_ZC;        /* '<S58>/Saturation1' */
  real_T Saturation1_LwrLim_ZC;        /* '<S58>/Saturation1' */
  real_T Saturation_UprLim_ZC;         /* '<S57>/Saturation' */
  real_T Saturation_LwrLim_ZC;         /* '<S57>/Saturation' */
  real_T Saturation1_UprLim_ZC_c;      /* '<S57>/Saturation1' */
  real_T Saturation1_LwrLim_ZC_o;      /* '<S57>/Saturation1' */
  real_T Saturation_UprLim_ZC_f;       /* '<S58>/Saturation' */
  real_T Saturation_LwrLim_ZC_p;       /* '<S58>/Saturation' */
  real_T Compare_RelopInput_ZC;        /* '<S45>/Compare' */
  real_T FromWs_repeatedTime_ZC;       /* '<S20>/FromWs' */
  real_T HitCrossing_HitNoOutput_ZC;   /* '<S13>/Hit  Crossing' */
  ZCV_MotMappedP4_g_T MotMapped_UprLim_ZC;/* '<S56>/MotMapped' */
} ZCV_HevP4ReferenceApplication_T;

/* RTWCAPI data structure for RSIM */
typedef struct {
  rtwCAPI_ModelMappingInfo mmi;
  rtwCAPI_ModelMappingInfo* childMMI[7];
} DataMapInfo;

/* Parameters (default storage) */
struct P_HevP4ReferenceApplication_T_ {
  real_T LongitudinalDriver_GearInit;
                                  /* Mask Parameter: LongitudinalDriver_GearInit
                                   * Referenced by: '<S42>/Shift Controller'
                                   */
  real_T SignalHold_IC;                /* Mask Parameter: SignalHold_IC
                                        * Referenced by: '<S35>/Pass Through'
                                        */
  real_T SignalHold_IC_b;              /* Mask Parameter: SignalHold_IC_b
                                        * Referenced by: '<S37>/Pass Through'
                                        */
  real_T LongitudinalDriver_Kpt;       /* Mask Parameter: LongitudinalDriver_Kpt
                                        * Referenced by:
                                        *   '<S28>/Setup'
                                        *   '<S28>/Gain'
                                        */
  real_T LongitudinalDriver_L;         /* Mask Parameter: LongitudinalDriver_L
                                        * Referenced by: '<S28>/Setup'
                                        */
  real_T LongitudinalDriver_aR;        /* Mask Parameter: LongitudinalDriver_aR
                                        * Referenced by: '<S28>/Setup'
                                        */
  real_T LongitudinalDriver_bR;        /* Mask Parameter: LongitudinalDriver_bR
                                        * Referenced by: '<S28>/Setup'
                                        */
  real_T LongitudinalDriver_cR;        /* Mask Parameter: LongitudinalDriver_cR
                                        * Referenced by: '<S28>/Setup'
                                        */
  real_T LongitudinalDriver_g;         /* Mask Parameter: LongitudinalDriver_g
                                        * Referenced by: '<S28>/Gain'
                                        */
  real_T LongitudinalDriver_m;         /* Mask Parameter: LongitudinalDriver_m
                                        * Referenced by:
                                        *   '<S28>/Setup'
                                        *   '<S28>/Gain'
                                        */
  real_T LongitudinalDriver_tShift; /* Mask Parameter: LongitudinalDriver_tShift
                                     * Referenced by: '<S42>/Shift Controller'
                                     */
  real_T LongitudinalDriver_tau;       /* Mask Parameter: LongitudinalDriver_tau
                                        * Referenced by:
                                        *   '<S28>/Setup'
                                        *   '<S30>/Constant'
                                        */
  real_T u1_UpperSat;                  /* Expression: 1
                                        * Referenced by: '<S29>/0~1'
                                        */
  real_T u1_LowerSat;                  /* Expression: 0
                                        * Referenced by: '<S29>/0~1'
                                        */
  real_T u0_UpperSat;                  /* Expression: 0
                                        * Referenced by: '<S31>/-1~0'
                                        */
  real_T u0_LowerSat;                  /* Expression: -1
                                        * Referenced by: '<S31>/-1~0'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S45>/Constant'
                                        */
  real_T Constant_Value_l;             /* Expression: 0
                                        * Referenced by: '<S46>/Constant'
                                        */
  real_T tFinal_Value;                 /* Expression: DriveCycle.Time(end)
                                        * Referenced by: '<S13>/tFinal'
                                        */
  real_T repeat_Value;                 /* Expression: cycleRepeat
                                        * Referenced by: '<S13>/repeat'
                                        */
  real_T Switch_Threshold;             /* Expression: 0
                                        * Referenced by: '<S13>/Switch'
                                        */
  real_T uDLookupTable_tableData[2474];/* Expression: DriveCycle.Data
                                        * Referenced by: '<S13>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data[2474]; /* Expression: DriveCycle.Time
                                        * Referenced by: '<S13>/1-D Lookup Table'
                                        */
  real_T TransferFcn_A;                /* Computed Parameter: TransferFcn_A
                                        * Referenced by: '<S49>/Transfer Fcn'
                                        */
  real_T TransferFcn_C;                /* Computed Parameter: TransferFcn_C
                                        * Referenced by: '<S49>/Transfer Fcn'
                                        */
  real_T mstomph_Gain;                 /* Expression: 2.23694
                                        * Referenced by: '<S6>/m//s to mph'
                                        */
  real_T FirstOrderHold12_IniOut;      /* Expression: 0
                                        * Referenced by: '<S54>/First Order Hold12'
                                        */
  real_T FirstOrderHold12_ErrTol;      /* Expression: inf
                                        * Referenced by: '<S54>/First Order Hold12'
                                        */
  real_T SensorDynamics_A;             /* Computed Parameter: SensorDynamics_A
                                        * Referenced by: '<S54>/Sensor Dynamics'
                                        */
  real_T SensorDynamics_C;             /* Computed Parameter: SensorDynamics_C
                                        * Referenced by: '<S54>/Sensor Dynamics'
                                        */
  real_T radstorpm_Gain;               /* Expression: 30/pi
                                        * Referenced by: '<S6>/rad//s to rpm'
                                        */
  real_T MotorCouplingDynamics_A; /* Computed Parameter: MotorCouplingDynamics_A
                                   * Referenced by: '<S50>/Motor Coupling Dynamics'
                                   */
  real_T MotorCouplingDynamics_C; /* Computed Parameter: MotorCouplingDynamics_C
                                   * Referenced by: '<S50>/Motor Coupling Dynamics'
                                   */
  real_T BatteryDischargeDynamics_A;
                               /* Computed Parameter: BatteryDischargeDynamics_A
                                * Referenced by: '<S50>/Battery Discharge Dynamics'
                                */
  real_T BatteryDischargeDynamics_C;
                               /* Computed Parameter: BatteryDischargeDynamics_C
                                * Referenced by: '<S50>/Battery Discharge Dynamics'
                                */
  real_T Constant6_Value;              /* Expression: 300
                                        * Referenced by: '<S3>/Constant6'
                                        */
  real_T Integrator_IC;                /* Expression: 0
                                        * Referenced by: '<S58>/Integrator'
                                        */
  real_T mtomile_Gain;                 /* Expression: 0.000621371
                                        * Referenced by: '<S58>/m to mile'
                                        */
  real_T Integrator1_IC;               /* Expression: 0
                                        * Referenced by: '<S58>/Integrator1'
                                        */
  real_T m3toUSGal_Gain;               /* Expression: 264.172
                                        * Referenced by: '<S58>/m^3 to US Gal'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: Inf
                                        * Referenced by: '<S58>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: 1e-3
                                        * Referenced by: '<S58>/Saturation1'
                                        */
  real_T Integrator_IC_p;              /* Expression: 0
                                        * Referenced by: '<S57>/Integrator'
                                        */
  real_T mtomi_Gain;                   /* Expression: 0.000621371
                                        * Referenced by: '<S57>/m to mi'
                                        */
  real_T Saturation_UpperSat;          /* Expression: Inf
                                        * Referenced by: '<S57>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 0.2
                                        * Referenced by: '<S57>/Saturation'
                                        */
  real_T Integrator1_IC_k;             /* Expression: 0
                                        * Referenced by: '<S57>/Integrator1'
                                        */
  real_T Kgtog_Gain;                   /* Expression: 1000
                                        * Referenced by: '<S57>/Kg to g'
                                        */
  real_T Integrator2_IC;               /* Expression: 0
                                        * Referenced by: '<S57>/Integrator2'
                                        */
  real_T Kgtog_Gain_l;                 /* Expression: 1000
                                        * Referenced by: '<S57>/Kg to g '
                                        */
  real_T Integrator3_IC;               /* Expression: 0
                                        * Referenced by: '<S57>/Integrator3'
                                        */
  real_T Kgtog_Gain_f;                 /* Expression: 1000
                                        * Referenced by: '<S57>/Kg to g  '
                                        */
  real_T mtokm_Gain;                   /* Expression: 0.001
                                        * Referenced by: '<S57>/m to km'
                                        */
  real_T Saturation1_UpperSat_h;       /* Expression: Inf
                                        * Referenced by: '<S57>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_d;       /* Expression: 1
                                        * Referenced by: '<S57>/Saturation1'
                                        */
  real_T Integrator4_IC;               /* Expression: 0
                                        * Referenced by: '<S57>/Integrator4'
                                        */
  real_T Kgtog_Gain_c;                 /* Expression: 1000
                                        * Referenced by: '<S57>/Kg to g   '
                                        */
  real_T wperkw_Value;                 /* Expression: 1000
                                        * Referenced by: '<S58>/w per kw'
                                        */
  real_T USEPAkwhUSgalequivalent_Value;/* Expression: 33.7
                                        * Referenced by: '<S58>/US EPA kwh//USgal equivalent'
                                        */
  real_T sperh_Value;                  /* Expression: 3600
                                        * Referenced by: '<S58>/s per h'
                                        */
  real_T m3pergal_Gain;                /* Expression: 0.00378541
                                        * Referenced by: '<S58>/m^3 per gal'
                                        */
  real_T mto100Km_Gain;                /* Expression: 1/1000/100
                                        * Referenced by: '<S58>/m to 100Km'
                                        */
  real_T Saturation_UpperSat_p;        /* Expression: Inf
                                        * Referenced by: '<S58>/Saturation'
                                        */
  real_T Saturation_LowerSat_a;        /* Expression: 0.001
                                        * Referenced by: '<S58>/Saturation'
                                        */
  real_T Constant_Value_f;             /* Expression: 0
                                        * Referenced by: '<S29>/Constant'
                                        */
  real_T Integrator1_IC_f;             /* Expression: 0
                                        * Referenced by: '<S30>/Integrator1'
                                        */
  real_T Saturation_UpperSat_j;        /* Expression: 1
                                        * Referenced by: '<S29>/Saturation'
                                        */
  real_T Saturation_LowerSat_f;        /* Expression: 0
                                        * Referenced by: '<S29>/Saturation'
                                        */
  real_T Constant_Value_fg;            /* Expression: 0
                                        * Referenced by: '<S31>/Constant'
                                        */
  real_T Saturation_UpperSat_o;        /* Expression: 1
                                        * Referenced by: '<S31>/Saturation'
                                        */
  real_T Saturation_LowerSat_n;        /* Expression: 0
                                        * Referenced by: '<S31>/Saturation'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S43>/Constant1'
                                        */
  real_T Constant_Value_a;             /* Expression: 0
                                        * Referenced by: '<S43>/Constant'
                                        */
  real_T Constant7_Value;              /* Expression: 101325
                                        * Referenced by: '<S3>/Constant7'
                                        */
  real_T FromWs_Time0[6];              /* Computed Parameter: FromWs_Time0
                                        * Referenced by: '<S20>/FromWs'
                                        */
  real_T FromWs_Data0[6];              /* Computed Parameter: FromWs_Data0
                                        * Referenced by: '<S20>/FromWs'
                                        */
  real_T HitCrossing_Offset;
              /* Expression: min(0.5,(DriveCycle.Time(2)-DriveCycle.Time(1))./2)
               * Referenced by: '<S13>/Hit  Crossing'
               */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<S3>/Constant2'
                                        */
  real_T Constant3_Value;              /* Expression: 0
                                        * Referenced by: '<S3>/Constant3'
                                        */
  real_T Integrator2_IC_o;             /* Expression: 0
                                        * Referenced by: '<S41>/Integrator2'
                                        */
  real_T UnitDelay_InitialCondition[2];/* Expression: [0,0]
                                        * Referenced by: '<S41>/Unit Delay'
                                        */
  real_T FirstOrderHold_IniOut;        /* Expression: 0
                                        * Referenced by: '<S49>/First Order Hold'
                                        */
  real_T FirstOrderHold_ErrTol;        /* Expression: inf
                                        * Referenced by: '<S49>/First Order Hold'
                                        */
  real_T FirstOrderHold1_IniOut;       /* Expression: 0
                                        * Referenced by: '<S49>/First Order Hold1'
                                        */
  real_T FirstOrderHold1_ErrTol;       /* Expression: inf
                                        * Referenced by: '<S49>/First Order Hold1'
                                        */
  real_T FirstOrderHold2_IniOut;       /* Expression: 0
                                        * Referenced by: '<S49>/First Order Hold2'
                                        */
  real_T FirstOrderHold2_ErrTol;       /* Expression: inf
                                        * Referenced by: '<S49>/First Order Hold2'
                                        */
  real_T FirstOrderHold_IniOut_o;      /* Expression: 0
                                        * Referenced by: '<S51>/First Order Hold'
                                        */
  real_T FirstOrderHold_ErrTol_f;      /* Expression: inf
                                        * Referenced by: '<S51>/First Order Hold'
                                        */
  real_T FirstOrderHold_IniOut_m;      /* Expression: 0
                                        * Referenced by: '<S54>/First Order Hold'
                                        */
  real_T FirstOrderHold_ErrTol_g;      /* Expression: inf
                                        * Referenced by: '<S54>/First Order Hold'
                                        */
  real_T FirstOrderHold1_IniOut_d;     /* Expression: 0
                                        * Referenced by: '<S54>/First Order Hold1'
                                        */
  real_T FirstOrderHold1_ErrTol_j;     /* Expression: inf
                                        * Referenced by: '<S54>/First Order Hold1'
                                        */
  real_T FirstOrderHold10_IniOut;      /* Expression: 0
                                        * Referenced by: '<S54>/First Order Hold10'
                                        */
  real_T FirstOrderHold10_ErrTol;      /* Expression: inf
                                        * Referenced by: '<S54>/First Order Hold10'
                                        */
  real_T FirstOrderHold11_IniOut;      /* Expression: 0
                                        * Referenced by: '<S54>/First Order Hold11'
                                        */
  real_T FirstOrderHold11_ErrTol;      /* Expression: inf
                                        * Referenced by: '<S54>/First Order Hold11'
                                        */
  real_T FirstOrderHold13_IniOut;      /* Expression: 0
                                        * Referenced by: '<S54>/First Order Hold13'
                                        */
  real_T FirstOrderHold13_ErrTol;      /* Expression: inf
                                        * Referenced by: '<S54>/First Order Hold13'
                                        */
  real_T FirstOrderHold14_IniOut;      /* Expression: 0
                                        * Referenced by: '<S54>/First Order Hold14'
                                        */
  real_T FirstOrderHold14_ErrTol;      /* Expression: inf
                                        * Referenced by: '<S54>/First Order Hold14'
                                        */
  real_T FirstOrderHold2_IniOut_g;     /* Expression: 0
                                        * Referenced by: '<S54>/First Order Hold2'
                                        */
  real_T FirstOrderHold2_ErrTol_f;     /* Expression: inf
                                        * Referenced by: '<S54>/First Order Hold2'
                                        */
  real_T FirstOrderHold3_IniOut;       /* Expression: 0
                                        * Referenced by: '<S54>/First Order Hold3'
                                        */
  real_T FirstOrderHold3_ErrTol;       /* Expression: inf
                                        * Referenced by: '<S54>/First Order Hold3'
                                        */
  real_T FirstOrderHold4_IniOut;       /* Expression: 0
                                        * Referenced by: '<S54>/First Order Hold4'
                                        */
  real_T FirstOrderHold4_ErrTol;       /* Expression: inf
                                        * Referenced by: '<S54>/First Order Hold4'
                                        */
  real_T FirstOrderHold5_IniOut;       /* Expression: 0
                                        * Referenced by: '<S54>/First Order Hold5'
                                        */
  real_T FirstOrderHold5_ErrTol;       /* Expression: inf
                                        * Referenced by: '<S54>/First Order Hold5'
                                        */
  real_T FirstOrderHold6_IniOut;       /* Expression: 0
                                        * Referenced by: '<S54>/First Order Hold6'
                                        */
  real_T FirstOrderHold6_ErrTol;       /* Expression: inf
                                        * Referenced by: '<S54>/First Order Hold6'
                                        */
  real_T FirstOrderHold7_IniOut;       /* Expression: 0
                                        * Referenced by: '<S54>/First Order Hold7'
                                        */
  real_T FirstOrderHold7_ErrTol;       /* Expression: inf
                                        * Referenced by: '<S54>/First Order Hold7'
                                        */
  real_T FirstOrderHold8_IniOut;       /* Expression: 0
                                        * Referenced by: '<S54>/First Order Hold8'
                                        */
  real_T FirstOrderHold8_ErrTol;       /* Expression: inf
                                        * Referenced by: '<S54>/First Order Hold8'
                                        */
  real_T FirstOrderHold9_IniOut;       /* Expression: 0
                                        * Referenced by: '<S54>/First Order Hold9'
                                        */
  real_T FirstOrderHold9_ErrTol;       /* Expression: inf
                                        * Referenced by: '<S54>/First Order Hold9'
                                        */
  boolean_T Constant_Value_e;          /* Expression: false
                                        * Referenced by: '<S19>/Constant'
                                        */
  uint8_T ManualSwitch_CurrentSetting;
                              /* Computed Parameter: ManualSwitch_CurrentSetting
                               * Referenced by: '<S19>/Manual Switch'
                               */
};

/* External data declarations for dependent source files */
extern const char *RT_MEMORY_ALLOCATION_ERROR;
extern B_HevP4ReferenceApplication_T HevP4ReferenceApplication_B;/* block i/o */
extern X_HevP4ReferenceApplication_T HevP4ReferenceApplication_X;/* states (continuous) */
extern DW_HevP4ReferenceApplication_T HevP4ReferenceApplication_DW;/* states (dwork) */
extern P_HevP4ReferenceApplication_T HevP4ReferenceApplication_P;/* parameters */

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  HevP4ReferenceApplication_GetCAPIStaticMap(void);

/* Simulation Structure */
extern SimStruct *const rtS;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'HevP4ReferenceApplication'
 * '<S1>'   : 'HevP4ReferenceApplication/Controllers'
 * '<S2>'   : 'HevP4ReferenceApplication/Drive Cycle Source'
 * '<S3>'   : 'HevP4ReferenceApplication/Environment'
 * '<S4>'   : 'HevP4ReferenceApplication/Longitudinal Driver'
 * '<S5>'   : 'HevP4ReferenceApplication/Passenger Car'
 * '<S6>'   : 'HevP4ReferenceApplication/Visualization'
 * '<S7>'   : 'HevP4ReferenceApplication/Controllers/PCM Input'
 * '<S8>'   : 'HevP4ReferenceApplication/Controllers/PCM Output'
 * '<S9>'   : 'HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)'
 * '<S10>'  : 'HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/Hybrid Control Module (HCM)'
 * '<S11>'  : 'HevP4ReferenceApplication/Drive Cycle Source/Signal Routing'
 * '<S12>'  : 'HevP4ReferenceApplication/Drive Cycle Source/Timing Mode'
 * '<S13>'  : 'HevP4ReferenceApplication/Drive Cycle Source/Timing Mode/Continuous'
 * '<S14>'  : 'HevP4ReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/FaultSystem'
 * '<S15>'  : 'HevP4ReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/FaultSystem/Fault Mode'
 * '<S16>'  : 'HevP4ReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/FaultSystem/TracePlot'
 * '<S17>'  : 'HevP4ReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/FaultSystem/Fault Mode/Fault Off'
 * '<S18>'  : 'HevP4ReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/FaultSystem/TracePlot/SimPlotOff'
 * '<S19>'  : 'HevP4ReferenceApplication/Longitudinal Driver/Closed Loop'
 * '<S20>'  : 'HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Ignition Switch Profile1'
 * '<S21>'  : 'HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver'
 * '<S22>'  : 'HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/External Action Routing'
 * '<S23>'  : 'HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver'
 * '<S24>'  : 'HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control'
 * '<S25>'  : 'HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/LPF'
 * '<S26>'  : 'HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Routing'
 * '<S27>'  : 'HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Shift'
 * '<S28>'  : 'HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive'
 * '<S29>'  : 'HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override'
 * '<S30>'  : 'HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Cont LPF'
 * '<S31>'  : 'HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override'
 * '<S32>'  : 'HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Powertrain Response'
 * '<S33>'  : 'HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Setup'
 * '<S34>'  : 'HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Vehicle'
 * '<S35>'  : 'HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold'
 * '<S36>'  : 'HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold/Pass Through'
 * '<S37>'  : 'HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/Signal Hold'
 * '<S38>'  : 'HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/Signal Hold/Pass Through'
 * '<S39>'  : 'HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Powertrain Response/Unfiltered'
 * '<S40>'  : 'HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/LPF/pass'
 * '<S41>'  : 'HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Routing/Error Metrics'
 * '<S42>'  : 'HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Shift/Basic'
 * '<S43>'  : 'HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Shift/Basic/Reverse Change'
 * '<S44>'  : 'HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Shift/Basic/Shift Controller'
 * '<S45>'  : 'HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Shift/Basic/Reverse Change/Compare To Zero'
 * '<S46>'  : 'HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Shift/Basic/Reverse Change/Compare To Zero1'
 * '<S47>'  : 'HevP4ReferenceApplication/Passenger Car/Drivetrain'
 * '<S48>'  : 'HevP4ReferenceApplication/Passenger Car/Drivetrain Output'
 * '<S49>'  : 'HevP4ReferenceApplication/Passenger Car/Drivetrain Plant Input'
 * '<S50>'  : 'HevP4ReferenceApplication/Passenger Car/Electric Plant'
 * '<S51>'  : 'HevP4ReferenceApplication/Passenger Car/Electric Plant Input'
 * '<S52>'  : 'HevP4ReferenceApplication/Passenger Car/Electric Plant Output'
 * '<S53>'  : 'HevP4ReferenceApplication/Passenger Car/Engine'
 * '<S54>'  : 'HevP4ReferenceApplication/Passenger Car/Engine Plant Input'
 * '<S55>'  : 'HevP4ReferenceApplication/Passenger Car/Engine Plant Output'
 * '<S56>'  : 'HevP4ReferenceApplication/Passenger Car/Electric Plant/Electric Machine'
 * '<S57>'  : 'HevP4ReferenceApplication/Visualization/Emission Calculations'
 * '<S58>'  : 'HevP4ReferenceApplication/Visualization/Performance Calculations'
 */

/* user code (bottom of header file) */
extern const int_T gblNumToFiles;
extern const int_T gblNumFrFiles;
extern const int_T gblNumFrWksBlocks;
extern rtInportTUtable *gblInportTUtables;
extern const char *gblInportFileName;
extern const int_T gblNumRootInportBlks;
extern const int_T gblNumModelInputs;
extern const int_T gblInportDataTypeIdx[];
extern const int_T gblInportDims[];
extern const int_T gblInportComplex[];
extern const int_T gblInportInterpoFlag[];
extern const int_T gblInportContinuous[];
extern DataMapInfo* rt_dataMapInfoPtr;
extern rtwCAPI_ModelMappingInfo* rt_modelMapInfoPtr;

#endif                             /* RTW_HEADER_HevP4ReferenceApplication_h_ */
