//pre increment and post - increment

#include<stdio.h>
int main(){
    int a = 5;
    int b = 5;
    printf("Initial a : %d\n", ++a);  // phle ++ to 5 me 1 add hogya                   output = 6 
    printf("Inital b : %d\n", b++);   // phle b to b ki value and then 1 add            output = 5
    printf("Inital b : %d\n", b);    // output is 6                                   output = 6


     int c = 5;
    int d = 5;
    printf("Initial a : %d\n", --c);     // phle -- to 5 me 1 minus                output = 4
    printf("Inital b : %d\n", c--);     // phle c to c ki value and then minus 1   output = 4
    printf("Inital b : %d\n", c);    // ouput is 3

return 0;
}