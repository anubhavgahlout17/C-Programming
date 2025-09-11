#include<stdio.h>

int main(){
    char digit;
    printf("Enter a digit: ");
    scanf(" %c", &digit);
   

    if(digit>='0' && digit<='9'){
        printf("Character is a digit\n");
    } 
 else{
    printf("character is not a digit\n");
 }
   

return 0;
}