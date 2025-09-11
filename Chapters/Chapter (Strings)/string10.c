#include <stdio.h>  //Use of strcpy in string for copies value of old string to new string
#include <string.h>


int main(){
   char oldString[] = "Hello";
   char newString[] = "World";
   strcpy(newString,oldString);  // In new string  old string ki value copied
   puts(newString);
    return 0;
}
