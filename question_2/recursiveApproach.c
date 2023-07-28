//  recursive apporach

#include <stdio.h>

int fib(int num) {
    if (num <= 1) {
        return num ;
    } else {
        return fib(num-1) + fib(num-2);
    }
}

int main() {
    
    int number = 10;
    
    printf("fib (%d) = %d ", number, fib(number));
    
    
    return 0;
}