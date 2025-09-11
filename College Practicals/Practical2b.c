#include<stdio.h>
int main(){
    int a;
    int isprime = 1;
    printf("Enter a Number: ");
    scanf("%d", &a);
    
    if(a<=1){
        isprime = 0;
    }
    for(int i = 2; i*i <=a;i++){
    if(a%i== 0){
            isprime = 0;
        }
    }
    if(isprime){
        printf("This is Prime Number");
    }
    else{
        printf("This is not Prime Number");
    }
    return 0;
}