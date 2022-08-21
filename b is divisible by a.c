# C
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b;
   printf("Enter Two Numbers:");
   scanf("%d" , &a);
   scanf("%d" , &b);

   if(b%a==0) {
    printf("b is divisible by a");
   }
   else {
    printf("b is not divisible by a");
   }
   return 0 ;
}
