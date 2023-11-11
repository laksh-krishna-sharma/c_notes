#include<stdio.h>

int main()
{
    int x;
    printf("enter a year :");
    scanf("%d",&x);
    if (x%4==0)
    {
        printf("entered year is a leap year");
    }
    else
    {
      printf("entered year is not a leap year");
    }
    
    return 0;
}
