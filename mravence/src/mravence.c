/**
| Ants song generator
| I have no idea why i did this
| Built for learning purpose
|
| @author TEN MAJKL
|
| */
#include<stdio.h>

int main()
{
    int part = 1;

    ants:
        printf("=======================================================\n");
        printf("Máme doma mravence, 123. Ti nám skáčou z kredence, 123.\nA tak končí %D. sloka, 123. A začíná %D. sloka 123.\n",
                part, part+1);
        part = part + 1;
        goto ants;

    return 1;
}
