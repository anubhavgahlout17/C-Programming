#include<stdio.h>

int main(){
int age = 20;
int *ptr = &age;
int _age = *ptr;


// for address
printf("%p\n", &age);
printf("%p\n", ptr);    // isme age ka address output aayega
printf("%p\n", &ptr);   // isme ptr ka addrees output aayega


// for Value
printf("%d\n", age);
printf("%d\n", *ptr);
printf("%d\n", *(&age)); 
printf("%d\n", _age);

return 0;
}