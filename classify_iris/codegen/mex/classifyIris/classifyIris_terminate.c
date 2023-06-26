/*
 * classifyIris_terminate.c
 *
 * Code generation for function 'classifyIris_terminate'
 *
 */

/* Include files */
#include "classifyIris_terminate.h"
#include "_coder_classifyIris_mex.h"
#include "classifyIris_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void classifyIris_atexit(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void classifyIris_terminate(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (classifyIris_terminate.c) */
