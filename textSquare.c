#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int num =25;
	printf("Square Root= %.2f", sqrt(num));
	
	printf("\n");
	int a = 6;
	int b = 2;
	int power = 3;
	printf("Power of 6 is: %.2f\n", pow(5, 2));
	printf("Power of 6 is: %.2f", pow(6, 3));
	
	printf("\n");
	
	char name[]="ajahar";
	char namecopy[20];
	
//	int length = strlen(name);
//	printf("String length is = %d", length); 

     printf("String length is = %d\n", strlen(name));
//	 printf("Copied name is = %s\n", strcpy(namecopy, name ));
      strcpy(namecopy, name );
	 printf("copied name: %s", namecopy);
	
	
	return 0;
}
