// Draw the patter for n=3
/*
    21 22 23 24 25
    20 7  8  9  10
    19 6  1  2  11
    18 5  4  3  12
    17 16 15 14 13
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int size = 2 * n + 1;
    int matrix[size][size];
    int num = size * size;
    int left = 0, right = size - 1, top = 0, bottom = size - 1;

    while (left <= right && top <= bottom) {
        for (int i = left; i <= right; i++) {
            matrix[top][i] = num--;
        }
        top++;
        for (int i = top; i <= bottom; i++) {
            matrix[i][right] = num--;
        }
        right--;
        for (int i = right; i >= left; i--) {
            matrix[bottom][i] = num--;
        }
        bottom--;
        for (int i = bottom; i >= top; i--) {
            matrix[i][left] = num--;
        }
        left++;
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}