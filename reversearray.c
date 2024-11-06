#include <stdio.h>

int reversearray(int arr[], int size);

int main(){
    int nums[] = {1,2,3,4,5,6,7,8,9};
    reversearray(nums, 9);
    //testing
    for(int i=0; i<9; i++){
        printf("%d ",nums[i]);
    }
  return 0;  
} 

int reversearray(int arr[] , int size){
    int temp=0;
    for(int i=0;i<size/2;i++){
        // swapping the two tails of the array
        temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    };
}