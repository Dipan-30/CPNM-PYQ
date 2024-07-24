#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    //pascal triangel
    for (int row = 1; row <= n; row++) {
    //space
    for(int i=1;i<=n-row;i++){
        printf(" ");
    }
    int num = 1;  // Initialize the first number in each row to 1
    //generating each row
    for (int col = 1; col <= row ; col++) {
        printf("%d ", num);
        num = num * (row - col);  
        num = num / (col);  
    }
    printf("\n");   
    }
    return 0;
}

