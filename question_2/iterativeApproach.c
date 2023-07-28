// iterative Approach

#include <stdio.h>
#include <stdlib.h>

int fibonacci(int num) {
    int i;
    int fib_result = 0; 
    int fib_0 = 0;
    int fib_1 = 1;
    for (i = 0; i < num-1; i++) {
        fib_result = fib_0 + fib_1;
        fib_0 = fib_1;
        fib_1 = fib_result;
    }
    return fib_result;
}

int main() {
    int number = 10;
    printf("fib (%d) = %d\n", number, fibonacci(number));
    return 0;
}