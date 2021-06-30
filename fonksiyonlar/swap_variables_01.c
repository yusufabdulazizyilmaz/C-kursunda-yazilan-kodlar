#include <stdio.h>

int main()
{
	int x, y;
	printf("iki tamsayi girin: ");
	scanf("%d%d", &x, &y);

	printf("x = %d   y = %d\n", x, y);

	int temp = x;
	x = y;
	y = temp;
	
  printf("x = %d   y = %d\n", x, y);
}
