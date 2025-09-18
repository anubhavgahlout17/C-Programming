#include<stdio.h>            //Swapping
void swap(int *a, int *b);
void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a = 5 , b =  8;
    swap(&a,&b);
    printf("a: %d and b: %d\n", a , b);
    return 0;
}