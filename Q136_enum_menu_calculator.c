/* Q136 - Menu enum with switch
   Input : choice (0 ADD, 1 SUBTRACT, 2 MULTIPLY), then two numbers */
#include <stdio.h>

enum Menu { ADD, SUBTRACT, MULTIPLY };

int main(void) {
    int choice;
    double a, b;
    scanf("%d %lf %lf", &choice, &a, &b);

    switch ((enum Menu)choice) {
        case ADD:      printf("Result: %.2f\n", a + b); break;
        case SUBTRACT: printf("Result: %.2f\n", a - b); break;
        case MULTIPLY: printf("Result: %.2f\n", a * b); break;
        default:       printf("Invalid choice\n");
    }
    return 0;
}
