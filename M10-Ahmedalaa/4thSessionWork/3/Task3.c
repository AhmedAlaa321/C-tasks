#include <stdio.h>

int main()
{
    long long u8cnt1=0; //long long in order to carry number up to 2^(8*8)-1
    long long u8cnt2=0;

    printf("Number = ");
    scanf("%d", &u8cnt1);

    for (u8cnt2=u8cnt1-1 ; u8cnt2>0 ; u8cnt2--)
    {
        u8cnt1= u8cnt1 * u8cnt2;
    }

    printf("The factorial= %d", u8cnt1);

    return 0;
}
