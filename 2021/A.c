#include <stdio.h>

int main() {
    int i, n;
    double x = 2;

    printf("Enter the value of i: ");
    scanf("%d", &n);

    for (i = 0; i <= n-1; i++) {
        x = 2 + 1 / x;
    }

    printf("x%d = %f", n, x);

    return 0;
}
