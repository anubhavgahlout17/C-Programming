#include<stdio.h>            //Fibonaci Number
int fibo(int a);
int fibo(int a){
    if (a == 0)
    {
        return 0;
    }
    if (a ==1)
    {
        return 1;
    }
             int fibo1 = fibo(a-1);
             int fibo2 = fibo(a-2);
             int fibo3 = fibo1+fibo2;
             return fibo3;
    
    
}
int main(){
    int n = 8;
    printf("Fibonacci No. is: %d\n",fibo(n));
    return 0;
}