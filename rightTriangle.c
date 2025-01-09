#include <stdio.h>

int main() {
    int n =5;
    

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

// 2 problem Given an integer 
/*
N - you need to generate a pyramid pattern.
Check the sample input below 
Given an integer 
        *    
      ***   
    *****  
  ******* 
**********/

#include <stdio.h>

int main() {
    // Solution as follows
    int N;
    scanf("%d", &N);

    // Outer loop for the number of rows
    for (int i = 1; i <= N; i++) {
        // Print spaces
        for (int j = 1; j <= N - i; j++)
            printf(" ");

        // Print asterisks
        for (int k = 1; k <= 2 * i - 1; k++)
            printf("*");

        printf("\n");
    }

    return 0;
}
