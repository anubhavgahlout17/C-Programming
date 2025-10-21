#include<stdio.h>                    // Full Name in String by fgets

int main(){
    char str[100];
   fgets(str,100,stdin);
   puts(str);
    return 0;
    
}