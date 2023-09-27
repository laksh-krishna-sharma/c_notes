#include<stdio.h>

int main()
{
    int x;
    printf("Enter the number to check divisibility by 3 and 5 :");
    scanf("%d",&x);

    if (x%3==0)
    {
        if (x%5==0)
        {
            printf("%d is divisible by 3 and 5",x);
        }
        else
        {
        printf("%d is not divisible by 3 and 5",x);
        }
    }
    else
    {
        printf("%d is not divisible by 3 and 5",x);
    }
    
    
    return 0;
}