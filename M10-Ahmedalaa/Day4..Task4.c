#include <stdio.h>

int main()
{
    char x=255;     //default signed
    unsigned char y=255;     // el unsigned range mn 0 l 255

    y=y+1;  //fa hena overflow will occur!!!!! 3ashan 3adeena el max range bta3ha

    printf("%d \n",y);   //httla3 b 0!

    printf("%#x",x);    //yktebha bl hex

    return 0;
}


//Note: when initializing the char: either
//char y=65;
//or
//char y= 'A';
// or char y= 0x w raqam bta3 el A gwa el hex table
//same thing! and print according to enta 3ayz el printing char wala
