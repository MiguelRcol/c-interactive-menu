#include "math.h"
#include <stdio.h>

// this funtion provides basic math operations
void math_tool(void)
{   
    int choice;
    double a=0, b=0, result=0;

    while (choice !=5)  
    {
        system("clear");

        printf("Math Tool Menu:\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Back to main menu\n");
        printf("Select an option: ");
        scanf("%d", &choice);

        system("clear");

        switch (choice)
        {
        case 1:
            /* addition */
            printf("Addition selected.\n");
             printf("Enter two numbers: ");
             scanf("%lf %lf", &a, &b);
             result = a + b;
             printf("Result: %.2lf + %.2lf = %.2lf\n", a, b, result);
            break;
        case 2:
            /* subtraction */
            printf("Subtraction selected.\n");
             printf("Enter two numbers: ");
             scanf("%lf %lf", &a, &b);
             result = a - b;
             printf("Result: %.2lf - %.2lf = %.2lf\n", a, b, result);   
            break;
        case 3:
            /* multiplication */
            break;
        case 4:
            /* division */
            break;
            case 5:
            /* back to main menu */
            printf("Returning to main menu...\n");
            break;
        
        default:
        printf("Invalid option. Please try again.\n");
            break;
        }   
        if (choice !=5)
        {
            printf("\nPress Enter to continue...");
            getchar();  // consumes leftover '\n' from scanf
            getchar();  // waits for user to press Enter    
        }
        
    }
    
    //TODO: implement math tool
    // Math Tool
    // 1. Add
    // 2. Subtract
    // 3. Multiply
    // 4. Divide
    // 5. Back to main menu


}

