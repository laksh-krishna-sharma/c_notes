#include<stdio.h>

int main()
{
    int arr[] ={0,1,2,3,4};
   
    // printing array
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
   
    // updating a value
    arr[1] = 5;
    printf("\n");
    int j = 0;
    while (j <5)
    {
        printf("%d ",arr[j]);
        j++;
    }
   
    // taking input 
    int arr2[5];
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter element : ");
        scanf("%d",&arr2[i]);
    }
    int k = 0;
    while (k <5)
    {
        printf("%d ",arr2[k]);
        k++;
    }
    

    return 0;    
}