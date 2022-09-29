//! @file input_output.h

#ifndef   INPUT_OUTPUT_H
#define   INPUT_OUTPUT_H

//-----------------------------------------------------------------------------

#include "math_funct.h"
#include "unit_test.h"

//-----------------------------------------------------------------------------

struct Option
{
    char *opt_name;

    void (*func)();
};

//-----------------------------------------------------------------------------

const int num_of_support_args = 3;

//-----------------------------------------------------------------------------

const int success_read = 1;
const int stop_work    = 0;

//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
//! @brief This function handles user's input
//!
//! @param [out] a - pointer to a-coefficient
//! @param [out] b - pointer to b-coefficient
//! @param [out] c - pointer to c-coefficient
//!
//! @return SUCCESS_READ, if reading successfully completed
//!         STOP_WORK, if user decided to finish working
//!
//! @note  Also it remembers the parameters entered by the user
//!
//-----------------------------------------------------------------------------
int input_handling (double* a, double* b, double* c);

//-----------------------------------------------------------------------------
//! @brief This function  clears the buffer
//-----------------------------------------------------------------------------
void clear_buf ();

//-----------------------------------------------------------------------------
//! @brief This function prints dashs
//-----------------------------------------------------------------------------
void dashs ();

//-----------------------------------------------------------------------------
//! @brief This function this function displays information about program
//-----------------------------------------------------------------------------
void inform_user ();

//-----------------------------------------------------------------------------
//! @brief This function checks, if user has chosen to exit the program
//!
//! @param [in] quit_sym - this symbol is entered by the user
//!
//! @return bool - true, when user has chosen to quit
//!              - false, when user has chosen to continue
//!
//! @note if such a symbol is not found, the program runs in standard mode
//!
//-----------------------------------------------------------------------------
bool check_quit (int user_input_sym);

//-----------------------------------------------------------------------------
//! @brief This function prints amount of roots
//!
//! @param [in] num_of_roots - the number of roots
//!
//-----------------------------------------------------------------------------
void print_amount_of_roots (int num_of_roots);

//-----------------------------------------------------------------------------
//! @brief This function handles arguments of command line
//!
//! @param [in] argc - the number of command line's arguments
//! @param [in] *argv[] - the array of command line's arguments
//! @param [in] cmd_args[] - the array of structs, which contains supported args
//! @param [in] options_range - number of supported args
//!
//! @return ARG_MEET, if user use com
//!mand line
//!         ARG_NO, in other situations
//!
//-----------------------------------------------------------------------------
void arg_handle (int argc, char* argv[], const struct Option cmd_args[], int options_range);

//-----------------------------------------------------------------------------
//! @brief This function handles user's exit
//-----------------------------------------------------------------------------
void prog_wait_close ();

#endif //INPUT_OUTPUT_H
