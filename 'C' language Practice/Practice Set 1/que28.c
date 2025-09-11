#include<stdio.h>
                                 
void set_to_zero(int *a);                 // que- write a function that takes a pointer to an integer and sets it be 0
void set_to_zero(int *a){
    *a = 0;
}

int main(){
    int num = 50; 
    printf("%d\n",num);
    set_to_zero(&num);             // call byy reference
    printf("%d\n",num);
    return 0;

    
}
