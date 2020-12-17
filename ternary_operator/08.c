//koşul operatörünün 2. ve 3. operandları arasında örtülü tür dönüşümü söz konusudur.

#include <stdio.h>

int main()
{
	double dval = (10 > 5 ? 10 : 1.) / 3;
	printf("dval = %f\n", dval);
}
