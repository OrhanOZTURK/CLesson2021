#include "utility.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifdef  __linux__
#include <unistd.h>
#elif _WIN32
#include <Windows.h>
#endif

int isprime(int val)
{
    if(val == 0 || val == 1)
        return 0;

    if(val % 2 == 0)
        return val == 2;

    if(val % 3 == 0)
        return val == 3;

    if(val % 5 == 0)
        return val == 5;

    for(int k = 7; k * k <= val; k += 2)
        if(val % k == 0)
            return 0;

    return 1;
}

int ndigit(int val)
{
    if(val == 0)
        return 1;

    int digit_count = 0;

    while (val) {
        ++digit_count;
        val /= 10;
    }

    return digit_count;
}

void dashline()
{
    printf("\n-------------------------------------------------------------------------------\n");
}

void xSleep(double sec)
{
#ifdef __linux__
    sleep((double)sec * 1000);
#elif _WIN32
    Sleep((double)sec * 1000);
#endif
}

void randomize()
{
    srand((unsigned)time(NULL));
}


void set_array_random(int *p, int size)
{
    while (size--){
        *p++ = rand() % 1000;
    }
}


void print_array(const int *p, int size)
{
    for (int i = 0; i < size; ++i) {
        if(i && i % 20 == 0)
            printf("\n");
        printf("%3d ", p[i]);
    }

    dashline();
}


void sgets(char *p)
{
    int c;

    while ((c = getchar()) != '\n') {
        *p++ = (char )c;
    }

    *p = '\0';
}












