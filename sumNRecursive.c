#include <stdio.h>
int sum(int n)
{
    while(n>1)
    return n+sum(n-1);
}

int main(int x)
{
    x=-2;
    sum(x);
    printf("sum of %d is %d", x, sum(x));
}