#include <stdio.h>
#include <stdbool.h>
#include "src/math.h"




int main(void){
    // Program flow:
    system("clear");
    printf("----menu----\n");
    printf("1. Math Tool\n");
    printf("2. Age classifier\n");
    printf("3. weather advice\n");
    printf("4. Exit\n");
    printf("Select an option: ");
    scanf("%d", &option);
// clear terminal
while (option != 4)     
{
    system("clear")
}
    // check selected option and execute action
    switch(option)
    {
        case 1:
            math_tool();
            break;
        case 2:
        age_classifier();
            break;
        case 3:
            wearher_forecast();
            break;
        default:
            printf("Invalid option. Please try again.\n");
            break;
    }
    // wait for user input to continue
// shows option menu
// prompt user for option selection
// while option != 4
//     clear terminal
//     check selected option and execute action
//     wait for user input to continue
//     clear terminal again
//     show option menu again
//     prompt user for option selection again

}