#include<stdio.h>
int main()
{
	int i;
	for(i=0;i<=10;i++)
	{
		if(i&1==1)
		{
			printf("%d is odd Number\n",i);
		}
		else
		{
			printf("%d is Even Number\n",i);
		}
	}
}
