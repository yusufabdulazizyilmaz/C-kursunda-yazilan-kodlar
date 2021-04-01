#include <stdio.h>

int day_of_week(int d, int m, int y)
{
    return (d += m < 3 ? y-- : y - 2, 23 * m / 9 + d + 4 + y / 4 - y / 100 + y / 400) % 7;
}

int main()
{
	printf("weekday = %d\n", day_of_week(1, 4, 2021));
}
