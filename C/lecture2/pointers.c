// PASS BY VALUE and PASS BY REFRENCE 

// pass by value
// ka matlab ho ta hai jab ek function ko call kr te time us mai koi parameter pass kr te hai to un parameters ki bs value pass ho ti hai na ki actual mai pura parameter

// pass by refrence 
// ka matlab ho ta hai jab ek function ko call kr te time us mai koi parameter pass kr te hai to wo directly us actual parameter pe point kr ta hai na ki us ki value le ta hai 


// POINTERS


// printing adderss using pointer

// #include <stdio.h>
// int main(){
//     int x =9;
//     printf("address is : %p",&x);
//     int* z = &x; // use * tu assigne a pointer 
//     printf("\n%p",z);

//     return 0;
// }


// printing values using pointers

#include <stdio.h>
int main(){
    int x =90;
    int* z = &x;
    printf("\n%d",x);  // value of x
    printf("\n%p",z);  //value of z which is adderss of x
    printf("\n%d",*z);  // value of x
       //here * is called derefrence operator

    return 0;
}