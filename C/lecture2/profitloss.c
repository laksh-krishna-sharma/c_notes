#include<stdio.h>

int main()
{
    int cp;
    printf("enter cost price :");
    scanf("%d",&cp);
    int sp;
    printf("enter selling price :");
    scanf("%d",&sp);
    if (cp<sp)
    {
        int pr = sp-cp;
        printf("MADE PROFIT OF : %d",pr);
    }
    if (cp>sp)
    {
        int lo = cp-sp;
         printf("MADE LOSS OF : %d",lo);
    }
    if (cp==sp)
    {
         printf("NO PROFIT NO LOSS");
    }
    
    return 0;
}
