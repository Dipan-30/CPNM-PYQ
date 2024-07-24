#include <stdio.h>

int sum_of_squares(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

int ishappy(int n) {
    while (n != 1 && n != 4) {
        n = sum_of_squares(n);
    }
    return (n == 1);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (ishappy(number)) {
        printf("%d is a happy number.\n", number);
    } else {
        printf("%d is not a happy number.\n", number);
    }

    return 0;
}
