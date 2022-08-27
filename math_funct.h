//! @file math_funct.h


//-----------------------------------------------------------------------------

#ifndef MATH_FUNCT
#define MATH_FUNCT

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

#define print_amount_of_roots(num_of_roots) printf(#num_of_roots);

//-----------------------------------------------------------------------------

enum NUM_OF_ROOTS
{
    NO_ROOT = 10,
    ONE_ROOT  = 11,
    TWO_ROOTS = 12,
    INFINITY_ROOTS = 13
};

//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
//! @brief This function solves quadratic equation
//!
//! @param a - a-coefficient
//! @param b - b-coefficient
//! @param c - c-coefficient
//! @param x1 - pointer to the 1st root
//! @param x2 - pointer to the 2st root
//!
//! @return num_of_roots - number of roots
//!
//-----------------------------------------------------------------------------

int solve_quadratic (double a,  double b, double c, double* x1, double* x2);


//-----------------------------------------------------------------------------
//! @brief This function print roots and number of roots
//!
//! @param num_of_roots - number of roots
//! @param x1 - 1st root
//! @param x2 - 2st root
//!
//-----------------------------------------------------------------------------

void print_roots (int num_of_roots, double x1, double x2);


//-----------------------------------------------------------------------------
//! @brief This function solves linear equation
//!
//! @param a - a-coefficient
//! @param b - b-coefficient
//! @param c - c-coefficient
//! @param x1 - pointer to the 1st root
//! @param x2 - pointer to the 2st root
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
//! @param a - a-coefficient
//! @param b - b-coefficient
//! @param c - c-coefficient
//! @param x1 - pointer to the 1st root
//! @param x2 - pointer to the 2st root
//!
//! @note TYPE - linear or quadratic equation
//!
//-----------------------------------------------------------------------------

int solve_equation (double a,  double b, double c, double* x1, double* x2);


//-----------------------------------------------------------------------------
//! @brief  this function checks if two numbers are the same
//!
//! @param a - first numeric
//! @param b - first numeric
//!
//! @return bool - true - a == b
//!                false - a != b
//! @note accuracy = 0,1
//-----------------------------------------------------------------------------

bool is_equal (double a, double b);


//-----------------------------------------------------------------------------

#endif
