#include<stdio.h>           //que
int main(){
    FILE *fptr;
    fptr = fopen("Student.txt","w");

    char name[100];
    printf("Enter Name: ");
    scanf("%s",name);

    int rollNo;
    printf("Enter Roll No. ");
    scanf("%d",&rollNo);

    float cgpa;
    printf("Enter cgpa: ");
    scanf("%f",&cgpa);

    fprintf(fptr,"%s\n",name);
    fprintf(fptr,"%d\n",rollNo);
    fprintf(fptr,"%.2f\n",cgpa);
     
  fclose(fptr);
  return 0;
}