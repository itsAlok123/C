# C
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;

   printf("Enter any number :");
   scanf("%d" , &n);

   if(n%3==0) {
    printf("n is divisible by 3");
   }  else if(n%5==0) {
    printf("n is divisible by 5");
   } else if(n%7==0) {
    printf("n is divisible by 7");
   } else if(n%11==0) {
    printf("n is divisible by 11");
   } else {
   printf("n is not divisible ");
   }
   return 0;
}
