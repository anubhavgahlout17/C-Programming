#include<stdio.h>

float average(int a, int b, int c);
float average(int a, int b, int c){
    return (a+b+c)/3.00;
}
int main(){
    int a = 5, b=7, c=8;
    printf("average is %f\n", average(a,b,c) );
    return 0;
}

