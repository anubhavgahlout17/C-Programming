#include<stdio.h>                                    // Use of typedef Keyword
#include<string.h>
typedef struct UniversityStundentInformation
{
    int rollNo;
    char name[10];
    float cgpa;
}use;

int main(){
    use s1;
    s1.rollNo = 459;
    strcpy(s1.name,"Anubhav");
    s1.cgpa = 8.56;
    
    printf("Name: %s\nRoll No: %d\nCgpa: %.2f\n",s1.name,s1.rollNo,s1.cgpa);
    return 0;
}