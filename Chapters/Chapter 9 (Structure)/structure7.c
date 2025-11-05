#include<stdio.h>                         // Arrow Operator -> Pointer structure
struct student 
{
    char name[20];
    float cgpa;
    int rollno;

    
};
int main(){
    struct student s1 = {"Devansh",5.69,78};
    struct student *ptr = &s1;
    printf("Name: %s\nCgpa: %.2f\nRoll No: %d\n",ptr->name,ptr->cgpa,ptr->rollno);
    return 0;
}