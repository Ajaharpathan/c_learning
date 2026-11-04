#include<stdio.h>
int main()
{
	FILE *fp;
	char name[20] = "ajahar";
	fp = fopen("Data.text", "w");
	
	fprintf(fp, "welcome file handling \n");
	
	fprintf(fp, "%s", name);
	
	fclose(fp);
	
	printf("Data written succesfully");
	
	return 0;
} 

