#include<stdio.h>

int sum(int target)
{
    int sum = 0;
    for(int i = 0; i <= target; i++)
        sum += i;

    return sum; 
}

int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    int result = sum(number);

    printf("%d", result);

    return 1;
}
