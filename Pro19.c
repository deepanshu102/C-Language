#include<stdio.h>
int main()
{
	int a[]={10,20,30,40,50,60,70,80,90,100},b[10],i;
	for(int i=0;i<10;i++)
	{
		printf("Enter the value of b[%d]",i);	
		scanf("%d",&b[i]);
	}
	/*b[0]=101;
	b[1]=102;
	b[2]=103;
	b[3]=104;
	b[4]=105;
	b[5]=106;
	b[6]=107;
	b[8]=109;
	b[7]=108;
	b[9]=110;*/
	for(i=0;i<10;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
		printf("\tb[%d]=%d\n",i,b[i]);
	}
}

