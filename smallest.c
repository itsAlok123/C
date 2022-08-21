# C
#include <stdio.h>
#include <stdlib.h>

int main()
{
int num1,num2,num3;
	printf("Enter three numbers:");
	scanf("%d %d %d" ,&num1,&num2,&num3);
	if(num1 < num2 && num1 < num3)
	{
		printf("a is smallest",num1);
	}
	else if(num2 < num3)
	{
		printf("b is smallest",num2);
	}
	else
	{
		printf("c is smallest",num3);
	}

	return 0;
}
