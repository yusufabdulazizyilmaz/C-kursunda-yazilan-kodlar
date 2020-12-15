//ekrana ne yazar?

#include <stdio.h>

int main()
{
	int i = 1;
	do
	{
		printf("%d\n", i);
		i++;
		if (i < 15)
			continue;
	} while (0);
}
