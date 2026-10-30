#include<stdio.h>
int main()
{
	int first = 0, second = 1, next, i;
	printf(" %d %d", first, second);
	for(i=3; i<=10; i++)
	{
		next = first+second;
		printf(" %d ", next);
		first = second;
		second = next;
	}
}
