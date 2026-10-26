#include<stdio.h>
int main()
 {
	
	int amount = 1000;
	int balance = 2000;
	int pin = 1234;
	
    if(pin == 1234)
     {
		if (balance >= amount)
		{
			printf("Please collect your cash ");
		}
		else
		{
			printf("Insufficient Balance ");
		}
		
	 }
	
	else
	 {
		printf("Invalid Pin ");
	 }
	
   return 0;	

 }
 
 



