#include<stdio.h>
int main()
{
    int x;
    printf("enter a number :");
    scanf("%d",&x);
    // ternary operator
    // exp1 ? exp2 : exp3;
    x%2==0 ? printf("entered number is even") : printf("entered number is odd");
    // if (x%2==0)
    // {
    //     printf("entered number is even");
    // }
    // else
    // {
    //     printf("entered number is odd");
    // }
    
    return 0;
}
