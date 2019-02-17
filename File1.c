#include<stdio.h>
#include<stdlib.h>

FILE *ptr;
struct Person
{
	char name[30],phone[10],add[30];
};
int File_Write()
{
	int i;
	struct Person p1;
	ptr=fopen("/home/bitsbytes/Desktop/f1.txt","w");
	fprintf(ptr,"Name\tPhone\tAddress\n");
	for(i=0;i<5;i++)
	{
		fgets(p1.name,30,stdin);
		fflush(stdin);
		fgets(p1.phone,10,stdin);
		fflush(stdin);
		fgets(p1.add,30,stdin);
		fflush(stdin);
		fprintf(ptr,"%s\t%s\t%s\n",p1.name,p1.phone,p1.add);
	}
	fclose(ptr);
	return 1;
}

int File_Write_Binary()
{
	int i;
	struct Person p1;
	ptr=fopen("/home/bitsbytes/Desktop/f2","wb");
	if(ptr==NULL)
	{
		printf("Error");
	}	
	else
	{	fprintf(ptr,"Name\tPhone\tAddress\n");
		for(i=0;i<5;i++)
		{
			
		fgets(p1.name,30,stdin);
		fflush(stdin);
		fgets(p1.phone,10,stdin);
		fflush(stdin);
		fgets(p1.add,30,stdin);
		fflush(stdin);
			fwrite(&p1,sizeof(struct Person),1,ptr);
		}
	}
	printf("%d",sizeof(ptr));
	fclose(ptr);
	return 1;
}
int main()
{
	printf(File_Write_Binary()?"file is Create":"File not create");
}
