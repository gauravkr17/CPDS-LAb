#include<stdio.h>

void main(){

    // Question 05 - Write a program to convert days into years, months and days.

    int days;
    printf("Enter days to convert it : ");
    scanf("%d", &days);

    int year = days/365;
    printf("%d Year,", year);

    int year1 = days%365;
    int month = year1/30;
    printf(" %d month," , month);

    int month1 = year1%30;
    printf(" %d days", month1);

    
}