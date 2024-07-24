#include <stdio.h>

int f(int x) {
    int max_digit = 0; // Initialize to the smallest possible digit
    int min_digit = 9; // Initialize to the largest possible digit

    while (x > 0) {
        int digit = x % 10; // Extract the last digit
        if (digit > max_digit) {
            max_digit = digit; // Update max_digit if the current digit is greater
        }
        if (digit < min_digit) {
            min_digit = digit; // Update min_digit if the current digit is smaller
        }
        x /= 10; // Remove the last digit
    }

    return max_digit - min_digit;
}

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    int result = f(number);
    printf("The difference between the highest and lowest digit is: %d\n", result);

    return 0;
}
