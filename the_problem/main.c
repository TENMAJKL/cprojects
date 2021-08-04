/**
 | 3x+1
 | C program that visualizes the 3x+1 problem. 
 |
 | Built by TENMAJKL
 |
 | MIT LICENSE
 |
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <string.h>

bool odd(int number);

bool odd(int number)
{
    return number % 2 == 1;
}

int main()
{
    int number;
    bool isLoop = false;
    printf("Type any number bigger than one: ");
    scanf("%d", &number);

    if (number > 0)
    {
        decision:
            usleep(20000);
            if (number == 1 && !isLoop)
            {
                printf("\nHere starts the loop.\n\n");
                isLoop = true; 
            }
            if (odd(number))
            {
                number = number * 3 + 1;
                printf("%d\n", number);
                goto decision;
            }
            else
            {
                number = number / 2;
                printf("%d\n", number);
                goto decision;
            }
         

    }

    return 1;


}
