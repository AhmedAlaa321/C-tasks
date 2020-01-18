#include <stdio.h>

int main()
{
    unsigned char u8cnt=0;

    for (u8cnt=10 ; u8cnt>=0 ; u8cnt--)     //3ashan unsigned fa ta7t el 0 3amalet OVERFLOW! ba3d el 0 byrg3 255 tani
    {
        printf("%d \n", u8cnt);
    }
    return 0;
}
