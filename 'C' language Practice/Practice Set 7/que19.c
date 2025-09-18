#include<stdio.h>              //Sorting Arrays
int main(){
    int arr[] = {5,7,9,1,3,2};
    int n = 6;

    for (int i = 0; i < n-1; i++){
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] > arr[j]){
            int temp;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j]  = temp;
        }
        
        }
       
    }
    printf("Accesdiing order: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
     
    return 0;
    
}