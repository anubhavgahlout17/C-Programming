#include<stdio.h>
#include<string.h>

struct student 
{
    char name[50];
    int RollNo;
    float cgpa;
};

int main(){
struct student s1;
s1.RollNo = 456;
s1.cgpa = 5.2;
strcpy(s1.name, "Anubhav");

printf("Student name: %s\n", s1.name );
printf("Student name: %d\n", s1.RollNo );
printf("Student name: %f\n", s1.cgpa);
return 0;




}
