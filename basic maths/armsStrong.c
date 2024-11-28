#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, n = 0, digits = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    temp = num;
    while (temp > 0) {
        int lastDigit = temp % 10;
        n += pow(lastDigit, digits);
        temp /= 10;
    }
    if (n == num) {
        printf("%d is an Armstrong number\n", num);
    } else {
        printf("%d is not an Armstrong number\n", num);
    }
    return 0;
}
