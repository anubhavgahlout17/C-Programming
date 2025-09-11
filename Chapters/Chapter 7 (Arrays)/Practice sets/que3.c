#include<stdio.h>                    // Table of 5 by using array by input

int main(){
    int table [10] = {1,2,3,4,5,6,7,8,9,10};
    int n;
    printf("Enter a no: ");
    scanf("%d", &n);
    

 for(int i = 0; i < 10;i++){
    table[i] = n*(i+1); 
}

for(int i = 0; i < 10; i++){
    printf("%d X %d = %d\n",n, i+1, table[i]);
}





return 0;

}