#include <stdio.h>
#include <stdlib.h>     // for system()
#include "src/math.h"
#include "src/age.h"
#include "src/weather.h"    // include weather header

int main(void)
{
    int option = 0;

    while (option != 4)
    {
        system("clear");

        printf("----Menu----\n");
        printf("1. Math Tool\n");
        printf("2. Age classifier\n");
        printf("3. Weather advice\n");
        printf("4. Exit\n");
        printf("Select an option: ");
        scanf("%d", &option);

        system("clear");

        switch (option)
        {
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
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid option. Please try again.\n");
                break;
        }

        if (option != 4)
        {
            printf("\nPress Enter to continue...");
            getchar();  // consumes leftover '\n' from scanf
            getchar();  // waits for real Enter
        }
    }

    return 0;
}
