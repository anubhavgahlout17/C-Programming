#include<stdio.h>                 //Call by reference
int call_by_reference(int *a, int *b);
int call_by_reference(int *a, int *b){
    return *a = 55, *b = 44;

}
int main(){
    int a = 9, b = 7;
    call_by_reference(&a,&b);
    printf("%d and %d\n", a,b);
    return 0;

}
