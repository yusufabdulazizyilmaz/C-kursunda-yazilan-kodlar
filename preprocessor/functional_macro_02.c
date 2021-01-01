//operatör öncelik hatalarına karşı
//yer değiştirme listesi her zaman dıştan parantez içine alınmalı

#include <stdio.h>


//#define   square(x)   (x) * (x)
#define   square(x)		((x) * (x))

int main()
{
	int a = 5;
	int b = 100 / square(a);

	printf("b = %d\n", b);
}
