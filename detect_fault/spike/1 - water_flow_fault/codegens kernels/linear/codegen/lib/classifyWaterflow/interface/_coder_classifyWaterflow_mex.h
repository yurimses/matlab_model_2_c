/*
 * File: _coder_classifyWaterflow_mex.h
 *
 * MATLAB Coder version            : 5.4
 * C/C++ source code generated on  : 20-Sep-2022 13:57:58
 */

#ifndef _CODER_CLASSIFYWATERFLOW_MEX_H
#define _CODER_CLASSIFYWATERFLOW_MEX_H

/* Include Files */
#include "emlrt.h"
#include "mex.h"
#include "tmwtypes.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
MEXFUNCTION_LINKAGE void mexFunction(int32_T nlhs, mxArray *plhs[],
                                     int32_T nrhs, const mxArray *prhs[]);

emlrtCTX mexFunctionCreateRootTLS(void);

void unsafe_classifyWaterflow_mexFunction(int32_T nlhs, mxArray *plhs[1],
                                          int32_T nrhs, const mxArray *prhs[1]);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for _coder_classifyWaterflow_mex.h
 *
 * [EOF]
 */
