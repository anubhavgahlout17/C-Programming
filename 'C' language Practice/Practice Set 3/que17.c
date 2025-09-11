#include<stdio.h>
int main(){                            // 2D Array
    int arr[2][3];
    arr[0][0] = 85;
    arr[0][1] = 55;
    arr[0][2] = 76;
    arr[1][0] = 93;
    arr[1][1] = 69;
    arr[1][2] = 74;

    printf("Marks of abhinav in  physics:   %d\n", arr[0][0]);
    printf("Marks of abhinav in  Chemistry: %d\n", arr[0][1]);
    printf("Marks of abhinav in  Mathmetics:%d\n", arr[0][2]);
    printf("Marks of deepak  in  Physics:   %d\n", arr[1][0]);
    printf("Marks of deepak  in  Chemistry: %d\n", arr[1][1]);
    printf("Marks of deepak  in  Mathmetics:%d\n", arr[1][2]);
    return 0;
 }