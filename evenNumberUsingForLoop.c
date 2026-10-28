// write a c program print number between 1 and 50 that are divisible by 5

#include<stdio.h>
int main()
{
	int i = 5;

	for (i = 1; i <= 50; i++)
	{
		if(i % 5 == 0)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
