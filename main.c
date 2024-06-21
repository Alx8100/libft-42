#include "libft.h"
\
int main() {
    char buffer1[] = { 'A', 'B', 'C', 'D', 'F' };
    char buffer2[] = { 'A', 'B', 'C', 'D', 'E' };

    int result = memcmp(buffer1, buffer2, 5);

    if (result == 0) {
        printf("The first 5 bytes of both buffers are equal.\n");
    } else if (result < 0) {
        printf("The first buffer is less than the second buffer.\n");
    } else {
        printf("The first buffer is greater than the second buffer.\n");
    }

    return 0;
}