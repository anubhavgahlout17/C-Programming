#include<stdio.h>            // Linear search
int main(){
    int arr[]= {25,56,78,47,25};
    int key = 25;
    int n = 5;
    int found = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            found = i;
        
        }
        
    }
    if (found != 1 )
    {
        printf("%d is found at the index of %d\n",key,found);
    }
    else{
        printf("%d Element not found\n",key);
    }
    return 0;
    
}