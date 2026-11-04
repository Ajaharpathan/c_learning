//3 no argument and accept return value

#include<stdio.h>
int mul()
{
	int a = 10, b = 10;
	return a*b; 
}
int main()
{
	int result = mul();
	printf("result of multiplication: %d", result);
//	printf("result of muliplication: %d", mul());
	return 0;
}
