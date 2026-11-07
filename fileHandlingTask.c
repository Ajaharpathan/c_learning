//#include<stdio.h>
//int main()
//{
//	FILE *sn;
//	char name[20] = "Ajahar Babu Pathan";
//	sn = fopen("student.txt", "w");
//	
//	//fprintf(fp, "welcome file handling \n");
//	
//	fprintf(sn, "%s", name);
//	
//	fclose(sn);
//	printf("%s\n", name);
//	printf("Data written succesfully");
//	
//	return 0;
//} 

//#include<stdio.h>
//int main()
//{
//	FILE *collegen;
//	char name[50] = "Advanced Computer College, Osmanabad";
//	collegen = fopen("college.text", "w");
//	
//	//fprintf(fp, "welcome file handling \n");
//	
//	fprintf(collegen, "%s", name);
//	
//	fclose(collegen);
//	
//	printf("Data written succesfully");
//	
//	return 0;
//} 
//#include<stdio.h>
//int main()
//{
//	FILE *details;
//	char name[30] = "Ajahar\n";
//	int age = 23;
//	char address[100] = "\nBorgaon Raje, Osmanabad, Maharashtra";
//	details = fopen("data1.text", "w");
//	fprintf(details, "%s %d %s", name, age, address);
//	fclose(details);
//	printf("Data written successfully");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	FILE *names;
//	char name[30] = "pathan\n";
//	names = fopen("Read file.text", "r");
//	fprintf(names, "%s", name);
//	fclose(names);
//	printf("File Read succesfully");
//	return 0;
//}

#include<stdio.h>
int main()
{
	FILE *sn;
	char name[20] = "Ajahar Babu Pathan";
	sn = fopen("student1.txt", "r");
	
	//fprintf(fp, "welcome file handling \n");
	
	fprintf(sn, "%s", name);
	
	fclose(sn);
	printf("%s\n", name);
	printf("Data written succesfully");
	
	return 0;
}


