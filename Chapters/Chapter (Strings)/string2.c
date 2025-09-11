#include<stdio.h>


void print_string(char arr[]);
void print_string(char arr[]){
    for(char i = 0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}
int main(){
    char first_name[] = "Anubhav";
    char last_name[] = "Gahlout";
    print_string(first_name);
    print_string(last_name);
    return 0;

     
}