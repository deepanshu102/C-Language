#include<stdio.h>
int main()
{
	int i;
	printf("Enter the number between 1-7");
	scanf("%d",&i);
	switch(i)
	{
		case 1:printf("Sunday");
			break;
		case 2:printf("Monday");
			break;

		case 3:printf("Tuesday");
			break;

		case 4:printf("Wednessday");
			break;

		case 5:printf("Thrusday");
			break;

		case 6:printf("Friday");
			break;

		case 7:printf("Saturday");
			break;

		default:printf("invalid option");break;
	}
}
