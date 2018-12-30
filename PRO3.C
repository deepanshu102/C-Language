/*********************************
 * BITSBYTES
 ********************************/
#include<stdio.h>
int main()
{
	signed int a;
	unsigned int ab;
	a=32768;
	ab=-1;
	printf("a=%d\n",a);
	printf("ab=%d\n",ab);
	long int b=93247198721;
	printf("b=%ld\n",b);
	float c=10.9;
	printf("c=%f\n",c);
	double cf=1020.40;
	printf("cf=%lf",cf);
	long double df=1020.93;
	printf("\ndf=%Lf",df);
	char ac='A';
	ac=ac+1;
	printf("\n%c",ac);
}
