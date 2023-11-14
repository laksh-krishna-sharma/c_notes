#include<stdio.h>

int power(int x , int y){
    if(y==0) return 1;
    return x * power(x,y-1);
}
  
int main(){
    int a,b;
    printf("Enter number(a) : ");
    scanf("%d",&a);
    printf("Enter power(b) : ");
    scanf("%d",&b);
    printf("\na^b : %d",power(a,b));

    return 0;
}