//! @file input_output.h

#ifndef   INPUT_OUTPUT_H
#define   INPUT_OUTPUT_H

//-----------------------------------------------------------------------------

#include "math_funct.h"
#include "unit_test.h"

//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
//! @brief This function handles user's input
//!
//! @param  a - pointer to a-coefficient
//! @param  b - pointer to b-coefficient
//! @param  c - pointer to c-coefficient
//!
//! @return bool - false indicating that the user has chosen to exit the program or run a test
//!              - true indicating that the user has chosen to solve his equation
//!
//! @note  Also it remembers the parameters entered by the user
//!
//-----------------------------------------------------------------------------
bool input_handling (double* a, double* b, double* c);

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
//! @brief This function checks if the user has chosen to exit the program
//!
//! @param quit_sym - this symbol is entered by the user
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
//! @brief This function handles starting testing
//!
//! @param [in] argc - the number of command line's arguments
//! @param [in] *argv[] - the array of command line's arguments
//!
//! @return bool - true, when user has chosen to start unit testing
//!              - false, when user has chosen to continue
//!
//-----------------------------------------------------------------------------
bool options (int argc, char *argv[]);

//-----------------------------------------------------------------------------
//! @brief This function handles user's exit
//-----------------------------------------------------------------------------
void prog_wait_close ();

#endif //INPUT_OUTPUT_H
