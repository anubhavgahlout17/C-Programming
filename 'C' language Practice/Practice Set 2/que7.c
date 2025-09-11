#include<stdio.h>

int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);

    if(n < 0){
        printf("This number is Negative\n");
    }
    else if(n > 0 ){
        printf("This number is Positive\n");
    }
    else{
        printf("Number is Zero\n");
    }
    return 0;
}