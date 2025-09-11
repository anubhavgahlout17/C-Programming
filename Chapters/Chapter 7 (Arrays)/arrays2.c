#include<stdio.h>

int main(){
    int age = 22;
    int *ptr = &age;
    printf("%u\n", ptr);
    ptr++;   // increment

    printf("%u\n", ptr);

    ptr--;   // decrement
    printf("%d\n", ptr);
    
    return 0;

}