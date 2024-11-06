#include <stdio.h>
int occurance(int arr[], int size, int tofind);
int main(){
    int nums[] = {10,20,30,55,10,55,30,10,90,23};
    int tofind = 55;
    int times_found = occurance(nums, 10,tofind);
    printf("The number %d, was found %d times \n", tofind,times_found); 
    return 0;
}

int occurance(int arr[], int size, int tofind){
    int occurance = 0;
    for (int i=0; i<size; i++){
        if(arr[i] == tofind){
            occurance++;
        }
    }
    return occurance;
}