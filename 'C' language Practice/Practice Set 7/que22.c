#include<stdio.h>           // Compare two strings
#include<string.h>
int main(){
    char str1[10] = "Hello";
    char str2[10] = "World"; 
    
    printf("%d",strcmp(str1,str2));
    return 0;
     
}