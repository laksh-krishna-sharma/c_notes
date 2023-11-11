#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    n>99 && n<1000 ? printf("It is a three digit number") : printf("It is not a three digit number");

    return 0;
}