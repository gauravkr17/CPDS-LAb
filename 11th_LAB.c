#include<stdio.h>

            // Question 11 - write a program to check whether a character is vowel or consonant.

void main(){
    char ch;

    printf("Enter an alphabet : ");
    scanf("%c" , &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("%c is a vowel\n" , ch);
    }
    else{
        printf("%c is a consonant\n" , ch);
    }
    
    
}