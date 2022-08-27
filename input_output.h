//! @file input_output.h

#ifndef   INPUT_OUTPUT
#define   INPUT_OUTPUT

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

bool check_quit (int quit_sym);

//-----------------------------------------------------------------------------

#endif
