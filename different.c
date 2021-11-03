
#include <stdio.h>
#include <stdlib.h>

void main()
{
    unsigned long long x;
    unsigned long long y;
    while (scanf("%llu%llu", &x, &y) == 2) {
        unsigned long long z = llabs(x-y);
        printf("%llu\n", z);
    }
}