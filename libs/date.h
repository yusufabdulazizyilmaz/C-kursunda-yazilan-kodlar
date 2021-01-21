#ifndef _DATE_H
#define _DATE_H

#include <stdio.h>

typedef struct _Date {
	int md, mm, my;
}Date;

//setter - mutator
Date* set_date(Date*p, int day, int mon, int year);
Date* set_todays_date(Date* p);
Date* set_date_by_str(Date* p, const char* pstr);
Date* set_date_random(Date* p);
Date* set_year(Date* p, int y);
Date* set_month(Date* p, int m);
Date* set_month_day(Date* p, int mday);
Date* increment_date(Date* p, int ndays);
Date* decrement_date(Date* p, int ndays);

///accessor - getters
int get_year(const Date* p);
int get_month(const Date* p);
int get_month_day(const Date* p);
int get_week_day(const Date* p);
int get_year_day(const Date* p);

//utility functions
int get_date_diff(const Date* p1, const Date* p2);
Date * ndays_date(Date* pdest, const Date* source, int n);
int cmp_date(const Date* p1, const Date* p2);

//input-output functions
void print_date(const Date* p);
void print_date_(FILE*, const Date* p);

Date* scan_date(Date* p);

#endif
