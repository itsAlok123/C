# C
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,n,sum ;
  printf("Enter the range \n");
  scanf("%d" , &n );

  for(i=0,sum=0;i<n;i++){
    printf("%d\n",i);
    sum+=i;
  }
  printf("Sum=%d\n",sum);
  return 0;
}
