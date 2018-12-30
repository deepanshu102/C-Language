#include<stdio.h>
struct address
	{
		char hno[50],street[50],city[50],state[50],c[50];
		int pincode;
	};
int main()
{
	struct address add;
	printf("Enter the Address:-");
	printf("\nEnter Your House number:-");
	gets(add.hno);
	printf("\nEnter Your Street Number:- ");
	gets(add.street);
	printf("\nEnter your city name:-");
	gets(add.city);
	printf("\n Enter the State name:-");
	gets(add.state);
	printf("\nEnter the pincode:-");
	scanf("%d",&add.pincode);
	printf("\nEnter the Country name:-");
	scanf("%s",&add.c);
	printf("\n\n %s/%s\t %s\t%s\t%d\t%s",add.hno,add.street,add.city,add.state,add.pincode,add.c);
	return 1;
}

