#include<stdio.h>                    // Full Name in String by fgets
void print_string(char arr[]);
void print_string(char arr[]){
    for(int i = 0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
        printf("\n");
    }
}
int main(){
    char str[100];
   fgets(str,100,stdin);
    puts(str);
    return 0;
    
}