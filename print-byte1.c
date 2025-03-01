#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <decimal numbers>\n", argv[0]);
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        char *endptr;
        long value = strtol(argv[i], &endptr, 0); // Supports decimal & hex input

        if (*endptr != '\0') { // Validate input
            fprintf(stderr, "Invalid number: %s\n", argv[i]);
            continue;
        }

        int byte1 = (value >> 8) & 0xFF; // Shift right 8 bits and mask

        printf("0x%02X %3d\n", byte1, byte1); // Consistent formatting
    }

    return 0;
}
