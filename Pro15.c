#include<stdio.h>
int main()
{
	int i;
	i=1;
	while(i<=10)
	{
		if(i%2==0)
		{
			printf("%d is Even number",i);
		}
		else
		{
			printf("\n%d is odd Number\n",i);
		}
		i++;
	}
}
