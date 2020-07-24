# Tasks - Day 6
## Task 1: Interactive work with a stack of integers

a) Write a program for working with an integer stack; the program should contain the functions init(int n), push(int x), pop() and isEmpty().

b) Write an interactive program that will allow testing the use of the stack. Have the program display

0… end of program  
1… add an item to the stack  
2… delete the item from the stack  
3… print the contents of the stack  

then wait for the user to enter and take appropriate action.  

 

c) The program changes so that the functions for working with the stack will be all in one file (sklad.c), and other functions for the operation test in another (testSklada.c)

d) Adjust the functions in the sklad.c file so that the program will allow you to work with several stacks at once. The main program fixes it by first asking the user how many funds he wants to use, and then allowing the user to switch between those funds.

Tip: Implement the stack as a structure in which you store the start pointer and the index that marks the top of the stack. It fixes all the features so that they get one additional element: the stack structure.

 

## 2. Task

Write a program that receives an arithmetic expression in RPN format and calculates its value.

 

Example:
```
expression                  RPN                           result
---------------------------------------------------------------------------
(1 + 3) * 4                 1 3 + 4 *                     16
((3 + 1) * (5-1)) ^ (7-5)   3 1 + 5 1 - * 7 5 - ^         256
2 * 6 + 3 * 2 + 7           2 6 * 3 2 * + 7 +             25
```
Note: you can assume that all numbers are less than 10 (so the number is one digit).
