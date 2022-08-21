# C
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,sum,r ;
   sum = 0;

   printf("Enter a number : ");
   scanf("%d", &n);

   while(n > 0)
   {
    r = n%10;
   sum = sum + r;
   n = n/10;

   }
   printf("Sum of the number is = %d",sum);

    return 0;
}
