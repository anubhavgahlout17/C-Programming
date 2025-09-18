#include<stdio.h>                                // Factorail by function Recursion method
int fact(int a);
int fact(int a){
    if (a == 0)
    {
        return 0;
    }
    if (a == 1)
    {
        return 1;
    }
    return a*fact(a-1);
    
    
}
int main(){
    int a = 6;
    printf("Factorial is: %d\n",fact(a));
    return 0;
    
}
