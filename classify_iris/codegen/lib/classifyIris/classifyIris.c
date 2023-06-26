/*
 * File: classifyIris.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 05-Jan-2022 09:43:53
 */

/* Include Files */
#include "classifyIris.h"
#include "Linear.h"
#include "classifyIris_types.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <stdio.h>

/* Function Definitions */
/*
 * CLASSIFYIRIS Classify iris species using SVM Model
 *    CLASSIFYIRIS classifies the iris flower measurements in X using the SVM
 *    model in the file SVMIris.mat, and then returns class labels in label.
 *
 * Arguments    : const double X[20]
 *                cell_wrap_0 label[5]
 * Return Type  : void
 */
void classifyIris(const double X[20], cell_wrap_0 label[5])
{
  static const double dv[92] = {
      6.9, 3.1, 4.9, 1.5, 6.3, 3.3, 4.7, 1.6, 6.1, 2.9, 4.7, 1.4, 5.6, 3.0,
      4.5, 1.5, 6.2, 2.2, 4.5, 1.5, 5.9, 3.2, 4.8, 1.8, 6.3, 2.5, 4.9, 1.5,
      6.8, 2.8, 4.8, 1.4, 6.7, 3.0, 5.0, 1.7, 6.0, 2.7, 5.1, 1.6, 5.4, 3.0,
      4.5, 1.5, 4.9, 2.5, 4.5, 1.7, 6.5, 3.2, 5.1, 2.0, 6.0, 2.2, 5.0, 1.5,
      6.3, 2.7, 4.9, 1.8, 6.2, 2.8, 4.8, 1.8, 6.1, 3.0, 4.9, 1.8, 7.2, 3.0,
      5.8, 1.6, 6.3, 2.8, 5.1, 1.5, 6.0, 3.0, 4.8, 1.8, 6.3, 2.5, 5.0, 1.9,
      6.5, 3.0, 5.2, 2.0, 5.9, 3.0, 5.1, 1.8};
  static const double dv2[23] = {-1.0,
                                 -1.0,
                                 -1.0,
                                 -1.0,
                                 -1.0,
                                 -1.0,
                                 -1.0,
                                 -0.24656775640692086,
                                 -1.0,
                                 -1.0,
                                 -1.0,
                                 1.0,
                                 1.0,
                                 1.0,
                                 1.0,
                                 1.0,
                                 1.0,
                                 0.4419671682653461,
                                 1.0,
                                 1.0,
                                 0.65396890048954337,
                                 0.15063168765203139,
                                 1.0};
  static const char Mdl_ClassNames[20] = {'v', 'v', 'e', 'i', 'r', 'r', 's',
                                          'g', 'i', 'i', 'c', 'n', 'o', 'i',
                                          'l', 'c', 'o', 'a', 'r', ' '};
  double dv1[115];
  double scores[10];
  double a[5];
  double f[5];
  double d;
  int i1;
  int i2;
  int j;
  int jj;
  unsigned int u;
  unsigned int u1;
  char t0_f1_data[10];
  boolean_T b[10];
  boolean_T notNaN[5];
  boolean_T b_b;
  boolean_T exitg1;
  Linear(dv, X, dv1);
  for (jj = 0; jj < 5; jj++) {
    d = 0.0;
    for (i2 = 0; i2 < 23; i2++) {
      d += dv1[jj + 5 * i2] * dv2[i2];
    }
    f[jj] = d + -6.7805877008077555;
    a[jj] = -(d + -6.7805877008077555);
  }
  jj = -1;
  for (i2 = 0; i2 < 2; i2++) {
    jj = i2 * 5;
    for (i1 = 0; i1 < 5; i1++) {
      scores[jj + i1] = a[i1];
    }
    jj = i2;
  }
  for (i2 = 0; i2 < 5; i2++) {
    scores[i2 + 5 * jj] = f[i2];
  }
  for (i2 = 0; i2 < 10; i2++) {
    b[i2] = rtIsNaN(scores[i2]);
  }
  i1 = 0;
  i2 = 5;
  for (j = 0; j < 5; j++) {
    notNaN[j] = true;
    i1++;
    i2++;
    jj = i1;
    exitg1 = false;
    while ((!exitg1) && (jj <= i2)) {
      if (!b[jj - 1]) {
        notNaN[j] = false;
        exitg1 = true;
      } else {
        jj += 5;
      }
    }
    b_b = !notNaN[j];
    notNaN[j] = b_b;
    f[j] = rtNaN;
    if (b_b) {
      d = scores[j + 5];
      if ((scores[j] < d) || (rtIsNaN(scores[j]) && (!rtIsNaN(d)))) {
        jj = 2;
      } else {
        jj = 1;
      }
      f[j] = jj;
    }
  }
  for (i2 = 0; i2 < 10; i2++) {
    t0_f1_data[i2] = Mdl_ClassNames[i2 << 1];
  }
  for (i1 = 0; i1 < 5; i1++) {
    label[i1].f1.size[0] = 1;
    label[i1].f1.size[1] = 10;
    for (i2 = 0; i2 < 10; i2++) {
      label[i1].f1.data[i2] = t0_f1_data[i2];
    }
    if (notNaN[i1]) {
      d = f[i1];
      if (d < 4.294967296E+9) {
        if (d >= 0.0) {
          u = (unsigned int)d;
        } else {
          u = 0U;
        }
      } else if (d >= 4.294967296E+9) {
        u = MAX_uint32_T;
      } else {
        u = 0U;
      }
      jj = 10 - (int)u;
      if (d < 4.294967296E+9) {
        if (d >= 0.0) {
          u1 = (unsigned int)d;
        } else {
          u1 = 0U;
        }
      } else if (d >= 4.294967296E+9) {
        u1 = MAX_uint32_T;
      } else {
        u1 = 0U;
      }
      label[i1].f1.size[0] = 1;
      label[i1].f1.size[1] = 11 - (int)u;
      //int conta_x, conta_y, conta_z;
      for (i2 = 0; i2 <= jj; i2++) {
        //printf("(int)u1: %d | i2: %d | ((int)u1 + (i2 << 1)) - 1: %d \n", (int)u1, i2, ((int)u1 + (i2 << 1)) - 1);
        label[i1].f1.data[i2] = Mdl_ClassNames[((int)u1 + (i2 << 1)) - 1];
      }
      //printf("-------------------------\n");
    }
  }

  printf("TESTE RETURN classifyIris\n");
  int cont_a, cont_b, aux;
  for (cont_a=0; cont_a<5; cont_a++){
    aux = label[cont_a].f1.size[1];
    printf("size 1 %d | size 2 %d\n",label[cont_a].f1.size[0], label[cont_a].f1.size[1]);
    for (cont_b=0;cont_b<aux;cont_b++){
      printf("%c",label[cont_a].f1.data[cont_b]);  
    }
    printf("\n");
  }
}

/*
 * File trailer for classifyIris.c
 *
 * [EOF]
 */
