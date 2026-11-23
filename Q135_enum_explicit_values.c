/* Q135 - Enum with explicit values starting from 10 */
#include <stdio.h>

enum Code { A = 10, B, C, D };

int main(void) {
    printf("A = %d\nB = %d\nC = %d\nD = %d\n", A, B, C, D);
    return 0;
}
