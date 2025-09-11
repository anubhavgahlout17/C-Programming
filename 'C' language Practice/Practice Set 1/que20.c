#include<stdio.h>

                                // Factorial by Pointers
int main(){
int fact = 5 ;
int result = 1;
int *ptr = &fact;

for(int i = 1; i<=*ptr;i++){
    result  = result*i;


}



printf("Factoral of %d is %d\n", *ptr, result);


return 0;


}
