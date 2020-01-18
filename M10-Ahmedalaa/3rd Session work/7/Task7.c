#include <stdio.h>
#include <stdlib.h>

//Rotate left with 6 steps without any loops

int main()
{       //used char because it is 8 bits only
    unsigned char var1 = 0;
    unsigned char var2 = 0;
    unsigned char var3 = 0; //var1 after shift
    unsigned char var4 = 0; //var2 after shift

    var1 = 10;    // 0000 1010 ...... after rotating should be 0101 0000

    var2 = var1 & 252;   // AND var1 with 1111 1100 = 252  (a number that contains 1s only at the elements  that will be shifted)

    printf("%d \n", var1); //just to check that var2 has the 6 left elements of var1 .... = 8    0000 1000

    var4 = var1 << 6; //shift right with 6    1000 0000 ... 128

    var3 = var2 >> 2; //shift left with 2     0000 0010

    var1 = var3 | var4; // 0101 0000   = 80

    printf("%d", var1);

    return 0;
}
