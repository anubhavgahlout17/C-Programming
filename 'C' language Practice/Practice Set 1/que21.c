#include<stdio.h>

int main(){
    int year = 2025;
    int *ptr = &year;


    for(int i = 1; i <=5;i++){
        printf("Value of using pointer is: %d\n", *ptr);
        printf("Address of in pointer is: %p\n", ptr);
        printf("Address of pointer is: %p\n", &ptr);
    }

    return 0;


}