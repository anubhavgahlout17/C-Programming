#include<stdio.h>

int main(){
    int minimum[] = {28,69,36,-5,56,47,78};
    int min = minimum[0];

    for(int i = 1; i < 7; i++){
        if(minimum[i] < min){
            min = minimum[i];
        }
    }
    printf("The minimum no. is: %d\n", min);
    return 0;

}