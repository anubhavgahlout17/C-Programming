#include<stdio.h>               // 2D Array

int main(){
int arr[3][2];                      // 3 collumn 2 rows

for(int i = 0; i < 3; i++){     // for 3 rows take input from the user loop

    for(int j = 0; j < 2; j++){   // for 2 Collumn take input from the user loop
     
        printf("Enter the value of arr[%d][%d]",i,j);
        scanf("%d", &arr[i][j]);
    }
}

for(int i = 0; i < 3; i++){     

    for(int j = 0; j < 2; j++){   
     
        printf("Enter the value of arr[%d][%d] is %d\n",i,j,arr[i][j]);
    }

}

return 0;
}
