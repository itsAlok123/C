# C
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n ,fact , i;
   printf("Enter the number \n");
   scanf("%d",&n);

   for(i=1,fact=1;i<=n;i++)
    {
    fact = fact*i;
   }
   printf("\n %d!=%d\n",n,fact);
   return 0;
}
