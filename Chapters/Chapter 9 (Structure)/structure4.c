#include<stdio.h>
#include<string.h>
struct employee{
int code;
float salary;
char name[10];
};

int main(){
struct employee e1;
e1.code = 5588;
e1.salary = 7000.00;
strcpy(e1.name,"Anubhav");

printf("Name = %s\n",e1.name);
printf("Salary = %d\n",e1.code);
printf("Code = %f\n",e1.salary);
return 0;
}