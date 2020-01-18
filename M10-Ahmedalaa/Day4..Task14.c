#include <stdio.h>

/* 1,2,3,[0,5,0,7,0,9,......,30]                        l multiples of 2 =0
   1,2,3,[0,5,0,7,0,0,0,11,0,13,0,0,....0]              l multiple of 3 =0

   Print mn 1 to 30 using this algorithm el prime numbers only
*/

int main()
{
   unsigned char u8cnt1=0;
   unsigned char u8for2=2;
   unsigned char u8for3=3;
   unsigned char u8for5=4;
   unsigned char u8for7=7;
   unsigned int u32last=0;

    printf("Enter your number (please make sure it is below 100): ");
    scanf ("%d", &u32last);

    if (u32last > 100)
    {
        printf("Error!! number is larger than 100!");
    }


    else if (u32last < 48)
    {
        for(u8cnt1=0; u8cnt1<u32last+1 ; u8cnt1++)
        {
            printf("%d ",u8cnt1);
        }

        printf("\n");

        u8cnt1=0;

        for(u8cnt1=0; u8cnt1<u32last ; u8cnt1++)
        {
            if(u8cnt1 == 2*u8for2)
            {
                printf("  ");
                u8for2++;

                if(u8cnt1 == 3*u8for3)
                {
                    u8for3++;
                }
                if(u8cnt1 == 5*u8for5)
                {
                    u8for5++;
                }
            }

            else if(u8cnt1 == 3*u8for3)
            {
                printf("  ");
                u8for3++;

                if(u8cnt1 == 5*u8for5)
                {
                    u8for5++;
                }
            }

            else if(u8cnt1 == 5*u8for5)
            {
                printf("  ");
                u8for5++;
            }

            else
            {
                printf("%d ",u8cnt1);
            }
        } //
    } //

    else
    {
        for(u8cnt1=0; u8cnt1<u32last+1 ; u8cnt1++)
        {
            printf("%d ",u8cnt1);
        }

        printf("\n");

        u8cnt1=0;

        for(u8cnt1=0; u8cnt1<u32last ; u8cnt1++)
        {
            if(u8cnt1 == 2*u8for2)
            {
                printf("  ");
                u8for2++;

                if(u8cnt1 == 3*u8for3)
                {
                    u8for3++;
                }
                if(u8cnt1 == 5*u8for5)
                {
                    u8for5++;
                }
            }

            else if(u8cnt1 == 3*u8for3)
            {
                printf("  ");
                u8for3++;

                if(u8cnt1 == 5*u8for5)
                {
                    u8for5++;
                }
            }

            else if(u8cnt1 == 5*u8for5)
            {
                printf("  ");
                u8for5++;
            }

            else if(u8cnt1 == 7*u8for7)
            {
                printf("  ");

                if(u8cnt1 == 49)
                {
                    u8for7+=4;
                }
                else
                {
                    u8for7+=2;
                }
            }

            else
            {
                printf("%d ",u8cnt1);
            }

    } //
    } //


    return 0;
}
