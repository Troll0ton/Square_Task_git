//! @file unit_test.h

#ifndef UNIT_TEST_H
#define UNIT_TEST_H

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
//! @param [in] test_sym - this symbol is entered by the user
//!
//! @return bool - true-indicating that the user has chosen to start unit testing
//!
//! @note if such a symbol is not found, the program runs in standard mode
//!
//-----------------------------------------------------------------------------
bool check_starting_test (int user_input_sym);

//-----------------------------------------------------------------------------
//! @brief This function do unit testing
//!
//! @param a [in] - a-coefficient
//! @param b [in] - b-coefficient
//! @param c [in] - c-coefficient
//! @param x1_right [in] - 1st root from file
//! @param x1_right [in] - 2st root from file
//! @param num_of_roots_right [in] - number of roots from file
//!
//! @note function compares the values from the file and from the program, and in case of a mismatch reports it
//!
//-----------------------------------------------------------------------------
void unit_test (double a, double b, double c,
                double x1_right, double x2_right, int  num_of_roots_right);

//-----------------------------------------------------------------------------
//! @brief This function informs the user that there is ERROR in the Test.
//!
//! @param [in] num_of_test - test number
//!
//-----------------------------------------------------------------------------
void print_error (int test_num);

//-----------------------------------------------------------------------------

#endif //UNIT_TEST_H
