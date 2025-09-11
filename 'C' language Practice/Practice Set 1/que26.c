#include<stdio.h>
void greater_num(int *a, int *b);                  // que - find gretaer num by pointer in functions
void greater_num(int *a, int *b){
    
if(*a>*b){
    printf("Greater number is %d\n", *a);
}
else if(*b>*a){
    printf("Greater number is: %d\n", *b);
}
    
}



int main(){
    int a = 26, b = 25;
    greater_num(&a,&b);
    
    return 0;
}
