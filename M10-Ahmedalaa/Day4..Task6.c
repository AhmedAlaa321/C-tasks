#include <stdio.h>
//moshkela mn mashakel el implicit type casting
int main()
{
    unsigned int x=0xFF0A;
    unsigned char y=0x00;
    unsigned int z=10;

    y=x+z;

    //char = int + int; w hy7sal implicit type casting



    return 0;
}
