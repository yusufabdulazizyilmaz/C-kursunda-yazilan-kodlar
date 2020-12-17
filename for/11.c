#include <stdio.h>

int main()
{
	for (int i = 0; i < 10; ++i) {
		int i = 60; //C++ dilinde sentaks hatası C'de gecerli
		printf("%d\n", i);
	}
}
