#include<stdio.h>
int main()
{
	int i;
	printf("Enter Value");
	scanf("%d",&i);
	if(i!=0)
	{
		if(i%2==0)
		{
			printf("the value of i is multiple of ");
		}
		else
		{
			printf("%d is not multiple of 2",i);
		}
	}
	else
	{
		printf("%d is become zero",i);
	}
}
