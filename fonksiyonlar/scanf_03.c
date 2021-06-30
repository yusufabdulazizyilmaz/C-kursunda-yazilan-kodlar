#include <stdio.h>

int main(void)
{
	int x, y;
	double d;

	printf("bir giris yapin: ");
	scanf("%d%lf%x", &x, &d, &y); // giris: 12.96ali

	printf("x = %d\n", x);
	printf("y = %d\n", y);
	printf("d = %f\n", d);
}
