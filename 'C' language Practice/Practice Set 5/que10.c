#include <stdio.h>

int main() {                       // check prime  no. without function but with loops
    int n, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        isPrime = 0;   // 0 and 1 are not prime
    } else {
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0;   // divisible → not prime
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a Prime number.\n", n);
    } else {
        printf("%d is Not a Prime number.\n", n);
    }

    return 0;
}
