# Question 2

## Introduction

This code provides three different implementations of the Fibonacci sequence calculation. The Fibonacci sequence is a series of numbers in which each number is the sum of the two preceding ones. The first two numbers in the sequence are 0 and 1.

The three implementations provided are:

1. Recursive approach
2. Dynamic programming approach
3. Iterative function

## Implementation

The program provides three different implementations of the Fibonacci sequence calculation. <br />

- ### <Strong>Recursive approach</Strong>

  The recursive approach is a simple implementation that uses a recursive function to calculate the Fibonacci sequence. <br />
  The fibonacci function takes an integer n as input and returns the Fibonacci number at the given position.<br />
  The function checks if n is less than or equal to 1. If so, it returns n. Otherwise, it recursively calls itself with n-1 and n-2 as input and returns the sum of the two results.

- ### <Strong>Dynamic programming approach</Strong>

  The dynamic programming approach is an optimized implementation that uses an array to store the previously calculated Fibonacci numbers. <br />
  The fib function takes an integer n as input and returns the Fibonacci number at the given position. <br />
  The function allocates an array of size n+2 to store the Fibonacci numbers. <br />
  It initializes the first two elements of the array to 0 and 1.<br /> It then uses a loop to calculate the remaining Fibonacci numbers by adding the previous two numbers in the array.
  <br />Finally, it returns the Fibonacci number at the given position and frees the memory allocated for the array.

- ### <Strong>Iterative approach</Strong>

  The iterative function is another optimized implementation that uses a loop to calculate the Fibonacci sequence.<br /> The fibonacci function takes an integer n as input and returns the Fibonacci number at the given position.<br /> The function allocates an array of size n+1 to store the Fibonacci numbers.<br /> It initializes the first two elements of the array to 0 and 1.<br /> It then uses a loop to calculate the remaining Fibonacci numbers by adding the previous two numbers in the array.<br /> Finally, it returns the Fibonacci number at the given position and frees the memory allocated for the array.

## Advantages and disadvantages

- ### <Strong>Recursive approach</Strong>

  The recursive approach is a simple implementation that is easy to understand and implement.<br /> However, it has a high time complexity of O(2^n) and a high space complexity of O(n).

- ### <Strong>Dynamic programming approach</Strong>

  The dynamic programming approach is an optimized implementation that has a low time complexity of O(n) and a low space complexity of O(n).<br /> However, it is more complex to implement than the recursive approach.

- ### <Strong>Iterative approach</Strong>

  The iterative approach is another optimized implementation that has a low time complexity of O(n) and a low space complexity of O(1).<br /> However, it is more complex to implement than the recursive approach.
