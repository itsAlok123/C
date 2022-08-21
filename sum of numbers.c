# C
#include <stdio.h>
#include <stdlib.h>

int main()
{
int n , sum ;
printf("Enter numbers upto which you want sum :");
scanf("%d" , &n );

 sum = (n * (n + 1) ) / 2;
printf("Sum of first %d natural number is = %d", n, sum);
return 0;
}
