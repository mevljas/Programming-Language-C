# Tasks - 1st day
## Task 1.
Write a program printout.c, which prints the text "Hello, name" n times, where n and name are the first and second arguments when calling the program.  

Then complement the program by accepting a third argument (m). When printing, the program should move each subsequent line by an additional m pixels to the right.  

Example: when calling the printout 5 Lojze 4, have the program print the greeting text 5 times, with each subsequent printout 4 characters to the right, as follows:
```
    Hello, Lojze

  .... Hello, Lojze

  ........ Hello, Lojze

  ............ Hello, Lojze

  ................ Hello, Lojze
```
 

The program must be formatted correctly (delays), it must not report warnings when compiling, it must report an error when calling with the wrong number of arguments.

## Problem 2
Fibonacci numbers are defined by the following recursive equation:
```
 f (1) = 1

 f (2) = 1

 f (n) = f (n-1) + f (n-2) (if n> 2)
```
 

Write a program fibo.c that prints the sum of the first n Fibonacci numbers (n is the value of the first argument).

 

Follow these additional instructions:

- write the entire program in the main() method (it must not contain additional methods);
- the program must check if the argument exists;
- use an int variable to calculate the sum
- the program must determine how much the upper limit for n makes sense and, if the argument exceeds this limit, print an error;
- help: use (https://www.wolframalpha.com), question: "sum of first x fibonacci numbers"

## Task 3
Write a program gambler.c that receives three integer arguments (a, b and x). The program should generate a random number n from the interval [a, b] and check whether the user has guessed the number correctly (ie whether x is equal to n). If he guessed, write "Bravo, you guessed it", otherwise "Wrong, the real number is n". In addition, the program should calculate and print to two decimal places the probability that the user would guess the number (this is calculated by the formula p = 100 / (b-a + 1)).

Example printout: when calling the gambler 1 10 7 program, the program should print:  

 Wrong, the right number is 9 (probability of a hit: 10.00%)  

or (if the user guessed):  

Well done, you guessed it (probability of a hit: 10.00%).  
