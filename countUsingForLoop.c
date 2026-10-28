

#include<stdio.h>
int main()
{
	int i = 5;
	int count = 0;

	for (i = 1; i <= 50; i++)
	{
		if(i % 5 == 0)
		{
			count++;
			
		}
	}
	  printf("%d", count);
	return 0;
}
