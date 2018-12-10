//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: main.cpp
//
// MATLAB Coder version            : 4.0
// C/C++ source code generated on  : 06-Dec-2018 18:29:54
//

//***********************************************************************
// This automatically generated example C main file shows how to call
// entry-point functions that MATLAB Coder generated. You must customize
// this file for your application. Do not modify this file directly.
// Instead, make a copy of this file, modify it, and integrate it into
// your development environment.
//
// This file initializes entry-point function arguments to a default
// size and value before calling the entry-point functions. It does
// not store or use any values returned from the entry-point functions.
// If necessary, it does pre-allocate memory for returned values.
// You can use this file as a starting point for a main function that
// you can deploy in your application.
//
// After you copy the file, and before you deploy it, you must make the
// following changes:
// * For variable-size function arguments, change the example sizes to
// the sizes that your application requires.
// * Change the example values of function arguments to the values that
// your application requires.
// * If the entry-point functions return values, store these values or
// otherwise use them as required by your application.
//
//***********************************************************************
// Include Files
#include "rt_nonfinite.h"
#include "FunctionSum.h"
#include "main.h"
#include "FunctionSum_terminate.h"
#include "FunctionSum_initialize.h"
#include <iostream>

// Function Declarations
static double argInit_real_T(int);
static int main_FunctionSum();

// Function Definitions

//
// Arguments    : void
// Return Type  : double
//
static double argInit_real_T(int num)
{
  return num;
}

//
// Arguments    : void
// Return Type  : void
//
static int main_FunctionSum()
{
  double out;

  // Initialize function 'FunctionSum' input arguments.
  // Call the entry-point 'FunctionSum'.
  out = FunctionSum(argInit_real_T(1), argInit_real_T(2));
  return out;
}

//
// Arguments    : int argc
//                const char * const argv[]
// Return Type  : int
//
int main(int, const char * const [])
{
  // Hello World!
  std::cout << "Hello world!" << std::endl;

  // Initialize the application.
  // You do not need to do this more than one time.
  FunctionSum_initialize();

  // Invoke the entry-point functions.
  // You can call entry-point functions multiple times.
  std::cout << "1 + 1 = " << FunctionSum(1,1) << std::endl;

  // Terminate the application.
  // You do not need to do this more than one time.
  FunctionSum_terminate();
  return 0;
}

//
// File trailer for main.cpp
//
// [EOF]
//
