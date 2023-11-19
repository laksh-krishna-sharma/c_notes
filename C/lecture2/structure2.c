#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct car 
    {
        int price;
        float topSpeed;
        char segment[20];
    }car;

    car c1;
    c1.price = 100000;
    c1.topSpeed =200.94;
    strcpy(c1.segment,"sedan");
    printf("%s\n",c1.segment);
    printf("%d\n",c1.price);
    printf("%f",c1.topSpeed);

    return 0;
}