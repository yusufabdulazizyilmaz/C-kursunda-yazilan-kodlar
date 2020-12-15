#include <stdio.h>


int f1()
{
	printf("f1 cagrildi\n");
	return 5;
}

int f2()
{
	printf("f2 cagrildi\n");
	return 8;
}


int main()
{
	int a;

	a = f1() + 5 * f2();  //unspecified behavior

	printf("a = %d\n", a);
}
