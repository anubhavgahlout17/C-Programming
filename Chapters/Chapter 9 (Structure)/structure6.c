#include<stdio.h>                                //Pointers Structure

struct student
{
    char name[10];
    int rollNo;
    float cgpa;

};

int main(){
    struct student s1 = {"Anubhav", 45968, 4.66};
    printf("Student Name: %s\nRoll No.: %d\nCgpa: %.2f\n",s1.name,s1.rollNo,s1.cgpa);
    printf("\n");

    //By Pointer
    struct student *ptr = &s1;
    printf("Student Name: %s\nRoll No.: %d\nCgpa: %.2f\n",(*ptr).name,(*ptr).rollNo,(*ptr).cgpa);

    return 0;
}