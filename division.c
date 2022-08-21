# C
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b;
   printf("Enter Two Numbers:");
   scanf("%d" , &a);
   scanf("%d" , &b);

   if(a%b==0) {
    printf("a is divisible by b");
   }
   else {
    printf("a is not divisible by b");
   }
   return 0 ;
}
