//  Dynamic Programming apporach

#include <stdio.h>
#include <stdlib.h>

int fib(int num)
{
     
    int* fib_array = (int*)malloc((num + 2) * sizeof(int));

    int i;
    fib_array[0] = 0;
    fib_array[1] = 1;

    for (i = 2; i <= num; i++) {
        fib_array[i] = fib_array[i - 1] + fib_array[i - 2];
    }

    int result = fib_array[num];
    free(fib_array);
    return result;
}

int main()
{
    int number = 10;
    printf("fib (%d) = %d ", number, fib(number));
    return 0;
}