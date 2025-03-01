#include <stdio.h>

int main() {
    // Declare variables
    int num = 978;
    int *int_ptr;
    char char_array[200];
    char *char_ptr;

    // Print sizes of standard types
    printf("size of char is %lu\n", sizeof(char));
    printf("size of short is %lu\n", sizeof(short));
    printf("size of int is %lu\n", sizeof(int));
    printf("size of long is %lu\n", sizeof(long));
    printf("size of long long is %lu\n", sizeof(long long));
    printf("size of float is %lu\n", sizeof(float));
    printf("size of double is %lu\n", sizeof(double));
    printf("size of char * is %lu\n", sizeof(char *));
    printf("size of int * is %lu\n", sizeof(int *));
    printf("size of long * is %lu\n", sizeof(long *));

    // Print size of character array
    printf("The size of my character array is %lu\n", sizeof(char_array));

    // Assign pointer to array and print its size
    char_ptr = char_array;
    printf("The size of my character pointer is %lu\n", sizeof(char_ptr));

    // Assign pointer to int variable and print sizes
    int_ptr = &num;
    printf("The size of my int pointer is %lu\n", sizeof(int_ptr));
    printf("The size of what my integer pointer points at is %lu\n", sizeof(*int_ptr));

    return 0;
}
