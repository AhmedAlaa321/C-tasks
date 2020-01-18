#include <stdio.h>

int main()
{
    float y=3.5;
    float x=3.1;

    if (x==3.1)         //out put wrong due to rounding
    {
        printf("correct\n");
    }
    else
    {
        printf("wrong\n");
    }

    //while this will work correctly!!

    if (y==3.5)
    {
         printf("correct\n");
    }
    else
    {
        printf("wrong\n");
    }
    return 0;
}

//number * exponential!!




