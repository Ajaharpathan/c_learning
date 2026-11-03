#include<stdio.h>
enum status{high, madium, low};
int main()
{
	enum status s;
	s = high;
	printf("%d", s);
}
