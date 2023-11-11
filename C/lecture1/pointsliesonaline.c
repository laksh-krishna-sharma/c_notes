#include<stdio.h>
int main()
{
    float x1,x2,x3,y1,y2,y3;
    
    printf("Enter x cordinate of 1st point :");
    scanf("%f",&x1);
    printf("Enter y cordinate of 1st point :");
    scanf("%f",&y1);

    printf("Enter x cordinate of 2nd point :");
    scanf("%f",&x2);
    printf("Enter y cordinate of 2nd point :");
    scanf("%f",&y2);

    printf("Enter x cordinate of 3rd point :");
    scanf("%f",&x3);
    printf("Enter y cordinate of 3rd point :");
    scanf("%f",&y3);

    double m1,m2;
    m1 = (y2-y1)/(x2-x1);
    m2 = (y3-y2)/(x3-x2);

    if (m1==m2)
    {
        printf("\nPoints are colinear");
    }
    else
    {
        printf("\nPoints are non-colinear");
    }
    
    return 0;
}