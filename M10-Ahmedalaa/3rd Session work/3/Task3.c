#include <stdio.h>
#include <stdlib.h>


int main()
{
    int Grade = 0;

    printf("Grade =  ");

    scanf("%d", &Grade);    //this switch statement supported only in GNUC standard
    switch(Grade)
    {
        case 0 ... 49:
        {
            printf("F");
            break;
        }
        case 50 ... 59:
        {
            printf("D");
            break;
        }
        case 60 ... 74:
        {
             printf("C");
             break;
        }
        case 75 ... 84:
        {
            printf("B");
            break;
        }
        case 85 ... 100:
        {
            printf("A");
            break;
        }

    }

    return 0;
}
