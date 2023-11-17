// string is a array of character with null chcracter at end
#include<stdio.h>
int main()
{
    // \0 is known as null character which is nothing and has 0 ASCII value
    char name[] ={'L','A','K','S','H','\0'};
    int n = sizeof(name)/sizeof(name[0]);
    for(int i =0; i<n; i++)
    {
        printf("%c",name[i]);
    }
    printf(" ");
    char name2[] ="KRISHNA";
    int n1 = sizeof(name2)/sizeof(name2[0]);
    for(int i =0; i<n1; i++)
    {
        printf("%c",name2[i]);
    }
    printf(" ");
    char name3[] ="SHARMA : these are various method to store string";
    int n2 = sizeof(name3)/sizeof(name3[0]);
    for(int i =0; i<n2; i++)
    {
        printf("%c",name3[i]);
    }

    return 0;
}