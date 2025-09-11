#include<stdio.h>         // Check Prime no. by Functions
int prime_num(int a);
int prime_num(int a){
    if(a <= 1){
        return 0;
    }
    for(int i = 2; i*i <= a; i++){
        if(a % i == 0){
         return 0;
        }
    }
    
}
int main(){
    int a;
    printf("Enter a: ");
    scanf("%d",&a);
    if (prime_num(a))
    {
        printf("This is Prime Num.");
    }
    else{
        printf("This is not Prime Num.");
    }
    return 0;
}