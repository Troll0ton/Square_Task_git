#include "main.h"

//-----------------------------------------------------------------------------

int main (int argc, char *argv[])
{
    assert (argc != 0 && argv != NULL);

    arg_handle (argc, argv, cmd_args, num_of_support_args);

    double a = 0;
    double b = 0;
    double c = 0;

    double x1 = 0;
    double x2 = 0;

    inform_user ();

    if(input_handling (&a, &b, &c) == stop_work)
    {
        prog_wait_close ();

        return 0;
    }

    int num_of_roots = solve_equation (a, b, c, &x1, &x2);

    print_roots (num_of_roots, x1, x2);

    prog_wait_close ();

    return 0;
}

//-----------------------------------------------------------------------------
