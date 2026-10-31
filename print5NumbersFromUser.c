//write  a c program to accept 5 array elements from user and display 

#include<stdio.h>
int main()
{
	int num[5];
	int i;
	
	for(i=0; i<5; i++)
	{
		
		
		printf("Enter a Number:");
	scanf("%d", &num[i]);

	}
	printf("print the array elements:");
	
	for(i=0; i<5; i++)
	{
		printf("%d ", num[i]);
	}
	
	
	return 0;
}
