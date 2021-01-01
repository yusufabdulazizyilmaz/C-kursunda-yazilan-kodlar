//operatör öncelik hatalarına karşı
//makro argümanı yer değiştirme listesi içinde geçtiği her yerde parantez içine alınmalı

#include <stdio.h>


#define   square(x)   x * x
//#define   square(x)   (x) * (x)

int main()
{
	int a = 5;
	int b = square(a + 1);

	printf("b = %d\n", b);
}
