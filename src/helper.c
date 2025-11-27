#include "helper.h"
#include <stdio.h>

void wait_enter(void)
{
    printf("\nPress Enter to continue...");
    getchar();  // consume leftover newline
    getchar();  // wait for user
}
