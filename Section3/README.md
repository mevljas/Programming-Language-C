# Tasks - 3rd day
## Task 1: Counting digits, reading the keyboard

Write a void  function count(char string [], int occurrences []) that finds digits in the specified string. For each digit i found, increase the value in the occurrence table [i].

Use the count() function to count the digits that the user enters in standard input. Finish reading the input when the user enters a blank line. Finally, display the number of occurrences.

Example: if the user enters text
```
123 10

9 as34 a

s a84r9s
```

the printout should be exactly as follows:
```
0 = 1.1 = 2.2 = 1.3 = 2.4 = 2.5 = 0.6 = 0.7 = 0.8 = 1.9 = 2
```
 

 

## Task 2: Triangular words

Definition 1: The number of the form tn = ½n (n + 1) is called the nth triangular number. The first 10 triangular numbers are:

1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...

Definition 2: The value of a word (string) is the sum of the values of the letters that make up the word. (the value of the letter A is 1, the value of the letter B is 2, ...). Example: the value of the word SKY is 19 + 11 + 25 = 55. If the value of the word is a triangular number, we say that the word is triangular.

Task:

a) Write the function int isTriangular(int i), which checks whether the number i is triangular and returns 1 if it is, and 0 if it is not.

b) In the main() function, use the gets() command to read a line of standard input (keyboard), and count how many words in the read string are triangular. The program should display all triangular words and their number. Note: all words in the read string will consist of the uppercase letters of the English alphabet, separated by spaces.

Note: you must walk through the input character by character until you reach the space or end of the line; everything from one space to another space is one word; remember the beginning and end of a word and add up its characters as you browse; if the word is triangular, we print it out.

 

## Task 3: 4 in a row

The game "4 in a row" is played on a 7x7 board. it requires two players, one with black, the other with white figures. Players take turns placing their pieces on any empty field on the board. The winner is the player who is the first to place 4 of his pieces next to each other in the horizontal, vertical or diagonal direction.

 

Write a program that allows you to play the game four in a row. The program should allow

- interactivity (game management, game board display, move entry, )
- checking the correctness of moves (if the player puts the piece in the occupied position, let the program report an error; if the player "makes a mistake" three times, he loses!)
- check the end of the game (4 figures horizontally, vertically or diagonally)
- optional: playing computer against human
