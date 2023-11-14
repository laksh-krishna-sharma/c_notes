#include <stdio.h>

void swap(int x , int y){
    
    x = x+y;
    y = x-y;
    x = x-y;
    printf("number are swaped %d,%d",x,y);

    return ;
}

int main(){
    
    int a,b;
    
    printf("enter first number : ");
    scanf("%d",&a);

    printf("enter second number : ");
    scanf("%d",&b);

    swap(a,b);

    return 0;
}