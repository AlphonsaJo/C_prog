#include <stdio.h>
int sum(int n)
{
    while(n>1)
    return n+sum(n-1);
}

int main(int x)
{
    x=6;
    sum(x);
    printf("sum of %d is %d", x, sum(x));
}