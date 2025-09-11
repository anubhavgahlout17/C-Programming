#include<stdio.h>
                                   //To find the greatest of the three numbers.
int main(){
    int a = 56, b = -75, c = 45;

    if(a>b && a>c){
        printf("Greater is %d\n", a);
    }
    else if(b>a && b>c){
        printf("Greater is %d\n", b);
    }
    else{
        printf("Greater is %d\n", c);
    }

    return 0;
}