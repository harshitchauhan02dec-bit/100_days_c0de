/* Q134 - Enum SUCCESS, FAILURE, TIMEOUT with messages */
#include <stdio.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main(void) {
    for (enum Status s = SUCCESS; s <= TIMEOUT; s++) {
        switch (s) {
            case SUCCESS: printf("Operation completed successfully.\n"); break;
            case FAILURE: printf("Operation failed.\n"); break;
            case TIMEOUT: printf("Operation timed out.\n"); break;
        }
    }
    return 0;
}
