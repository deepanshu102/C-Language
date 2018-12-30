#include<stdio.h>
int main()
{
	int i=20,j=30;
	if(i==30 || j==30)
		printf("This is the Example of OR Operator");
	/*
		-> MULTIPLE CONDITIONS ARE CHECK USING LOGICAL OPERATORS
		 -> IN OR operator of any single condition is true that means result become true
	*/
	if(i<j && j==30)
	{
		printf("this is the example of AND Operator");
	}
	/* In And Operator if any single Condition is false then result become False
		->that means all condition must be true 
	   		for execute that block
	*/
	if(i!=30)
		printf("this is the example of Not or Inverse Operator");
	/*
		in inverse if condtion is true then result is false
		i!=30 is check value of i is not equal to 30
	*/
}
