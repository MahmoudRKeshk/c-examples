#include <stdio.h>
int findmaximum(int arr[], int size);
int main(){

    int nums[] = {1,2,3,4,556,-10,23,8,225,789,21,50};
    int maximum = findmaximum(nums, 12);
    printf("The max value is %d", maximum);
    return 0;
}
int findmaximum(int arr[], int size){
    int max = arr[0];
    for(int i=0; i<size;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}