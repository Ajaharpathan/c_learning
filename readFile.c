#include<stdio.h>
int main()
{
	FILE *fp;
	char name[20];
	fp = fopen("Data.text", "r");
	
	
	fscanf(fp, "%s", name);
	printf("Read the name: %s", name);
	
	fclose(fp);
	
	
	return 0;
} 

