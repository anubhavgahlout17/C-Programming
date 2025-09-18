#include<stdio.h>

void name(char arr[]);

void name(char arr[]){
    for(int i = 0; arr[i] != '\0'; i++ ){
        printf("%c", arr[i]);
        printf("\n");
    }
}

int main(){
    char *name = "Anubhav";
    puts(name);
    name = "gahlout";
    puts(name);
     
    return 0;
}
