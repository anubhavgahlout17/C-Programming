#include<stdio.h>          //factorail by functions
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
    int n =6;
    printf("%d",fact(n));
    return 0;
}
