#include<stdio.h>
void printstr(char arr[]);
void printstr(char arr[]){
    for(int i = 0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
}

int main(){
    char str[100] = "Anubhav";
    printf("%s\n", str);
    printstr(str);
    printf("%c");
    return 0;
}