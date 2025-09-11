#include<stdio.h>

int sum(int a, int b);
int product(int c, int d);
int average(int e, int f);

int sum(int a, int b){
    return a+b;
}
    

int product(int c, int d){
    return c*d;
   
}

int average(int e, int f){
    return (e + f)/2;
    
}

int main(){
    int a = 5 , b = 9;
    int result_1 = sum(a, b);
    printf("The sum is: %d\n", result_1);


    int c = 8, d = 10;
    int result_2 = product(c, d);
    printf("The product is: %d\n", result_2);


    int e = 2 , f = 2;
    int result_3 = average(e, f);
    printf("The Average is: %d\n", result_3);

    return 0;
}