#include <stdio.h>
void main()
{
    int n, i, sum=0;
    printf("enter number\n");
    scanf("%d", &n);

    for(i=1; i<n; i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }

    if(sum==n)
    {
        printf("it is a perfect number\n");
    }
    else
    {
        printf("it is not a perfect number\n");
    }
}


