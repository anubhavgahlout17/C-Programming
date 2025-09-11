#include<stdio.h>              // Count sum of digits by function
int sum(int a);
int sum(int a){
int sum = 0;
while (a > 0)
{
    int digit = a % 10;
    sum += digit;
    a = a/10;
}
return sum;

}
int main(){
    int n = 1234;
    int result= sum(n);
    printf("Sum of digits: %d\n", result);
    return 0;
}