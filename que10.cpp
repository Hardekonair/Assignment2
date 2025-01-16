#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int size = 2 * n - 1; // The size of the square matrix
    int matrix[size][size];
    int start = 1, end = size, num = size * size;

    while (start <= end) {
        // Fill the top row
        for (int i = start - 1; i < end; i++) {
            matrix[start - 1][i] = num--;
        }

        // Fill the right column
        for (int i = start; i < end; i++) {
            matrix[i][end - 1] = num--;
        }

        // Fill the bottom row
        for (int i = end - 2; i >= start - 1; i--) {
            matrix[end - 1][i] = num--;
        }

        // Fill the left column
        for (int i = end - 2; i >= start; i--) {
            matrix[i][start - 1] = num--;
        }

        // Move to the inner layer
        start++;
        end--;
    }

    // Print the resulting matrix
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
