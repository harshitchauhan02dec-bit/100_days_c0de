/* Q76 (2D Arrays)
   Check if a matrix is symmetric. */
#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    int symmetric = (r == c);   /* only a square matrix can be symmetric */
    for (int i = 0; symmetric && i < r; i++)
        for (int j = 0; j < i; j++)
            if (a[i][j] != a[j][i]) {
                symmetric = 0;
                break;
            }

    printf(symmetric ? "Symmetric\n" : "Not Symmetric\n");
    return 0;
}
