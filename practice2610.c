#include<stdio.h>
int main ()
{
//	char dance[50], eat[50], play[50], read[50];
	int choice;
//	printf("Enter Your Activity:");
//	scanf(" %s", &dance);

	printf("Enter your choice:");
	scanf("%d", &choice);
	switch (choice)
	{
		case 1:
			printf("Your doing Dance");
			break;
		case 2:
			printf("Your are eating");
			break;
		case 3:
			printf("Your are playing");
			break;
		case 4:
			printf("Your are reading");
			break;
		default :
		    printf("Your choice is wroing:");	
			
	}
	return 0;
}
