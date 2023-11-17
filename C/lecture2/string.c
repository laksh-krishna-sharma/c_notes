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
    char name2[] ="KRISHNA";
    printf(" %s",name2);
    char name3[] ="SHARMA : these are various method to store string";
    printf(" %s",name3);
   
    return 0;
}