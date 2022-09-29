#ifndef MAIN_H
#define MAIN_H

//-----------------------------------------------------------------------------

#include "unit_test.h"
#include "input_output.h"
#include "math_funct.h"

//-----------------------------------------------------------------------------

const Option cmd_args[] =
{
    {"-test",    open_test},
    {"-t",       open_test},
    {"-testing", open_test},
};

//-----------------------------------------------------------------------------

#endif //MAIN_H
