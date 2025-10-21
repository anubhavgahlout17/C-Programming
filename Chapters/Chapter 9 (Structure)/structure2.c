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
printf("Student Roll no: %d\n", s1.RollNo );
printf("Student Cgpa: %f \n", s1.cgpa);

struct student s2;
s2.RollNo = 457;
s2.cgpa = 8.2;
strcpy(s2.name, "Rajat");

printf("Student name: %s\n", s2.name );
printf("Student Roll No: %d\n", s2.RollNo );
printf("Student Cgpa: %f \n", s2.cgpa);

struct student s3;
s3.RollNo = 458;
s3.cgpa = 7.2;
strcpy(s3.name, "Akshay");

printf("Student name: %s\n", s3.name );
printf("Student Roll No: %d\n", s3.RollNo );
printf("Student Cgpa: %f \n", s3.cgpa);
return 0;
}
