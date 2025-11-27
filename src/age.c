#include "age.h"
#include "helper.h"   // ensure wait_enter() is declared
#include <stdio.h>
#include <stdlib.h>

void age_classifier(void)
{
    int age = -1;

    system("clear");

    printf("---- Age Classifier ----\n");

    // validation loop
    while (age < 0 || age > 120)
    {
        printf("Enter an age (0–120): ");
        scanf("%d", &age);

        if (age < 0 || age > 120)
        {
            printf("Invalid age. Please try again.\n");

            printf("\nPress Enter to continue...");
            getchar(); getchar();

            system("clear");
            printf("---- Age Classifier ----\n");
        }
    }

    system("clear");

    // classification logic
    if (age < 30)
    {
        printf("Category: Young\n");
    }
    else if (age < 60)
    {
        printf("Category: Adult\n");
    }
    else
    {
        printf("Category: Senior\n");
    }
    wait_enter();   
}
