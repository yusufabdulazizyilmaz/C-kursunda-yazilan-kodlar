#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//while parantezi içinde ctype.h başlık dosyasında bildirilen test işlevlerini çağırın


int main()
{
	int c;

	while (1) {
		while (!isxdigit(c = rand() % 128))
			; //null statement
		putchar(c);
	}
}
