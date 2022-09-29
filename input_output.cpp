#include "input_output.h"

//-----------------------------------------------------------------------------

void inform_user ()
{
    dashs ();
    dashs ();

    printf ("#  Square equation solver \n"
            "#  (c)Anton, 2022\n\n");

    dashs ();

    printf ("Press 'q' to exit                   \n"
            "Please enter coefficients (a, b, c):\n");

    dashs ();
}

//-----------------------------------------------------------------------------

int input_handling (double *a, double *b, double *c)
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

            return STOP_WORK;
        }

        printf ("Wrong input. Please try again."
                "Press q to exit");
        dashs ();

        clear_buf ();
    }

    return SUCCESS_READ;
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

void print_amount_of_roots (int num_of_roots)
{
    switch(num_of_roots)
    {
        case NO_ROOT:
            printf ("roots doesn't exist\n");
            break;
        case ONE_ROOT:
            printf ("1 root\n");
            break;
        case TWO_ROOTS:
            printf ("2 roots\n");
            break;
        case INFINITY_ROOTS:
            printf ("the number of roots id infinite\n");
            break;
        default :
            printf ("unexpected number of roots return\n");
            break;
    }
}

//-----------------------------------------------------------------------------

// argv, argc

int arg_identify (struct Option *Opt_arg)
{
    const char *t_sym = "-t";

    if(strcmp ((const char*) (Opt_arg -> opt_name), t_sym) == SAME_STR)
    {

        // Opt_arg->call_funct(argc, argv);

        // --input file.txt --output out.txt
        (Opt_arg -> call_funct) = open_test;

        return TEST_OPEN;
    }

    //Same for other arguments

    return ARG_NO;
}

//-----------------------------------------------------------------------------

int arg_handle (int argc, char *argv[])
{
    if(argc != max_argc)
    {
        if (argc > 2)
        {
            printf ("To many command line's arguments.\n");

            return ARG_MEET;       // INCORRECT_ARG_NUM
        }

        return ARG_NO;
    }

    struct Option Opt_arg = {};

    Opt_arg.opt_name = argv[1];

    Opt_arg.opt_handle = arg_identify;

    if(Opt_arg.opt_handle (&Opt_arg) == ARG_NO)
    {
        printf ("\n"
                "It is not command line's argument  \n"
                "input '-t' to begin unit testing   \n\n");

        return ARG_MEET;    //  INCORRECT_ARG
    }

    Opt_arg.call_funct ();

    return ARG_MEET;
}

//-----------------------------------------------------------------------------

void prog_wait_close ()
{
    printf ("\nProgram is complete.");

    clear_buf ();
    getchar (); // stop the closing
}

//-----------------------------------------------------------------------------
