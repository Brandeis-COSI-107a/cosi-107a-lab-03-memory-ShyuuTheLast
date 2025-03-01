#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <decimal numbers>\n", argv[0]);
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        char *endptr;
        long value = strtol(argv[i], &endptr, 10); // Convert string to long in decimal base

        // Check for conversion errors
        if (*endptr != '\0') {
            fprintf(stderr, "Invalid number: %s\n", argv[i]);
            continue;
        }

        // Print as a 48-bit hexadecimal number (12 hex digits, uppercase, prefixed with 0x)
        printf("0x%012lX\n", value & 0xFFFFFFFFFFFF); // Mask to ensure 48-bit representation
    }

    return 0;
}
