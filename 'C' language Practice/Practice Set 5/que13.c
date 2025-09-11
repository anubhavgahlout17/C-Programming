#include<stdio.h>           // Swapping by call by value
void swap(int a,int b);
void swap(int a,int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main(){
    int a = 7, b= 9;
    swap(a,b);
    printf("a = %d and b = %d\n",a,b);
    return 0;
}
