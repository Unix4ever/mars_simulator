/*
 * ModelProd_acc_data.c
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

#include "ModelProd_acc.h"
#include "ModelProd_acc_private.h"

/* Invariant block signals (auto storage) */
const ConstBlockIO rtInvariantSignals = {
  0.0
  /* '<S10>/Constant' */
};

/* Block parameters (auto storage) */
Parameters rtDefaultParameters = {
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Integrator1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Integrator'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Integrator2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Integrator4'
                                        */
  3.5E+6,                              /* Expression: 3500e3
                                        * Referenced by: '<S2>/Integrator3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Integrator5'
                                        */
  4.305E+13,                           /* Expression: GM
                                        * Referenced by: '<S6>/GM'
                                        */
  3.3972E+6,                           /* Expression: R
                                        * Referenced by: '<S6>/Re'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S6>/Gain'
                                        */
  0.001964,                            /* Expression: jvalue(1)
                                        * Referenced by: '<S6>/GM1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S4>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S4>/Constant1'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S4>/Gain'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S4>/Constant2'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S4>/Gain1'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S4>/Gain2'
                                        */
  5.0,                                 /* Expression: 5
                                        * Referenced by: '<S4>/Gain3'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S4>/Gain6'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S4>/Gain4'
                                        */
  15.0,                                /* Expression: 15
                                        * Referenced by: '<S4>/Gain7'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S4>/Constant3'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S4>/Gain5'
                                        */
  4.0,                                 /* Expression: 4
                                        * Referenced by: '<S6>/Gain1'
                                        */
  3.6E-5,                              /* Expression: jvalue(2)
                                        * Referenced by: '<S6>/GM2'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S8>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S10>/Constant'
                                        */
  0.001964,                            /* Expression: jvalue(1)
                                        * Referenced by: '<S6>/GM4'
                                        */
  3.6E-5,                              /* Expression: jvalue(2)
                                        * Referenced by: '<S6>/GM5'
                                        */
  5.0E-6                               /* Expression: 1/200000
                                        * Referenced by: '<Root>/Gain'
                                        */
};
