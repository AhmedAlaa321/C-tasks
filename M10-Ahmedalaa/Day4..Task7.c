#include <stdio.h>

int main()
{
    int x=10;

    printf("%d   %d     %d \n", x++, ++x,x);    //el compiler da by7sb fl printf l fl x then y-print

    x=x++ + ++x + ++x;

    printf("%d", x);    //=41

    //14 + 14 + 13 = 41

    return 0;
}
