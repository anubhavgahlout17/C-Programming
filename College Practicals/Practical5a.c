#include<stdio.h>
int fibo(int a);
int fibo(int a){
    if(a == 0){
        return 0;
    }
    if(a == 1){
        return 1;
    }
    int fibo1 = fibo(a-1);
    int fibo2 = fibo(a-2);
    int fiboNum = fibo1+fibo2;
          return fiboNum;

}
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    int result = fibo(a);
    printf("Facotrial is: %d\n", result);
    return 0;
    
     
}