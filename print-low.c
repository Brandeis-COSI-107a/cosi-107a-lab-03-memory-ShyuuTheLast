#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <decimal numbers>\n", argv[0]);
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        char *endptr;
        long value = strtol(argv[i], &endptr, 0); // Allow decimal & hex input

        if (*endptr != '\0') { // Check for invalid input
            fprintf(stderr, "Invalid number: %s\n", argv[i]);
            continue;
        }

        int low_bits = value & 0xFF; // Extract lowest 8 bits

        printf("%d 0x%02X %3d\n", i, low_bits, low_bits);
        
    }

    return 0;
}