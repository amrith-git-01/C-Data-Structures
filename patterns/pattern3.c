/*
    1
    12
    123
    1234
    12345
*/

#include <stdio.h>

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", j + 1);
        }
        printf("\n");
    }

    return 0;
}
