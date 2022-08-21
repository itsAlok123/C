# C
#include <stdio.h>
#include <stdlib.h>

int main()
{
      int marks;
   printf("\nEnter the Marks Between 0 To 100:");
   scanf("%d", &marks);

   switch(marks/10)
   {
       case 10 :
       case 9 :
           printf("\n Your Grade is: O");
           break;
       case 8 :
           printf("\n Your Grade is: E" );
           break;
       case 7 :
           printf("\n Your Grade is: A" );
           break;
       case 6 :
           printf("\n Your Grade is: B" );
           break;
       case 5 :
           printf("\n Your Grade is: C" );
           break;
           case 4 :
           printf("\n Your Grade is: D" );
           break;
       default :
           printf("\n You Grade is: F & you're Failed\n or invalid input");
   }
   return 0 ;
 }
