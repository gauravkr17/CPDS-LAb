#include<stdio.h>

            // Question 14 - Write a program to check whether a number is divisible by 5 and 11 or not.
            
void main(){
    int num;

    printf("Enter the number : ");
    scanf("%d" , &num);

    if (num%5==0 && num%11==0) {
        printf("%d is divisible by 5 and 11\n" , num);
    }
    else{
        printf("%d is not divisible by 5 and 11\n" , num);
    }    
    
}