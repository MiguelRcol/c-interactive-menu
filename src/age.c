#include "age.h"
#include <stdio.h> 
#include <stdlib.h>  // for system("clear")

/*FUNCTION age_classifier:

    // Clear terminal for clean UI
    CLEAR SCREEN

    // Display menu header
    PRINT "---- Age Classifier ----"

    // Get user input
    PRINT "Enter an age: "
    READ age

    // Clear before showing result
    CLEAR SCREEN

    // Classification logic
    IF age < 30:
        PRINT "Category: Young"
    ELSE IF age < 60:
        PRINT "Category: Adult"
    ELSE:
        PRINT "Category: Senior"

    // Wait before returning to main menu
    PRINT "Press Enter to continue..."
    WAIT FOR ENTER

END FUNCTION */

void age_classifier(void)
{
    int age = 0;

    system("clear");

    printf("---- Age Classifier ----\n");
    printf("Enter an age: ");
    scanf("%d", &age);

    system("clear");

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

    printf("\nPress Enter to continue...");
    getchar();  // consumes leftover '\n' from scanf
    getchar();  // waits for user to press Enter
}