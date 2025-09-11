#include<stdio.h>

int main(){                            // celcuis to farneheit
    float celcius;
    printf("Enter Temperature in Celcius: ");
    scanf("%f", &celcius);

    printf("Temperature in Fahrenheit: %f\n", celcius*9/5+32);

    return 0;
}