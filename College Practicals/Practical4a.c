#include<stdio.h>               //Reverse four digit number without using loop
int main(){
    int n = 5489;
    int a,b,c,d,reverse;

    a = n / 1000;
    b = (n / 100) % 10;
    c = (n / 10) % 10;
    d = n % 10;

    reverse = d*1000 + c*100 + b*10 + a;
    printf("%d\n",reverse);
    return 0;



}