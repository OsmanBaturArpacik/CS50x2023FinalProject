#include <stdio.h> //standard
#include <time.h> //clock_t

void delay(float number_of_seconds)
{
    milli_seconds = 1000 * number_of_seconds;
    clock_t start_time = clock();
    while (clock() < start_time + milli_seconds);
}
