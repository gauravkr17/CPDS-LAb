#include<stdio.h>

            // Question 10 - Write a program to find greatest among 3 numbers.

void main(){
    int num1 , num2 , num3 , max;

    printf("Enter the numbers : ");
    scanf("%d %d %d" , &num1 , &num2 , &num3);

    max = num1;

    if (num2>max) {
        max = num2;
    }
    if (num3>max) {
        max = num3;
    }

    printf("The greatest number is %d\n" , max);
    
}