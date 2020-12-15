#include <stdio.h>


int g = 20;

int func()
{
	g += 5;
	return 3;
}

int main()
{
	int a;

	a = g + func(); //unspecified

	printf("a = %d\n", a);
}
