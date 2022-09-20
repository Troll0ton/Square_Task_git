//! @file math_funct.h

//-----------------------------------------------------------------------------

#ifndef MATH_FUNCT_H
#define MATH_FUNCT_H

//-----------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <algorithm>
#include <math.h>
#include <string.h>

#include "unit_test.h"
#include "input_output.h"

//-----------------------------------------------------------------------------

enum NUM_OF_ROOTS
{
    NO_ROOT = 10,
    ONE_ROOT = 11,
    TWO_ROOTS = 12,
    INFINITY_ROOTS = 13
};

//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
//! @brief This function solves quadratic equation
//!
//! @param a [in] - a-coefficient
//! @param b [in] - b-coefficient
//! @param c [in] - c-coefficient
//! @param x1 [out] - pointer to the 1st root
//! @param x2 [out] - pointer to the 2st root
//!
//! @return num_of_roots - number of roots
//!
//-----------------------------------------------------------------------------
int solve_quadratic (double a,  double b, double c, double* x1, double* x2);

//-----------------------------------------------------------------------------
//! @brief This function print roots and number of roots
//!
//! @param num_of_roots [in] - number of roots
//! @param x1 [in] - 1st root
//! @param x2 [in] - 2st root
//!
//-----------------------------------------------------------------------------
void print_roots (int num_of_roots, double x1, double x2);

//-----------------------------------------------------------------------------
//! @brief This function solves linear equation
//!
//! @param b [in] - b-coefficient
//! @param c [in] - c-coefficient
//! @param x1 [out] - pointer to the 1st root
//! @param x2 [out] - pointer to the 2st root
//!
//! @return num_of_roots - number of roots
//!
//! @note roots x1 and x2 match
//!
//-----------------------------------------------------------------------------
int solve_linear (double b,  double c, double* x1, double* x2);

//-----------------------------------------------------------------------------
//! @brief  this function determines the TYPE of the given equation
//!
//! @param a [in] - a-coefficient
//! @param b [in] - b-coefficient
//! @param c [in] - c-coefficient
//! @param x1 [out] - pointer to the 1st root
//! @param x2 [out] - pointer to the 2st root
//!
//! @note TYPE - linear or quadratic equation
//!
//-----------------------------------------------------------------------------
int solve_equation (double a,  double b, double c, double* x1, double* x2);

//-----------------------------------------------------------------------------
//! @brief  this function checks if two numbers are the same
//!
//! @param a [in] - first numeric
//! @param b [in] - second numeric
//!
//!
//! @return bool - true, first numeric = second numeric
//!              - false, in other situations
//!
//! @note accuracy = 0,1
//-----------------------------------------------------------------------------
bool is_equal (double a, double b);

//-----------------------------------------------------------------------------

#endif   //MATH_FUNCT_H
