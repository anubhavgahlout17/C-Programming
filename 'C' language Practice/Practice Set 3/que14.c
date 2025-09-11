#include<stdio.h>
int main(){
                           //  sum of first a natural no.
int a;
int sum = 0;
printf("Enter Natural Number: ");
scanf("%d", &a);

for(int i = 1; i<=a; i++){
    sum += i ;
}
printf("Sum is %d\n", sum);

return 0;
}