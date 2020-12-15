#include <stdio.h>

int main()
{
	int ival = 1000;

	for (int i = 1; i < 10; ++i) {
		for (int j = 0; j < 10; ++j) {
			for (int k = 0; k < 10; ++k) {
				for (int m = 0; m < 10; ++m) {
					if (ival == i * i * i * i + j * j * j * j + k * k * k * k + m * m * m * m)
						printf("%d ", ival);
					++ival;
				}
			}
		}
	}
}
