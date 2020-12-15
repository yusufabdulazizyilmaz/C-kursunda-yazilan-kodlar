#include <stdio.h>

int g = 5;

int f1()
{
	g = 100;

	return 3;
}

int f2()
{
	return g + 2;
}


int main()
{
	int a;

	a = f1() + f2();  //unspecified behavior
	//a'ya hangi değerin atanacağı tamamen derleyiciye bağlı

	printf("a = %d\n", a);
}
