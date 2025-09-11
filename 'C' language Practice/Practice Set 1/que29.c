#include<stdio.h>           // que - write a function that accept 3 pointers and sets them to values 10,20,30
                                 
void set_values(int *a,int *b, int *c);                
void set_values(int *a,int *b, int *c){
    *a = 10;
    *b = 20;
    *c = 30;
}

int main(){
    int num = 50 , num2 = 35, num3 = 67;
    printf("num = %d, num2 = %d, num3 = %d\n", num, num2, num3);
    set_values(&num,&num2,&num3);
    printf("num = %d, num2 = %d, num3 = %d\n", num, num2, num3);

    return 0;
}