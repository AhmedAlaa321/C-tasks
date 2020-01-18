#include <stdio.h>
#include <stdlib.h>

//Rotate right with 5 steps without any loops

int main()
{
    int var1 = 0;
    int var2 = 0;
    int var3 = 0; //var1 after shift
    int var4 = 0; //var2 after shift

    var1 = 10;    // 0000 1010 ...... after rotating should be 0101 0000

    var2 = var1 & 0b00011111;   // AND var1 with 0001 1111 = 31  (a number that contains 1s only at the elements  that will be shifted)

    printf("%d \n", var2); //just to check that var2 has the 5 right elements of var1

    var3 = var1 >> 5; //shift right with 5    0000 0000

    var4 = var2 << 3; //shift left with 3     0101 0000

    var1 = var3 | var4; // 0101 0000   = 80

    printf("%d", var1);

    return 0;
}
