#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int isprime(int ival)
{
	if (ival < 2)
		return 0;

	if (ival % 2 == 0)
		return ival == 2;

	if (ival % 3 == 0)
		return ival == 3;

	if (ival % 5 == 0)
		return ival == 5;

	for (int i = 7; i * i <= ival; i += 2) {
		if (ival % i == 0)
			return 0;
	}

	return 1;
}

int main()
{
	FILE* f;
	int prime_count = 0;
	int x = 2;

	if ((f = fopen("asal.txt", "w")) == NULL) {
		printf("dosya olusturulamadi\n");
		return 1;
	}

	while (prime_count < 1'000'000) {
		if (isprime(x)) {
			if (prime_count && prime_count % 10 == 0)
				fprintf(f, "\n");
			fprintf(f, "%-12d ", x);
			++prime_count;
		}
		++x;
	}
}
