#include<stdio.h>
int main()
{
    struct student
    {
        int rno;
        char grade;
        float precentage;
    } a3;// decleration 1
    
    a3.rno = 28;
    a3.grade = 'C';
    a3.precentage = 78.9;

    struct student a1; // decleration 2
    a1.rno = 42;
    a1.grade = 'A';
    a1.precentage = 98.7;

    struct student a2 = {29,'B',86.4}; // decleration 3

    // to print and to take input we can use printf and scanf

    return 0;
}