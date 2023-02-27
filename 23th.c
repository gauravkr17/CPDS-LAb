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