#include<stdio.h>
// 2. accept argument and no return type
void evenodd(int num)
{
	if(num % 2 == 0)
	{
		printf("Number is even ");
	}
	else
	{
		printf("Number is odd");

	}
}
int main()
{
	evenodd(13); 
	return 0;
}
