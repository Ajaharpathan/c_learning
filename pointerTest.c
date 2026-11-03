#include<stdio.h>
int main()
{
	int a =10; // normal variable
	int *p  = &a; // pointer variable
    *p = 20; // change  the values using pointer
    
    printf("value of a is: %d\n", a); // print value

    return 0;
}
