#c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,rev,rem,temp ;
   rev = 0;

   printf("Enter a number : ");
   scanf("%d", &n);
temp = n ;
   while(n > 0)
   {
    rem = n%10;
   rev = rev * 10 + rem ;
   n = n/10;
   }
    if ( temp == rev)
    {
        printf("It is a palindrome number .");
    }
    else {
        printf("It is not a palindrome number .");
    }
    return 0;
}
