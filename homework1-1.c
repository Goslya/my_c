#include <stdio.h>
#include <stdlib.h>
int count_digits(char* c)
{
int a, v, cs = 0;
char b[11];

for(a = 0; a < 10; a++) b[a] = a + '0';

for(a = 0; c[a] != 0; a++)
for(v = 0; v < 10; v++)
if(c[a] == b[v]) cs++;
return cs;
}
int main()
{
char b[101];

printf("\nenter line\n");
scanf("%100s", b);
printf("\namount of digits in your text is %d\n\n", count_digits(b));

return 0;
}
