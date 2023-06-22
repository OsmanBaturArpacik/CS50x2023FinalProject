#include <stdio.h>
#include <time.h>

float CalcPrice(float price, float rate, int parameter);
void delay3(float number_of_seconds);

void calc2()
{
    float price;
    int parameter;
    float rate;
    char answers[50];
    //title
    printf("*****************************************************\n");
    printf("*                                                   *\n");
    printf("*                                                   *\n");
    printf("*        Welcome to the Price Updater Program.      *\n");
    printf("*                                                   *\n");
    printf("*                                                   *\n");
    printf("*****************************************************\n");

    printf("Enter the current price: ");
    scanf("%f", &price);
    system("clear");
    do
    {
        //title
        printf("Enter process parameter:\n");
        printf("*****************************************************\n");
        printf("*                                                   *\n");
        printf("*              1-Raise                              *\n");
        printf("*              2-Discount                           *\n");
        printf("*              3-Current Price                      *\n");
        printf("*              4-Exit                               *\n");
        printf("*                                                   *\n");
        printf("*****************************************************\n");

        scanf("%d", &parameter);
        system("clear");

        switch (parameter)
        {
            case 1://raise
                printf("Enter Raise rate as a percentage(%%):");
                scanf("%f", &rate);
                price = CalcPrice(price, rate, parameter);
                printf("Current price after change: %.2f\n\n", price);
                break;
            case 2://discount
                printf("Enter Discount rate as a percentage(%%):");
                scanf("%f", &rate);

                price = CalcPrice(price, rate, parameter);
                printf("Current price after change: %.2f\nc", price);
                break;
            case 3://current price
                printf("Current Price: %2.f\n\n", price);
                break;
            case 4://exit
                printf("\n");
                break;
            default:
                printf("Invalid Parameter");
                break;
        }
    }
    while (parameter != 4);
    //exit message
    printf("See You Later :) Have A Gratful Day...");
    delay3(3);
}
//function calculator price
float CalcPrice(float price, float rate, int parameter)
{
    if (parameter == 1) //raise
    {
        price += (price * (rate / 100));
    }
    else if (parameter == 2) //discount
    {
        price -= (price * (rate / 100));
    }
    return price;
}
//delay time
void delay3(float number_of_seconds)
{
    float milli_seconds = 1000 * number_of_seconds;
    clock_t start_time = clock();
    while (clock() < start_time + milli_seconds);
}
