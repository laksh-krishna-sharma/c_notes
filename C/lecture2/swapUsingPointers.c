// PASS BY REFERENCE
#include <stdio.h>

void swap(int* x , int* y){
    int z = *x;
    *x = *y;
    *y = z;
    return ;
}

int main(){
    
    int a,b;
    
    printf("enter first number : ");
    scanf("%d",&a);

    printf("enter second number : ");
    scanf("%d",&b);

    swap(&a,&b);
    printf("number are swaped %d,%d",a,b);

    return 0;
}