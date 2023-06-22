#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

void delay1(float number_of_seconds);

void games3()
{
   	printf("*****************************************************\n");
    printf("*                                                   *\n");
    printf("*                       C Quiz                      *\n");
    printf("*                 Test Your Knowledge               *\n");
    printf("*                                                   *\n");
    printf("*                                                   *\n");
    printf("*****************************************************\n");

   	delay1(3);
   	system("clear");

   	char questions[][100] = 	{"1-) What is a correct syntax to output \"Hello World\" in C?",
							   	"2-) How do you insert COMMENTS in C code?",
							   	"3-) How can you create a variable with the numeric value 5?",
							   	"4-) What do we call the following? int myNumbers[] = {25, 50, 75, 100};",
							   	"5-) Which keyword is used to create a structure?"
	   							};

   	char options[][100] = 		{"A) printf(\"Hello World\"); ", "B) System.out.printline(\"Hello World\");", "C) cout << \"Hello World1\"", "D) Console.WriteLine(\"Hello World\");", //A
							   	"A) * This is a comment", "B) -- This is comment", "C) # This is comment ", "D) // This is a comment", //D
							   	"A) num = 5;", "B) num = 5 int;", "C) int num = 5;", "D) val num = 5;", //C
							   	"A) A class", "B) An array", "C) A pointer", "D) None of the above", //B
							   	"A) structs", "B) struct", "C) str", "D) structure" //B
	   							};

   	char answers[5] = {'A', 'D', 'C', 'B', 'B'};

   	int n = sizeof(questions)/sizeof(questions[0]);

   	char guess1;

   	int score = 0;

	int i, j, z = 0;

	for (i = 0 ; i < n ; i++)
	{
		printf("*****************************************************\n\n");
		printf("%s\n\n", questions[i]);
		printf("*****************************************************\n");

		for(j = (i * 4) ; j < (i * 4) + 4 ; j++)
		{
			printf("%s\n", options[j]);
		}
		printf("guess: ");
		fflush(stdin);
		scanf("%c", &guess1);
		guess1 = toupper(guess1);

		if (answers[z] == guess1)
		{
			printf("Good Job. :))\n");
			score++;
			if(z != 4)
			{
				printf("Your Score Now %d\n", score);
				printf("Next Question Coming...\n");
			}
			delay1(5);
			system("clear");
		}
		else if (answers[z] != guess1)
		{
			printf("Answer is Wrong :((\n");
			if(z != 4)
			{
				printf("Your Score Now %d\n", score);
				printf("Next Question Coming...\n");
			}
			delay1(5);
			system("clear");
		}
		z++;
	}

	if(score == 5)
		printf("Wow! Congratz!!! You Totally Give True Answer.\nYour Score is %d", score);
	else if(score == 4)
		printf("Nice! You Have Almost Zero Mistakes.\nYour Score is %d", score);
	else if(score == 3)
		printf("Good Job! You should study more.\nYour Score is %d", score);
	else if(score == 2)
		printf("You should study more.\nYour Score is %d", score);
	else if(score == 1)
		printf("You should study more.\nYour Score is %d", score);
	else if(score == 0)
		printf("What the Heck!!! What\'s wrong man?\nYour Score is %d", score);

	delay1(5);
}


void delay1(float number_of_seconds)
{
	float milli_seconds = 1000 * number_of_seconds;
	clock_t start_time = clock();
	while (clock() < start_time + milli_seconds);
}

