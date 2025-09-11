#include<stdio.h>

int fact(int a);
int fact(int a){                              // factorial by functions
    if(a == 0){
         return 1;
    }
     return  a* fact(a-1);
    
}

int main(){
    int a  = 5;
    int result = fact(a);
    printf("factorial is: %d\n", result);
    return 0;
}