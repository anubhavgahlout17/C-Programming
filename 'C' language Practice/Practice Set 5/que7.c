#include<stdio.h>            //Factorial by Functions
int fact(int a);
int fact(int a){
    if(a ==0){
        return 1;
    }
    else{
        return a*fact(a-1);
    }
}
int main(){
    int a = 5;
 int result = fact(a);
printf("%d",result);
return 0;
}