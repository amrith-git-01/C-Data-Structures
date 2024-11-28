#include <stdio.h>

int main() {
    int num, count = 0;
    printf("Enter the number: ");
    scanf("%d", &num);

    for (int i = 1; i * i <= num; i++) {
        if (num % i == 0) {
            count++;
            if (num / i != i) {
                count++;
            }
        }
    }

    if (count == 2) {
        printf("Prime number\n");
    } else {
        printf("Not Prime number\n");
    }

    return 0;
}
