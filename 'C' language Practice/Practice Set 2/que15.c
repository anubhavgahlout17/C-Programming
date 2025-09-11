#include<stdio.h>

int main(){
    int age = 6;
    int *ptr = &age;

    printf("adress: %u\n", ptr);
    printf("Valuue: %d\n", *ptr);
    return 0;
}