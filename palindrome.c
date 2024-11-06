#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool isPalindrome(char str[]);
int main(){
    char name[20] = "Ahmed";
    char name02[20] = "ahmmha";
    
    printf("Rules: \n*  1 -> is true \n");
    printf("*  0 -> is false \n");

    bool result = isPalindrome(name);
    bool result02 = isPalindrome(name02);

    printf("Is %s a palindrome? %d \n", name,result);
    printf("Is %s a palindrome? %d \n", name02,result02);

    return 0;
}
bool isPalindrome(char str[]){
    bool result = true;
    int size = strlen(str);
    for (int i=0; i<size/2;i++){
        if(str[i] == str[size-i-1]){
            continue;
        } else {
            result =false ;
            break;
        }
    }
    return result;
};