// src/weather.c
#include "weather.h"
#include <stdio.h>
#include <stdlib.h>   // for system("clear")
#include "helper.h"
void weather_advice(void)
{
    int cold = 0;
    int rain = 0;

    system("clear");

    printf("---- Weather Advisor ----\n");
    printf("Answer with 1 = Yes, 0 = No.\n\n");

    printf("Is it cold? (1/0): ");
    scanf("%d", &cold);

    printf("Is it raining? (1/0): ");
    scanf("%d", &rain);

    system("clear");

    printf("---- Weather Recommendation ----\n");

    if (cold && rain)
    {
        printf("You should take: coat + umbrella.\n");
    }
    else if (cold && !rain)
    {
        printf("You should take: coat.\n");
    }
    else if (!cold && rain)
    {
        printf("You should take: umbrella.\n");
    }
    else
    {
        printf("You don't need coat or umbrella.\n");
    }
    wait_enter();
}
