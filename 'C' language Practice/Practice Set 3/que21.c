#include<stdio.h>        // Minimum no. in an array
int main(){
    int minimum_num[] = {25,36,1,-27,100,255,999};
    int min = minimum_num[0];

    for(int i = 1; i < 7; i++){
        if(minimum_num[i] < min ){
            min = minimum_num[i];
        }
        }
        printf("Minimum no. is: %d\n" , min);

        return 0;
         
    
}