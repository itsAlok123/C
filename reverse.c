# C
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,rev,rem ;
   rev = 0;

   printf("Enter a number : ");
   scanf("%d", &n);

   while(n > 0)
   {
    rem = n%10;
   rev = rev * 10 + rem ;
   n = n/10;

   }
   printf("reverse  of the number is = %d",rev);

    return 0;
}
