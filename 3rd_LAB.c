#include<stdio.h>

void main(){

    //  Question 03 - Write a program to calculate the perimeter and area of square, rectangle and circle.

    // code for square
    float length;
    printf("Enter the length of square in cm : ");
    scanf("%f", &length);

    printf("Perimeter of square is %.2f cm\n", length*4);
    printf("Area of square is %.2f sq.cm\n", length*length);


    // code for rectangle
    float length1;
    printf("Enter the length of rectangle in cm : ");
    scanf("%f", &length1);

    float width;
    printf("Enter the width of rectangle in cm : ");
    scanf("%f", &width);

    printf("Perimeter of rectangle is %.2f cm\n", 2*length1 + 2*width);
    printf("Area of rectangle is %.2f sq.cm\n", length1*width);


    // code for circle
    float radius;
    printf("Enter the radius of circle in cm : ");
    scanf("%f", &radius);

    printf("Perimeter of circle is %.2f cm\n", 2*3.14*radius);
    printf("Area of circle is %.2f sq.cm\n", 3.14*radius*radius);

    


}