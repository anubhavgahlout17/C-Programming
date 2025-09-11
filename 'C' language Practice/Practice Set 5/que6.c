#include<stdio.h>                       // Prime check
int main(){
    int n;
    int isprime = 1;
    printf("Enter n: ");
    scanf("%d",&n);
if(n <= 1){
    isprime = 0;
}

for(int i = 2; i*i <= n; i++){
    if(n % i == 0){
       isprime = 0;
    }
    
}
if(isprime){
    printf("Prime");
}
else{
    printf("Not Prime");
}
return 0;

}
