/*
 * File: Linear.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 05-Jan-2022 09:43:53
 */

/* Include Files */
#include "Linear.h"
#include "rt_nonfinite.h"
#include <stdio.h>

/* Function Definitions */
/*
 * Arguments    : const double svT[92]
 *                const double x[20]
 *                double kernelProduct[115]
 * Return Type  : void
 */
void Linear(const double svT[92], const double x[20], double kernelProduct[115])
{
  double d;
  double d1;
  double d2;
  double d3;
  int i;
  int i1;
  int i2;
  for (i = 0; i < 5; i++) {
    d = x[i];
    d1 = x[i + 5];
    d2 = x[i + 10];
    d3 = x[i + 15];
    for (i1 = 0; i1 < 23; i1++) {
      i2 = i1 << 2;
      //printf("i + 5 * i1: %d ----> kernelProduct: %f\n",i + 5 * i1,((d * svT[i2] + d1 * svT[i2 + 1]) + d2 * svT[i2 + 2]) + d3 * svT[i2 + 3]);
      kernelProduct[i + 5 * i1] =
        ((d * svT[i2] + d1 * svT[i2 + 1]) + d2 * svT[i2 + 2]) + d3 * svT[i2 + 3];
    }
    //printf("-------------------\n");
  }

}

/*
 * File trailer for Linear.c
 *
 * [EOF]
 */
