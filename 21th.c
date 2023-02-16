#include<stdio.h>

            // Question 21 - Write a program to print n prime numbers.
            
void main(){
    int n, i=2, count=0, flag;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The first %d prime numbers are: ", n);

    while (count<n)
    {
        flag = 1;
        for(int j=2; j<=i/2; j++){
            if(i%j == 0){
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            printf("%d," , i);
            count++;
        }
        i++;
    }
    
    
}