#include<stdio.h>
int main()
{
	int a=20, b=10, c=20;
	
	
	//logical and
	printf("(a>b) && (b<c) : %d\n", (a>b) && (b==c) );
	printf("(a>b) && (b<c) : %d\n", (a<b) && (b==c) );
	
	//logical or
	printf("(a>b) || (b<c) : %d\n", (a>b) || (b==c) );
	printf("(a>b) || (b<c) : %d\n", (a<b) || (b==c) );
	
	//logical not
	printf("!(a>b) : %d\n", (a>b));
	printf("!(a<b) : %d\n", (a<b));
	printf("!(a==c) : %d\n", (a==c));
	
	return 0;
	
	
}
