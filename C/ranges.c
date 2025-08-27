#include <stdio.h>
#include <limits.h>

int main() {
    printf("Ranges of char types:\n");
    printf("char: %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("signed char: %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char: %u to %u\n", 0, UCHAR_MAX);
    return 0;
}