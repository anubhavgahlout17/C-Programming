#include<stdio.h>
int fibbo(int a);
int fibbo(int a){
    if(a == 0){                             // Fibbonacccci
        return 0;
    }
    if(a == 1){
        return 1;
    }
    int fibbo1 = fibbo(a-1);
    int fibbo2 = fibbo(a-2);
    int fibbonacci = fibbo1 + fibbo2;
    
}

int main(){
    int a;
    printf("Enter number: ");
    scanf("%d", &a);
    int result = fibbo(a);
    printf("%d\n", result);
    return 0;
}