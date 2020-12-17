#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	for (int i = 0; i < 20; ++i) {
		printf("%d ", i);
	}
	printf("\n\n");

	for (int i = 0; i < 20; i += 2) {
		printf("%d ", i);
	}
	printf("\n\n");

	for (int i = 1; i < 10000; i *= 2) {
		printf("%d ", i);
	}
	printf("\n\n");

	
	for (int i = 1; i < 100000; i *= 10) {
		printf("%d ", i);
	}
	printf("\n\n");

	for (int i = 20; i >= 0; --i) {
		printf("%d ", i);
	}
	printf("\n\n");

	for (int i = 0; i < 20; ++i) {
		printf("%d ", 2 * i + 1);
	}
	printf("\n\n");

}
