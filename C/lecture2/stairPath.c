#include<stdio.h>

int stairs(int n){
    if (n==0) return 1;
    if (n<0) return 0;
    return stairs(n-1) + stairs(n-2) + stairs(n-3) ;
}
  

int main(){
    printf("Enter a number : ");
    int num;
    scanf("%d",&num);
    printf("\nNumber of ways : %d",stairs(num));

    return 0;
}