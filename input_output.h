//! @file input_output.h

#ifndef   INPUT_OUTPUT_H
#define   INPUT_OUTPUT_H

//-----------------------------------------------------------------------------

#include "math_funct.h"
#include "unit_test.h"

//-----------------------------------------------------------------------------

enum
{
    SUCCESS_READ = 1,
    ARG_MEET = 1,
    NO_ARG = 0, // ??
    ARG_NO = 0,
    SAME_STR = 0,
    STOP_WORK = 0
};

//-----------------------------------------------------------------------------

enum
{
    TEST_OPEN = 1
    //other CLA
};

//-----------------------------------------------------------------------------

const int max_argc = 2;

//-----------------------------------------------------------------------------

struct Option
{
    char *opt_name;

    int opt_param = 0;

    int (*opt_handle) (struct Option *Struct_opt);

    void (*call_funct) ();
};


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
//! @brief This function finds out command line argument and
//!
//! @param [in] Opt_arg - pointer to struct Option
//!
//! @return TEST_OPEN, if argument of command line must run unit testing
//!         NO_ARG, if argument of command is not correct
//!
//! @note if such a symbol is not found, the program runs in standard mode
//!
//-----------------------------------------------------------------------------
int arg_identify (struct Option *Opt_arg);

//-----------------------------------------------------------------------------
//! @brief This function handles arguments of command line
//!
//! @param [in] argc - the number of command line's arguments
//! @param [in] *argv[] - the array of command line's arguments
//!
//! @return ARG_MEET, if user use command line
//!         ARG_NO, in other situations
//!
//-----------------------------------------------------------------------------
int arg_handle (int argc, char *argv[]);

//-----------------------------------------------------------------------------
//! @brief This function handles user's exit
//-----------------------------------------------------------------------------
void prog_wait_close ();

#endif //INPUT_OUTPUT_H
