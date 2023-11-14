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

int main(){
    for (int i = 0; i < 10 ; i++)
    {
        hello();
    }
    return 0;
}