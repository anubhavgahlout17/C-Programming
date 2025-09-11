#include<stdio.h>
int main(){            // print an array
    int arr[4];
    printf("Enter: ");
    scanf("%d",&arr[0]);

    printf("Enter: ");
    scanf("%d",&arr[1]);

    printf("Enter: ");
    scanf("%d",&arr[2]);

    printf("Enter: ");
    scanf("%d",&arr[3]);

    printf("%d index of %d\n", arr[0],arr[0]);
    printf("%d index of %d\n", arr[1],arr[1]);
    printf("%d index of %d\n", arr[2],arr[2]);
    printf("%d index of %d\n", arr[3],arr[3]);

    return 0;
}