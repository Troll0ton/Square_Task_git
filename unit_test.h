//! @file unit_test.h

#ifndef UNIT_TEST
#define UNIT_TEST

#define DATA_TEST_FILE "test.txt"

#include "math_funct.h"
#include "input_output.h"

//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
//! @brief This function handles file's data for unit test
//-----------------------------------------------------------------------------

void open_test ();


//-----------------------------------------------------------------------------
//! @brief This function checks, if user has chosen to start unit testing
//!
//! @param test_sym - this symbol is entered by the user
//!
//! @return bool - true-indicating that the user has chosen to start unit testing
//!
//! @note if such a symbol is not found, the program runs in standard mode
//!
//-----------------------------------------------------------------------------

bool check_starting_test (int test_sym);


//-----------------------------------------------------------------------------
//! @brief This function solves quadratic equation
//!
//! @param a - a-coefficient
//! @param b - b-coefficient
//! @param c - c-coefficient
//! @param x1_ref - 1st root from file
//! @param x2_ref - 2st root from file
//! @param num_of_roots_right - number of roots from file
//!
//! @note function compares the values ​​from the file and from the program, and in case of a mismatch reports it
//!
//-----------------------------------------------------------------------------

void unit_test (double a, double b, double c,
                double x1_right, double x2_right, int  num_of_roots_right);


//-----------------------------------------------------------------------------
//! @brief This function informs the user that there is ERROR in the Test.
//!
//! @param num_of_test - test number
//!
//-----------------------------------------------------------------------------

void print_error (int test_num);


//-----------------------------------------------------------------------------
//! @brief This function convert files number to special constants.
//!
//! @param a - file's number
//!
//! @return special constant = num_if_roots
//!
//-----------------------------------------------------------------------------

int  convert_function (int a);


//-----------------------------------------------------------------------------


#endif
