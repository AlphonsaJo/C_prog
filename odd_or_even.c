#include <stdio.h>
int evenOrOdd(int x)
{   
    if(x%2==0)
    {
        printf("%d is even \n", x);
    }
    else
    {
        printf("%d is odd\n", x);
    }

}
int main()
{ int y;
 printf("enter number\n");
 scanf("%d", &y);
 evenOrOdd(y);
}