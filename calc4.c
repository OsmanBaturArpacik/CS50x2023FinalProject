#include <stdio.h>
#include <time.h>

void delay5(float number_of_seconds);

void calc4()
{
    int midg;
    int finalg;
    float ratemidg;
    float ratefinalg;
    float resultmidg;
    float resultfinalg;
    float result;

    int parameter;

    printf("*****************************************************\n");
    printf("*                                                   *\n");
    printf("*                                                   *\n");
    printf("*          Welcome To University Point System       *\n");
    printf("*                                                   *\n");
    printf("*                                                   *\n");
    printf("*****************************************************\n");
    delay5(3);
    system("clear");

    do
    {
        printf("Select parameter:\n");
        printf("*****************************************************\n");
        printf("*                                                   *\n");
        printf("*            1-Calculate University Point System    *\n");
        printf("*            2-Exit                                 *\n");
        printf("*                                                   *\n");
        printf("*****************************************************\n");

        scanf("%d", &parameter);
        system("clear");
        switch (parameter)
        {
            case 1:
                do
                {
                    printf("Midterm grade: ");
                    scanf("%d", &midg);
                    printf("Enter Percent effect(%%): ");
                    scanf("%f", &ratemidg);

                    printf("Final grade: ");
                    scanf("%d", &finalg);
                    printf("Enter Percent effect(%%): ");
                    scanf("%f", &ratefinalg);
                    if (ratemidg + ratefinalg > 100 || ratemidg + ratefinalg < 0)
                    {
                        printf("\n\nShould be two percentage equal 100\nExample:\nMidterm Grade Percent: %%40\nFinal Grade Percent: %%60\n%%100 = %%40 + %%60\n");
                    }
                }
                while (ratemidg + ratefinalg > 100 && ratemidg + ratefinalg < 0);

                if (midg < 0 || finalg < 0 || midg > 100 || finalg > 100)
                {
                    printf("Grades Should Be Greater Than Zero And Lower Than One-Hundred!!!\n");
                }
                else
                {
                    resultmidg = midg * (ratemidg / 100.0); //% effects
                    resultfinalg = finalg * (ratefinalg / 100.0); //% effects

                    result = resultmidg + resultfinalg;
                    // if (result >= 100 || result >=90)
                    if (result <= 100 && result >= 90) //AA
                    {
                        printf("%.2f -> AA", result);
                    }
                    else if (result < 90 && result >= 85) //BA
                    {
                        printf("%.2f -> BA", result);
                    }
                    else if (result < 85 && result >= 80) //BB
                    {
                        printf("%.2f -> BB", result);
                    }
                    else if (result < 80 && result >= 75) //CB
                    {
                        printf("%.2f -> CB", result);
                    }
                    else if (result < 75 && result >= 65) //CC
                    {
                        printf("%.2f -> CC", result);
                    }
                    else if (result < 65 && result >= 60) //DC
                    {
                        printf("%.2f -> DC", result);
                    }
                    else if (result < 60 && result >= 55) //DD
                    {
                        printf("%.2f -> DD", result);
                    }
                    else if (result < 55 && result >= 50) //FD
                    {
                        printf("%.2f -> FD", result);
                    }
                    else if (result < 50 && result >= 0) //FF
                    {
                        printf("%.2f -> FF", result);
                    }
                }
                delay5(3);
                printf("\n");
                break;
            case 2:
                printf("\n");
                break;
            default:
                printf("Invalid Parameter");
                break;
        }
    }
    while (parameter != 2);

    printf("See You Next Time :) -Computer Loves You-");
}
//delay
void delay5(float number_of_seconds)
{
    float milli_seconds = 1000 * number_of_seconds;
    clock_t start_time = clock();
    while (clock() < start_time + milli_seconds);
}
