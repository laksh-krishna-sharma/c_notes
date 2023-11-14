// RECURSION
// in simple words is a function calling itself
#include <stdio.h>

// void great(int n){
//     if (n==0) return ;
//     printf("Good Morning\n");
//     great(n-1);
// }
// int main (){
//     great(3);

//     return 0;
// }

// n to 1

// void prt(int n){
//     if (n==0) return ;
//     printf("%d\n",n);
//     prt(n-1);
// }
// int main(){
//     printf("Enter a number : ");
//     int num;
//     scanf("%d",&num);
//     prt(num);

//     return 0;
// }

// 1 to n

void prt(int n){
    if (n==0) return ;
    prt(n-1);
    printf("%d\n",n);
}
int main(){
    printf("Enter a number : ");
    int num;
    scanf("%d",&num);
    prt(num);

    return 0;
}