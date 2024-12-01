/*
     *    
    ***   
   *****  
  ******* 
 *********
  ******* 
   *****  
    ***   
     * 
*/

#include <stdio.h>

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Top half of the diamond
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Bottom half of the diamond
    for (int i = 0; i < rows - 1; i++) {
        for (int j = 0; j < i + 1; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * (rows - i - 1) - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}