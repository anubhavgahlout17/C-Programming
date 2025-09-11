#include<stdio.h>        // Maximum no. in an array
int main(){
    int maximum_num[] = {25,36,49,-27,100,255,-999};
    int max = maximum_num[0];

    for(int i = 1; i < 7; i++){
        if(maximum_num[i] > max ){
            max = maximum_num[i];
        }
        }
        printf("Maximum no. is: %d\n" , max);

        return 0;
         
    
}