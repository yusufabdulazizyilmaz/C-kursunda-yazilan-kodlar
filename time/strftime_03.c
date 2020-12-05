#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>
#include <locale.h>

int main(void)
{
    time_t now;
    struct tm* ptr_now;
    char time_string[64];

    if (setlocale(LC_TIME, "turkish") == NULL) {
        printf("lokal degistirilemiyor\n");
        return 1;
    }

    time(&now);
    ptr_now = localtime(&now);
    strftime(time_string, 64, "%d %B %Y %A", ptr_now);

    printf("Bugun %s\n", time_string);
}
