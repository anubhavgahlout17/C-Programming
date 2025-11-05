#include<stdio.h>
#include<string.h>
struct employee{
     int code;
     float salary;
     char name[20];
};
int main(){
    struct employee e1,e2,e3;
     printf("Enter Name: ");
     scanf("%s",&e1.name);

     printf("Enter Code: ");
     scanf("%d",&e1.code);

     printf("Enter Salary: ");
     scanf("%f",&e1.salary);

     printf("Enter Name: ");
     scanf("%s",&e2.name);

     printf("Enter Code: ");
     scanf("%d",&e2.code);

     printf("Enter Salary: ");
     scanf("%f",&e2.salary);

     printf("Enter Name: ");
     scanf("%s",&e3.name);

     printf("Enter Code: ");
     scanf("%d",&e3.code);

     printf("Enter Salary: ");
     scanf("%f",&e3.salary);

     printf("Employee Name: %s\nCode: %d\nSalary: %.2f\n",e1.name,e1.code,e1.salary);
     printf("\n");
     printf("Employee Name: %s\nCode: %d\nSalary: %.2f\n",e2.name,e2.code,e2.salary);
     printf("\n");
     printf("Employee Name: %s\nCode: %d\nSalary: %.2f\n",e3.name,e3.code,e3.salary);
     return 0; 
}