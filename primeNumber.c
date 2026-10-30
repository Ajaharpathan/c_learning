#include<stdio.h>
int main()
{
	int i , num, count = 0;
	printf("Enter the Number:");
	scanf("%d", &num);
	for(i=1; i<=num; i++)
	{ 
	   if(num%i==0)
	   {
	   	count++;
	   }
	   if(count == 2)
	   {
	   	printf("%d Number is prime", num);
	   }
	   else
	   {
	   	printf("%d Number is not prime", num);
	   }
	}
	return 0;
}
