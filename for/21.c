#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int n;

	printf("kac satir: ");
	(void)scanf("%d", &n);

	for (int i = 1; i <= n; ++i) {
		for (int k = 0; k < i; ++k) {
			putchar('*');
		}
		putchar('\n');
	}
}
