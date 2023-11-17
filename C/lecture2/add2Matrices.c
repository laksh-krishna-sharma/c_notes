#include<stdio.h>
int main()
{
    int arr[3][2] = {{1,2},{3,4},{5,6}};
    int arr2[3][2] = {1,2,3,4,5,6};
    int arr3[3][2];

    for( int i = 0;i < 3; i++)
    {
        for(int j = 0; j<2; j++)
        {
           arr3[i][j] = arr[i][j] + arr2[i][j];
        }
    }

    for( int i = 0;i < 3; i++)
    {
        for(int j = 0; j<2; j++)
        {
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}