#include <stdio.h>

int main() {
    int num, rev = 0;
    printf("Enter the number: ");
    scanf("%d", &num);

    while (num > 0) {
        int lastDigit = num % 10;
        rev = rev * 10 + lastDigit;
        num = num / 10;
    }

    printf("%d\n", rev);
    return 0;
}
