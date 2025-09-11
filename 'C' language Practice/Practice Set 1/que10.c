#include<stdio.h>

void temperature(int a);

void temperature(int a){
    if(a>=25){
        printf("Temperature is hot\n");
}

    else if(a<25){
        printf("Temperature is cold\n");
    }
}

int main(){
    int a;
    printf("Enter Temperature in Celcius: ");
    scanf("%d", &a);
    temperature(a);
    return 0;
}