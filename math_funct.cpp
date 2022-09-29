#include "main.h"

//-----------------------------------------------------------------------------

int solve_equation (double a, double b, double c, double *x1, double *x2)
{
    assert (std::isfinite (a));
    assert (std::isfinite (b));
    assert (std::isfinite (c));

    assert (x1 != NULL);
    assert (x2 != NULL);
    assert (x1 != x2);

    if(is_equal (a, 0))
    {
        return solve_linear (b, c, x1, x2);
    }

    return solve_quadratic (a, b, c, x1, x2);

}

//-----------------------------------------------------------------------------

int solve_linear (double b, double c, double* x1, double* x2)
{
    assert (std::isfinite (b));
    assert (std::isfinite (c));

    assert (x1 != NULL);
    assert (x2 != NULL);
    assert (x1 != x2);

    if(is_equal (b, 0) && is_equal (c, 0))
    {
        return INFINITY_ROOTS;
    }

    if(is_equal (b, 0))
    {
        return NO_ROOT;
    }

    *x1 = -c / b;
    *x2 = -c / b;

    if(is_equal (*x1, 0))
    {
        *x1 = *x2 = 0;
    }

    return ONE_ROOT;
}
//-----------------------------------------------------------------------------

int solve_quadratic (double a, double b, double c, double* x1, double* x2)
{
    assert (std::isfinite (a));
    assert (std::isfinite (b));
    assert (std::isfinite (c));

    assert (x1 != NULL);
    assert (x2 != NULL);
    assert (x1 != x2);

    double discriminant = b*b - 4*a*c;

    if(discriminant > 0)
    {
        double sqrt_discr = sqrt (discriminant);

        *x1 = (-b + sqrt_discr) / (2 * a);
        *x2 = (-b - sqrt_discr) / (2 * a);

        if(is_equal (*x1, 0))
        {
            *x1 = 0;
        }

        if(is_equal (*x2, 0))
        {
            *x2 = 0;
        }

        return TWO_ROOTS;
    }

    if(is_equal (discriminant, 0))
    {
        *x1 = -b / (2 * a);
        *x2 = -b / (2 * a);

        if(is_equal (*x1, 0))
        {
            *x1 = *x2 = 0;
        }

        return ONE_ROOT;
    }

    return NO_ROOT;
}

//-----------------------------------------------------------------------------

void print_roots (int num_of_roots, double x1, double x2)
{
    assert (std::isfinite (num_of_roots));
    assert (std::isfinite (x1));
    assert (std::isfinite (x2));

    switch(num_of_roots)
    {
        case NO_ROOT:
            printf ("Roots doesn't exit\n\n");
            break;
        case INFINITY_ROOTS:
            printf ("Number of roots of equation is infinite\n\n");
            break;
        case TWO_ROOTS:
            printf ("Number of roots of equation is 2, x1 = %lg, x2 = %lg\n\n", x1, x2);
            break;
        case ONE_ROOT:
            printf ("Number of roots of equation is 1, x1 = %lg, x2 = %lg\n\n", x1, x2);
            break;
        default:
            printf ("ERROR LINE - %d, NUM_OF_SOLUTION - %d.\n\n", __LINE__, num_of_roots);
            break;
    }
}

//-----------------------------------------------------------------------------

bool is_equal (double a, double b)
{
    assert (std::isfinite (a));
    assert (std::isfinite (b));

    const double EPS = 1e-1;

    return (fabs (a - b) < EPS);
}

//-----------------------------------------------------------------------------
