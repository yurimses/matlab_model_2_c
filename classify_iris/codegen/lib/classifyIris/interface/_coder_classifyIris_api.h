/*
 * File: _coder_classifyIris_api.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 05-Jan-2022 09:43:53
 */

#ifndef _CODER_CLASSIFYIRIS_API_H
#define _CODER_CLASSIFYIRIS_API_H

/* Include Files */
#include "emlrt.h"
#include "tmwtypes.h"
#include <string.h>

/* Type Definitions */
#ifndef struct_emxArray_char_T_1x10
#define struct_emxArray_char_T_1x10
struct emxArray_char_T_1x10 {
  char_T data[10];
  int32_T size[2];
};
#endif /* struct_emxArray_char_T_1x10 */
#ifndef typedef_emxArray_char_T_1x10
#define typedef_emxArray_char_T_1x10
typedef struct emxArray_char_T_1x10 emxArray_char_T_1x10;
#endif /* typedef_emxArray_char_T_1x10 */

#ifndef typedef_cell_wrap_0
#define typedef_cell_wrap_0
typedef struct {
  emxArray_char_T_1x10 f1;
} cell_wrap_0;
#endif /* typedef_cell_wrap_0 */

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void classifyIris(real_T X[20], cell_wrap_0 label[5]);

void classifyIris_api(const mxArray *prhs, const mxArray **plhs);

void classifyIris_atexit(void);

void classifyIris_initialize(void);

void classifyIris_terminate(void);

void classifyIris_xil_shutdown(void);

void classifyIris_xil_terminate(void);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for _coder_classifyIris_api.h
 *
 * [EOF]
 */
