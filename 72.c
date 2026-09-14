//Find the sum of all elements in a matrix.

#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of rows and columns: ");
    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) {
        printf("Invalid dimensions.\n");
        return 1;
    }

    int val;
    long long total_sum = 0;

    printf("Enter elements of the matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &val);
            total_sum += val;
        }
    }

    printf("\nSum of all elements in the matrix: %lld\n", total_sum);

    return 0;
}
