#include <stdio.h>
int main()
{   
    int n, rem=0;
    
    printf("enter n\n");
    scanf("%d", &n);
    
    printf("extraction of the number is: \n");
    while(n!=0)
    {
        rem=n%10;
        printf("%d\n", rem);
        n=n/10;
        
    }
}