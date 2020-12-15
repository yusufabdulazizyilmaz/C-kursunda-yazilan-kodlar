#include <stdio.h>

int main()
{
	int ival;
	printf("bir tamsayi girin: ");
	scanf("%d", &ival);
	
	printf("ival = %d\n", ival);


	ival = -ival;

	printf("ival = %d\n", ival);
}
