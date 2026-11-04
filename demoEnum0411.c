//#include<stdio.h>
//enum status{high, medium,low};
//int main()
//{
//
//enum status s1;
//s1=low;
//printf("%d", s1);
//}


#include<stdio.h>
//enum weekdays{Monday, Tuesday, Wednesday, Thursday, Friday};
enum weekdays{Monday=1, Tuesday=2, Wednesday=3, Thursday=4, Friday=5};
int main()
{
	enum weekdays today;
	today=Monday;
//	printf("%d", today);
	printf("\n");
	
	char *days[]={"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
//	printf("Today is: %s", days[today]);
    int i;
    for(i=0; i<5; i++)
    {
    	printf("Today is: %s\n", days[i]);
	}
	
	
	
	return 0;
}
