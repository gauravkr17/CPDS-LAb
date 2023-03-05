#include<stdio.h>

            //  Write a program in c to print pyramid.

void main(){
    int rows, i, j, k = 0;

    printf("Enter number of rows: ");
    scanf("%d" , &rows);

    for ( i = 1; i <= rows; ++i, k=0)
    {
        // print space in each row before the stars
        for ( j = 1; j <= rows-i; ++j)
        {
            printf(" ");

        }
        // print stars for each row
        while (k!=2*i-1)
        {
            printf("*");
            ++k;
        }
        printf("\n"); // move to the next line for the next row
    }
    


}





        /*
                    LOGIC:


                    1.  the outer loop runs for the number of rows entered by the user.
                        Inside the outer loo, there are nested for loop one to print the
                        spaces before the stars and while for print the stars for each row.

                    2.  the first inner loop prints spaces before the stars. The number of 
                        spaces printed decreases as the row number increases, so we need to subtract 
                        the row number from the total number of rows to get the correct number of spsces.

                    3.  the second inner loop prints the stars for each row. The number of stars printed 
                        increases as the row number increases. We use the formula '2*i-1' to calculate the
                        number of stars to be printed in each row.

                    4.  Finally, we move to the next line for the next row using ("\n") statement.
        */




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