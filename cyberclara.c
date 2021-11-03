#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    unsigned long int n;

    scanf("%lu",  &n);

    char names[n][42];
    char name[21];

    for (int i = 0; i < n; i++) {
        scanf("%s", name);
        strcpy(names[i], name);
        strcat(names[i], " ");
    }

    for (int i = 0; i < n; i++) {
        scanf("%s", name);
        strcat(names[i], name);
    }

    qsort(names, n, sizeof(names[0]), strcmp);

    unsigned long int plp = n;

    for (int i = 1; i < n; i++) {
        if (strcmp(names[i-1],names[i]) == 0) {
            plp--;
        }
    }

    printf("%lu", plp);
}
