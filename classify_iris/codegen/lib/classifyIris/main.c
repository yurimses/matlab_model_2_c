/*
 * File: main.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 05-Jan-2022 09:43:53
 */

/*************************************************************************/
/* This automatically generated example C main file shows how to call    */
/* entry-point functions that MATLAB Coder generated. You must customize */
/* this file for your application. Do not modify this file directly.     */
/* Instead, make a copy of this file, modify it, and integrate it into   */
/* your development environment.                                         */
/*                                                                       */
/* This file initializes entry-point function arguments to a default     */
/* size and value before calling the entry-point functions. It does      */
/* not store or use any values returned from the entry-point functions.  */
/* If necessary, it does pre-allocate memory for returned values.        */
/* You can use this file as a starting point for a main function that    */
/* you can deploy in your application.                                   */
/*                                                                       */
/* After you copy the file, and before you deploy it, you must make the  */
/* following changes:                                                    */
/* * For variable-size function arguments, change the example sizes to   */
/* the sizes that your application requires.                             */
/* * Change the example values of function arguments to the values that  */
/* your application requires.                                            */
/* * If the entry-point functions return values, store these values or   */
/* otherwise use them as required by your application.                   */
/*                                                                       */
/*************************************************************************/

/* Include Files */
#include "main.h"
#include "classifyIris.h"
#include "classifyIris_terminate.h"
#include "classifyIris_types.h"
#include "rt_nonfinite.h"
//YURI 
#include <stdio.h>

/* Function Declarations */
static void argInit_5x4_real_T(double result[20]);

static double argInit_real_T(void);

static void main_classifyIris(void);

/* Function Definitions */
/*
 * Arguments    : double result[20]
 * Return Type  : void
 */
static void argInit_5x4_real_T(double result[20])
{
  int idx0;
  int idx1;
  /* Loop over the array to initialize each element. */
  for (idx0 = 0; idx0 < 5; idx0++) {
    for (idx1 = 0; idx1 < 4; idx1++) {
      /* Set the value of the array element.
Change this value to the value that the application requires. */
      result[idx0 + 5 * idx1] = argInit_real_T();
    }
  }
}

/*
 * Arguments    : void
 * Return Type  : double
 */
static double argInit_real_T(void)
{
  return 0.0;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
static void main_classifyIris(void)
{
  cell_wrap_0 label[5];
  //double dv[20];
  
  //5 VIRGINICA
  /*double dv[20] = { 7.4,  7.9,  6.4,  6.3,  6.1,
                    2.8,  3.8,  2.8,  2.8,  2.6,
                    6.1,  6.4,  5.6,  5.1,  5.6,
                    1.9,  2,    2.2,  1.5,  1.4};*/

  //5 VERSICOLOR
  /*double dv[20] = { 5.7, 6.3, 4.9, 6.6, 5.2, 
                    2.8, 3.3, 2.4, 2.9, 2.7,
                    4.5, 4.7, 3.3, 4.6, 3.9,
                    1.3, 1.6, 1,   1.3, 1.4};*/

  double dv[20] = { 7.4,  7.9,  6.4,  6.6,  5.2,
                    2.8,  3.8,  2.8,  2.9,  2.7,
                    6.1,  6.4,  5.6,  4.6,  3.9,
                    1.9,  2,    2.2,  1.3,  1.4};  

  

  /* Initialize function 'classifyIris' input arguments. */
  /* Initialize function input argument 'X'. */
  /* Call the entry-point 'classifyIris'. */
  //YURI
  //argInit_5x4_real_T(dv);
  
  classifyIris(dv, label);
}

/*
 * Arguments    : int argc
 *                char **argv
 * Return Type  : int
 */
int main(int argc, char **argv)
{
  (void)argc;
  (void)argv;
  /* The initialize function is being called automatically from your entry-point
   * function. So, a call to initialize is not included here. */
  /* Invoke the entry-point functions.
You can call entry-point functions multiple times. */
  main_classifyIris();
  /* Terminate the application.
You do not need to do this more than one time. */
  classifyIris_terminate();
  return 0;
}

/*
 * File trailer for main.c
 *
 * [EOF]
 */
