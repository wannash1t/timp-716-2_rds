#include "stdio.h"
#include "math.h"
#include <assert.h>
int main()
{
int a, b;
int r=scanf("%d%d", &a, &b);
assert (r ==2);
printf ("%d\n", a+b);
return 0;
}
