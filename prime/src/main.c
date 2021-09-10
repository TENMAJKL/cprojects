#include<stdio.h>
#include <math.h>

int main()
{
    int number;
    printf("Enter number:");
    scanf("%d", &number);

    if (number <= 0)
    {
        printf("Invalid number, number must be bigger than zero");
        return 0;
    }

    if (number == 1)
    {
        printf("Its not prime number");
        return 1;
    }

    for (int i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            printf("Its not prime number\n");
            return 1;
        }
    }
    printf("Its prime number.\n");
    return 1;
}
