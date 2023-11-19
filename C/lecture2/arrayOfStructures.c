#include<stdio.h>
int main()
{
    typedef struct student
    {
        int rno;
        char grade;
        float precentage;
    } student;

    student arr[3];
    arr[0].rno = 28;
    arr[0].grade = 'C';
    arr[0].precentage = 78.9;

    struct student a1; 
    arr[1].rno = 42;
    arr[1].grade = 'A';
    arr[1].precentage = 98.7;

    student s = {29,'B',86.4}; 
    arr[2] = s;
    // copy a structure -> Deep copy s formed
    student s1 = s;
    s1.grade = 'C';
    printf("%c\n",s.grade); // s will not change is we update s1 which is a copy of s
    printf("%c\n",s1.grade); 


    return 0;
}