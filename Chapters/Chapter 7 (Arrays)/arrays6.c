#include<stdio.h>

int main(){
// // Pointer Arithmatic using Integer Pointer
// int a = 5;
// int *ptr = &a;
// printf("The address of a %u\n", &a);
// printf("The address of a is %u\n",ptr);
// ptr++;
// printf("The value of ptr is %u\n",ptr);

// Pointer Arithmatic using character Pointer
char a  = 'A';
char *ptr = &a;
printf("The address of a %p\n", &a);
printf("The address of a is %p\n",ptr);
ptr++;
printf("The value of ptr is %p\n",ptr);

return 0;


}