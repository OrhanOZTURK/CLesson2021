#ifndef UTILITY_H
#define UTILITY_H

#include <stddef.h>

#define     isleap(y)       ((y) % 4 == 0 && ((y) % 100 || (y) % 400 == 0))
#define     asize(x)        (sizeof(x) / sizeof(x[0]))
#define     relem(a)        a[rand() % asize(a)]

int isprime(int);
int ndigit(int);
void dashline(void);
void xSleep(double sec);
void randomize();
void set_array_random(int *p, size_t size);
void print_array(const int *p, size_t size);
void sgets(char *p);
void swap(int *a, int *b);
void print_str(const char *);


#endif // UTILITY_H
