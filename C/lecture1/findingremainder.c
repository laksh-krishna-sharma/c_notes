#include<stdio.h>

int main(){
    int a,b; // a>b
    printf("Enter Dividend :");
    scanf("%d",&a);
    printf("Enter Divisor :");
    scanf("%d",&b);
    int r = a % b;
    printf("The remainder when %d is divided by %d is : %d",a,b,r);

    return 0;
}