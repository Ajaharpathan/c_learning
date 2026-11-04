# include<stdio.h>

int main()

{

	int i, j;

	int a[2][3];

            for(i=0; i<2; i++)

	            {

	            	for(j=0; j<3; j++)

	            	{

	            	    printf("Enter numbers for row %d and column %d: ", i, j);

	            		scanf("%d", &a[i][j]);

					}

				}

				//==============================================			  

	           	printf("\n");

	            printf("Print array elements: \n");

	            for(i=0; i<2; i++)

	            {

	            	for(j=0; j<3; j++)

	            	{

	            		printf("%d ", a[i][j]);

					}

					printf("\n");

				}

				//===========================================

				printf("\n");

				int sum =0;

	            printf("Print array elements: \n");

	            for(i=0; i<2; i++)

	            {

	            	for(j=0; j<3; j++)

	            	{

	            		sum = sum +a[i][j];

					}

				}

					printf("Sum of All Array elements are : %d", sum);

		//===========================================

				printf("\n");

				printf("\n");

				int max =a[0][0];

	            printf("Find largest array element: \n");

	            for(i=0; i<2; i++)

	            {

	            	for(j=0; j<3; j++)

	            	{

	            		if(a[i][j]>max)

	            		{

	            			max = a[i][j];

						}

					}

				}

					printf("Largest Array element is : %d", max);

	return 0;

}
 
//# include<stdio.h>
//
//int main()
//
//{
//
//	int i, j;
//
//	int a[3][4] = {
//
//	                  {10, 20, 40, 50},
//
//	                  {60, 80, 30, 70},
//
//	                  {15, 25, 45, 55}
//
//	              };
//
//	            //  printf("%d", a[1][2]);
//
//	            for(i=0; i<3; i++)
//
//	            {
//
//	            	for(j=0; j<4; j++)
//
//	            	{
//
//	            		printf("%d ", a[i][j]);
//
//					}
//
//					printf("\n");
//
//				}
//
//	return 0;
//
//}
// 
//# include<stdio.h>
//
//struct Student 
//
//{
//
//	int rollno;
//
//	char name[20];
//
//	float marks;
//
//};
// 
//int main()
//
//{    // Syntax no.1
//
//	struct Student s1;
//
//	printf("Enter Student Roll no : ");
//
//	scanf("%d", &s1.rollno);
//
//	printf("Enter Student Name : ");
//
//	scanf("%s", s1.name);
//
//	printf("Enter Student marks : ");
//
//	scanf("%f", &s1.marks);
//
//	printf("\n");
//
//	printf("Student id is: %d\n", s1.rollno);
//
//	printf("Student name is: %s\n", s1.name);
//
//	printf("Student marks is: %.2f\n", s1.marks);


//	return 0;


