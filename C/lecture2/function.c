// FUNCTION
// function se code zayada redable ban ta hai aur 
// jab ek set of code bar bar repeat ho to it is better to define that as a seprate function taki bara bar repeat na ho code aur code zayada clean reha 

// SYNTAX

// fun(){
//    //code
//   // return data type 
// }
#include <stdio.h>

void hello(){
    printf("hello\n");
}

// function with parameter 
// agar actual argument mai koi value pass nahi hui hai aur hum ne formal argument mai koi default value pass kr rakhi hai (num =2) to function mai formal argument ki default value pass ho ja ayagi
 
void oddeven(int num){ //here num is known as formal argument
    if (num%2==0)
    {
        printf("Even number");
    }
    else
    {
        printf("Odd number");
    }
    
    return;    
}

// Scope for a variable inside a function 
// ek function ke andar define hua wa variable (local variable) ko b us function ke andar he acess kr sak te hai us ke bhar it is not posible to acess that variable

int main(){
    
    // for (int i = 0; i < 10 ; i++)
    // {
    //     hello();
    // }

    int num ;
    printf("enter a number : ");
    scanf("%i",&num);
    oddeven(num);  //here num is known as actual argument
    
    return 0;
}