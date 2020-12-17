#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x = 1;

	while (x) {
		bprint(x);
		x <<= 1;
		(void)getchar();
		system("cls");
	}
}
