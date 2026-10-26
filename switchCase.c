#include<stdio.h>
int main()
{
	int num1, num2;
	char choice;
	printf("enter first number :");
	scanf("%d", &num1);
	printf("enter second number :");
	scanf("%d", &num2);
	printf("enter Choice :");
	scanf(" %c", &choice);
	switch (choice)
	{
		case '+':
			printf("addition of two no: %d", num1 + num2);
			break;
		case '-':
			printf("substraction of two no: %d", num1 - num2);
			break;
		case '*':
			printf("Multiplication of two no: %d", num1 * num2);
			break;
		case '/':
			printf("Division of two no: %d", num1 / num2);
			break;
		case '%':
			printf("Modulus of two no: %d", num1 % num2);
			break;
		default :
			printf("Invalid Choice");
			
	}
	
	return 0;
}
