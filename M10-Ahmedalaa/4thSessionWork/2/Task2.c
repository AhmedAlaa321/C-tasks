#include <stdio.h>

int main()
{
    int x=500;
    char y=127;     // signed from -128 to 127 (Default char)

    y=x;    //data truncation occurs!! least significant byte only and gives warning as it's implecent type casting
    //but
    y = (char)x; // is an explecent type casting and doesn't give warning
    y = 0x01F4;  // takes only f4 which is 244 decimal

    printf("%d",y);

    return 0;
}
