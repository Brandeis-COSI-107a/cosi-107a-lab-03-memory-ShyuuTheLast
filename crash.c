#include <stdio.h>
#include <stdlib.h>

void crash(int *x) {
    
    printf("I'm going to print x!\n");
    printf("The value of *x is %d\n", *x);  
}

int main(int argc, char **argv) {
    printf("We're going to crash!\n");

    int num = 0;   // Define a variable
    int *ptr = &num;  // ptr now points to a valid memory location

    crash(ptr);

    printf("Back after the crash?\n");
    return 0;
}
