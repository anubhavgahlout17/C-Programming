#include<stdio.h>                    // Passing structure to function
struct student
{
    int rollno;
    char name[10];
};

void printinfo(struct student s1);               // function Prototype
void printinfo(struct student s1){
    printf("Student info: ");
    printf("Student name: %s\nRoll No: %d\n",s1.name,s1.rollno);
}


int main(){
struct student s1 = {4569,"Anshu"};
printinfo(s1);
return 0;
}