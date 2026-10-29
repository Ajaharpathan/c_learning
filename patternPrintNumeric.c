#include<stdio.h>
int main()
{
	int i, j, count = 1;

	for (i=1; i<=3; i++) 
	{
		for(j=1; j<=3; j++)
		{
			printf("%d ", count);
			count++;
		}
		printf("\n");
	}
	
	return 0;
}


//{
//	
//	int i, j;
//	for (i=1; i<=2; i++)
//	{
//		for (j=1; j<=5; j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	
//	}
//}




//#include <stdio.h>
//
//int main()
//{
//    int i, j;
//
//    for (i = 3; i >= 1; i--)
//    {
//        for (j = 1; j <= i; j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

