#include<stdio.h>

int fact(int n){
    if (n==0) return 1;
    int f = 1 ;
    f = n * fact(n-1);
    return f ;
}
  

int main(){
    printf("Enter a number : ");
    int num;
    scanf("%d",&num);
    printf("\nFactorial : %d",fact(num));

    return 0;
}