#include<stdio.h>             //evven/odd
int main(){
    int a;
    printf("enter: ");
    scanf("%d", &a);

    if(a == 0){
    printf("Nither even nor odd\n");
}
else if (a % 2 == 0)
{
    printf("Even\n");
}
else{
    printf("Odd\n");
}
return 0;



}