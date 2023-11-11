#include<stdio.h>

int main()
{
    int x;
    printf("enter a number :");
    scanf("%d",&x);
    if (x<0)
    {
        x = x * (-1);
    }
    printf("absolute value of number is : %d",x);
    
    return 0;
}
