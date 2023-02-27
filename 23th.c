#include<stdio.h>

            //  Write a program in c to print pyramid.

void main(){
    int rows, i, j, k = 0;

    printf("Enter number of rows: ");
    scanf("%d" , &rows);

    for ( i = 1; i <= rows; ++i, k=0)
    {
        for ( j = 1; j <= rows-i; ++j)
        {
            printf(" ");

        }
        while (k!=2*i-1)
        {
            printf("*");
            ++k;
        }
        printf("\n");
    }
    


}




/*  Explaination:

    1. the user is prompted to enter the number of rows for the pyramid pattern to be printed.

    2. the outer for loop is used to iterate through each row of the pyramid.
        the loop variable "i" represents the current row number

    3. the inner for loop is used to print spaces before the asterisks to create the pyramid shape.
        the number of spaces printed in each row is equal to "row-i"

    4. the while loop prints the asterisks. the number of asterisks printed in each row is equal to "2*i-1"

    5. after printing all the characters in a row, a newline is added to move to the next line.

    6. the program ends after printing all the rows of the pyramid
*/