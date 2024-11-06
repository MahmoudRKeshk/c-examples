#include <stdio.h>

int getSumOfArray(int arr[], int size);

int main(){
    int arr[] = {10,20,30,40,50,60,70,80,90};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = getSumOfArray(arr,size);
    printf("The sum of the arr is %d \n", sum);
    return 0;
}

int getSumOfArray(int arr[], int size){
    int sum =0;
    for (int i=0; i<size;i++){
        sum += arr[i];
    }

    return sum;
}