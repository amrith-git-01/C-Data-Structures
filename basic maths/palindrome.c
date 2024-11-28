#include <stdio.h>

int main() {
    int num, temp, rev = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    temp = num;

    while (temp > 0) {
        int lastDigit = temp % 10;
        rev = rev * 10 + lastDigit;
        temp /= 10;
    }

    if (num == rev) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
