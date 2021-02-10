//yazının tersinin yazdırılması "iterative" gerçekleştirim

#include <stdio.h>

void rprint(const char* p)
{
	const char* ptemp = p;

	while (*p)
		++p;

	do {
		--p;
		putchar(*p);
	} while (p != ptemp);
}


int main()
{
	rprint("necati ergin");
}
