#include <stdio.h>

int main()
{
	int counter = 0;

	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < 20; ++j) {
			for (int k = 0; k < 30; ++k)
				++counter;
		}
	}

	printf("counter = %d\n", counter);
}
