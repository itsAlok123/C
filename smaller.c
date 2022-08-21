# C
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%f" , &a);
      scanf("%f" , &b);

      if(a<b){
            printf("a is smaller");
      } else if (b<a) {
      printf("b is smaller");
      } else {
      printf("both are equal");
      }
return 0;
}
