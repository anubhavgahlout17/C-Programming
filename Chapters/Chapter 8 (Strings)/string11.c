#include <stdio.h>  //Use of strcat in string for concatenates first with second strings
#include <string.h>

int main(){
   char firstString[] = "Hello ";
   char secondString[] = "World";
   strcat(firstString,secondString);  
   puts(firstString);
    return 0;
}
