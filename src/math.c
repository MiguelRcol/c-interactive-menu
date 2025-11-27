#include "math.h"
#include <stdio.h>
#include <stdlib.h>  // for system("clear")

// This function provides basic math operations.
void math_tool(void)
{
    int choice = 0;
    double a = 0, b = 0, result = 0;

    while (choice != 5)
    {
        system("clear");

        printf("---- Math Tool Menu ----\n");
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
                printf("Addition selected.\n");
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);

                system("clear");    // clean result view

                result = a + b;
                printf("Result: %.2lf + %.2lf = %.2lf\n", a, b, result);
                break;

            case 2:
                printf("Subtraction selected.\n");
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);

                system("clear");

                result = a - b;
                printf("Result: %.2lf - %.2lf = %.2lf\n", a, b, result);
                break;

            case 3:
                printf("Multiplication selected.\n");
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);

                system("clear");

                result = a * b;
                printf("Result: %.2lf * %.2lf = %.2lf\n", a, b, result);
                break;

            case 4:
                printf("Division selected.\n");
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);

                system("clear");

                if (b != 0)
                {
                    result = a / b;
                    printf("Result: %.2lf / %.2lf = %.2lf\n", a, b, result);
                }
                else
                {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;

            case 5:
                printf("Returning to main menu...\n");
                break;

            default:
                printf("Invalid option. Please try again.\n");
                break;
        }

        if (choice != 5)
        {
            printf("\nPress Enter to continue...");
            getchar();  // consume '\n'
            getchar();  // wait for Enter
        }
    }
}
