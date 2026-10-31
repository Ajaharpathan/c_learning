#include<stdio.h>
int main()
{
	char name[4][20]={"ajahar", "pathan", "mansur", "sohel"};
	int i;
	for(i=0; i<4; i++)
	{
		printf("%s \n", name[i]);
	}
	return 0;
}
