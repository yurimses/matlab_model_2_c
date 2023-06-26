/*
 * Linear.c
 *
 * Code generation for function 'Linear'
 *
 */

/* Include files */
#include "Linear.h"
#include "rt_nonfinite.h"
#include "blas.h"
#include <stddef.h>

/* Function Definitions */
void Linear(const real_T svT[92], const real_T x[400],
            real_T kernelProduct[2300])
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  real_T alpha1;
  real_T beta1;
  char_T TRANSA1;
  char_T TRANSB1;
  TRANSB1 = 'N';
  TRANSA1 = 'N';
  alpha1 = 1.0;
  beta1 = 0.0;
  m_t = (ptrdiff_t)100;
  n_t = (ptrdiff_t)23;
  k_t = (ptrdiff_t)4;
  lda_t = (ptrdiff_t)100;
  ldb_t = (ptrdiff_t)4;
  ldc_t = (ptrdiff_t)100;
  dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &x[0], &lda_t, &svT[0],
        &ldb_t, &beta1, &kernelProduct[0], &ldc_t);
}

/* End of code generation (Linear.c) */
