#include<stdio.h>

int sum(int a, int b);

int sum(int a, int b){
return a+b;

}

int main(){
    int a = 4, b = 10;
    int result = sum(a,b);
    printf("The sum is: %d\n", result);
    return 0;
}


