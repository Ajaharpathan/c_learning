#include<stdio.h>
int main()
{
	
	int i, j;
	 
	int a[3][4]={
	
	    {10, 20, 30, 40},
	    {50, 60, 70, 80},
		{05, 15, 25, 35}
	};
		
		// printf("%d ", a[1][2]);
	   for(i=0; i<3; i++)
	   {
	   	for(j=0; j<4; j++)
	   	{
	   		printf("%d ", a[i][j]);
		   }
		   printf("\n");
	   }
	
	
	
	
	return 0;
}
