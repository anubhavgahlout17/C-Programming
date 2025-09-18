#include<stdio.h>
                                     //Strings 

void print_string(char arr[]);
void print_string(char arr[]){
    for(int i = 0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}
int main(){
    char name[100];
    scanf("%s", name);
    printf("Your name is: %s\n", name);
    return 0;

     
}