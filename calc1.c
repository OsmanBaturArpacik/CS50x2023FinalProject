#include <stdio.h>
#include <time.h>
//BodyMassIndex bmi_calc
void delay2(float number_of_seconds);
void bmi_calc(float weight, float length);

void calc1()
{
    float weight, length;
    int parameter;
    //title
    printf("*****************************************************\n");
    printf("*                                                   *\n");
    printf("*                                                   *\n");
    printf("*          Welcome To Calculate BodyMassIndex       *\n");
    printf("*                                                   *\n");
    printf("*                                                   *\n");
    printf("*****************************************************\n");
    delay2(4);
    system("clear");

    do
    {
        //title
        printf("Select parameter:\n");
        printf("*****************************************************\n");
        printf("*                                                   *\n");
        printf("*              1-Calculate BodyMassIndex            *\n");
        printf("*              2-Exit                               *\n");
        printf("*                                                   *\n");
        printf("*****************************************************\n");

        scanf("%d", &parameter);
        system("clear");

        switch (parameter)
        {
            case 1://calculate
                printf("Enter Your Weight(kg): ");
                scanf("%f", &weight);
                printf("Enter Your Length(m): ");
                scanf("%f", &length);
                bmi_calc(weight, length);
                printf("\n");
                delay2(4);
                break;
            case 2://exit
                printf("\n");
                break;
            default:
                printf("Invalid Parameter!!!\n");
                break;
        }
    }
    while (parameter != 2);
    //exit
    printf("See You Later. Stay Healthy :))))");
}
//function bodymasscalculator
void bmi_calc(float weight, float length)
{
    float result;

    result = weight / (length * length);

    if (result >= 20 && result <= 25)
    {
        printf("You are calculated as Normal\n");
    }
    else if (result > 25)
    {
        printf("You are calculated as Overweight\n");
    }
    else if (result < 20)
    {
        printf("You are calculated as Thin\n");
    }
}
//delay
void delay2(float number_of_seconds)
{
    float milli_seconds = 1000 * number_of_seconds;
    clock_t start_time = clock();
    while (clock() < start_time + milli_seconds);
}
