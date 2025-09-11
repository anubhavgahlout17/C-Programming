#include<stdio.h>

int main(){                           // TO check Primr Numbers
    int a;
    int isprime = 1;
    printf("Enter No.: ");
    scanf("%d", &a);
    if(a<=1) {
        isprime = 0;
    }

    for(int i = 2; i*i <= a; i++){
        if(a%i== 0){
            isprime = 0;
        }
    }
    if(isprime){
        printf("This no. is prime");

    } else{
        printf("This number is not prime");

    }
    return 0;

}