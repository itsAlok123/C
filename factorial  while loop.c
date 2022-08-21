# C
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ,fact , i;
    i=1;
  fact = 1;
   printf("Enter the number \n");
   scanf("%d",&n);

  while(i<=n){
    fact = fact*i;
    i++;
  }
  printf("\n %d!=%d\n",n,fact);
   return 0;
}
