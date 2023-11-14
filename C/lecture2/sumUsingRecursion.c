#include<stdio.h>

void sum(int n,int sm){
    if (n==0){
        printf("\nSUM : %d",sm);
        return ;
    }
    sum(n-1,sm+n);
}

int main(){
    printf("Enter a number : ");
    int num;
    scanf("%d",&num);
    sum(num,0);

    return 0;
}