#include<stdio.h>               // Matrix Addition
int main(){
    int arr[3][3] = {{2,4,5},{4,6,1},{4,5,8}};
      int arr1[3][3] = {{5,5, 6}, {7, 4,8},{6,8,9}};
    
    int sum[3][3];
    for (int i = 0; i < 3; i++)
    {for (int j = 0; j < 3; j++)
    {
        sum[i][j] = arr[i][j] + arr1[i][j] ;  
    }
    }
    for (int i = 0; i < 3; i++)
    {for (int j = 0; j < 3; j++)
    {
         printf("%d ",sum[i][j]);
    }
     printf("\n");
    }
    return 0;
    

}