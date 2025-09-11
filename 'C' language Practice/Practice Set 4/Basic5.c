#include<stdio.h>                            //Check Whether a Number is Prime or Not
int main(){
    int a;
    int isprime = 1;

    printf("Enter a Number: ");
    scanf("%d", &a);

    if(a <= 1){
        isprime = 0;
    }
    for(int i = 2; i*i <= a; i++){
        if (a % 2 == 0)
        {
            isprime = 0;
    
        }
        
    }
    if(isprime){
        printf("This no. is Prime Number\n");
    }
    else{
        printf("This is not prime number\n");
    }
    return 0;
}