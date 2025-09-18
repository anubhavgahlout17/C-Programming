#include <stdio.h>  //Use of strcmp in string for compare 2 strings with ASCII value & returns a value
#include <string.h>



int main(){
   char firstString[] = "Apple";
   char secondString[] = "Banana";
   char thirdString[] = "HHH";
   char fourthString[] = "HHH";
   printf("%d\n", strcmp(firstString,secondString));
   printf("%d\n", strcmp(thirdString,fourthString));
    return 0;
}
