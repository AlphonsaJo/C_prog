#include <stdio.h>
void check_perfect(int x)
{   
    int i, sum=0;
    for(i=1; i<x; i++)
    {
        if(x%i==0)
        {
            sum+=i;
        }
    }

    if(sum==x)
    {
        printf("it is a perfect number\n");
    }
    else
    {
        printf("it is not a perfect number\n");
    }
}
void main()
{
    int n;
    printf("enter number\n");
    scanf("%d", &n);
    check_perfect(n);
    
    
}
