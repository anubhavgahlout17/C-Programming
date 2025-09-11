#include<stdio.h>                            // Call by value
void call_by_value(int a, int b);
void call_by_value(int a, int b){
    a = a+b;
}

int main(){
    int a = 5 , b = 7;
    call_by_value(a,b);
    printf("a = %d, b = %d\n", a,b);
return 0;

}