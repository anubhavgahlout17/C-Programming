#include<stdio.h>                // Practice of full name enter by fgets that is scanf in string

void printString(char arr[]);
void printString(char arr[]){
    for(int i = 0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
        printf("\n");
    }
}
int main(){
        char name[100];
        fgets(name,100,stdin);
        puts(name);
    
    return 0;
}
