/*
 * HevP4ReferenceApplication_capi.c
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

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "HevP4ReferenceApplication_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "HevP4ReferenceApplication.h"
#include "HevP4ReferenceApplication_capi.h"
#include "HevP4ReferenceApplication_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               (NULL)
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif                                 /* HOST_CAPI_BUILD */

/* Block output signal information */
static const rtwCAPI_Signals rtBlockSignals[] = {
  /* addrMapIndex, sysNum, blockPath,
   * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
   */
  { 0, 0, TARGET_STRING("HevP4ReferenceApplication/Environment/Constant2"),
    TARGET_STRING("Grade"), 0, 0, 0, 0, 0 },

  { 1, 0, TARGET_STRING("HevP4ReferenceApplication/Environment/Constant3"),
    TARGET_STRING("wind_x"), 0, 0, 0, 0, 0 },

  { 2, 0, TARGET_STRING("HevP4ReferenceApplication/Environment/Constant6"),
    TARGET_STRING("Temp"), 0, 0, 0, 0, 0 },

  { 3, 0, TARGET_STRING("HevP4ReferenceApplication/Environment/Constant7"),
    TARGET_STRING("Baro"), 0, 0, 0, 0, 0 },

  { 4, 0, TARGET_STRING("HevP4ReferenceApplication/Visualization/m//s to mph"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 5, 0, TARGET_STRING("HevP4ReferenceApplication/Visualization/rad//s to rpm"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 6, 0, TARGET_STRING("HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition"),
    TARGET_STRING("AccelPdl"), 0, 0, 0, 0, 2 },

  { 7, 0, TARGET_STRING("HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition1"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 8, 0, TARGET_STRING("HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition10"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 9, 0, TARGET_STRING("HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition11"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 10, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition13"),
    TARGET_STRING("BattV"), 0, 0, 0, 0, 2 },

  { 11, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition15"),
    TARGET_STRING("MotSpd"), 0, 0, 0, 0, 2 },

  { 12, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition16"),
    TARGET_STRING("VehSpdFdbk"), 0, 0, 0, 0, 2 },

  { 13, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition17"),
    TARGET_STRING("EngSpd"), 0, 0, 0, 0, 2 },

  { 14, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition18"),
    TARGET_STRING("TransGear"), 0, 0, 0, 0, 2 },

  { 15, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition19"),
    TARGET_STRING("BattSoc"), 0, 0, 0, 0, 2 },

  { 16, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition2"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 17, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition21"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 18, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition22"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 19, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition23"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 20, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition25"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 21, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition26"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 22, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition27"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 23, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition28"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 24, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition29"),
    TARGET_STRING("IgnSwtch"), 0, 1, 0, 0, 3 },

  { 25, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition3"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 26, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition30"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 27, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition31"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 28, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition32"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 29, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition33"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 30, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition4"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 31, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition5"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 32, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition6"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 33, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition7"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 34, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition8"),
    TARGET_STRING("DecelPdl"), 0, 0, 0, 0, 2 },

  { 35, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/PCM Input/Rate Transition9"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 36, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/SiEngineController"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 37, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/SiEngineController"),
    TARGET_STRING(""), 1, 0, 0, 0, 3 },

  { 38, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/SiEngineController"),
    TARGET_STRING(""), 2, 0, 0, 0, 3 },

  { 39, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/SiEngineController"),
    TARGET_STRING(""), 3, 0, 0, 0, 3 },

  { 40, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/SiEngineController"),
    TARGET_STRING(""), 4, 0, 0, 0, 3 },

  { 41, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/SiEngineController"),
    TARGET_STRING(""), 5, 0, 0, 0, 3 },

  { 42, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/SiEngineController"),
    TARGET_STRING(""), 6, 0, 0, 0, 3 },

  { 43, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/SiEngineController"),
    TARGET_STRING(""), 7, 0, 0, 0, 3 },

  { 44, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/SiEngineController"),
    TARGET_STRING(""), 8, 0, 0, 0, 3 },

  { 45, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/SiEngineController"),
    TARGET_STRING(""), 9, 0, 0, 0, 3 },

  { 46, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/SiEngineController"),
    TARGET_STRING(""), 10, 0, 0, 0, 3 },

  { 47, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/SiEngineController"),
    TARGET_STRING(""), 11, 0, 0, 0, 3 },

  { 48, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/SiEngineController"),
    TARGET_STRING(""), 12, 0, 0, 0, 3 },

  { 49, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/SiEngineController"),
    TARGET_STRING(""), 13, 0, 0, 0, 3 },

  { 50, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/SiEngineController"),
    TARGET_STRING(""), 14, 0, 0, 0, 3 },

  { 51, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/Transmission Control Module (TCM)"),
    TARGET_STRING("GearCmd"), 0, 0, 0, 0, 2 },

  { 52, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Constant"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 53, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Manual Switch"),
    TARGET_STRING("IgSw"), 0, 1, 0, 0, 1 },

  { 54, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Drivetrain/Drivetrain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 55, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Drivetrain/Drivetrain"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 56, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Drivetrain/Drivetrain"),
    TARGET_STRING(""), 3, 1, 0, 0, 1 },

  { 57, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Drivetrain/Drivetrain"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 58, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Drivetrain/Drivetrain"),
    TARGET_STRING(""), 5, 0, 0, 0, 1 },

  { 59, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Drivetrain Plant Input/Transfer Fcn"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 60, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Drivetrain Plant Input/First Order Hold"),
    TARGET_STRING("Cltch1Cmd"), 0, 0, 0, 0, 1 },

  { 61, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Drivetrain Plant Input/First Order Hold1"),
    TARGET_STRING("BrkCmd"), 0, 0, 0, 0, 1 },

  { 62, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Drivetrain Plant Input/First Order Hold2"),
    TARGET_STRING("GearCmd"), 0, 0, 0, 0, 1 },

  { 63, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Electric Plant/Battery"),
    TARGET_STRING("BattSoc"), 0, 0, 0, 0, 1 },

  { 64, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Electric Plant/Battery"),
    TARGET_STRING("BattV"), 1, 0, 0, 0, 1 },

  { 65, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Electric Plant/Battery"),
    TARGET_STRING("BattCrnt"), 2, 0, 0, 0, 1 },

  { 66, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Electric Plant/Battery"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 67, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Electric Plant/Battery Discharge Dynamics"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 68, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Electric Plant/Motor Coupling Dynamics"),
    TARGET_STRING("MotTrq"), 0, 0, 0, 0, 1 },

  { 69, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Electric Plant Input/First Order Hold"),
    TARGET_STRING("MotTrqCmd"), 0, 0, 0, 0, 1 },

  { 70, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 71, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 72, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 73, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine"),
    TARGET_STRING(""), 5, 0, 0, 0, 1 },

  { 74, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine"),
    TARGET_STRING(""), 6, 0, 0, 0, 1 },

  { 75, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine"),
    TARGET_STRING(""), 7, 0, 0, 0, 1 },

  { 76, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine"),
    TARGET_STRING(""), 8, 0, 0, 0, 1 },

  { 77, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine"),
    TARGET_STRING(""), 9, 0, 0, 0, 1 },

  { 78, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine"),
    TARGET_STRING(""), 10, 0, 0, 0, 1 },

  { 79, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine"),
    TARGET_STRING(""), 11, 0, 0, 0, 1 },

  { 80, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine"),
    TARGET_STRING(""), 12, 0, 0, 0, 1 },

  { 81, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine"),
    TARGET_STRING(""), 13, 0, 0, 0, 1 },

  { 82, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine"),
    TARGET_STRING(""), 15, 0, 0, 0, 1 },

  { 83, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine"),
    TARGET_STRING(""), 18, 0, 0, 0, 1 },

  { 84, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine"),
    TARGET_STRING(""), 19, 0, 0, 0, 1 },

  { 85, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine"),
    TARGET_STRING(""), 30, 0, 0, 0, 1 },

  { 86, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine"),
    TARGET_STRING(""), 31, 0, 0, 0, 1 },

  { 87, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine"),
    TARGET_STRING(""), 32, 0, 0, 0, 1 },

  { 88, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine"),
    TARGET_STRING(""), 33, 0, 0, 0, 1 },

  { 89, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine"),
    TARGET_STRING(""), 35, 0, 0, 0, 0 },

  { 90, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 91, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 92, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold10"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 93, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold11"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 94, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold12"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 95, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold13"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 96, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold14"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 97, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 98, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 99, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 100, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold5"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 101, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold6"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 102, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold7"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 103, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold8"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 104, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold9"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 105, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Engine Plant Input/Unit Conversion15"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 106, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Visualization/Emission Calculations/m to km"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 107, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Visualization/Emission Calculations/m to mi"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 108, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Visualization/Emission Calculations/L//100 Km Calc"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 109, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Visualization/Emission Calculations/L//100 Km Calc1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 110, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Visualization/Emission Calculations/L//100 Km Calc2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 111, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Visualization/Emission Calculations/L//100 Km Calc3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 112, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Visualization/Performance Calculations/US EPA kwh//USgal equivalent"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 113, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Visualization/Performance Calculations/s per h"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 114, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Visualization/Performance Calculations/w per kw"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 115, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Visualization/Performance Calculations/m to 100Km"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 116, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Visualization/Performance Calculations/m^3 to US Gal"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 117, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Visualization/Performance Calculations/US MPG Calc"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 118, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Visualization/Performance Calculations/Add"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 119, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Visualization/Performance Calculations/Sqrt"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 120, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/Hybrid Control Module (HCM)/Hybrid Control Module (HCM) - Optimal"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 121, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/Hybrid Control Module (HCM)/Hybrid Control Module (HCM) - Optimal"),
    TARGET_STRING(""), 1, 0, 0, 0, 2 },

  { 122, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/Hybrid Control Module (HCM)/Hybrid Control Module (HCM) - Optimal"),
    TARGET_STRING(""), 2, 0, 0, 0, 2 },

  { 123, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/Hybrid Control Module (HCM)/Hybrid Control Module (HCM) - Optimal"),
    TARGET_STRING(""), 3, 0, 0, 0, 2 },

  { 124, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/Hybrid Control Module (HCM)/Hybrid Control Module (HCM) - Optimal"),
    TARGET_STRING(""), 5, 0, 0, 0, 2 },

  { 125, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/Hybrid Control Module (HCM)/Hybrid Control Module (HCM) - Optimal"),
    TARGET_STRING(""), 6, 0, 0, 0, 2 },

  { 126, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/repeat"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 127, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/tFinal"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 128, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/Digital Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 4 },

  { 129, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/1-D Lookup Table"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 130, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/Add1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 131, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Electric Plant/Electric Machine/MotMapped"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 132, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Passenger Car/Electric Plant/Electric Machine/MotMapped"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 133, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 134, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Routing/Error Metrics/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 135, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Routing/Error Metrics/Switch"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 136, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Routing/Error Metrics/Unit Delay"),
    TARGET_STRING(""), 0, 0, 1, 0, 2 },

  { 137, 13, TARGET_STRING(
    "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Shift/Basic/Shift Controller"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 138, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/Constant"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 139, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/Logical Operator2"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 140, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Cont LPF/Constant"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 141, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Cont LPF/Divide"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 142, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/Constant"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 143, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/Logical Operator2"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 144, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Shift/Basic/Reverse Change/Constant"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 145, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Shift/Basic/Reverse Change/Constant1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 146, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Shift/Basic/Reverse Change/Logical Operator"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 147, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Shift/Basic/Reverse Change/Switch"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 148, 2, TARGET_STRING(
    "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold/Pass Through"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 149, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold/NOT"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 150, 5, TARGET_STRING(
    "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/Signal Hold/Pass Through"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 151, 0, TARGET_STRING(
    "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/Signal Hold/NOT"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 152, 2, TARGET_STRING(
    "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold/Pass Through/u"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 153, 5, TARGET_STRING(
    "HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/Signal Hold/Pass Through/u"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 154, TARGET_STRING("HevP4ReferenceApplication/Environment/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 155, TARGET_STRING("HevP4ReferenceApplication/Environment/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 156, TARGET_STRING("HevP4ReferenceApplication/Environment/Constant6"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 157, TARGET_STRING("HevP4ReferenceApplication/Environment/Constant7"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 158, TARGET_STRING("HevP4ReferenceApplication/Visualization/m//s to mph"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 159, TARGET_STRING("HevP4ReferenceApplication/Visualization/rad//s to rpm"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 160, TARGET_STRING("HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver"),
    TARGET_STRING("m"), 0, 0, 0 },

  { 161, TARGET_STRING("HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver"),
    TARGET_STRING("Kpt"), 0, 0, 0 },

  { 162, TARGET_STRING("HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver"),
    TARGET_STRING("tau"), 0, 0, 0 },

  { 163, TARGET_STRING("HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver"),
    TARGET_STRING("L"), 0, 0, 0 },

  { 164, TARGET_STRING("HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver"),
    TARGET_STRING("aR"), 0, 0, 0 },

  { 165, TARGET_STRING("HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver"),
    TARGET_STRING("bR"), 0, 0, 0 },

  { 166, TARGET_STRING("HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver"),
    TARGET_STRING("cR"), 0, 0, 0 },

  { 167, TARGET_STRING("HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver"),
    TARGET_STRING("g"), 0, 0, 0 },

  { 168, TARGET_STRING("HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver"),
    TARGET_STRING("GearInit"), 0, 0, 0 },

  { 169, TARGET_STRING("HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver"),
    TARGET_STRING("tShift"), 0, 0, 0 },

  { 170, TARGET_STRING("HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 171, TARGET_STRING("HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Manual Switch"),
    TARGET_STRING("CurrentSetting"), 2, 0, 0 },

  { 172, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Drivetrain Plant Input/Transfer Fcn"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 173, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Drivetrain Plant Input/Transfer Fcn"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 174, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Drivetrain Plant Input/First Order Hold"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 175, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Drivetrain Plant Input/First Order Hold"),
    TARGET_STRING("ErrorTolerance"), 0, 0, 0 },

  { 176, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Drivetrain Plant Input/First Order Hold1"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 177, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Drivetrain Plant Input/First Order Hold1"),
    TARGET_STRING("ErrorTolerance"), 0, 0, 0 },

  { 178, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Drivetrain Plant Input/First Order Hold2"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 179, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Drivetrain Plant Input/First Order Hold2"),
    TARGET_STRING("ErrorTolerance"), 0, 0, 0 },

  { 180, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Electric Plant/Battery Discharge Dynamics"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 181, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Electric Plant/Battery Discharge Dynamics"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 182, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Electric Plant/Motor Coupling Dynamics"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 183, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Electric Plant/Motor Coupling Dynamics"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 184, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Electric Plant Input/First Order Hold"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 185, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Electric Plant Input/First Order Hold"),
    TARGET_STRING("ErrorTolerance"), 0, 0, 0 },

  { 186, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Engine Plant Input/Sensor Dynamics"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 187, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Engine Plant Input/Sensor Dynamics"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 188, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 189, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold"),
    TARGET_STRING("ErrorTolerance"), 0, 0, 0 },

  { 190, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold1"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 191, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold1"),
    TARGET_STRING("ErrorTolerance"), 0, 0, 0 },

  { 192, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold10"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 193, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold10"),
    TARGET_STRING("ErrorTolerance"), 0, 0, 0 },

  { 194, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold11"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 195, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold11"),
    TARGET_STRING("ErrorTolerance"), 0, 0, 0 },

  { 196, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold12"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 197, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold12"),
    TARGET_STRING("ErrorTolerance"), 0, 0, 0 },

  { 198, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold13"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 199, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold13"),
    TARGET_STRING("ErrorTolerance"), 0, 0, 0 },

  { 200, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold14"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 201, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold14"),
    TARGET_STRING("ErrorTolerance"), 0, 0, 0 },

  { 202, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold2"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 203, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold2"),
    TARGET_STRING("ErrorTolerance"), 0, 0, 0 },

  { 204, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold3"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 205, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold3"),
    TARGET_STRING("ErrorTolerance"), 0, 0, 0 },

  { 206, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold4"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 207, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold4"),
    TARGET_STRING("ErrorTolerance"), 0, 0, 0 },

  { 208, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold5"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 209, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold5"),
    TARGET_STRING("ErrorTolerance"), 0, 0, 0 },

  { 210, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold6"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 211, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold6"),
    TARGET_STRING("ErrorTolerance"), 0, 0, 0 },

  { 212, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold7"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 213, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold7"),
    TARGET_STRING("ErrorTolerance"), 0, 0, 0 },

  { 214, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold8"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 215, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold8"),
    TARGET_STRING("ErrorTolerance"), 0, 0, 0 },

  { 216, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold9"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 217, TARGET_STRING("HevP4ReferenceApplication/Passenger Car/Engine Plant Input/First Order Hold9"),
    TARGET_STRING("ErrorTolerance"), 0, 0, 0 },

  { 218, TARGET_STRING("HevP4ReferenceApplication/Visualization/Emission Calculations/Kg to g"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 219, TARGET_STRING("HevP4ReferenceApplication/Visualization/Emission Calculations/Kg to g "),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 220, TARGET_STRING("HevP4ReferenceApplication/Visualization/Emission Calculations/Kg to g  "),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 221, TARGET_STRING("HevP4ReferenceApplication/Visualization/Emission Calculations/Kg to g   "),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 222, TARGET_STRING("HevP4ReferenceApplication/Visualization/Emission Calculations/m to km"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 223, TARGET_STRING("HevP4ReferenceApplication/Visualization/Emission Calculations/m to mi"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 224, TARGET_STRING("HevP4ReferenceApplication/Visualization/Emission Calculations/Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 225, TARGET_STRING("HevP4ReferenceApplication/Visualization/Emission Calculations/Integrator1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 226, TARGET_STRING("HevP4ReferenceApplication/Visualization/Emission Calculations/Integrator2"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 227, TARGET_STRING("HevP4ReferenceApplication/Visualization/Emission Calculations/Integrator3"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 228, TARGET_STRING("HevP4ReferenceApplication/Visualization/Emission Calculations/Integrator4"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 229, TARGET_STRING("HevP4ReferenceApplication/Visualization/Emission Calculations/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 230, TARGET_STRING("HevP4ReferenceApplication/Visualization/Emission Calculations/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 231, TARGET_STRING("HevP4ReferenceApplication/Visualization/Emission Calculations/Saturation1"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 232, TARGET_STRING("HevP4ReferenceApplication/Visualization/Emission Calculations/Saturation1"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 233, TARGET_STRING("HevP4ReferenceApplication/Visualization/Performance Calculations/US EPA kwh//USgal equivalent"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 234, TARGET_STRING("HevP4ReferenceApplication/Visualization/Performance Calculations/s per h"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 235, TARGET_STRING("HevP4ReferenceApplication/Visualization/Performance Calculations/w per kw"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 236, TARGET_STRING("HevP4ReferenceApplication/Visualization/Performance Calculations/m to 100Km"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 237, TARGET_STRING("HevP4ReferenceApplication/Visualization/Performance Calculations/m to mile"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 238, TARGET_STRING("HevP4ReferenceApplication/Visualization/Performance Calculations/m^3 per gal"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 239, TARGET_STRING("HevP4ReferenceApplication/Visualization/Performance Calculations/m^3 to US Gal"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 240, TARGET_STRING("HevP4ReferenceApplication/Visualization/Performance Calculations/Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 241, TARGET_STRING("HevP4ReferenceApplication/Visualization/Performance Calculations/Integrator1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 242, TARGET_STRING("HevP4ReferenceApplication/Visualization/Performance Calculations/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 243, TARGET_STRING("HevP4ReferenceApplication/Visualization/Performance Calculations/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 244, TARGET_STRING("HevP4ReferenceApplication/Visualization/Performance Calculations/Saturation1"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 245, TARGET_STRING("HevP4ReferenceApplication/Visualization/Performance Calculations/Saturation1"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 246, TARGET_STRING("HevP4ReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/repeat"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 247, TARGET_STRING("HevP4ReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/tFinal"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 248, TARGET_STRING("HevP4ReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/Hit  Crossing"),
    TARGET_STRING("HitCrossingOffset"), 0, 0, 0 },

  { 249, TARGET_STRING("HevP4ReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/1-D Lookup Table"),
    TARGET_STRING("Table"), 0, 2, 0 },

  { 250, TARGET_STRING("HevP4ReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/1-D Lookup Table"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 2, 0 },

  { 251, TARGET_STRING("HevP4ReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 252, TARGET_STRING("HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Ignition Switch Profile1/FromWs"),
    TARGET_STRING("Time0"), 0, 3, 0 },

  { 253, TARGET_STRING("HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Ignition Switch Profile1/FromWs"),
    TARGET_STRING("Data0"), 0, 3, 0 },

  { 254, TARGET_STRING("HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Routing/Error Metrics/Integrator2"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 255, TARGET_STRING("HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Routing/Error Metrics/Unit Delay"),
    TARGET_STRING("InitialCondition"), 0, 4, 0 },

  { 256, TARGET_STRING("HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold"),
    TARGET_STRING("IC"), 0, 0, 0 },

  { 257, TARGET_STRING("HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 258, TARGET_STRING("HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/0~1"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 259, TARGET_STRING("HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/0~1"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 260, TARGET_STRING("HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 261, TARGET_STRING("HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 262, TARGET_STRING("HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Cont LPF/Integrator1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 263, TARGET_STRING("HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/Signal Hold"),
    TARGET_STRING("IC"), 0, 0, 0 },

  { 264, TARGET_STRING("HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 265, TARGET_STRING("HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/-1~0"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 266, TARGET_STRING("HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/-1~0"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 267, TARGET_STRING("HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 268, TARGET_STRING("HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 269, TARGET_STRING("HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Shift/Basic/Reverse Change/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 270, TARGET_STRING("HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Shift/Basic/Reverse Change/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 271, TARGET_STRING("HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Shift/Basic/Reverse Change/Compare To Zero/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 272, TARGET_STRING("HevP4ReferenceApplication/Longitudinal Driver/Closed Loop/Longitudinal Driver/Longitudinal Driver/Shift/Basic/Reverse Change/Compare To Zero1/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  {
    0, (NULL), (NULL), 0, 0, 0
  }
};

/* Tunable variable parameters */
static const rtwCAPI_ModelParameters rtModelParameters[] = {
  /* addrMapIndex, varName, dataTypeIndex, dimIndex, fixPtIndex */
  { 0, (NULL), 0, 0, 0 }
};

#ifndef HOST_CAPI_BUILD

/* Declare Data Addresses statically */
static void* rtDataAddrMap[] = {
  &HevP4ReferenceApplication_B.Grade,  /* 0: Signal */
  &HevP4ReferenceApplication_B.wind_x, /* 1: Signal */
  &HevP4ReferenceApplication_B.Temp,   /* 2: Signal */
  &HevP4ReferenceApplication_B.Baro,   /* 3: Signal */
  &HevP4ReferenceApplication_B.mstomph[0],/* 4: Signal */
  &HevP4ReferenceApplication_B.radstorpm,/* 5: Signal */
  &HevP4ReferenceApplication_B.AccelPdl,/* 6: Signal */
  &HevP4ReferenceApplication_B.RateTransition1,/* 7: Signal */
  &HevP4ReferenceApplication_B.RateTransition10,/* 8: Signal */
  &HevP4ReferenceApplication_B.RateTransition11,/* 9: Signal */
  &HevP4ReferenceApplication_B.BattV_k,/* 10: Signal */
  &HevP4ReferenceApplication_B.MotSpd, /* 11: Signal */
  &HevP4ReferenceApplication_B.VehSpdFdbk,/* 12: Signal */
  &HevP4ReferenceApplication_B.EngSpd_d,/* 13: Signal */
  &HevP4ReferenceApplication_B.TransGear,/* 14: Signal */
  &HevP4ReferenceApplication_B.BattSoc_l,/* 15: Signal */
  &HevP4ReferenceApplication_B.RateTransition2,/* 16: Signal */
  &HevP4ReferenceApplication_B.RateTransition21,/* 17: Signal */
  &HevP4ReferenceApplication_B.RateTransition22,/* 18: Signal */
  &HevP4ReferenceApplication_B.RateTransition23,/* 19: Signal */
  &HevP4ReferenceApplication_B.RateTransition25,/* 20: Signal */
  &HevP4ReferenceApplication_B.RateTransition26,/* 21: Signal */
  &HevP4ReferenceApplication_B.RateTransition27,/* 22: Signal */
  &HevP4ReferenceApplication_B.RateTransition28,/* 23: Signal */
  &HevP4ReferenceApplication_B.IgnSwtch,/* 24: Signal */
  &HevP4ReferenceApplication_B.RateTransition3,/* 25: Signal */
  &HevP4ReferenceApplication_B.RateTransition30,/* 26: Signal */
  &HevP4ReferenceApplication_B.RateTransition31,/* 27: Signal */
  &HevP4ReferenceApplication_B.RateTransition32,/* 28: Signal */
  &HevP4ReferenceApplication_B.RateTransition33,/* 29: Signal */
  &HevP4ReferenceApplication_B.RateTransition4,/* 30: Signal */
  &HevP4ReferenceApplication_B.RateTransition5,/* 31: Signal */
  &HevP4ReferenceApplication_B.RateTransition6,/* 32: Signal */
  &HevP4ReferenceApplication_B.RateTransition7,/* 33: Signal */
  &HevP4ReferenceApplication_B.DecelPdl,/* 34: Signal */
  &HevP4ReferenceApplication_B.RateTransition9,/* 35: Signal */
  &HevP4ReferenceApplication_B.SiEngineController_o1,/* 36: Signal */
  &HevP4ReferenceApplication_B.SiEngineController_o2,/* 37: Signal */
  &HevP4ReferenceApplication_B.SiEngineController_o3,/* 38: Signal */
  &HevP4ReferenceApplication_B.SiEngineController_o4,/* 39: Signal */
  &HevP4ReferenceApplication_B.SiEngineController_o5,/* 40: Signal */
  &HevP4ReferenceApplication_B.SiEngineController_o6,/* 41: Signal */
  &HevP4ReferenceApplication_B.SiEngineController_o7,/* 42: Signal */
  &HevP4ReferenceApplication_B.SiEngineController_o8,/* 43: Signal */
  &HevP4ReferenceApplication_B.SiEngineController_o9,/* 44: Signal */
  &HevP4ReferenceApplication_B.SiEngineController_o10,/* 45: Signal */
  &HevP4ReferenceApplication_B.SiEngineController_o11,/* 46: Signal */
  &HevP4ReferenceApplication_B.SiEngineController_o12,/* 47: Signal */
  &HevP4ReferenceApplication_B.ClsdLpFuelMult,/* 48: Signal */
  &HevP4ReferenceApplication_B.SiEngineController_o14,/* 49: Signal */
  &HevP4ReferenceApplication_B.SiEngineController_o15,/* 50: Signal */
  &HevP4ReferenceApplication_B.GearCmd,/* 51: Signal */
  &HevP4ReferenceApplication_B.Constant_fb,/* 52: Signal */
  &HevP4ReferenceApplication_B.IgSw,   /* 53: Signal */
  &HevP4ReferenceApplication_B.xdot,   /* 54: Signal */
  &HevP4ReferenceApplication_B.Drivetrain_o2,/* 55: Signal */
  &HevP4ReferenceApplication_B.Drivetrain_o4,/* 56: Signal */
  &HevP4ReferenceApplication_B.Drivetrain_o5,/* 57: Signal */
  &HevP4ReferenceApplication_B.Drivetrain_o6,/* 58: Signal */
  &HevP4ReferenceApplication_B.TransferFcn,/* 59: Signal */
  &HevP4ReferenceApplication_B.Cltch1Cmd_j,/* 60: Signal */
  &HevP4ReferenceApplication_B.BrkCmd_f,/* 61: Signal */
  &HevP4ReferenceApplication_B.GearCmd_g,/* 62: Signal */
  &HevP4ReferenceApplication_B.BattSoc,/* 63: Signal */
  &HevP4ReferenceApplication_B.BattV,  /* 64: Signal */
  &HevP4ReferenceApplication_B.BattCrnt,/* 65: Signal */
  &HevP4ReferenceApplication_B.Battery_o4,/* 66: Signal */
  &HevP4ReferenceApplication_B.BatteryDischargeDynamics,/* 67: Signal */
  &HevP4ReferenceApplication_B.MotTrq, /* 68: Signal */
  &HevP4ReferenceApplication_B.MotTrqCmd,/* 69: Signal */
  &HevP4ReferenceApplication_B.SiMappedEngine_o1,/* 70: Signal */
  &HevP4ReferenceApplication_B.EngSpd, /* 71: Signal */
  &HevP4ReferenceApplication_B.SiMappedEngine_o5,/* 72: Signal */
  &HevP4ReferenceApplication_B.SiMappedEngine_o6,/* 73: Signal */
  &HevP4ReferenceApplication_B.SiMappedEngine_o7,/* 74: Signal */
  &HevP4ReferenceApplication_B.SiMappedEngine_o8,/* 75: Signal */
  &HevP4ReferenceApplication_B.SiMappedEngine_o9,/* 76: Signal */
  &HevP4ReferenceApplication_B.SiMappedEngine_o10,/* 77: Signal */
  &HevP4ReferenceApplication_B.SiMappedEngine_o11,/* 78: Signal */
  &HevP4ReferenceApplication_B.SiMappedEngine_o12,/* 79: Signal */
  &HevP4ReferenceApplication_B.SiMappedEngine_o13,/* 80: Signal */
  &HevP4ReferenceApplication_B.SiMappedEngine_o14,/* 81: Signal */
  &HevP4ReferenceApplication_B.SiMappedEngine_o16,/* 82: Signal */
  &HevP4ReferenceApplication_B.ExhManGasTemp,/* 83: Signal */
  &HevP4ReferenceApplication_B.SiMappedEngine_o20,/* 84: Signal */
  &HevP4ReferenceApplication_B.SiMappedEngine_o31,/* 85: Signal */
  &HevP4ReferenceApplication_B.SiMappedEngine_o32,/* 86: Signal */
  &HevP4ReferenceApplication_B.SiMappedEngine_o33,/* 87: Signal */
  &HevP4ReferenceApplication_B.SiMappedEngine_o34,/* 88: Signal */
  &HevP4ReferenceApplication_B.SiMappedEngine_o36,/* 89: Signal */
  &HevP4ReferenceApplication_B.FirstOrderHold,/* 90: Signal */
  &HevP4ReferenceApplication_B.FirstOrderHold1,/* 91: Signal */
  &HevP4ReferenceApplication_B.FirstOrderHold10,/* 92: Signal */
  &HevP4ReferenceApplication_B.FirstOrderHold11,/* 93: Signal */
  &HevP4ReferenceApplication_B.FirstOrderHold12,/* 94: Signal */
  &HevP4ReferenceApplication_B.FirstOrderHold13,/* 95: Signal */
  &HevP4ReferenceApplication_B.FirstOrderHold14,/* 96: Signal */
  &HevP4ReferenceApplication_B.FirstOrderHold2,/* 97: Signal */
  &HevP4ReferenceApplication_B.FirstOrderHold3,/* 98: Signal */
  &HevP4ReferenceApplication_B.FirstOrderHold4,/* 99: Signal */
  &HevP4ReferenceApplication_B.FirstOrderHold5,/* 100: Signal */
  &HevP4ReferenceApplication_B.FirstOrderHold6,/* 101: Signal */
  &HevP4ReferenceApplication_B.FirstOrderHold7,/* 102: Signal */
  &HevP4ReferenceApplication_B.FirstOrderHold8,/* 103: Signal */
  &HevP4ReferenceApplication_B.FirstOrderHold9,/* 104: Signal */
  &HevP4ReferenceApplication_B.UnitConversion15,/* 105: Signal */
  &HevP4ReferenceApplication_B.mtokm,  /* 106: Signal */
  &HevP4ReferenceApplication_B.mtomi,  /* 107: Signal */
  &HevP4ReferenceApplication_B.L100KmCalc,/* 108: Signal */
  &HevP4ReferenceApplication_B.L100KmCalc1,/* 109: Signal */
  &HevP4ReferenceApplication_B.L100KmCalc2,/* 110: Signal */
  &HevP4ReferenceApplication_B.L100KmCalc3,/* 111: Signal */
  &HevP4ReferenceApplication_B.USEPAkwhUSgalequivalent,/* 112: Signal */
  &HevP4ReferenceApplication_B.sperh,  /* 113: Signal */
  &HevP4ReferenceApplication_B.wperkw, /* 114: Signal */
  &HevP4ReferenceApplication_B.mto100Km,/* 115: Signal */
  &HevP4ReferenceApplication_B.m3toUSGal,/* 116: Signal */
  &HevP4ReferenceApplication_B.USMPGCalc,/* 117: Signal */
  &HevP4ReferenceApplication_B.Add,    /* 118: Signal */
  &HevP4ReferenceApplication_B.Sqrt,   /* 119: Signal */
  &HevP4ReferenceApplication_B.EngTrqCmd,/* 120: Signal */
  &HevP4ReferenceApplication_B.MtrTrqCmd,/* 121: Signal */
  &HevP4ReferenceApplication_B.BrkCmd, /* 122: Signal */
  &HevP4ReferenceApplication_B.Cltch1Cmd,/* 123: Signal */
  &HevP4ReferenceApplication_B.Neutral,/* 124: Signal */
  &HevP4ReferenceApplication_B.WhlTrqCmd,/* 125: Signal */
  &HevP4ReferenceApplication_B.repeat, /* 126: Signal */
  &HevP4ReferenceApplication_B.tFinal, /* 127: Signal */
  &HevP4ReferenceApplication_B.DigitalClock,/* 128: Signal */
  &HevP4ReferenceApplication_B.uDLookupTable,/* 129: Signal */
  &HevP4ReferenceApplication_B.Add1,   /* 130: Signal */
  &HevP4ReferenceApplication_B.MotMapped_o1,/* 131: Signal */
  &HevP4ReferenceApplication_B.MotMapped_o2,/* 132: Signal */
  &HevP4ReferenceApplication_B.Gain,   /* 133: Signal */
  &HevP4ReferenceApplication_B.Product,/* 134: Signal */
  &HevP4ReferenceApplication_B.Switch_c[0],/* 135: Signal */
  &HevP4ReferenceApplication_B.UnitDelay[0],/* 136: Signal */
  &HevP4ReferenceApplication_B.Gear,   /* 137: Signal */
  &HevP4ReferenceApplication_B.Constant,/* 138: Signal */
  &HevP4ReferenceApplication_B.LogicalOperator2,/* 139: Signal */
  &HevP4ReferenceApplication_B.Constant_f,/* 140: Signal */
  &HevP4ReferenceApplication_B.Divide, /* 141: Signal */
  &HevP4ReferenceApplication_B.Constant_n,/* 142: Signal */
  &HevP4ReferenceApplication_B.LogicalOperator2_o,/* 143: Signal */
  &HevP4ReferenceApplication_B.Constant_g,/* 144: Signal */
  &HevP4ReferenceApplication_B.Constant1,/* 145: Signal */
  &HevP4ReferenceApplication_B.LogicalOperator,/* 146: Signal */
  &HevP4ReferenceApplication_B.Switch[0],/* 147: Signal */
  &HevP4ReferenceApplication_B.PassThrough.u,/* 148: Signal */
  &HevP4ReferenceApplication_B.NOT,    /* 149: Signal */
  &HevP4ReferenceApplication_B.PassThrough_b.u,/* 150: Signal */
  &HevP4ReferenceApplication_B.NOT_n,  /* 151: Signal */
  &HevP4ReferenceApplication_B.PassThrough.u,/* 152: Signal */
  &HevP4ReferenceApplication_B.PassThrough_b.u,/* 153: Signal */
  &HevP4ReferenceApplication_P.Constant2_Value,/* 154: Block Parameter */
  &HevP4ReferenceApplication_P.Constant3_Value,/* 155: Block Parameter */
  &HevP4ReferenceApplication_P.Constant6_Value,/* 156: Block Parameter */
  &HevP4ReferenceApplication_P.Constant7_Value,/* 157: Block Parameter */
  &HevP4ReferenceApplication_P.mstomph_Gain,/* 158: Block Parameter */
  &HevP4ReferenceApplication_P.radstorpm_Gain,/* 159: Block Parameter */
  &HevP4ReferenceApplication_P.LongitudinalDriver_m,/* 160: Mask Parameter */
  &HevP4ReferenceApplication_P.LongitudinalDriver_Kpt,/* 161: Mask Parameter */
  &HevP4ReferenceApplication_P.LongitudinalDriver_tau,/* 162: Mask Parameter */
  &HevP4ReferenceApplication_P.LongitudinalDriver_L,/* 163: Mask Parameter */
  &HevP4ReferenceApplication_P.LongitudinalDriver_aR,/* 164: Mask Parameter */
  &HevP4ReferenceApplication_P.LongitudinalDriver_bR,/* 165: Mask Parameter */
  &HevP4ReferenceApplication_P.LongitudinalDriver_cR,/* 166: Mask Parameter */
  &HevP4ReferenceApplication_P.LongitudinalDriver_g,/* 167: Mask Parameter */
  &HevP4ReferenceApplication_P.LongitudinalDriver_GearInit,/* 168: Mask Parameter */
  &HevP4ReferenceApplication_P.LongitudinalDriver_tShift,/* 169: Mask Parameter */
  &HevP4ReferenceApplication_P.Constant_Value_e,/* 170: Block Parameter */
  &HevP4ReferenceApplication_P.ManualSwitch_CurrentSetting,/* 171: Block Parameter */
  &HevP4ReferenceApplication_P.TransferFcn_A,/* 172: Block Parameter */
  &HevP4ReferenceApplication_P.TransferFcn_C,/* 173: Block Parameter */
  &HevP4ReferenceApplication_P.FirstOrderHold_IniOut,/* 174: Block Parameter */
  &HevP4ReferenceApplication_P.FirstOrderHold_ErrTol,/* 175: Block Parameter */
  &HevP4ReferenceApplication_P.FirstOrderHold1_IniOut,/* 176: Block Parameter */
  &HevP4ReferenceApplication_P.FirstOrderHold1_ErrTol,/* 177: Block Parameter */
  &HevP4ReferenceApplication_P.FirstOrderHold2_IniOut,/* 178: Block Parameter */
  &HevP4ReferenceApplication_P.FirstOrderHold2_ErrTol,/* 179: Block Parameter */
  &HevP4ReferenceApplication_P.BatteryDischargeDynamics_A,/* 180: Block Parameter */
  &HevP4ReferenceApplication_P.BatteryDischargeDynamics_C,/* 181: Block Parameter */
  &HevP4ReferenceApplication_P.MotorCouplingDynamics_A,/* 182: Block Parameter */
  &HevP4ReferenceApplication_P.MotorCouplingDynamics_C,/* 183: Block Parameter */
  &HevP4ReferenceApplication_P.FirstOrderHold_IniOut_o,/* 184: Block Parameter */
  &HevP4ReferenceApplication_P.FirstOrderHold_ErrTol_f,/* 185: Block Parameter */
  &HevP4ReferenceApplication_P.SensorDynamics_A,/* 186: Block Parameter */
  &HevP4ReferenceApplication_P.SensorDynamics_C,/* 187: Block Parameter */
  &HevP4ReferenceApplication_P.FirstOrderHold_IniOut_m,/* 188: Block Parameter */
  &HevP4ReferenceApplication_P.FirstOrderHold_ErrTol_g,/* 189: Block Parameter */
  &HevP4ReferenceApplication_P.FirstOrderHold1_IniOut_d,/* 190: Block Parameter */
  &HevP4ReferenceApplication_P.FirstOrderHold1_ErrTol_j,/* 191: Block Parameter */
  &HevP4ReferenceApplication_P.FirstOrderHold10_IniOut,/* 192: Block Parameter */
  &HevP4ReferenceApplication_P.FirstOrderHold10_ErrTol,/* 193: Block Parameter */
  &HevP4ReferenceApplication_P.FirstOrderHold11_IniOut,/* 194: Block Parameter */
  &HevP4ReferenceApplication_P.FirstOrderHold11_ErrTol,/* 195: Block Parameter */
  &HevP4ReferenceApplication_P.FirstOrderHold12_IniOut,/* 196: Block Parameter */
  &HevP4ReferenceApplication_P.FirstOrderHold12_ErrTol,/* 197: Block Parameter */
  &HevP4ReferenceApplication_P.FirstOrderHold13_IniOut,/* 198: Block Parameter */
  &HevP4ReferenceApplication_P.FirstOrderHold13_ErrTol,/* 199: Block Parameter */
  &HevP4ReferenceApplication_P.FirstOrderHold14_IniOut,/* 200: Block Parameter */
  &HevP4ReferenceApplication_P.FirstOrderHold14_ErrTol,/* 201: Block Parameter */
  &HevP4ReferenceApplication_P.FirstOrderHold2_IniOut_g,/* 202: Block Parameter */
  &HevP4ReferenceApplication_P.FirstOrderHold2_ErrTol_f,/* 203: Block Parameter */
  &HevP4ReferenceApplication_P.FirstOrderHold3_IniOut,/* 204: Block Parameter */
  &HevP4ReferenceApplication_P.FirstOrderHold3_ErrTol,/* 205: Block Parameter */
  &HevP4ReferenceApplication_P.FirstOrderHold4_IniOut,/* 206: Block Parameter */
  &HevP4ReferenceApplication_P.FirstOrderHold4_ErrTol,/* 207: Block Parameter */
  &HevP4ReferenceApplication_P.FirstOrderHold5_IniOut,/* 208: Block Parameter */
  &HevP4ReferenceApplication_P.FirstOrderHold5_ErrTol,/* 209: Block Parameter */
  &HevP4ReferenceApplication_P.FirstOrderHold6_IniOut,/* 210: Block Parameter */
  &HevP4ReferenceApplication_P.FirstOrderHold6_ErrTol,/* 211: Block Parameter */
  &HevP4ReferenceApplication_P.FirstOrderHold7_IniOut,/* 212: Block Parameter */
  &HevP4ReferenceApplication_P.FirstOrderHold7_ErrTol,/* 213: Block Parameter */
  &HevP4ReferenceApplication_P.FirstOrderHold8_IniOut,/* 214: Block Parameter */
  &HevP4ReferenceApplication_P.FirstOrderHold8_ErrTol,/* 215: Block Parameter */
  &HevP4ReferenceApplication_P.FirstOrderHold9_IniOut,/* 216: Block Parameter */
  &HevP4ReferenceApplication_P.FirstOrderHold9_ErrTol,/* 217: Block Parameter */
  &HevP4ReferenceApplication_P.Kgtog_Gain,/* 218: Block Parameter */
  &HevP4ReferenceApplication_P.Kgtog_Gain_l,/* 219: Block Parameter */
  &HevP4ReferenceApplication_P.Kgtog_Gain_f,/* 220: Block Parameter */
  &HevP4ReferenceApplication_P.Kgtog_Gain_c,/* 221: Block Parameter */
  &HevP4ReferenceApplication_P.mtokm_Gain,/* 222: Block Parameter */
  &HevP4ReferenceApplication_P.mtomi_Gain,/* 223: Block Parameter */
  &HevP4ReferenceApplication_P.Integrator_IC_p,/* 224: Block Parameter */
  &HevP4ReferenceApplication_P.Integrator1_IC_k,/* 225: Block Parameter */
  &HevP4ReferenceApplication_P.Integrator2_IC,/* 226: Block Parameter */
  &HevP4ReferenceApplication_P.Integrator3_IC,/* 227: Block Parameter */
  &HevP4ReferenceApplication_P.Integrator4_IC,/* 228: Block Parameter */
  &HevP4ReferenceApplication_P.Saturation_UpperSat,/* 229: Block Parameter */
  &HevP4ReferenceApplication_P.Saturation_LowerSat,/* 230: Block Parameter */
  &HevP4ReferenceApplication_P.Saturation1_UpperSat_h,/* 231: Block Parameter */
  &HevP4ReferenceApplication_P.Saturation1_LowerSat_d,/* 232: Block Parameter */
  &HevP4ReferenceApplication_P.USEPAkwhUSgalequivalent_Value,/* 233: Block Parameter */
  &HevP4ReferenceApplication_P.sperh_Value,/* 234: Block Parameter */
  &HevP4ReferenceApplication_P.wperkw_Value,/* 235: Block Parameter */
  &HevP4ReferenceApplication_P.mto100Km_Gain,/* 236: Block Parameter */
  &HevP4ReferenceApplication_P.mtomile_Gain,/* 237: Block Parameter */
  &HevP4ReferenceApplication_P.m3pergal_Gain,/* 238: Block Parameter */
  &HevP4ReferenceApplication_P.m3toUSGal_Gain,/* 239: Block Parameter */
  &HevP4ReferenceApplication_P.Integrator_IC,/* 240: Block Parameter */
  &HevP4ReferenceApplication_P.Integrator1_IC,/* 241: Block Parameter */
  &HevP4ReferenceApplication_P.Saturation_UpperSat_p,/* 242: Block Parameter */
  &HevP4ReferenceApplication_P.Saturation_LowerSat_a,/* 243: Block Parameter */
  &HevP4ReferenceApplication_P.Saturation1_UpperSat,/* 244: Block Parameter */
  &HevP4ReferenceApplication_P.Saturation1_LowerSat,/* 245: Block Parameter */
  &HevP4ReferenceApplication_P.repeat_Value,/* 246: Block Parameter */
  &HevP4ReferenceApplication_P.tFinal_Value,/* 247: Block Parameter */
  &HevP4ReferenceApplication_P.HitCrossing_Offset,/* 248: Block Parameter */
  &HevP4ReferenceApplication_P.uDLookupTable_tableData[0],/* 249: Block Parameter */
  &HevP4ReferenceApplication_P.uDLookupTable_bp01Data[0],/* 250: Block Parameter */
  &HevP4ReferenceApplication_P.Switch_Threshold,/* 251: Block Parameter */
  &HevP4ReferenceApplication_P.FromWs_Time0[0],/* 252: Block Parameter */
  &HevP4ReferenceApplication_P.FromWs_Data0[0],/* 253: Block Parameter */
  &HevP4ReferenceApplication_P.Integrator2_IC_o,/* 254: Block Parameter */
  &HevP4ReferenceApplication_P.UnitDelay_InitialCondition[0],/* 255: Block Parameter */
  &HevP4ReferenceApplication_P.SignalHold_IC,/* 256: Mask Parameter */
  &HevP4ReferenceApplication_P.Constant_Value_f,/* 257: Block Parameter */
  &HevP4ReferenceApplication_P.u1_UpperSat,/* 258: Block Parameter */
  &HevP4ReferenceApplication_P.u1_LowerSat,/* 259: Block Parameter */
  &HevP4ReferenceApplication_P.Saturation_UpperSat_j,/* 260: Block Parameter */
  &HevP4ReferenceApplication_P.Saturation_LowerSat_f,/* 261: Block Parameter */
  &HevP4ReferenceApplication_P.Integrator1_IC_f,/* 262: Block Parameter */
  &HevP4ReferenceApplication_P.SignalHold_IC_b,/* 263: Mask Parameter */
  &HevP4ReferenceApplication_P.Constant_Value_fg,/* 264: Block Parameter */
  &HevP4ReferenceApplication_P.u0_UpperSat,/* 265: Block Parameter */
  &HevP4ReferenceApplication_P.u0_LowerSat,/* 266: Block Parameter */
  &HevP4ReferenceApplication_P.Saturation_UpperSat_o,/* 267: Block Parameter */
  &HevP4ReferenceApplication_P.Saturation_LowerSat_n,/* 268: Block Parameter */
  &HevP4ReferenceApplication_P.Constant_Value_a,/* 269: Block Parameter */
  &HevP4ReferenceApplication_P.Constant1_Value,/* 270: Block Parameter */
  &HevP4ReferenceApplication_P.Constant_Value,/* 271: Block Parameter */
  &HevP4ReferenceApplication_P.Constant_Value_l,/* 272: Block Parameter */
};

/* Declare Data Run-Time Dimension Buffer Addresses statically */
static int32_T* rtVarDimsAddrMap[] = {
  (NULL)
};

#endif

/* Data Type Map - use dataTypeMapIndex to access this structure */
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, *
   * isComplex, isPointer, enumStorageType */
  { "double", "real_T", 0, 0, sizeof(real_T), SS_DOUBLE, 0, 0, 0 },

  { "unsigned char", "boolean_T", 0, 0, sizeof(boolean_T), SS_BOOLEAN, 0, 0, 0 },

  { "unsigned char", "uint8_T", 0, 0, sizeof(uint8_T), SS_UINT8, 0, 0, 0 }
};

#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif

/* Structure Element Map - use elemMapIndex to access this structure */
static TARGET_CONST rtwCAPI_ElementMap rtElementMap[] = {
  /* elementName, elementOffset, dataTypeIndex, dimIndex, fxpIndex */
  { (NULL), 0, 0, 0, 0 },
};

/* Dimension Map - use dimensionMapIndex to access elements of ths structure*/
static const rtwCAPI_DimensionMap rtDimensionMap[] = {
  /* dataOrientation, dimArrayIndex, numDims, vardimsIndex */
  { rtwCAPI_SCALAR, 0, 2, 0 },

  { rtwCAPI_VECTOR, 2, 2, 0 },

  { rtwCAPI_VECTOR, 4, 2, 0 },

  { rtwCAPI_VECTOR, 6, 2, 0 },

  { rtwCAPI_VECTOR, 8, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static const uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1,                                   /* 1 */
  2,                                   /* 2 */
  1,                                   /* 3 */
  2474,                                /* 4 */
  1,                                   /* 5 */
  6,                                   /* 6 */
  1,                                   /* 7 */
  1,                                   /* 8 */
  2                                    /* 9 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.0, 1.0, 0.01, 49.480000000000004, 0.5
};

/* Fixed Point Map */
static const rtwCAPI_FixPtMap rtFixPtMap[] = {
  /* fracSlopePtr, biasPtr, scaleType, wordLength, exponent, isSigned */
  { (NULL), (NULL), rtwCAPI_FIX_RESERVED, 0, 0, 0 },
};

/* Sample Time Map - use sTimeIndex to access elements of ths structure */
static const rtwCAPI_SampleTimeMap rtSampleTimeMap[] = {
  /* samplePeriodPtr, sampleOffsetPtr, tid, samplingMode */
  { (const void *) &rtcapiStoredFloats[0], (const void *) &rtcapiStoredFloats[1],
    1, 0 },

  { (const void *) &rtcapiStoredFloats[0], (const void *) &rtcapiStoredFloats[0],
    0, 0 },

  { (const void *) &rtcapiStoredFloats[2], (const void *) &rtcapiStoredFloats[0],
    2, 0 },

  { (const void *) &rtcapiStoredFloats[3], (const void *) &rtcapiStoredFloats[0],
    5, 0 },

  { (const void *) &rtcapiStoredFloats[4], (const void *) &rtcapiStoredFloats[0],
    4, 0 }
};

static rtwCAPI_ModelMappingStaticInfo mmiStatic = {
  /* Signals:{signals, numSignals,
   *           rootInputs, numRootInputs,
   *           rootOutputs, numRootOutputs},
   * Params: {blockParameters, numBlockParameters,
   *          modelParameters, numModelParameters},
   * States: {states, numStates},
   * Maps:   {dataTypeMap, dimensionMap, fixPtMap,
   *          elementMap, sampleTimeMap, dimensionArray},
   * TargetType: targetType
   */
  { rtBlockSignals, 154,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 119,
    rtModelParameters, 0 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 2013117554U,
    3741032854U,
    4261710212U,
    4282437628U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  HevP4ReferenceApplication_GetCAPIStaticMap(void)
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void HevP4ReferenceApplication_InitializeDataMapInfo(void)
{
  /* Set C-API version */
  rtwCAPI_SetVersion((*rt_dataMapInfoPtr).mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap((*rt_dataMapInfoPtr).mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap((*rt_dataMapInfoPtr).mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap((*rt_dataMapInfoPtr).mmi, rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap((*rt_dataMapInfoPtr).mmi, rtVarDimsAddrMap);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo((*rt_dataMapInfoPtr).mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray((*rt_dataMapInfoPtr).mmi, (*rt_dataMapInfoPtr).
    childMMI);
  rtwCAPI_SetChildMMIArrayLen((*rt_dataMapInfoPtr).mmi, 7);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void HevP4ReferenceApplication_host_InitializeDataMapInfo
    (HevP4ReferenceApplication_host_DataMapInfo_T *dataMap, const char *path)
  {
    /* Set C-API version */
    rtwCAPI_SetVersion(dataMap->mmi, 1);

    /* Cache static C-API data into the Real-time Model Data structure */
    rtwCAPI_SetStaticMap(dataMap->mmi, &mmiStatic);

    /* host data address map is NULL */
    rtwCAPI_SetDataAddressMap(dataMap->mmi, NULL);

    /* host vardims address map is NULL */
    rtwCAPI_SetVarDimsAddressMap(dataMap->mmi, NULL);

    /* Set Instance specific path */
    rtwCAPI_SetPath(dataMap->mmi, path);
    rtwCAPI_SetFullPath(dataMap->mmi, NULL);

    /* Set reference to submodels */
    dataMap->childMMI[0] = &(dataMap->child0.mmi);
    HevP4OptimalController_host_InitializeDataMapInfo(&(dataMap->child0),
      "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/Hybrid Control Module (HCM)/Hybrid Control Module (HCM) - Optimal");
    dataMap->childMMI[1] = &(dataMap->child1.mmi);
    SiEngineController_host_InitializeDataMapInfo(&(dataMap->child1),
      "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/SiEngineController");
    dataMap->childMMI[2] = &(dataMap->child2.mmi);
    HevP4TransmissionController_host_InitializeDataMapInfo(&(dataMap->child2),
      "HevP4ReferenceApplication/Controllers/Powertrain Control Module (PCM)/Transmission Control Module (TCM)");
    dataMap->childMMI[3] = &(dataMap->child3.mmi);
    DrivetrainHevP4_host_InitializeDataMapInfo(&(dataMap->child3),
      "HevP4ReferenceApplication/Passenger Car/Drivetrain/Drivetrain");
    dataMap->childMMI[4] = &(dataMap->child4.mmi);
    BattHevP4_host_InitializeDataMapInfo(&(dataMap->child4),
      "HevP4ReferenceApplication/Passenger Car/Electric Plant/Battery");
    dataMap->childMMI[5] = &(dataMap->child5.mmi);
    MotMappedP4_host_InitializeDataMapInfo(&(dataMap->child5),
      "HevP4ReferenceApplication/Passenger Car/Electric Plant/Electric Machine/MotMapped");
    dataMap->childMMI[6] = &(dataMap->child6.mmi);
    SiMappedEngine_host_InitializeDataMapInfo(&(dataMap->child6),
      "HevP4ReferenceApplication/Passenger Car/Engine/SiMappedEngine");
    rtwCAPI_SetChildMMIArray(dataMap->mmi, dataMap->childMMI);
    rtwCAPI_SetChildMMIArrayLen(dataMap->mmi, 7);
  }

#ifdef __cplusplus

}
#endif
#endif                                 /* HOST_CAPI_BUILD */

/* EOF: HevP4ReferenceApplication_capi.c */
