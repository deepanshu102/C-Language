/*
 * Structure
 */
#include<stdio.h>
struct Address
{
	char hno[50],street[50],c[50],state[50],city[50];
};
int main()
{
	struct Address add[5];//int x[5]
	/******************************************
	 * -------------------------------------
	 * add |     |   |    |   |   |
	 *     --------------------------
	 *        0   1   2   3   4
	 */
	int i;
	printf("%x",add);
	for(i=0;i<5;i++)
	{
	
		printf("Enter the House Number:- ");
		fgets(add[i].hno,50,stdin);	fflush(stdin);

		printf("Enter the Street Number:- ");
		fgets(add[i].street,50,stdin);	fflush(stdin);

		printf("Enter the City Name:- ");
		fgets(add[i].city,50,stdin);	fflush(stdin);

		printf("Enter the State Name:- ");
		fgets(add[i].state,50,stdin);	fflush(stdin);

		printf("Enter the Country:- ");
		fgets(add[i].c,50,stdin);	fflush(stdin);
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		printf("House Number :%s,\t Street:-%s,City:%s,State:-%s,Country:%s\n",add[i].hno,add[i].street,add[i].city,add[i].state,add[i].c);
	}
}




