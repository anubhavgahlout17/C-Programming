#include<stdio.h>
int main(){
int n;
printf("Enter Year: ");
scanf("%d", &n);

if(n % 4 == 0){
    printf("This year is a Leap Year\n");
}

else{
    printf("This is not a Leap Year\n");
}









return 0;
}