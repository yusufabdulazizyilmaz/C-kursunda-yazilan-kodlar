#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>      
#include <time.h>       

int main()
{
    time_t timer;
    struct tm* timeinfo;
    int day, month, year;
    static const char* const pdays[] = {
    "Pazar",
    "Pazartesi",
    "Sali",
    "Carsamba",
    "Persembe",
    "Cuma",
    "Cumartesi",
    };

    printf("gun ay ve yil degerlerini giriniz: ");
    scanf("%d%d%d", &day, &month, &year);

    time(&timer);
    timeinfo = localtime(&timer);
    timeinfo->tm_year = year - 1900;
    timeinfo->tm_mon = month - 1;
    timeinfo->tm_mday = day;

     mktime(timeinfo);

    printf("%s", pdays[timeinfo->tm_wday]);
}
