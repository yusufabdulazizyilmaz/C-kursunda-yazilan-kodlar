#ifndef NUTILITY_H
#define NUTILITY_H

#include <stddef.h>

#define    asize(x)    (sizeof((x)) / sizeof((x)[0]))
#define    sbc(x)      (sbc_[(x) & 255] + sbc_[(x) >> 8 & 255] + sbc_[(x)>> 16 & 255] + sbc_[(x) >> 24 & 255])

extern const int sbc_[];
extern const int primes[];


int			isprime(int);
int			ndigit(int);
void		dline(void);
void		sleep(double sec);
int			day_of_week(int day, int month, int year);
void		randomize(void);
void		swap(int* p1, int* p2);
void		gswap(void* vpx, void* vpy, size_t n);
double		drand(void);
void		clear_input_buffer(void);
void		bprint(int val);

const char* rname(void);
const char* rsurname(void);
const char* rtown(void);


#endif
