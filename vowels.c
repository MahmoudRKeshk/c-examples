#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countVowels(char str[]);

int main(){
    printf("Enter the string you want to check: ");
    char str[30];
    fgets(str,sizeof(str), stdin);
    // removing the extra new line added by fgets
    str[strcspn(str,"\n")] = '\0';
    printf("The number of vowels in \"%s\" is (%d) vowels", str,countVowels(str));
    return 0;
};


int countVowels(char str[]){
    int count =0;
    for(int i=0; i<strlen(str); i++){
        switch (toupper(str[i]))
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            count++;
            break;
        }
    }
    return count;
}