#include<stdio.h>
union Student {
	int rollno;
	char name[20];
	float marks;
};
int main()
{
	union Student s1;
	
	printf("Enter student roll no: ");
	scanf("%d", &s1.rollno);
	printf("Student id is: %d\n", s1.rollno);
	
	printf("Enter student name: ");
	scanf("%s", &s1.name);
	printf("Student id is: %s\n", s1.name);
	
	printf("Enter student marks: ");
	scanf("%f", &s1.marks);
	printf("Student id is: %.2f\n", s1.marks);

    return 0;

}
