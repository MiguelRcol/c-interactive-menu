#include <stdio.h>
#include <stdlib.h>     // for system()
#include "src/math.h"
#include "src/age.h"
#include "src/weather.h"    // include weather header
#include "src/helper.h"   // include helper header

int main(void)
{
    int option = 0;

    while (option != 4)
    {
        system("clear");

        printf("---- Menu ----\n");
        printf("1. Math Tool\n");
        printf("2. Age classifier\n");
        printf("3. Weather advice\n");
        printf("4. Exit\n\n");
        printf("Choose an option: ");

        if (scanf("%d", &option) != 1) {
            // clear invalid input
            int c; while ((c = getchar()) != '\n' && c != EOF) {}
            option = 0;
            continue;
        }

        switch (option) {
            case 1:
                math_tool();
                break;
            case 2:
                age_classifier();
                break;
            case 3:
                weather_advice();
                break;
            case 4:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid option. Try again.\n");
                break;
        }

        if (option != 4) {
            wait_enter();
        }
    }

    return 0;
}
