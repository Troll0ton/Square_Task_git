#include "main.h"

//-----------------------------------------------------------------------------

void open_test () //It's also OPEN and CLOSE file, which contains data
{
    FILE   *myfile  = fopen (DATA_TEST_FILE, "r");
    assert (myfile != NULL);

    int num_of_roots_right = 0;

    int counter_file = 0;

    double a = NAN;
    double b = NAN;
    double c = NAN;

    double x1_right = NAN;
    double x2_right = NAN;

    while(fscanf (myfile, "%lg %lg %lg %lg %lg %d",
             &a, &b, &c, &x1_right, &x2_right, &num_of_roots_right) != EOF)
    {
        counter_file++;

        printf ("Test %d: (a=%lg, b=%lg, c=%lg) ", counter_file, a, b, c);

        unit_test (a, b, c, x1_right, x2_right, num_of_roots_right);

        a = NAN;
        b = NAN;
        c = NAN;

        x1_right = NAN;
        x2_right = NAN;
    }

    dashs ();

    fclose (myfile);
}

//-----------------------------------------------------------------------------

void unit_test (double a,        double b,        double c,
                double x1_right, double x2_right, int    num_of_roots_right)
{
    bool flag_error  = false;

    if(!std::isfinite (a)                 ||
       !std::isfinite (b)                 ||
       !std::isfinite (c)                 ||
       !std::isfinite (x1_right)          ||
       !std::isfinite (x2_right)          ||
       !std::isfinite (num_of_roots_right)  )
    {
        printf("Wrong unit test data\n");

        flag_error = true;
    }

    double x1 = 0;
    double x2 = 0;

    if(flag_error == false)
    {
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
}

//-----------------------------------------------------------------------------
