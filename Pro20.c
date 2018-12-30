#include<stdio.h>
void print(int a[])
{
	int i=0;
	for(;i<3;i++)
	{
		printf("\na[%d]=%d",i,a[i]);
	}
}
void printl(int *ptr)
{
	int i=0;
	for(;i<3;i++)
	{
		printf("\n ptr[%d]=%u",i,*(ptr+i));
	}
}

int main()
{
	int a[3]={20,49,349};
	int a1[3],i;
	float f[3];
	char c[3];
	for(i=0;i<3;i++)
	{
		a1[i]=i;
		f[i]=i+0.2;
		c[i]=65+i;
	}
	for(i=0;i<3;i++)
	{
	//	printf("\na[%d]=%d\n",i,a[i]);
	//	printf("a1[%d]=%d\n",i,a1[i]);
		printf("f[%d]=%f\n",i,f[i]);
		printf("c[%d]=%c\n",i,c[i]);
	}
	print(a);
	printl(a1);
}

