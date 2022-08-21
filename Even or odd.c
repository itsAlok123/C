# C
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter the number :");
    scanf("%d" , &a);

    if(a%2==0){
        printf("Even");
    } else{
    printf("Odd");
    }
    return 0;
}
