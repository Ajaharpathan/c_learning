#include<stdio.h>
int main()
{
	FILE *fp;
	fp = fopen("Data.text", "a");
	
	fprintf(fp, "\nwelcome file handling \n");
	fprintf(fp, "\nwelcome c language \n");
	
	
	fclose(fp);
	
	printf("Data append succesfully");
	
	return 0;
} 

