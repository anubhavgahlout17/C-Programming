#include<stdio.h>                                    //Swap pointer value

void swap(int *a, int *b);
void swap(int *a, int *b){
    int temp;
    temp =  *a;
    *a = *b;
    *b = temp;

}

int main(){
    int a = 6, b = 5;
    swap(&a,&b);
    printf("A: %d and B: %d\n",a, b);
    return 0;
}