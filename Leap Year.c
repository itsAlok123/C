# C
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int y;
   printf("Enter any year :");
   scanf("%d",&y);

   if(y%400 == 0 ) {
    printf("Leap Year") ;
   } else if (y%100 == 0) {
   printf("Not a Leap Year");
   } else if (y%4 == 0) {
   printf("Leap Year") ;
    } else {
    printf("Not a Leap Year") ;
     }
     return 0 ;
}
