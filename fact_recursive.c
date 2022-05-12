#include <stdio.h>
int fact(int n)
{
    if(n>1)
    {
        return n*fact(n-1);
    }
    else
    return 1;
}

int main(int x)
{
    x=5;
    printf("the factorial of %d is %d\n ", x, fact(x));
}