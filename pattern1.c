# C
#include <stdio.h>
#include <stdlib.h>

int main()
{
int i,j,n ;
printf("enter n : ");
scanf("%d",&n);
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        printf(" * ");
    }
    printf("\n");
}
}
