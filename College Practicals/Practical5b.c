#include<stdio.h>
int fact(int a);
int fact(int a){
for(int i = 1; i <=a; i++){
    return a* fact(a-1);
}
}

int main(){
int a;
printf("Enter a number: ");
scanf("%d", &a);
printf("Factorial is: %d\n",fact(a));
return 0;
}





