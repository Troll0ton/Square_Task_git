#include "unit_test.h"
#include "input_output.h"
#include "math_funct.h"

//-----------------------------------------------------------------------------

int main ()
{
    double a = 0;
    double b = 0;
    double c = 0;

    double x1 = 0;
    double x2 = 0;

    inform_user ();

    if(!input_handling (&a, &b, &c))
    {
        printf ("\nProgram is complete.");

        return 0;
    }

    int num_of_roots = solve_equation (a, b, c, &x1, &x2);

    print_roots (num_of_roots, x1, x2);

    return 0;
}

//-----------------------------------------------------------------------------


