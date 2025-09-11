#include<stdio.h>

int main(){
    int a, b;
     int *ptr1, *ptr2;
    printf("Enter a Number: ");
    scanf("%d", &a);

    printf("Enter a Number: ");
    scanf("%d", &b);
   
    ptr1 = &a;
    ptr2 = &b;

    

    if(*ptr1 > *ptr2){

        printf("Maximum No. is:  %d\n", *ptr1);
    }

    else if(*ptr1 < *ptr2){
        printf("Maximum No. is:  %d\n", *ptr2);
    }

    else{
        printf("Both are equal\n");
    }

    return 0;
}
