#include<stdio.h>
int main()
{
	int i;
	do
	{
		printf("\nEnter the value between 1 to 7");
		scanf("%d",&i);
		switch(i)
		{
			case 1:printf("sunday");
				break;
			case 2:printf("Monday");
				break;
			case 3: printf("Tuesday");
				break;
			case 4:printf("Wednessday");
				break;
			case 5:printf("Thrusday");
				break;
			case 6:printf("Friday");
				break;
			case 7:printf("Saturday");
				break;
			default:printf("Invalid choice:-");
				break;
		}
		printf("Do You want to continue  press 1");
	        scanf("%d",&i);
	 }while(i==1);}


