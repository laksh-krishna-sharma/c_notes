#include<stdio.h>

int sum(int n){
    if (n==1) return 1;
    int sm = 0 ;
    sm = n + sum(n-1);
    return sm ;
}
  

int main(){
    printf("Enter a number : ");
    int num;
    scanf("%d",&num);
    printf("\nSUM : %d",sum(num));

    return 0;
}