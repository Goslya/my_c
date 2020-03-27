#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fatoi(const char* str)
{   int i, n;
    n = strlen(str);
    int a[n];
    printf("\nstring in digits - ");
    for(i = 0; i < n; i++)
    {
       a[i] = (int)str[i];
       printf("%d ", a[i]);
    }
}

int main()
{   int i, n, len;
    const char str[] = "oooooh, yaaaa...";
    printf("\nstring -%17s", str);
    fatoi(str);
    return 0;
}
