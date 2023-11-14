#include<stdio.h>

int power(int x , int y){
    if(y==1) return x;
    int z =  power(x,y/2);
    if (y%2==0) return z * z;
    else return z * z * x;
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