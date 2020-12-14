#include <stdio.h>


void f1(void)
{
	int i = 0;

	while (i < 20) {
		printf("%d ", i);
		++i;
	}
	printf("\n--------------------------------------------------\n");
}


void f2(void)
{
	int i = 0;

	while (i < 20) 
		printf("%d ", i++);
	
	printf("\n--------------------------------------------------\n");
}


int main()
{
	f1();
	f2();
}
