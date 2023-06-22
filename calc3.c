#include <stdio.h>
#include <time.h>

void delay4(float number_of_seconds);
void print_digits(int integer1);

void calc3()
{
    int integer1;
    int parameter;
    //title
    printf("*****************************************************\n");
    printf("*                                                   *\n");
    printf("*                                                   *\n");
    printf("*                Integer To Digits                  *\n");
    printf("*             Max 10 Digits Should Have             *\n");
    printf("*                                                   *\n");
    printf("*                                                   *\n");
    printf("*****************************************************\n");
    delay4(4);
    system("clear");

    do
    {
        //title
        printf("Enter process parameter:\n");
        printf("*****************************************************\n");
        printf("*                                                   *\n");
        printf("*              1-Continue                           *\n");
        printf("*              2-Exit                               *\n");
        printf("*                                                   *\n");
        printf("*****************************************************\n");

        scanf("%d", &parameter);
        system("clear");

        switch (parameter)
        {
            case 1://continue calculate integer to digit function switch
                printf("Enter Integer: ");
                scanf("%d", &integer1);
                print_digits(integer1);
                printf("\n\n");
                delay4(4);
                break;
            case 2:// exit
                printf("\n");
                break;
            default:
                printf("Invalid Parameter");
                break;
        }

    }
    while (parameter != 2);

    printf("See You Later :))");
}
//print digit
void print_digits(int integer1)
{
    if (integer1 != 0)
    {
        print_digits(integer1 / 10);//recursive function
        int digit = integer1 % 10;//delete last digit
        switch (digit)
        {
            case 0:
                printf("Zero ");//0
                break;
            case 1:
                printf("One ");//1
                break;
            case 2:
                printf("Two ");//2
                break;
            case 3:
                printf("Three ");//3
                break;
            case 4:
                printf("Four ");//4
                break;
            case 5:
                printf("Five ");//5
                break;
            case 6:
                printf("Six ");//6
                break;
            case 7:
                printf("Seven ");//7
                break;
            case 8:
                printf("Eight ");//8
                break;
            case 9:
                printf("Nine ");//9
                break;
            default:
                printf("Invalid Input...");
                break;
        }
    }
}
//delay
void delay4(float number_of_seconds)
{
    float milli_seconds = 1000 * number_of_seconds;
    clock_t start_time = clock();
    while (clock() < start_time + milli_seconds);
}
