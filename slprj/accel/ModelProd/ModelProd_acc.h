/*
 * ModelProd_acc.h
 *
 * Code generation for model "ModelProd_acc.mdl".
 *
 * Model version              : 1.17
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Wed Nov 16 22:27:56 2011
 *
 * Target selection: accel.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Emulation hardware selection:
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */
#ifndef RTW_HEADER_ModelProd_acc_h_
#define RTW_HEADER_ModelProd_acc_h_
#ifndef ModelProd_acc_COMMON_INCLUDES_
# define ModelProd_acc_COMMON_INCLUDES_
#include <stdlib.h>
#include <stddef.h>
#define S_FUNCTION_NAME                simulink_only_sfcn
#define S_FUNCTION_LEVEL               2
#define RTW_GENERATED_S_FUNCTION
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#endif                                 /* ModelProd_acc_COMMON_INCLUDES_ */

#include "ModelProd_acc_types.h"

/* Block signals (auto storage) */
typedef struct {
  real_T B_1_0_0;                      /* '<S2>/Integrator1' */
  real_T B_1_1_0;                      /* '<S2>/Integrator' */
  real_T B_1_2_0;                      /* '<S2>/Integrator2' */
  real_T B_1_4_0;                      /* '<S2>/Integrator4' */
  real_T B_1_5_0;                      /* '<S2>/Integrator3' */
  real_T B_1_8_0;                      /* '<S6>/GM' */
  real_T B_1_14_0;                     /* '<S6>/Re' */
  real_T B_1_18_0;                     /* '<S6>/GM1' */
  real_T B_1_21_0[2];                  /* '<S4>/Vector Concatenate' */
  real_T B_1_30_0;                     /* '<S4>/Constant2' */
  real_T B_1_43_0;                     /* '<S4>/Constant3' */
  real_T B_1_54_0;                     /* '<S6>/GM2' */
  real_T B_1_59_0;                     /* '<S8>/Constant' */
  real_T B_1_65_0;                     /* '<S6>/GM4' */
  real_T B_1_69_0;                     /* '<S6>/GM5' */
  real_T B_1_84_0;                     /* '<S2>/Sum of Elements1' */
  real_T B_1_85_0;                     /* '<S2>/Sum of Elements' */
  real_T B_1_86_0;                     /* '<S2>/Sum of Elements2' */
  real_T B_1_87_0[3];                  /* '<Root>/Gain' */
  real_T B_1_75_0;                     /* '<S8>/Product2' */
  real_T B_1_76_0;                     /* '<S8>/Product3' */
  real_T B_1_82_0;                     /* '<S9>/Sum' */
} BlockIO;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  struct {
    void *LoggedData;
  } Scope1_PWORK;                      /* '<Root>/Scope1' */

  struct {
    void *LoggedData;
  } Scope2_PWORK;                      /* '<Root>/Scope2' */

  struct {
    void *LoggedData;
  } Scope3_PWORK;                      /* '<Root>/Scope3' */

  void *VRSink_PWORK[5];               /* '<Root>/VR Sink' */
  int8_T sqrt_DWORK1;                  /* '<S7>/sqrt' */
  int8_T sqrt_DWORK1_n;                /* '<S9>/sqrt' */
  int8_T sqrt_DWORK1_k;                /* '<S8>/sqrt' */
  char pad_sqrt_DWORK1_k[5];
} D_Work;

/* Continuous states (auto storage) */
typedef struct {
  real_T Integrator1_CSTATE;           /* '<S2>/Integrator1' */
  real_T Integrator_CSTATE;            /* '<S2>/Integrator' */
  real_T Integrator2_CSTATE;           /* '<S2>/Integrator2' */
  real_T Integrator4_CSTATE;           /* '<S2>/Integrator4' */
  real_T Integrator3_CSTATE;           /* '<S2>/Integrator3' */
  real_T Integrator5_CSTATE;           /* '<S2>/Integrator5' */
} ContinuousStates;

/* State derivatives (auto storage) */
typedef struct {
  real_T Integrator1_CSTATE;           /* '<S2>/Integrator1' */
  real_T Integrator_CSTATE;            /* '<S2>/Integrator' */
  real_T Integrator2_CSTATE;           /* '<S2>/Integrator2' */
  real_T Integrator4_CSTATE;           /* '<S2>/Integrator4' */
  real_T Integrator3_CSTATE;           /* '<S2>/Integrator3' */
  real_T Integrator5_CSTATE;           /* '<S2>/Integrator5' */
} StateDerivatives;

/* State disabled  */
typedef struct {
  boolean_T Integrator1_CSTATE;        /* '<S2>/Integrator1' */
  boolean_T Integrator_CSTATE;         /* '<S2>/Integrator' */
  boolean_T Integrator2_CSTATE;        /* '<S2>/Integrator2' */
  boolean_T Integrator4_CSTATE;        /* '<S2>/Integrator4' */
  boolean_T Integrator3_CSTATE;        /* '<S2>/Integrator3' */
  boolean_T Integrator5_CSTATE;        /* '<S2>/Integrator5' */
} StateDisabled;

/* Invariant block signals (auto storage) */
typedef struct {
  const real_T B_1_60_0;               /* '<S10>/Constant' */
} ConstBlockIO;

/* For easy access from the SimStruct */
#define rtC(S)                         ((ConstBlockIO *) _ssGetConstBlockIO(S))

/* Parameters (auto storage) */
struct Parameters_ {
  real_T P_0;                          /* Expression: 0
                                        * Referenced by: '<S2>/Integrator1'
                                        */
  real_T P_1;                          /* Expression: 0
                                        * Referenced by: '<S2>/Integrator'
                                        */
  real_T P_2;                          /* Expression: 0
                                        * Referenced by: '<S2>/Integrator2'
                                        */
  real_T P_3;                          /* Expression: 0
                                        * Referenced by: '<S2>/Integrator4'
                                        */
  real_T P_4;                          /* Expression: 3500e3
                                        * Referenced by: '<S2>/Integrator3'
                                        */
  real_T P_5;                          /* Expression: 0
                                        * Referenced by: '<S2>/Integrator5'
                                        */
  real_T P_6;                          /* Expression: GM
                                        * Referenced by: '<S6>/GM'
                                        */
  real_T P_7;                          /* Expression: R
                                        * Referenced by: '<S6>/Re'
                                        */
  real_T P_8;                          /* Expression: 3
                                        * Referenced by: '<S6>/Gain'
                                        */
  real_T P_9;                          /* Expression: jvalue(1)
                                        * Referenced by: '<S6>/GM1'
                                        */
  real_T P_10;                         /* Expression: 1
                                        * Referenced by: '<S4>/Constant'
                                        */
  real_T P_11;                         /* Expression: 0
                                        * Referenced by: '<S4>/Constant1'
                                        */
  real_T P_12;                         /* Expression: 3
                                        * Referenced by: '<S4>/Gain'
                                        */
  real_T P_13;                         /* Expression: 1
                                        * Referenced by: '<S4>/Constant2'
                                        */
  real_T P_14;                         /* Expression: 0.5
                                        * Referenced by: '<S4>/Gain1'
                                        */
  real_T P_15;                         /* Expression: 3
                                        * Referenced by: '<S4>/Gain2'
                                        */
  real_T P_16;                         /* Expression: 5
                                        * Referenced by: '<S4>/Gain3'
                                        */
  real_T P_17;                         /* Expression: 3
                                        * Referenced by: '<S4>/Gain6'
                                        */
  real_T P_18;                         /* Expression: 0.5
                                        * Referenced by: '<S4>/Gain4'
                                        */
  real_T P_19;                         /* Expression: 15
                                        * Referenced by: '<S4>/Gain7'
                                        */
  real_T P_20;                         /* Expression: 3
                                        * Referenced by: '<S4>/Constant3'
                                        */
  real_T P_21;                         /* Expression: 0.5
                                        * Referenced by: '<S4>/Gain5'
                                        */
  real_T P_22;                         /* Expression: 4
                                        * Referenced by: '<S6>/Gain1'
                                        */
  real_T P_23;                         /* Expression: jvalue(2)
                                        * Referenced by: '<S6>/GM2'
                                        */
  real_T P_24;                         /* Expression: 1
                                        * Referenced by: '<S8>/Constant'
                                        */
  real_T P_25;                         /* Expression: 0
                                        * Referenced by: '<S10>/Constant'
                                        */
  real_T P_26;                         /* Expression: jvalue(1)
                                        * Referenced by: '<S6>/GM4'
                                        */
  real_T P_27;                         /* Expression: jvalue(2)
                                        * Referenced by: '<S6>/GM5'
                                        */
  real_T P_28;                         /* Expression: 1/200000
                                        * Referenced by: '<Root>/Gain'
                                        */
};

extern Parameters rtDefaultParameters; /* parameters */
extern const ConstBlockIO rtInvariantSignals;/* constant block i/o */

#endif                                 /* RTW_HEADER_ModelProd_acc_h_ */
