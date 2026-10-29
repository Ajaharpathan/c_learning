#include<stdio.h>
int main()
//{
//	int num = 9;
//	if (num >= 0)
//	{
//	  if (num % 2 == 0)
//	  {
//	  	printf("Nember is even");	
//	  }
//	  else
//	  	{
//	  		printf("Number is odd");
//		  }
//	}
//	else
//		{
//			printf("number is negative");
//		}
//		
//		
//		return 0;
//}

//{
//	int age = 29;
//	if (age > 18)
//	{
//	  if(age >= 18)	
//	  {
//	  	printf("Person is eligible for driving");
//	  }
//	  else
//	  {
//	  	printf("Person is not eligible for driving licence");
//	  }
//	}
//	else
//	{
//		printf("Person is not older");
//	}
//	return 0;
//}

//{
//	int marks;
//	printf("Enter Your Marks:");
//	scanf("%d", &marks);
//	if (marks >= 35)
//	{
//		if(marks >= 75)
//		{
//			printf("Student has scored distinction");
//		}
//		else
//		{
//			printf("student has not scored distinction");
//		}
//	}
//	else
//	{
//		printf("Student is Fail");
//	}
//
//return 0;
//
//}

//{
//        int num1, num2;
//        printf("enter first number");
//        scanf("%d" , &num1);
//        printf("enter second number");
//        scanf("%d" , &num2);
//        
//        if (num1 > num2)
//        {
//        	printf("first number is greater than second number\n");
//        	
//        	if(num1 > 100)
//        	{
//        		printf("Number 1 is greater than 100:  ");
//			}
//			else
//			{
//				printf("Number is not greater than 100: ");
//			}
//        	
//		}
//		else
//		{
//			printf("Number is lower than second number");
//		}
//        
//return 0;
//}

//{
//	int age, voter_id;
//	printf("Enter Your age:");
//	scanf("%d", &age);
//	if (age > 18)
//	{
//		printf("type 1 for voter id otherwise type 0: ");
//		scanf("%d", &voter_id);
//		
//		if (voter_id == 1)
//		{
//			printf("person has valid for voter id:");
//		}
//		else
//		{
//			printf("Person has not valid for voter id");
//		}
//	}
//	else
//	{
//		printf("You are not eligible for voting:");
//	}
//	
//	return 0;
//	
//		
//}
{
	int card, pin, balance;
	printf("Enter card number:");
	scanf("%d ", &card);
//		printf("Enter your pin:");
//		scanf("%d", &pin);
	if( card == 9022 )
	{
			printf("Enter your pin:");
		scanf("%d", &pin);
	
		if ( pin == 1234)
		{
			
			printf("Enter your balance:");
			scanf("%d", &balance);
			if(balance >= 0)
			{
				printf("Your balance is sufficient ");
			}
			
			else
			{
				printf("Your balance is not sufficient:");
			}
			
		}
		else
		{
			printf("Your pin is incorrect");
		}
	}
	else
	{
		printf("Your atm is not valid");
	}
	

	
	
	return 0;
}









