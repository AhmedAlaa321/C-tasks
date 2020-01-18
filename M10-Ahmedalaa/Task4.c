#include <stdio.h>
#include <stdlib.h>

//Check the number provided by the user is even or odd

int main()
{
   int find=0;
   int var=0;

   printf("Please enter the number: ");

   scanf("%d", &var);

   find = var%2;

   switch(find)
   {
        case 1:
            printf("The number  is ODD");
            break;

        case 0:
            printf("The number is EVEN");
            break;

        default:
            printf("ERROR!");
            break;
   }

    return 0;
}
