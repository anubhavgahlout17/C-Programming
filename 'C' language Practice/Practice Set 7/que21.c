#include<stdio.h>                // copy strring
#include<string.h>
int main(){
    char str[20] = "Hello";
    char str1[10] = "Hi";
    strcpy(str,str1);
    puts(str);
    return 0;
}