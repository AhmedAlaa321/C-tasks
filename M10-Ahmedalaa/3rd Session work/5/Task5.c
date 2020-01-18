#include <stdio.h>
#include <stdlib.h>

//Find whether the number entered by the user is EVEN or ODD but WITHOUT using switch or loop

int main()
{
    int number = 0;

    printf("Number = ");

    scanf("%d", &number);

    if(number & 0x1)
    {
        printf("ODD Number");
    }

    else
    {
        printf("EVEN number");
    }

    return 0;
}
