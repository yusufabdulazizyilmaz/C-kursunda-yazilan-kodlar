#include <stdio.h>
#include <time.h>

int main(void)
{
    struct tm ts;
    char weekday[20];
    
    ts.tm_year = 1964 - 1900;
    ts.tm_mon = 3 - 1;
    ts.tm_mday = 4;
    ts.tm_hour = 0;
    ts.tm_min = 0;
    ts.tm_sec = 1;
    ts.tm_isdst = -1;

    if (mktime(&ts) == -1)
        (void)puts("-hesaplanamiyor-");
    else {
        (void)strftime(weekday, sizeof(weekday), "%A", &ts);
        (void)puts(weekday);
    }
}
