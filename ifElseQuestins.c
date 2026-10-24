#include<stdio.h>
int main()
{
	int marks;
	printf("Enter your marks:");
	scanf("%d", &marks);
	if (marks > 90)
	{
	printf("Your grade is: A");
    }
    
    else if (marks > 75)
    {
    	printf("Your grade: B");
	}
	
	else if (marks > 60)
	{
		printf("Your grade: C");
	}
	
	else  
	{
		printf("faild", marks);
	}
    
    return 0;
}
