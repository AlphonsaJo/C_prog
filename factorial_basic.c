#include <stdio.h>
//function definition and declaration
//A variable or a function can be declared any number of times
//A variable or a function can be defined only once
int fact(int n)
{   int i, sum=0;
    int f=1;
    for(i=1; i<=n; i++)
    {  
        f=i*f;
        sum=+f;
    }
return sum;
}


int main()
{   int x=5;
    printf("the factorial of %d is %d\n ", x, fact(x));
}