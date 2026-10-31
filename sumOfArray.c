#include<stdio.h>
int main()
{
	int marks [5]={10, 20, 30, 40, 50};
    int a, sum =0, avg;
    for(a=0; a<5; a++)
    {
    	sum = sum + marks[a];
	}
	
	printf("This is total: %d \n", sum);
    
//    avg = sum/5;
//    printf("This is average of element : %d ",avg);
    
    return 0;
    
}


