#include<stdio.h>
#include<math.h>

int fact(int f){
   
    int a = 1;
    for ( int i = 1  ; i <= f ; i++)
    {
        a *= i;
    }
    
    return a;
}

int comb(int n , int r){
    
    return fact(n)/(fact(r)*fact(n-r));
}

int main(){
    
    int num ;
    printf("Enter numer of rows : ");
    scanf("%d",&num);

    for (int i = 0 ; i <= num ; i++)
    {
        for (int k = num; k > i; k--)
        {
            printf(" ");
        }
        
        for (int j  = 0; j <= i; j++)
        {
            int pt = comb(i,j);
            printf("%d ",pt);
        }
        printf("\n");
    }
    
    return 0;
}