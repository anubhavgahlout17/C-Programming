#include<stdio.h>                    // Full Name in String by gets

int main(){
    char str[100];
    gets(str);
    printf("Full name is: %s",str);
    return 0;
    
}