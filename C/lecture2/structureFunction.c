#include<stdio.h>

typedef struct student
    {
        int rno;
        char grade;
        float precentage;
    } student;

void print(student s)
{
    printf("%d\n",s.rno);
    printf("%c\n",s.grade);
    printf("%f\n",s.precentage);
}
void change(student s)
{
    s.grade ='A';
}
void change2(student* s)
{
    (*s).grade = 'A'; // method 1
    s->precentage = 95.77; // method 2
}
int main()
{
    student s1 = {29,'B',86.4};
    print(s1);
    change(s1); // it will not change by function because structures are passed by value
    print(s1);
    s1.grade = 'C'; // it will change the value
    print(s1);
    change2(&s1);
    print(s1);

    return 0;
}