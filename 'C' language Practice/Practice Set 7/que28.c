#include<stdio.h>          //Find nCr
long long factorial(int a){
    long long fact = 1;
    
    for (int i = 1; i <= a; i++)
    {
        fact = fact*i;
    }
    return fact;
    
}
long long nCr(int n ,int m){
    return factorial(n)/(factorial(m)*factorial(n-m));
}
int main(){
    int n = 5, m =2;
    printf("nCr of %d , %d = %lld" , n,m,nCr(n,m));
    return 0;
}