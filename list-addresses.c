#include <stdio.h>

// Global variable (uninitialized data section)
int global_var;

void example_function() {
    // Empty function to print its address
}

int main() {
    int stack_var = 42; // Stack variable
    char *string_lit = "Hello, world!"; // String literal

    // Print memory addresses
    printf("stack variable: 0x%012lX\n", (unsigned long)&stack_var);
    printf("initialized data: 0x%012lX\n", (unsigned long)string_lit);
    printf("uninitialized data: 0x%012lX\n", (unsigned long)&global_var);
    printf("main: 0x%012lX\n", (unsigned long)&main);
    printf("function: 0x%012lX\n", (unsigned long)&example_function);

    return 0;
}
