# Exercises C++

## Exercise 1: Palindromes
Write a program that reads a string from standard input, checks if it is a palindrome, and displays the result.

## Exercise 2: Average
Write a program that reads a list of grades from standard input and displays their sum and average. It can also be modified to read the list of grades from a file.

## Exercise 3: Bookmaker
Define a new type `struct Bookrecord` to store transactions. Write a program that reads a file of transactions, saves them in a vector, and displays the vector's contents. Then, it enters a loop where it reads a client's name from standard input and displays the sum corresponding to that client's transactions. The loop ends on 'EOF'. Additionally, define input/output operators for `struct Bookrecord` and modify the program to use these new operators.

## Exercise 4: cmpx
Write a function `cmpx` that takes two integers as arguments and swaps them if they are not in ascending order. Use this function to write a function `insert` that inserts an integer into a sorted vector. Write a program that reads a list of integers from standard input and sorts them in ascending order. Also, explore the possibility of generalizing the program for all types where an order relation is defined.


## How to run


```bash
make all
make TEST_EX1
make TEST_EX2
make TEST_EX3
make TEST_EX4
```