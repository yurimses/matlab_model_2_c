/*
 * File: _coder_classifyIris_mex.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 05-Jan-2022 09:43:53
 */

#ifndef _CODER_CLASSIFYIRIS_MEX_H
#define _CODER_CLASSIFYIRIS_MEX_H

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

void unsafe_classifyIris_mexFunction(int32_T nlhs, mxArray *plhs[1],
                                     int32_T nrhs, const mxArray *prhs[1]);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for _coder_classifyIris_mex.h
 *
 * [EOF]
 */
