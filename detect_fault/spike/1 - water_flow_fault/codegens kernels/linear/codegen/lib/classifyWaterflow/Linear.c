/*
 * File: Linear.c
 *
 * MATLAB Coder version            : 5.4
 * C/C++ source code generated on  : 20-Sep-2022 13:57:58
 */

/* Include Files */
#include "Linear.h"
#include "rt_nonfinite.h"

/* Function Definitions */
/*
 * Arguments    : const double svT[577]
 *                double x
 *                double kernelProduct[577]
 * Return Type  : void
 */
void Linear(const double svT[577], double x, double kernelProduct[577])
{
  int i;
  for (i = 0; i < 577; i++) {
    kernelProduct[i] = x * svT[i];
  }
}

/*
 * File trailer for Linear.c
 *
 * [EOF]
 */
