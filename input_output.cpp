#include "input_output.h"

//-----------------------------------------------------------------------------


void inform_user ()
{
    dashs ();
    dashs ();

    printf ("#  Square equation solver \n"
            "#  (c)Anton, 2022\n\n");

    dashs ();

    printf ("Press q to exit                     \n"
            "Press t to begin unit testing       \n\n"
            "Please enter coefficients (a, b, c):\n");

    dashs ();
}

//-----------------------------------------------------------------------------

bool input_handling (double *a, double *b, double *c)
{
    assert (a != NULL);
    assert (b != NULL);
    assert (c != NULL);

    assert (a != b);
    assert (a != c);

    const int correct_input = 3;

    while(scanf ("%lg %lg %lg", a, b, c) != correct_input)
    {
        int user_input_sym = getchar ();

        if(check_quit (user_input_sym))
        {
            printf ("EXIT");
            dashs ();

            return false;
        }

        if(check_starting_test (user_input_sym))
        {
            open_test ();

            return false;
        }

        printf ("Wrong input. Please try again."
                "Press q to exit");
        dashs ();

        clear_buf ();
    }

    return true;
}

//-----------------------------------------------------------------------------

bool check_quit (int user_input_sym)
{
    return (user_input_sym == 'q');
}

//-----------------------------------------------------------------------------

void dashs ()
{
    printf ("\n--------------------------------------------------------"
            "--------------------------------------------------------\n");
}

//-----------------------------------------------------------------------------

void clear_buf ()
{
    while(getchar () != '\n') { }
}

//-----------------------------------------------------------------------------

void print_amount_of_roots(int num_of_roots)
{
    switch(num_of_roots)
    {
        case NO_ROOT:
            printf ("roots doesn't exist");
            break;
        case ONE_ROOT:
            printf ("1 root");
            break;
        case TWO_ROOTS:
            printf ("2 roots");
            break;
        case INFINITY_ROOTS:
            printf ("the number of roots id infinite");
            break;
    }
}

//-----------------------------------------------------------------------------
