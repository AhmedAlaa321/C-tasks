#include <stdio.h>
#include <stdlib.h>

// Get the grade from the mark entered by the user.

int main()
{
    int mark=0;

    printf("Please enter your mark: ");

    scanf("%d", &mark);

    switch(mark)
    {
        case 0 ... 49:
            printf("F");
            break;

        case 50 ... 59:
            printf("D");
            break;

        case 60 ... 69:
            printf("C");
            break;

        case 70 ... 79:
            printf("B");
            break;

        case 80 ... 100:
            printf("A");
            break;

        default:
            printf("Error!!");
            break;

    }

    return 0;
}
