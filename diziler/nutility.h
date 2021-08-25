#ifndef  NUTILITY_H
#define  NUTILITY_H

#define   isleap(y)     ((y) % 4 == 0 && ((y) % 100 || (y) % 400 == 0))

void set_array_random(int*, int);
void print_array(const int*, int);
int isprime(int);
int ndigit(int);
void dashline(void);
void randomize(void);

#endif
