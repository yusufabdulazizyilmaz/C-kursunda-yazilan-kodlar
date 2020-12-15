#include <ctype.h>
#include <stdio.h>
#include "Windows.h"
#include <stdlib.h>

int main()
{
	while (1) {
		int c = rand() % 128;
		if (isalnum(c)) {
			putchar(c);
			Sleep(50);
		}
	}
}
