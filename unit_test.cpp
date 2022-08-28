#include "unit_test.h"

//-----------------------------------------------------------------------------

bool check_starting_test (int user_input_sym)
{
    return (user_input_sym == 't');
}

//-----------------------------------------------------------------------------

void open_test ()
{
    FILE   *myfile  = fopen (DATA_TEST_FILE, "r");
    assert (myfile != NULL);

    int num_of_roots_convert = 0;
    int num_of_roots_right   = 0;

    int counter_file = 0;

    double a = 0;
    double b = 0;
    double c = 0;

    double x1_right = 0;
    double x2_right = 0;

    while(fscanf (myfile, "%lg %lg %lg %lg %lg %d",
             &a, &b, &c, &x1_right, &x2_right, &num_of_roots_convert) != EOF)
    {
        counter_file++;

        num_of_roots_right = convert_function (num_of_roots_convert);

        printf ("Test %d: (a=%lg, b=%lg, c=%lg) ", counter_file, a, b, c);

        unit_test (a, b, c, x1_right, x2_right, num_of_roots_right);
    }

    dashs ();
}


//-----------------------------------------------------------------------------

void unit_test (double a,        double b,        double c,
                double x1_right, double x2_right, int    num_of_roots_right)
{
    assert (std::isfinite (a));
    assert (std::isfinite (b));
    assert (std::isfinite (c));

    assert (std::isfinite (x1_right));
    assert (std::isfinite (x2_right));
    assert (std::isfinite (num_of_roots_right));

    double x1 = 0;
    double x2 = 0;

    bool flag_error  = false;

    int num_of_roots = solve_equation (a, b, c, &x1, &x2);

    if(!is_equal (num_of_roots, num_of_roots_right))
    {
        flag_error = true;

        printf ("Unexpected number of roots: ");
        print_amount_of_roots (num_of_roots);

        printf ("Expected number of roots is ");
        print_amount_of_roots (num_of_roots_right);

    }

    if(!is_equal (x1, x1_right))
    {
        flag_error = true;

        printf ("Wrong root:    %lg\n"
                "Expected root: %lg\n", x1, x1_right);
    }

    if(!is_equal (x2, x2_right))
    {
        flag_error = true;

        printf ("Wrong root:    %lg\n"
                "Expected root: %lg\n", x2, x2_right);
    }

    if(flag_error == false)
    {
        printf ("It is correct.\n\n");
    }
    else
    {
        printf ("\n\n");
    }
}

//-----------------------------------------------------------------------------


int convert_function (int a)
{
    // return a + 10;

    switch(a)
    {
        case 0:
            return NO_ROOT;
            break;
        case 1:
            return ONE_ROOT;
            break;
        case 2:
            return TWO_ROOTS;
            break;
        case 3:
            return INFINITY_ROOTS;
            break;
    }
}

//-----------------------------------------------------------------------------
