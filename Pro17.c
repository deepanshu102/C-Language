#include<stdio.h>
//Define and declare of sum()
void sum(int k,int b)
{
	printf("\n%d+%d=%d\n",k,b,k+b);
}
void today_day(int i);//it is the prototype of the today_day()
int main()
{
	int a;
	printf("Enter the number between 1 to 7");
	scanf("%1d",&a);
	today_day(a);
	sum(a,10);
}
//Define the today_day()
void today_day(int i)
{
	switch(i)
	{
		case 1:printf("Sunday\n");
			break;
		case 2:printf("Monday\n");
			break;
		case 3:printf("Tuesday\n");
			break;
		case 4:printf("Wednessday\n");
			break;
		case 5:printf("Thrusday\n");
			break;
		case 6:printf("Friday\n");
			break;
		case 7:printf("Saturday\n");
			break;
		default:printf("Invalid Choice\n");
			break;
	}
}
