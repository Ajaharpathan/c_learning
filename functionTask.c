//#include<stdio.h>
//
//void name()
//{
//	printf("ajahar");
//}
//
//
//int main()
//{
//	name();
//	return 0;
//}

//#include<stdio.h>
//void numb()
//{
//	int i=0;
//	for(i=0; i<=10; i++)
//	{
//		printf("Number is: %d\n", i);
//	}
//}
//int main()
//{
//	numb();
//	return 0;
//}

//#include<stdio.h>
//void evenodd()
//{
//	int num1 = 9;
//	if(num1 % 2 == 0)
//	{
//		printf("Number is even:");
//	}
//	else
//	{
//		printf("Number is odd:");
//	}
//}
//int main()
//{
//	evenodd();
//	return 0;
//}


//#include<stdio.h>
//void numb()
//{
//    int num;
//	for(num=0; num<=100; num++)
//	{
//	  if(num % 2 != 0)
//	  {
//	  	printf("Odd number is: %d\n", num);
//	  }
//	}	
//}
//int main()
//{
//	numb();
//	return 0;
//}

//#include<stdio.h>
//void add()
//{
//	int a = 10, b = 20;
//    printf("Addition of two number: %d\n", a+b);
//}
//int main()
//{
//	add();
//	return 0;
//}

//#include<stdio.h>
//void table()
//{
//	int i=1;
//    for(i=1; i<=10; i++)
//	{
//		printf("5 * %d = %d\n", i, 5*i);
//	}
//}
//int main()
//{
//	table();
//	return 0;
//}
//#include<stdio.h>
//void check()
//{
//	int num = -2;
//	if(num<0)
//	{
//		printf("number is negative: %d", num);
//	}
//	else
//	{
//		printf("Number is positive: %d", num);
//	}
//}
//int main()
//{
//	check();
//	return 0;
//}
//#include<stdio.h>
//void facto()
//{
//	int i, num = 9, fact=1;
//	for(i=1; i<=num; i++)
//	{
//       fact = fact * i;
// 	}
//	printf("Factoril of %d = %d\n", num, fact);
//}
//int main()
//{
//	facto();
//	return 0;
//}

//#include<stdio.h>
//void printnum()
//{
//	int i;
//	for(i=100; i>=0; i--)
//	{
//		printf("Number is: %d\n", i);
//	}
//}
//int main()
//{
//	printnum();
//	return 0;
//}

#include <stdio.h>

void fibonacci()
{
    int a = 0, b = 1, c, i;

    for(i = 1; i <= 15; i++)
    {
        printf("%d ", a);

        c = a + b;
        a = b;
        b = c;
    }
}

int main()
{
    fibonacci();  

    return 0;
}



