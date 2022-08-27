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

bool check_quit (int quit_sym)
{
    return (quit_sym == 'q');
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

