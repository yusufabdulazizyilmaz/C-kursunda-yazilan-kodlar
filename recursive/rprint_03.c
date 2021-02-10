//Yazının tersini yazdıran fonksiyonun özyinelemeli gerçekleştirimi

#include <stdio.h>

void rprint(const char* pstr)
{
	if (!*pstr)
		return;

	rprint(pstr + 1);
	putchar(*pstr);

}

int main()
{
	rprint("necati ergin");
}
