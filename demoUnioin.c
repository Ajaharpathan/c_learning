#include<stdio.h>
union Data{
	int i;
	float f;
	char name[20];
};
int main()
{
	union Data d;
	
	d.i= 10;
	printf("Interger number : %d\n", d.i);
	
	d.f= 22.5;
	printf("float  number : %.2f\n", d.f);
	
	strcpy(d.name, "azhar");
	printf("String values : %s\n", d.name);
	
	return 0;
}

