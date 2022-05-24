#include <stdio.h>
int main()
{
    int x, y;
    int *pt1, *pt2, *pt3;
    pt1=&x;
    pt2=&y;
    printf("enter values of x and y\n");
    scanf("%d%d", pt1, pt2);
    *pt3=*pt1+*pt2;
    printf("the sum of x and y is %d", *pt3);
}