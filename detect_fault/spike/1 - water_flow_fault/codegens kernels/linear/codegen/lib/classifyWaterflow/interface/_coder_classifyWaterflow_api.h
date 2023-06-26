/*
 * File: _coder_classifyWaterflow_api.h
 *
 * MATLAB Coder version            : 5.4
 * C/C++ source code generated on  : 20-Sep-2022 13:57:58
 */

#ifndef _CODER_CLASSIFYWATERFLOW_API_H
#define _CODER_CLASSIFYWATERFLOW_API_H

/* Include Files */
#include "emlrt.h"
#include "tmwtypes.h"
#include <string.h>

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
real_T classifyWaterflow(real_T value);

void classifyWaterflow_api(const mxArray *prhs, const mxArray **plhs);

void classifyWaterflow_atexit(void);

void classifyWaterflow_initialize(void);

void classifyWaterflow_terminate(void);

void classifyWaterflow_xil_shutdown(void);

void classifyWaterflow_xil_terminate(void);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for _coder_classifyWaterflow_api.h
 *
 * [EOF]
 */
