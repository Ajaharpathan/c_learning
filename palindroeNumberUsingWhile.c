#include<stdio.h>
int main()
{
	int rem, num, rev=0;
	
	printf("Enter Number:");
	scanf("%d", &num);
	int temp = num;
	
	while(num>0)
	{
		rem=num%10;
		rev=rev * 10 +rem;
		num = num/10;
		
	}
	if(rev==temp)
	{
		printf("Number is Palindrone");
	}
	else
	{
		printf("Number is not palindrone");
	}
	return 0;
}
