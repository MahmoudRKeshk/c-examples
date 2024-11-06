#include <stdio.h>

void printFibonacci(int iterations);
void printFibonacciRecursive(int iterations);

int main() {
    int count;
    printf("Please enter the number of terms in the Fibonacci series: ");
    scanf("%d", &count);
    printf("Results using the iteration way: \n");

    printFibonacci(count);

    return 0;
}

void printFibonacci(int iterations) {
    int a = 0;
    int b = 1;
    int result;
    
    for (int i = 0; i < iterations; i++) {
        printf("%d ", a);
        result = a + b;
        a = b;
        b = result;
    }
    printf("\n");  // Print a newline at the end for better formatting
}

void printFibonacciRecursive(int iterations){
    
}