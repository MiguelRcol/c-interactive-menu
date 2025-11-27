#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>     // for system()
#include "src/math.h"

int main(void)
{
    int option = 0;

    // Program flow:
    // clear terminal
    // shows option menu
    // prompt user for option selection
    // while option != 4
    //     clear terminal
    //     check selected option and execute action
    //     wait for user input to continue
    //     clear terminal again
    //     show option menu again
    //     prompt user for option selection again

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
                // weather_advice(); // not implemented yet
                printf("Weather advice coming soon!\n");
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
