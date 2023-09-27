#include<stdio.h>

int main()
{
    char ch;
    printf("Enter a operator : ");
    scanf("%c",&ch);

    int a;
    printf("Enter first number : ");
    scanf("%d",&a);

    int b;
    printf("Enter second number : ");
    scanf("%d",&b);

    switch (ch)
    {
        case '+':
            printf("%d",a+b);
            break;
        case '-':
            printf("%d",a-b);
            break;
        case '*':
            printf("%d",a*b);
            break;       
        case '/':
            printf("%d",a/b);
            break;
    
        default:
            printf("Invalide operator");
            break;
    }

    return 0;
}