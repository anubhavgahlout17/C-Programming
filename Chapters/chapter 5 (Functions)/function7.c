#include<stdio.h>                   // Fibonacci 

int fibbo(int n);

int fibo(int n){
    if(n==0 || n==1){
        if(n==0){
          return 0;
        }
        if(n==1){
            return 1;
        }
    }
         int fibo1 = fibo(n-1);
         int fibo2 = fibo(n-2);
         int fibo3 = fibo1+fibo2;
         return fibo3;
}



int  main(){
    printf("%d\n",fibbo(3));
    return 0;
}