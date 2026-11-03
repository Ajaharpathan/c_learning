#include<stdio.h>
int main()
{
	int a =10; // normal variable
	int *p; // pointer variable
    p  = &a; // store address of 'a' in pointer variable 'p'
    
    printf("value of a is: %d\n", a); // print value
    printf("Address of a is: %d\n", &a); // memory address of 'a'
    printf("Pointer p holds of a is: %p\n", p); // pointer store address of 'a'
    printf("value at pointer p is: %d\n", *p); // get values from address

    return 0;
}
