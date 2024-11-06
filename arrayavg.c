#include <stdio.h>
int getAvgOfArray(int arr[], int size);
int main(){
    int nums[] = {10,20,30,40,50,60,70,80,90}; 
    int size = sizeof(nums) / sizeof(nums[0]);
    int result = getAvgOfArray(nums, size);
    printf("The Avg. of the array is %d", result);
};

int getAvgOfArray(int arr[], int size){
    int sum = 0;
    for (int i=0; i<size; i++){
        sum += arr[i];
    };
    return sum/size;
};