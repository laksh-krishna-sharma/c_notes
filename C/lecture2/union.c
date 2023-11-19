#include<stdio.h>

typedef union student 
{
    int rno; // 4 byte
    char grade; // 2 byte
    float precentage; // 4 byte
} student;

// Union same structure jisa he ho ta hai bs union space efficient ho ta hai matlab jisa is union mai sab sse zayada space int (4byte) ka hai to pure union ka size 4 byte ho ga 
// agar struct ho ta to us ka size int (4) + char (2) + float (4) = 10 byte ho ta

int main()
{
    student s = {76,'B',86.4};
    printf("%d\n",s.rno); // 76
    printf("%c\n",s.grade); // L -> ASCII value of 76
    printf("%f\n",s.precentage); // 0.000000

    return 0;
}
// NOTE ->  agar ek bar mai ek he chiz ko initialize kr ke print kre to koi error ki dikkat nahi ayagi