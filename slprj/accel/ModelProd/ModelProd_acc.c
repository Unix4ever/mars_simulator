/*
 * This file is not available for use in any application other than as a
 * MATLAB(R) MEX file for use with the Simulink(R) product.
 */

/*
 * ModelProd_acc.c
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
#include <math.h>
#include "ModelProd_acc.h"
#include "ModelProd_acc_private.h"
#include <stdio.h>
#include "simstruc.h"
#include "fixedpoint.h"
#define CodeFormat                     S-Function
#define AccDefine1                     Accelerator_S-Function

/* Outputs for root system: '<Root>' */
static void mdlOutputs(SimStruct *S, int_T tid)
{
  real_T B_1_80_0;
  real_T B_1_13_0;
  real_T B_1_52_0;
  real_T B_1_72_0;
  real_T B_1_17_0;
  real_T B_0_2_0;
  real_T B_0_1_0;
  real_T B;
  real_T B_1_35_0_idx;
  real_T B_1_78_0_idx;
  real_T B_1_9_0_idx;
  real_T B_1_9_0_idx_0;
  real_T B_1_9_0_idx_1;

  /* Integrator: '<S2>/Integrator1' */
  ((BlockIO *) _ssGetBlockIO(S))->B_1_0_0 = ((ContinuousStates *)
    ssGetContStates(S))->Integrator1_CSTATE;

  /* Integrator: '<S2>/Integrator' */
  ((BlockIO *) _ssGetBlockIO(S))->B_1_1_0 = ((ContinuousStates *)
    ssGetContStates(S))->Integrator_CSTATE;

  /* Integrator: '<S2>/Integrator2' */
  ((BlockIO *) _ssGetBlockIO(S))->B_1_2_0 = ((ContinuousStates *)
    ssGetContStates(S))->Integrator2_CSTATE;

  /* Scope: '<Root>/Scope1' */

  /* Call into Simulink for Scope */
  ssCallAccelRunBlock(S, 1, 3, SS_CALL_MDL_OUTPUTS);

  /* Integrator: '<S2>/Integrator4' */
  ((BlockIO *) _ssGetBlockIO(S))->B_1_4_0 = ((ContinuousStates *)
    ssGetContStates(S))->Integrator4_CSTATE;

  /* Integrator: '<S2>/Integrator3' */
  ((BlockIO *) _ssGetBlockIO(S))->B_1_5_0 = ((ContinuousStates *)
    ssGetContStates(S))->Integrator3_CSTATE;

  /* Integrator: '<S2>/Integrator5' */
  ((BlockIO *) _ssGetBlockIO(S))->B_1_82_0 = ((ContinuousStates *)
    ssGetContStates(S))->Integrator5_CSTATE;

  /* Scope: '<Root>/Scope2' */

  /* Call into Simulink for Scope */
  ssCallAccelRunBlock(S, 1, 7, SS_CALL_MDL_OUTPUTS);
  if (ssIsSampleHit(S, 1, 0)) {
    ((BlockIO *) _ssGetBlockIO(S))->B_1_8_0 = ((Parameters *) ssGetDefaultParam
      (S))->P_6;
  }

  B_1_9_0_idx = ((BlockIO *) _ssGetBlockIO(S))->B_1_4_0;
  B_1_9_0_idx_0 = ((BlockIO *) _ssGetBlockIO(S))->B_1_5_0;
  B_1_9_0_idx_1 = ((BlockIO *) _ssGetBlockIO(S))->B_1_82_0;
  B = (((BlockIO *) _ssGetBlockIO(S))->B_1_4_0 * ((BlockIO *) _ssGetBlockIO(S)
       )->B_1_4_0 + ((BlockIO *) _ssGetBlockIO(S))->B_1_5_0 * ((BlockIO *)
        _ssGetBlockIO(S))->B_1_5_0) + ((BlockIO *) _ssGetBlockIO(S))->B_1_82_0 *
    ((BlockIO *) _ssGetBlockIO(S))->B_1_82_0;
  if (ssIsMajorTimeStep(S)) {
    if (((D_Work *) ssGetRootDWork(S))->sqrt_DWORK1 != 0) {
      ssSetSolverNeedsReset(S);
      ((D_Work *) ssGetRootDWork(S))->sqrt_DWORK1 = 0;
    }

    B = muDoubleScalarSqrt(B);
  } else {
    B = B < 0.0 ? -muDoubleScalarSqrt(muDoubleScalarAbs(B)) : muDoubleScalarSqrt
      (B);
    ((D_Work *) ssGetRootDWork(S))->sqrt_DWORK1 = 1;
  }

  B_1_13_0 = ((BlockIO *) _ssGetBlockIO(S))->B_1_8_0 / B / B;
  if (ssIsSampleHit(S, 1, 0)) {
    ((BlockIO *) _ssGetBlockIO(S))->B_1_14_0 = ((Parameters *) ssGetDefaultParam
      (S))->P_7;
  }

  B_1_52_0 = ((BlockIO *) _ssGetBlockIO(S))->B_1_14_0 / B;
  B_1_72_0 = B_1_13_0 * B_1_52_0 * B_1_52_0;
  B_1_17_0 = ((Parameters *) ssGetDefaultParam(S))->P_8 * B_1_72_0;
  if (ssIsSampleHit(S, 1, 0)) {
    ((BlockIO *) _ssGetBlockIO(S))->B_1_18_0 = ((Parameters *) ssGetDefaultParam
      (S))->P_9;
    ((BlockIO *) _ssGetBlockIO(S))->B_1_21_0[0] = ((Parameters *)
      ssGetDefaultParam(S))->P_10;
    ((BlockIO *) _ssGetBlockIO(S))->B_1_21_0[1] = ((Parameters *)
      ssGetDefaultParam(S))->P_11;
  }

  B_0_1_0 = ((BlockIO *) _ssGetBlockIO(S))->B_1_82_0 / B;
  muDoubleScalarSinCos(muDoubleScalarAsin(B_0_1_0 >= 1.0 ? 1.0 : B_0_1_0 <= -1.0
    ? -1.0 : B_0_1_0), &B_0_2_0, &B_1_80_0);
  if (ssIsSampleHit(S, 1, 0)) {
    ((BlockIO *) _ssGetBlockIO(S))->B_1_30_0 = ((Parameters *) ssGetDefaultParam
      (S))->P_13;
  }

  B_1_35_0_idx = B_0_2_0 * B_1_80_0 * ((Parameters *) ssGetDefaultParam(S))
    ->P_15;
  if (ssIsSampleHit(S, 1, 0)) {
    ((BlockIO *) _ssGetBlockIO(S))->B_1_43_0 = ((Parameters *) ssGetDefaultParam
      (S))->P_20;
  }

  B_1_78_0_idx = (B_0_2_0 * B_0_2_0 * ((Parameters *) ssGetDefaultParam(S))
                  ->P_19 - ((BlockIO *) _ssGetBlockIO(S))->B_1_43_0) * B_1_80_0 *
    ((Parameters *) ssGetDefaultParam(S))->P_21;
  B_1_52_0 *= B_1_72_0;
  if (ssIsSampleHit(S, 1, 0)) {
    ((BlockIO *) _ssGetBlockIO(S))->B_1_54_0 = ((Parameters *) ssGetDefaultParam
      (S))->P_23;
  }

  B_1_80_0 = (((B_0_2_0 * B_0_2_0 * ((Parameters *) ssGetDefaultParam(S))->P_12
                - ((BlockIO *) _ssGetBlockIO(S))->B_1_30_0) * ((Parameters *)
    ssGetDefaultParam(S))->P_14 * (B_1_17_0 * ((BlockIO *) _ssGetBlockIO(S))
    ->B_1_18_0) - B_1_13_0) + (B_0_2_0 * B_0_2_0 * B_0_2_0 * ((Parameters *)
    ssGetDefaultParam(S))->P_16 - ((Parameters *) ssGetDefaultParam(S))->P_17 *
    B_0_2_0) * ((Parameters *) ssGetDefaultParam(S))->P_18 * (((Parameters *)
    ssGetDefaultParam(S))->P_22 * B_1_52_0 * ((BlockIO *) _ssGetBlockIO(S))
    ->B_1_54_0)) / B;
  if (ssIsSampleHit(S, 1, 0)) {
    ((BlockIO *) _ssGetBlockIO(S))->B_1_59_0 = ((Parameters *) ssGetDefaultParam
      (S))->P_24;
  }

  if ((((BlockIO *) _ssGetBlockIO(S))->B_1_4_0 == rtC(S)->B_1_60_0) &&
      (((BlockIO *) _ssGetBlockIO(S))->B_1_5_0 == rtC(S)->B_1_60_0)) {
    B_0_2_0 = ((BlockIO *) _ssGetBlockIO(S))->B_1_59_0;
  } else {
    B_0_1_0 = ((BlockIO *) _ssGetBlockIO(S))->B_1_4_0 * ((BlockIO *)
      _ssGetBlockIO(S))->B_1_4_0 + ((BlockIO *) _ssGetBlockIO(S))->B_1_5_0 *
      ((BlockIO *) _ssGetBlockIO(S))->B_1_5_0;
    if (ssIsMajorTimeStep(S)) {
      if (((D_Work *) ssGetRootDWork(S))->sqrt_DWORK1_k != 0) {
        ssSetSolverNeedsReset(S);
        ((D_Work *) ssGetRootDWork(S))->sqrt_DWORK1_k = 0;
      }

      B_0_2_0 = muDoubleScalarSqrt(B_0_1_0);
    } else {
      B_0_2_0 = B_0_1_0 < 0.0 ? -muDoubleScalarSqrt(muDoubleScalarAbs(B_0_1_0)) :
        muDoubleScalarSqrt(B_0_1_0);
      ((D_Work *) ssGetRootDWork(S))->sqrt_DWORK1_k = 1;
    }
  }

  if (ssIsSampleHit(S, 1, 0)) {
    ((BlockIO *) _ssGetBlockIO(S))->B_1_65_0 = ((Parameters *) ssGetDefaultParam
      (S))->P_26;
  }

  if (ssIsSampleHit(S, 1, 0)) {
    ((BlockIO *) _ssGetBlockIO(S))->B_1_69_0 = ((Parameters *) ssGetDefaultParam
      (S))->P_27;
  }

  B_1_72_0 = -(B_1_72_0 * ((BlockIO *) _ssGetBlockIO(S))->B_1_65_0 *
               B_1_35_0_idx) - B_1_52_0 * ((BlockIO *) _ssGetBlockIO(S))
    ->B_1_69_0 * B_1_78_0_idx;
  B_0_2_0 = B_1_80_0 - ((BlockIO *) _ssGetBlockIO(S))->B_1_82_0 / B_0_2_0 / B *
    B_1_72_0;
  ((BlockIO *) _ssGetBlockIO(S))->B_1_75_0 = ((BlockIO *) _ssGetBlockIO(S))
    ->B_1_4_0 * B_0_2_0;
  ((BlockIO *) _ssGetBlockIO(S))->B_1_76_0 = B_0_2_0 * ((BlockIO *)
    _ssGetBlockIO(S))->B_1_5_0;
  B_1_13_0 = B_1_80_0 * ((BlockIO *) _ssGetBlockIO(S))->B_1_82_0;
  B_1_80_0 = ((BlockIO *) _ssGetBlockIO(S))->B_1_4_0 * ((BlockIO *)
    _ssGetBlockIO(S))->B_1_4_0 + ((BlockIO *) _ssGetBlockIO(S))->B_1_5_0 *
    ((BlockIO *) _ssGetBlockIO(S))->B_1_5_0;
  if (ssIsMajorTimeStep(S)) {
    if (((D_Work *) ssGetRootDWork(S))->sqrt_DWORK1_n != 0) {
      ssSetSolverNeedsReset(S);
      ((D_Work *) ssGetRootDWork(S))->sqrt_DWORK1_n = 0;
    }

    B_1_80_0 = muDoubleScalarSqrt(B_1_80_0);
  } else {
    B_1_80_0 = B_1_80_0 < 0.0 ? -muDoubleScalarSqrt(muDoubleScalarAbs(B_1_80_0))
      : muDoubleScalarSqrt(B_1_80_0);
    ((D_Work *) ssGetRootDWork(S))->sqrt_DWORK1_n = 1;
  }

  ((BlockIO *) _ssGetBlockIO(S))->B_1_82_0 = B_1_80_0 / B * B_1_72_0 + B_1_13_0;

  /* Scope: '<Root>/Scope3' */

  /* Call into Simulink for Scope */
  ssCallAccelRunBlock(S, 1, 83, SS_CALL_MDL_OUTPUTS);
  ((BlockIO *) _ssGetBlockIO(S))->B_1_84_0 = ((BlockIO *) _ssGetBlockIO(S))
    ->B_1_75_0;
  ((BlockIO *) _ssGetBlockIO(S))->B_1_85_0 = ((BlockIO *) _ssGetBlockIO(S))
    ->B_1_76_0;
  ((BlockIO *) _ssGetBlockIO(S))->B_1_86_0 = ((BlockIO *) _ssGetBlockIO(S))
    ->B_1_82_0;
  ((BlockIO *) _ssGetBlockIO(S))->B_1_87_0[0] = ((Parameters *)
    ssGetDefaultParam(S))->P_28 * B_1_9_0_idx;
  ((BlockIO *) _ssGetBlockIO(S))->B_1_87_0[1] = ((Parameters *)
    ssGetDefaultParam(S))->P_28 * B_1_9_0_idx_0;
  ((BlockIO *) _ssGetBlockIO(S))->B_1_87_0[2] = ((Parameters *)
    ssGetDefaultParam(S))->P_28 * B_1_9_0_idx_1;
  if (ssIsSampleHit(S, 2, 0)) {
    /* Level2 S-Function Block: '<Root>/B_1_10' (vrsfunc) */
    /* Call into Simulink for MEX-version of S-function */
    ssCallAccelRunBlock(S, 1, 88, SS_CALL_MDL_OUTPUTS);
  }

  /* tid is required for a uniform function interface.
   * Argument tid is not used in the function. */
  UNUSED_PARAMETER(tid);
}

/* Update for root system: '<Root>' */
#define MDL_UPDATE

static void mdlUpdate(SimStruct *S, int_T tid)
{
  /* tid is required for a uniform function interface.
   * Argument tid is not used in the function. */
  UNUSED_PARAMETER(tid);
}

/* Derivatives for root system: '<Root>' */
#define MDL_DERIVATIVES

static void mdlDerivatives(SimStruct *S)
{
  /* Derivatives for Integrator: '<S2>/Integrator1' */
  {
    ((StateDerivatives *) ssGetdX(S))->Integrator1_CSTATE = ((BlockIO *)
      _ssGetBlockIO(S))->B_1_84_0;
  }

  /* Derivatives for Integrator: '<S2>/Integrator' */
  {
    ((StateDerivatives *) ssGetdX(S))->Integrator_CSTATE = ((BlockIO *)
      _ssGetBlockIO(S))->B_1_85_0;
  }

  /* Derivatives for Integrator: '<S2>/Integrator2' */
  {
    ((StateDerivatives *) ssGetdX(S))->Integrator2_CSTATE = ((BlockIO *)
      _ssGetBlockIO(S))->B_1_86_0;
  }

  /* Derivatives for Integrator: '<S2>/Integrator4' */
  {
    ((StateDerivatives *) ssGetdX(S))->Integrator4_CSTATE = ((BlockIO *)
      _ssGetBlockIO(S))->B_1_0_0;
  }

  /* Derivatives for Integrator: '<S2>/Integrator3' */
  {
    ((StateDerivatives *) ssGetdX(S))->Integrator3_CSTATE = ((BlockIO *)
      _ssGetBlockIO(S))->B_1_1_0;
  }

  /* Derivatives for Integrator: '<S2>/Integrator5' */
  {
    ((StateDerivatives *) ssGetdX(S))->Integrator5_CSTATE = ((BlockIO *)
      _ssGetBlockIO(S))->B_1_2_0;
  }
}

/* Function to initialize sizes */
static void mdlInitializeSizes(SimStruct *S)
{
  /* checksum */
  ssSetChecksumVal(S, 0, 2670110099U);
  ssSetChecksumVal(S, 1, 3894720066U);
  ssSetChecksumVal(S, 2, 3862700084U);
  ssSetChecksumVal(S, 3, 2297737565U);

  /* options */
  ssSetOptions(S, SS_OPTION_EXCEPTION_FREE_CODE);

  /* Accelerator check memory map size match for DWork */
  if (ssGetSizeofDWork(S) != sizeof(D_Work)) {
    ssSetErrorStatus(S,"Unexpected error: Internal DWork sizes do "
                     "not match for accelerator mex file.");
  }

  /* Accelerator check memory map size match for BlockIO */
  if (ssGetSizeofGlobalBlockIO(S) != sizeof(BlockIO)) {
    ssSetErrorStatus(S,"Unexpected error: Internal BlockIO sizes do "
                     "not match for accelerator mex file.");
  }

  /* model parameters */
  _ssSetDefaultParam(S, (real_T *) &rtDefaultParameters);

  /* constant block I/O */
  _ssSetConstBlockIO(S, &rtInvariantSignals);

  /* non-finites */
  rt_InitInfAndNaN(sizeof(real_T));
}

/* mdlInitializeSampleTimes function (used to set up function-call connections) */
static void mdlInitializeSampleTimes(SimStruct *S)
{
}

/* Empty mdlTerminate function (never called) */
static void mdlTerminate(SimStruct *S)
{
}

/* MATLAB MEX Glue */
#include "simulink.c"
