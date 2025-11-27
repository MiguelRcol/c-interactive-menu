#include "age.h"
#include <stdio.h> 
#include <stdlib.h>  // for system("clear")

FUNCTION age_classifier:

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

END FUNCTION
