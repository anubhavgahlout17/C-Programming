#include<stdio.h>

int fact(int n);                 // Factorial by Functions

int fact(int n){
    if(n == 0){
        return 1;
    }
    
    return  n* fact(n-1);
}



int main(){
    int n;
    printf("enter n: ");
    scanf("%d", &n);
    int result = fact(n);

    printf("Factorial no. of %d is %d\n", n, result);

}