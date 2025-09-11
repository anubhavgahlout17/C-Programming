#include<stdio.h>

int main(){
    int num;
    int count = 0;
    printf("Enter Number; ");
    scanf("%d", &num);
    

    while(num != 0){
        num = num / 10;
         count++;
    }
    printf("Total digits: %d\n", count);
return 0;
}
