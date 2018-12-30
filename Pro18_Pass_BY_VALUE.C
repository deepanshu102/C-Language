#include<stdio.h>
void swap(int a,int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	printf("\na=%d \t b=%d\n",a,b);
}
int main()
{
	int a1=10,b1=20;
	printf("Before Calling of Swap function a=%d\t b=%d",a1,b1);
	swap(a1,b1);
	printf("After calling Swap Function a=%d \t b=%d",a1,b1);
}
