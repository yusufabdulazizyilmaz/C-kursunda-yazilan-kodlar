#include <stdio.h>

#define isupper(c)   ((c) >= 'A' && (c) <= 'Z')

int main()
{
	int c = 'A';

	///
	if isupper(c)  //neden sentaks hatası değil?
		printf("ok ");

}
