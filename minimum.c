#include <stdio.h>
int findminimum(int arr[], int size);
int main(){
    int nums[] = {1,2,3,4,-5,6,-7,0,9};
    int minimum = findminimum(nums, 9);
    printf("The minimum value is %d", minimum);
    
    return 0;
}

int findminimum(int arr[], int size){
    int min = arr[0];
    for (int i=0; i<size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}