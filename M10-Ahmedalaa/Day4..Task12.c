#include <stdio.h>


int main()
{
    long long u8cnt1=0;
    long long u8cnt2=0;

    printf("Please insert a number: ");
    scanf("%d", &u8cnt1);

    u8cnt2=u8cnt1-1;

    while(u8cnt2>0)
    {
        u8cnt1= u8cnt1 * u8cnt2;
        u8cnt2--;
    }

    printf("The factorial= %d", u8cnt1);

    return 0;
}
