#include<stdio.h>                    // Table of 5 by using array

int main(){
    int table [10] = {1,2,3,4,5,6,7,8,9,10};

 for(int i = 0; i < 10;i++){
    table[i] = 5*(i+1); 
}

for(int i = 0; i < 10; i++){
    printf("5 X %d = %d\n", i+1, table[i]);
}





return 0;

}