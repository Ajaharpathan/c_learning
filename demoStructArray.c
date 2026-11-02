#include<stdio.h>
struct Student
{
	int rollno;
	char name[20];
	float marks;
};

int main()
{   //syntax no.1 
	struct Student s1 = {1, "Raj", 83.5};
	
	printf("Studen id is : %d\n", s1.rollno);
	printf("Studen name is : %s\n", s1.name);
	printf("Studen marks is : %.2f\n", s1.marks);
	
	//syntax no.2
	printf("\n");
	struct Student s2;
	
	printf("Studen id is : %d\n", s1.rollno);
	printf("Studen name is : %s\n", s1.name);
	printf("Studen marks is : %.2f\n", s1.marks);
	
	s2.rollno = 101;
	strcpy(s2.name, "Ajahar");
	s2.marks=87.5;
	
	printf("Studen id is : %d\n", s2.rollno);
	printf("Studen name is : %s\n", s2.name);
	printf("Studen marks is : %.2f\n", s2.marks);
	
	
	return 0;
	
	
}
