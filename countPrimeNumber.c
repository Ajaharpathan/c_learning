#include<stdio.h>
int main()
{
	int i , j, count;

	for(i=2; i<=20; i++)
	{ 
	   count=0;
	   for(j=1; j<=i; j++) //% 1 and itself
	   {
	   	if(i%j==0)
	   	{
	   		count++;
		   }
	   
}
 if(count == 2)
 {
 	printf("%d ",i);
 }
 	
}
	   
	
	return 0;
}
