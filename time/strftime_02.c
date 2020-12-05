#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>

int main()
{
	char buffer[100];
	time_t t = time(NULL);

	strftime(buffer, sizeof(buffer), "%B %A", localtime(&t));

	printf("%s\n", buffer);
}
