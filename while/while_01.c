#include <stdio.h>

int ndigit(int val)
{
	int digit_count = 0;

	if (val == 0)
		return 1;

	while (val) {
		++digit_count;
		val /= 10;
	}

	return digit_count;
}


int main()
{
	int x;
	printf("bir tamsayi girin: ");
	scanf("%d", &x);

	printf("%d sayisi %d basamakli\n", x, ndigit(x));

}
