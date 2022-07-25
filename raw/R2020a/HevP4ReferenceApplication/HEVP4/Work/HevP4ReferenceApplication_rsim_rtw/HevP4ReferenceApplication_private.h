/*
 * HevP4ReferenceApplication_private.h
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

#ifndef RTW_HEADER_HevP4ReferenceApplication_private_h_
#define RTW_HEADER_HevP4ReferenceApplication_private_h_
#include "rtwtypes.h"
#include "model_reference_types.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "HevP4ReferenceApplication.h"
#if !defined(rt_VALIDATE_MEMORY)
#define rt_VALIDATE_MEMORY(S, ptr)     if(!(ptr)) {\
 ssSetErrorStatus(rtS, RT_MEMORY_ALLOCATION_ERROR);\
 }
#endif

#if !defined(rt_FREE)
#if !defined(_WIN32)
#define rt_FREE(ptr)                   if((ptr) != (NULL)) {\
 free((ptr));\
 (ptr) = (NULL);\
 }
#else

/* Visual and other windows compilers declare free without const */
#define rt_FREE(ptr)                   if((ptr) != (NULL)) {\
 free((void *)(ptr));\
 (ptr) = (NULL);\
 }
#endif
#endif

/* Used by FromWorkspace Block: '<S20>/FromWs' */
#ifndef rtInterpolate
# define rtInterpolate(v1,v2,f1,f2)    (((v1)==(v2))?((double)(v1)): (((f1)*((double)(v1)))+((f2)*((double)(v2)))))
#endif

#ifndef rtRound
# define rtRound(v)                    ( ((v) >= 0) ? floor((v) + 0.5) : ceil((v) - 0.5) )
#endif

extern void HevP4ReferenceApplication_PassThrough_Init(real_T rtp_IC,
  B_PassThrough_HevP4ReferenceApplication_T *localB);
extern void HevP4ReferenceApplication_PassThrough_Start(SimStruct * const rtS_0,
  DW_PassThrough_HevP4ReferenceApplication_T *localDW);
extern void HevP4ReferenceApplication_PassThrough_Disable
  (DW_PassThrough_HevP4ReferenceApplication_T *localDW);
extern void HevP4ReferenceApplication_PassThrough(SimStruct * const rtS_2,
  boolean_T rtu_Enable, real_T rtu_u, B_PassThrough_HevP4ReferenceApplication_T *
  localB, DW_PassThrough_HevP4ReferenceApplication_T *localDW);

#if defined(MULTITASKING)
#  error Models using the variable step solvers cannot define MULTITASKING
#endif
#endif                     /* RTW_HEADER_HevP4ReferenceApplication_private_h_ */
