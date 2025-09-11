#include<stdio.h>

int sum(int a,int b);
int difference(int a,int b);  
int product(int a,int b);

int sum(int a,int b){    
    return a+b;
}
int difference(int a,int b){
    return a-b;
}
int product(int a,int b){
    return a*b;
}
int main(){

    int a  = 10, b = 5;
    int s = sum(a,b);  
    int x = difference(a,b);
    int y = product(a,b);

    printf("The sum of %d and %d is: %d\n",a,b, s);
    printf("The difference of %d and %d is: %d\n",a,b, x);
    printf("The product of %d and %d is: %d\n",a,b, y);

return 0;
}