#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>



void games1()
{
    //title
    printf("*****************************************************\n");
    printf("*                                                   *\n");
    printf("*                                                   *\n");
    printf("*               Welcome to Guess Game               *\n");
    printf("*                   Between (0, 20)                 *\n");
    printf("*                                                   *\n");
    printf("*                                                   *\n");
    printf("*****************************************************\n");

playagain://goto function
    srand(time(NULL));//randomize
    int randomint = 0, guess = 0, guesscount = 5;

    randomint = rand() % 21;//0, 20

    while (guesscount > 0)
    {
        //starting take guess
        printf("\nGuess It: ");
        scanf("%d", &guess);
        if (randomint != guess)
        {
            printf("Wrong Answer HaHaHa :), ");

            int distance = randomint - guess;
            if (distance < 0)
            {
                distance = distance * (-1);
            }
            if (distance > 5)
            {
                printf("Cold!!!, ");
            }
            else if (distance < 5)
            {
                printf("Hot!!!, ");
            }
            if (guess < randomint)
            {
                printf("increase the guess\n\n");
            }
            else
            {
                printf("decrease the guess\n\n");
            }
        }
        else
        {
            printf("Congratulations. U Found :(\n\n");
            break;
        }
        guesscount--;
        //control
        if (guesscount == 0)
        {
            printf("You have remain no more guesses.\n");
        }
        else
        {
            printf("You have remain %d guesses left.", guesscount);
        }
    }


    if (guesscount == 0)
    {
        //control
        printf("You Lost, Answer was \"%d\" \n\n", randomint);
    }

    char pagain;
    //why its print 2 times i don't know i tried so many alternatives but i don't know...
    do
    {
        //control
        printf("Do you play again? (Y/N) : ");
        fflush(stdin);
        scanf("%c", &pagain);
    }
    while (!(toupper(pagain) == 'Y' || toupper(pagain) == 'N'));

    if (toupper(pagain) == 'Y')
    {
        //title
        system("clear");
        printf("*****************************************************\n");
        printf("*                                                   *\n");
        printf("*                                                   *\n");
        printf("*               Rematch!!! Let's Do it              *\n");
        printf("*                   Between (0, 20)                 *\n");
        printf("*                                                   *\n");
        printf("*                                                   *\n");
        printf("*****************************************************\n");
        goto playagain;
    }
    else if (toupper(pagain) == 'N')
    {
        printf("See you Next time :D");
    }
}
