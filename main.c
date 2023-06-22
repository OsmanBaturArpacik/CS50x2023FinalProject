#include <stdio.h> //standard
#include <string.h> //strcmp()
#include "games1.c"
#include "games2.c"
#include "games3.c"
#include "delay.c"
#include "calc1.c"
#include "calc2.c"
#include "calc3.c"
#include "calc4.c"
//#include <ctype.h> toupper(char*x)s
void selectGame();

int main(void)
{
    printf("*****************************************************\n");
    printf("*                                                   *\n");
    printf("*                                                   *\n");
    printf("*            Welcome to Final Project               *\n");
    printf("*                And This is CS50x                  *\n");
    printf("*                                                   *\n");
    printf("*                                                   *\n");
    printf("*****************************************************\n");

    char answers[50];

    do
    {
    	printf("*****************************************************\n");
	    printf("*                ---Select Game---                  *\n");
	   	printf("*                                                   *\n");
	    printf("*              1-Guess It                           *\n");
	    printf("*              2-Tic Tac Toe VS AI                  *\n");
	    printf("*              3-Quiz C (Test Your Knowledge)       *\n");
	    printf("*              4-Change Panel To Calculate Smth.    *\n");
	    printf("*                                                   *\n");
	    printf("*****************************************************\n");

		selectGame();

	    delay(1);

		printf("Do you want continue? ");
		fflush(stdin);
		scanf("%s", answers);
	} while(!(strcmp("no", answers) == 0 || strcmp("No", answers) == 0 || strcmp("nO", answers) == 0 || strcmp("NO", answers) == 0 || strcmp("n", answers) == 0  || strcmp("N", answers) == 0));



	return 0;
}

void selectGame()
{
	int game;
	scanf("%d", &game);

    switch(game)
    {
    	case 1:
			system("clear");
    		games1();
			delay(2);
			system("clear");
    		break;
    	case 2:
			system("clear");
    		games2();
			delay(2);
			system("clear");
    		break;
    	case 3:
			system("clear");
    		games3();
			delay(2);
			system("clear");
    		break;
    	case 4:
			system("clear");
    		printf("*****************************************************\n");
		    printf("*               ---Select Calculator---             *\n");
		   	printf("*                                                   *\n");
		    printf("*              1-BodyMassIndex Calculator           *\n");
		    printf("*              2-Price Updater Program              *\n");
		    printf("*              3-Integer To Digits                  *\n");
		    printf("*              4-University Point System            *\n");
		    printf("*                                                   *\n");
		    printf("*****************************************************\n");

		    int calc;
			fflush(stdin);
		    scanf("%d", &calc);
		    switch(calc)
		    {
		    	case 1:
		    		system("clear");
					calc1();
					delay(2);
					system("clear");
		    		break;
		    	case 2:
		    		system("clear");
					calc2();
					delay(2);
					system("clear");
		    		break;
		    	case 3:
		    		system("clear");
					calc3();
					delay(2);
					system("clear");
		    		break;
				case 4:
		    		system("clear");
					calc4();
					delay(2);
					system("clear");
		    		break;
		    	default: printf("Invalid number.\n");
			}
			delay(2);
			system("clear");

    		break;
    	default: printf("Invalid number.\n");
	}
}
