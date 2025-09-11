#include<stdio.h>

void odd_even(int a);


void odd_even(int a){
    if(a%2 == 0){
        printf("This is even number\n");
    }
    else if(a % 2 != 0){
        printf("This is odd number\n");
    }
}

int main(){
    int a;
    printf("Enter the Number: ");
    scanf("%d", &a);
    odd_even(a);
    return 0;
}