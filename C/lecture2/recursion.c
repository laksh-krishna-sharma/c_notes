// RECURSION in simple words is a function calling itself
#include <stdio.h>

void great(int n){
    if (n==0) return ;
    printf("Good Morning\n");
    great(n-1);
}
int main (){
    great(3);

    return 0;
}