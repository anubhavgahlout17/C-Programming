#include<stdio.h>


int main(){
    
    int i = 5;
    int *j = &i;

    printf("The address is: %p\n", &i);
    printf("The Value is: %d\n", *j);

    return 0;
}