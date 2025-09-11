#include <stdio.h>  //Use of strlen(str) in string for count length
#include <string.h>

void printString(char arr[]);

void printString(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++){
    printf("%c", arr[i]);
    }
    
    printf("\n");
}

int main(){
    char name[100] = "Ishu";
    printf("length is: %d", strlen(name));
    return 0;
}
