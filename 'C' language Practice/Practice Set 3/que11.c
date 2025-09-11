#include<stdio.h>
int main(){
    int a = 0, b= -78, c = 67;
    if(a>b && a>c){
        printf("%d is Greater\n", a);

    }
    else if (b>a && b>c){
        printf("%d is Greater\n", b);
    }
    else{
        printf("%d is Greater\n", c);
    }
    return 0;
}