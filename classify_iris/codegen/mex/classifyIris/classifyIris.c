/*
 * classifyIris.c
 *
 * Code generation for function 'classifyIris'
 *
 */

/* Include files */
#include "classifyIris.h"
#include "Linear.h"
#include "classifyIris_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "blas.h"
#include "mwmathutil.h"
#include <stddef.h>
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    6,                                               /* lineNo */
    "classifyIris",                                  /* fcnName */
    "/home/yuri/Matlab-Estudos/iris2/classifyIris.m" /* pathName */
};

static emlrtRSInfo b_emlrtRSI = {
    7,                                               /* lineNo */
    "classifyIris",                                  /* fcnName */
    "/home/yuri/Matlab-Estudos/iris2/classifyIris.m" /* pathName */
};

static emlrtRSInfo c_emlrtRSI = {
    48,                    /* lineNo */
    "loadLearnerForCoder", /* fcnName */
    "/home/yuri/Matlab/toolbox/stats/classreg/loadLearnerForCoder.m" /* pathName
                                                                      */
};

static emlrtRSInfo d_emlrtRSI = {
    79,              /* lineNo */
    "structToModel", /* fcnName */
    "/home/yuri/Matlab/toolbox/stats/classreg/+classreg/+coderutils/"
    "structToModel.m" /* pathName */
};

static emlrtRSInfo e_emlrtRSI = {
    93,                                    /* lineNo */
    "CompactClassificationSVM/fromStruct", /* fcnName */
    "/home/yuri/Matlab/toolbox/stats/classreg/+classreg/+learning/+coder/"
    "+classif/CompactClassificationSVM.m" /* pathName */
};

static emlrtRSInfo f_emlrtRSI = {
    67,                                                  /* lineNo */
    "CompactClassificationSVM/CompactClassificationSVM", /* fcnName */
    "/home/yuri/Matlab/toolbox/stats/classreg/+classreg/+learning/+coder/"
    "+classif/CompactClassificationSVM.m" /* pathName */
};

static emlrtRSInfo g_emlrtRSI = {
    286,                                /* lineNo */
    "CompactClassificationSVM/predict", /* fcnName */
    "/home/yuri/Matlab/toolbox/stats/classreg/+classreg/+learning/+coder/"
    "+classif/CompactClassificationSVM.m" /* pathName */
};

static emlrtRSInfo h_emlrtRSI = {
    451,                                              /* lineNo */
    "CompactClassificationSVM/predictForMatrixInput", /* fcnName */
    "/home/yuri/Matlab/toolbox/stats/classreg/+classreg/+learning/+coder/"
    "+classif/CompactClassificationSVM.m" /* pathName */
};

static emlrtRSInfo i_emlrtRSI = {
    452,                                              /* lineNo */
    "CompactClassificationSVM/predictForMatrixInput", /* fcnName */
    "/home/yuri/Matlab/toolbox/stats/classreg/+classreg/+learning/+coder/"
    "+classif/CompactClassificationSVM.m" /* pathName */
};

static emlrtRSInfo j_emlrtRSI = {
    454,                                              /* lineNo */
    "CompactClassificationSVM/predictForMatrixInput", /* fcnName */
    "/home/yuri/Matlab/toolbox/stats/classreg/+classreg/+learning/+coder/"
    "+classif/CompactClassificationSVM.m" /* pathName */
};

static emlrtRSInfo k_emlrtRSI = {
    460,                              /* lineNo */
    "CompactClassificationSVM/score", /* fcnName */
    "/home/yuri/Matlab/toolbox/stats/classreg/+classreg/+learning/+coder/"
    "+classif/CompactClassificationSVM.m" /* pathName */
};

static emlrtRSInfo l_emlrtRSI = {
    247,                /* lineNo */
    "CompactSVM/score", /* fcnName */
    "/home/yuri/Matlab/toolbox/stats/classreg/+classreg/+learning/+coder/"
    "+model/CompactSVM.m" /* pathName */
};

static emlrtRSInfo m_emlrtRSI = {
    337,                      /* lineNo */
    "CompactSVM/kernelScore", /* fcnName */
    "/home/yuri/Matlab/toolbox/stats/classreg/+classreg/+learning/+coder/"
    "+model/CompactSVM.m" /* pathName */
};

static emlrtRSInfo n_emlrtRSI = {
    338,                      /* lineNo */
    "CompactSVM/kernelScore", /* fcnName */
    "/home/yuri/Matlab/toolbox/stats/classreg/+classreg/+learning/+coder/"
    "+model/CompactSVM.m" /* pathName */
};

static emlrtRSInfo s_emlrtRSI = {
    356,                                       /* lineNo */
    "CompactClassificationSVM/transformScore", /* fcnName */
    "/home/yuri/Matlab/toolbox/stats/classreg/+classreg/+learning/+coder/"
    "+classif/CompactClassificationSVM.m" /* pathName */
};

static emlrtRSInfo t_emlrtRSI = {
    167,                                   /* lineNo */
    "CompactClassificationModel/maxScore", /* fcnName */
    "/home/yuri/Matlab/toolbox/stats/classreg/+classreg/+learning/+coder/"
    "+classif/CompactClassificationModel.m" /* pathName */
};

static emlrtRSInfo u_emlrtRSI = {
    16,                                                  /* lineNo */
    "all",                                               /* fcnName */
    "/home/yuri/Matlab/toolbox/eml/lib/matlab/ops/all.m" /* pathName */
};

static emlrtRSInfo v_emlrtRSI = {
    143,        /* lineNo */
    "allOrAny", /* fcnName */
    "/home/yuri/Matlab/toolbox/eml/eml/+coder/+internal/allOrAny.m" /* pathName
                                                                     */
};

static emlrtRSInfo w_emlrtRSI = {
    21,                               /* lineNo */
    "eml_int_forloop_overflow_check", /* fcnName */
    "/home/yuri/Matlab/toolbox/eml/lib/matlab/eml/"
    "eml_int_forloop_overflow_check.m" /* pathName */
};

static emlrtBCInfo emlrtBCI = {
    1,                                /* iFirst */
    2,                                /* iLast */
    484,                              /* lineNo */
    21,                               /* colNo */
    "",                               /* aName */
    "CompactClassificationSVM/score", /* fName */
    "/home/yuri/Matlab/toolbox/stats/classreg/+classreg/+learning/+coder/"
    "+classif/CompactClassificationSVM.m", /* pName */
    3                                      /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = {
    1,                                     /* iFirst */
    2,                                     /* iLast */
    202,                                   /* lineNo */
    91,                                    /* colNo */
    "",                                    /* aName */
    "CompactClassificationModel/maxScore", /* fName */
    "/home/yuri/Matlab/toolbox/stats/classreg/+classreg/+learning/+coder/"
    "+classif/CompactClassificationModel.m", /* pName */
    0                                        /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = {
    1,                                     /* iFirst */
    2,                                     /* iLast */
    202,                                   /* lineNo */
    43,                                    /* colNo */
    "",                                    /* aName */
    "CompactClassificationModel/maxScore", /* fName */
    "/home/yuri/Matlab/toolbox/stats/classreg/+classreg/+learning/+coder/"
    "+classif/CompactClassificationModel.m", /* pName */
    0                                        /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = {
    1,                                     /* iFirst */
    2,                                     /* iLast */
    188,                                   /* lineNo */
    50,                                    /* colNo */
    "",                                    /* aName */
    "CompactClassificationModel/maxScore", /* fName */
    "/home/yuri/Matlab/toolbox/stats/classreg/+classreg/+learning/+coder/"
    "+classif/CompactClassificationModel.m", /* pName */
    0                                        /* checkKind */
};

/* Function Definitions */
void classifyIris(const emlrtStack *sp, const real_T X[400],
                  cell_wrap_0 label[100])
{
  static const real_T dv[92] = {
      6.9, 3.1, 4.9, 1.5, 6.3, 3.3, 4.7, 1.6, 6.1, 2.9, 4.7, 1.4, 5.6, 3.0,
      4.5, 1.5, 6.2, 2.2, 4.5, 1.5, 5.9, 3.2, 4.8, 1.8, 6.3, 2.5, 4.9, 1.5,
      6.8, 2.8, 4.8, 1.4, 6.7, 3.0, 5.0, 1.7, 6.0, 2.7, 5.1, 1.6, 5.4, 3.0,
      4.5, 1.5, 4.9, 2.5, 4.5, 1.7, 6.5, 3.2, 5.1, 2.0, 6.0, 2.2, 5.0, 1.5,
      6.3, 2.7, 4.9, 1.8, 6.2, 2.8, 4.8, 1.8, 6.1, 3.0, 4.9, 1.8, 7.2, 3.0,
      5.8, 1.6, 6.3, 2.8, 5.1, 1.5, 6.0, 3.0, 4.8, 1.8, 6.3, 2.5, 5.0, 1.9,
      6.5, 3.0, 5.2, 2.0, 5.9, 3.0, 5.1, 1.8};
  static const real_T Mdl_Alpha[23] = {-1.0,
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
  static const char_T Mdl_ClassNames[20] = {'v', 'v', 'e', 'i', 'r', 'r', 's',
                                            'g', 'i', 'i', 'c', 'n', 'o', 'i',
                                            'l', 'c', 'o', 'a', 'r', ' '};
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  real_T innerProduct[2300];
  real_T scores[200];
  real_T a[100];
  real_T f[100];
  real_T alpha1;
  real_T beta1;
  int32_T i;
  int32_T i2;
  int32_T ix;
  int32_T j;
  char_T t0_f1_data[10];
  char_T TRANSA1;
  char_T TRANSB1;
  boolean_T b[200];
  boolean_T notNaN[100];
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  /* CLASSIFYIRIS Classify iris species using SVM Model */
  /*    CLASSIFYIRIS classifies the iris flower measurements in X using the SVM
   */
  /*    model in the file SVMIris.mat, and then returns class labels in label.
   */
  st.site = &emlrtRSI;
  b_st.site = &c_emlrtRSI;
  c_st.site = &d_emlrtRSI;
  d_st.site = &e_emlrtRSI;
  e_st.site = &f_emlrtRSI;
  st.site = &b_emlrtRSI;
  b_st.site = &g_emlrtRSI;
  c_st.site = &h_emlrtRSI;
  d_st.site = &k_emlrtRSI;
  e_st.site = &l_emlrtRSI;
  f_st.site = &m_emlrtRSI;
  Linear(dv, X, innerProduct);
  f_st.site = &n_emlrtRSI;
  TRANSB1 = 'N';
  TRANSA1 = 'N';
  alpha1 = 1.0;
  beta1 = 0.0;
  m_t = (ptrdiff_t)100;
  n_t = (ptrdiff_t)1;
  k_t = (ptrdiff_t)23;
  lda_t = (ptrdiff_t)100;
  ldb_t = (ptrdiff_t)23;
  ldc_t = (ptrdiff_t)100;
  dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &innerProduct[0], &lda_t,
        &Mdl_Alpha[0], &ldb_t, &beta1, &f[0], &ldc_t);
  for (ix = 0; ix < 100; ix++) {
    f[ix] += -6.7805877008077555;
  }
  for (i = 0; i < 100; i++) {
    a[i] = -f[i];
  }
  i = 0;
  for (i2 = 0; i2 < 2; i2++) {
    i = i2 * 100;
    memcpy(&scores[i], &a[0], 100U * sizeof(real_T));
    i = i2 + 1;
  }
  if (i < 1) {
    emlrtDynamicBoundsCheckR2012b(0, 1, 2, &emlrtBCI, &c_st);
  }
  memcpy(&scores[i * 100 + -100], &f[0], 100U * sizeof(real_T));
  c_st.site = &i_emlrtRSI;
  d_st.site = &s_emlrtRSI;
  c_st.site = &j_emlrtRSI;
  for (ix = 0; ix < 200; ix++) {
    b[ix] = muDoubleScalarIsNaN(scores[ix]);
  }
  d_st.site = &t_emlrtRSI;
  e_st.site = &u_emlrtRSI;
  for (i = 0; i < 100; i++) {
    notNaN[i] = true;
  }
  i = 0;
  i2 = 100;
  for (j = 0; j < 100; j++) {
    i++;
    i2++;
    f_st.site = &v_emlrtRSI;
    if ((i <= i2) && (i2 > 2147483547)) {
      g_st.site = &w_emlrtRSI;
      check_forloop_overflow_error(&g_st);
    }
    ix = i;
    exitg1 = false;
    while ((!exitg1) && (ix <= i2)) {
      if (!b[ix - 1]) {
        notNaN[j] = false;
        exitg1 = true;
      } else {
        ix += 100;
      }
    }
  }
  for (i = 0; i < 100; i++) {
    notNaN[i] = !notNaN[i];
    f[i] = rtNaN;
  }
  for (j = 0; j < 100; j++) {
    if (notNaN[j]) {
      alpha1 = scores[j + 100];
      if ((scores[j] < alpha1) ||
          (muDoubleScalarIsNaN(scores[j]) && (!muDoubleScalarIsNaN(alpha1)))) {
        i = 2;
      } else {
        i = 1;
      }
      f[j] = i;
      if (!(f[j] < 4.294967296E+9)) {
        alpha1 = f[j];
        if (alpha1 < 4.294967296E+9) {
          ix = (int32_T)alpha1;
        } else {
          ix = 0;
        }
        emlrtDynamicBoundsCheckR2012b(ix, 1, 2, &d_emlrtBCI, &c_st);
      }
    }
  }
  for (ix = 0; ix < 10; ix++) {
    t0_f1_data[ix] = Mdl_ClassNames[ix << 1];
  }
  for (i2 = 0; i2 < 100; i2++) {
    label[i2].f1.size[0] = 1;
    label[i2].f1.size[1] = 10;
    for (ix = 0; ix < 10; ix++) {
      label[i2].f1.data[ix] = t0_f1_data[ix];
    }
  }
  for (j = 0; j < 100; j++) {
    if (notNaN[j]) {
      alpha1 = f[j];
      if (!(alpha1 < 4.294967296E+9)) {
        if (alpha1 < 4.294967296E+9) {
          ix = (int32_T)alpha1;
        } else {
          ix = 0;
        }
        emlrtDynamicBoundsCheckR2012b(ix, 1, 2, &b_emlrtBCI, &c_st);
      }
      if (alpha1 < 4.294967296E+9) {
        ix = (int32_T)alpha1;
      } else {
        ix = 0;
      }
      i = 10 - ix;
      if (!(alpha1 < 4.294967296E+9)) {
        if (alpha1 < 4.294967296E+9) {
          i2 = (int32_T)alpha1;
        } else {
          i2 = 0;
        }
        emlrtDynamicBoundsCheckR2012b(i2, 1, 2, &c_emlrtBCI, &c_st);
      }
      if (alpha1 < 4.294967296E+9) {
        i2 = (int32_T)alpha1;
      } else {
        i2 = 0;
      }
      label[j].f1.size[0] = 1;
      label[j].f1.size[1] = 11 - ix;
      for (ix = 0; ix <= i; ix++) {
        label[j].f1.data[ix] = Mdl_ClassNames[(i2 + (ix << 1)) - 1];
      }
    }
  }
}

/* End of code generation (classifyIris.c) */
