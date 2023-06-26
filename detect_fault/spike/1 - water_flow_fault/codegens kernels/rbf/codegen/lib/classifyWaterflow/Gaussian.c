/*
 * File: Gaussian.c
 *
 * MATLAB Coder version            : 5.4
 * C/C++ source code generated on  : 20-Sep-2022 14:56:07
 */

/* Include Files */
#include "Gaussian.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
/*
 * Arguments    : const double svT[1452]
 *                double svInnerProduct
 *                double x
 *                double kernelProduct[1452]
 * Return Type  : void
 */
void Gaussian(const double svT[1452], double svInnerProduct, double x,
              double kernelProduct[1452])
{
  double a;
  double b;
  int k;
  a = -2.0 * x;
  b = x * x;
  for (k = 0; k < 1452; k++) {
    kernelProduct[k] = exp(-((a * svT[k] + b) + svInnerProduct));
  }
}

/*
 * File trailer for Gaussian.c
 *
 * [EOF]
 */
