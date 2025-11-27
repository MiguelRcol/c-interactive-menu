#include "math.h"
#include <stdio.h>
#include <stdlib.h>  // for system("clear")
#include "helper.h"
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
        printf("5. Back to main menu\n\n");
        printf("Choose an operation: ");

        if (scanf("%d", &choice) != 1) {
            int c; while ((c = getchar()) != '\n' && c != EOF) {}
            choice = 0;
            continue;
        }

        if (choice >=1 && choice <=4) {
            printf("Enter first number: ");
            if (scanf("%lf", &a) != 1) { int c; while ((c = getchar()) != '\n' && c != EOF) {} printf("Invalid input.\n"); wait_enter(); continue; }
            printf("Enter second number: ");
            if (scanf("%lf", &b) != 1) { int c; while ((c = getchar()) != '\n' && c != EOF) {} printf("Invalid input.\n"); wait_enter(); continue; }
        }

        switch (choice)
        {
            case 1:
                result = a + b;
                printf("\nResult: %.6g + %.6g = %.6g\n", a, b, result);
                break;
            case 2:
                result = a - b;
                printf("\nResult: %.6g - %.6g = %.6g\n", a, b, result);
                break;
            case 3:
                result = a * b;
                printf("\nResult: %.6g * %.6g = %.6g\n", a, b, result);
                break;
            case 4:
                if (b == 0) {
                    printf("\nError: Division by zero is not allowed.\n");
                } else {
                    result = a / b;
                    printf("\nResult: %.6g / %.6g = %.6g\n", a, b, result);
                }
                break;
            case 5:
                break;
            default:
                printf("Invalid choice, try again.\n");
                break;
        }

        if (choice != 5) wait_enter();
    }
}
