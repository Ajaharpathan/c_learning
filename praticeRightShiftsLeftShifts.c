#include<stdio.h>
int main()
{
	int a =60; //division 
	//1 -> 2
	//2 -> 4
	//3 -> 8
	//4 -> 16
//	printf("Right shifts -> 60 >> 1 : %d\n", a >> 1);
//	printf("Right shifts -> 60 >> 2 : %d\n", a >> 2);
//	printf("Right shifts -> 60 >> 3 : %d\n", a >> 3);
//	printf("Right shifts -> 60 >> 4 : %d\n", a >> 4);
//	
//	int b= 3;//multiplication in left shif
//	printf("left shfts -> 3 >> 1 : %d\n", b << 1);
//	printf("left shifts -> 3 >> 2 : %d\n", b << 2);
//	printf("left shifts -> 3 >> 3 : %d\n", b << 3);
//	printf("left shifts -> 3 >> 4 : %d\n", b << 4);
    int b = 20;
    printf("%d\n", (a & b));
    printf("%d\n", (a | b));
    printf("%d\n", !a);


	
	return 0;
}
