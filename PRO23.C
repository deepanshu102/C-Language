#include<stdio.h>
/********************************************
 * 	union [Data_Name]
 * 	{
 * 		[data_members];
 * 	}
 ******************************************/

//in my home having 4 vehicle but condition is use only one at a time
union Vehicle
{
	int car[2];//8bytes
	int Truck;//4bytes
	int Scooter;//4bytes
};

//size-> 8		4		4
//	Car[2],		truck		Scooter
//	________	_______		_____
//
int main(void)
{
	union Vehicle obj1;
	scanf("%d",&obj1.car[0]);
	scanf("%d",&obj1.car[1]);
	scanf("%d",&obj1.Truck);
	printf("%d%d%d",obj1.car[0],obj1.car[1],obj1.Truck);
	return 1;
}
