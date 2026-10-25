#include<stdio.h>
int main()
{
	int marks;
	printf("Enter your marks:");
	scanf("%d", &marks);
	if (marks > 90)
	{
		printf("Your Grade is A");	
	}
	else if (marks > 70)
	{
		printf("Your Grade is B");
	}
	
	else if (marks > 60)
	{
		printf("Your Grade is C");
		
	}
	else
	{
		printf("You are faild");
	}
	
	
	return 0;
	
	
}
