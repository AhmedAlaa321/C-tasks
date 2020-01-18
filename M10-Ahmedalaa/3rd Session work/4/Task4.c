#include <stdio.h>
#include <stdlib.h>

//Check the number provided by the user is even or odd

int main()
{
   int type = 0;
   int number = 0;

   printf("Number =  ");

   scanf("%d", &number);

   type = number%2;

   switch(type)
   {
        case 1:
        {
            printf("ODD Number");
            break;
        }
        case 0:
        {
            printf("EVEN Number");
            break;
        }
        default:
        {
            printf("ERROR!");
            break;
        }
   }

    return 0;
}
