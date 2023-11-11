#include<stdio.h>
int main()
{
    float x,y;

    printf("Enter x cordinate of point :");
    scanf("%f",&x);
    printf("Enter y cordinate of point :");
    scanf("%f",&y);

    if (y==0)
    {
        if (x==0)
        {
            printf("Point lies on origin");
        }
        else
        {
            printf("Point lies on x-axis");
        }
    }
    else if (x==0)
    {
        printf("Point lies on y-axis");
    }
    else
    {
        printf("Point lies somewhere between the graph");
    }

    return 0;
}