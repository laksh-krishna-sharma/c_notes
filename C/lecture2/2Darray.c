#include<stdio.h>

int main()
{
    // decleration
    int arr[3][2] = {{1,2},{3,4},{5,6}};
    int arr2[3][2] = {1,2,3,4,5,6};
    for( int i = 0;i < 3; i++)
    {
        for(int j = 0; j<2; j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    int arr3[][2] = {1,2,3,4,5,6};

    return 0;
}