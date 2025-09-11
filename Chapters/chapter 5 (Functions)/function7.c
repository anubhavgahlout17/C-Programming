#include<stdio.h>

int fibbo(int n);

int fibbo(int n){
    if(n==0 || n==1){
        if(n==0){
          return 0;
        }
        if(n==1){
            return 1;
        }
    }
         int fibbo1 = fibbo(n-1);
         int fibbo2 = fibbo(n-2);
         int fibbo3 = fibbo1+fibbo2;
         return fibbo3;
}



int  main(){
int n = 3;
int s = fibbo(n);
printf("Fibbonacci is: %d\n",s);
    return 0;
}