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
    if (scanf("%d", &cold) != 1) { int c; while ((c = getchar()) != '\n' && c != EOF) {} printf("Invalid input.\n"); wait_enter(); return; }

    printf("Is it raining? (1/0): ");
    if (scanf("%d", &rain) != 1) { int c; while ((c = getchar()) != '\n' && c != EOF) {} printf("Invalid input.\n"); wait_enter(); return; }

    system("clear");

    if (cold && rain) {
        printf("It's cold and raining – wear a warm coat and take an umbrella.\n");
    } else if (cold) {
        printf("It's cold – wear a warm coat.\n");
    } else if (rain) {
        printf("It's raining – take an umbrella.\n");
    } else {
        printf("Weather looks fine – no coat or umbrella needed.\n");
    }

    wait_enter();
}
