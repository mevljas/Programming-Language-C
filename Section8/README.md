# Tasks - 8th day
## Task 1. 
Write a program with which will read a text file and save the words of this file in a linked list. Add a skip search option to the list below, which allows you to skip all words to the same letter as you walk. More specifically, the instructions are written below.

1) Declare word structure:
```
typedef struct bes {
  char word [MAX];
  struct bes * nasl;
} word;
```

2) Write a program that reads a text file (example: slovenija.txt) and creates a list of all different words. The list should be arranged alphabetically.

3) Print the complete list.

4) Write a function

  int search(word * zac, char * word)  

 which finds the given word in the list and returns how many jumps it took to get to that word in the list and -1 if it does not find the word.

5) Write a function

  int averageSearch(word * zac)  

who walks through the entire list calls the search function() for each word and displays the average number of steps to search for words in the list.

 

6) Complete the structure of the word so that it will also contain a pointer to the word of the next letter (the first word on “a” points to the first word on “b”, this points to the first word on “c”,…). Write a function

   void completeList(word * zac)

which adds skip links to words in the list.

 

7) Write a function

  int searchFaster (word * zac, char * word)

which finds a word in the skip list. Compare the speed of operation with the help
```
 while (1) {
   char trb [MAX];
   scanf ("% s", trb);
   printf ("% d \ n", search (start, trb));
   printf ("% d \ n", searchFaster (start, trb));
}
```
 

8) Declare the type of function

  typedef int fIsci(word *, char *);

 and corrects the  function averageSearch() so that it also receives the function as a parameter:

    int averageSearch(fIsci * search, word * zac)

 Then call the new feature in two ways:
```
  printf ("PI1:% d \ n", averageSearch (find, start));
  printf ("PI1:% d \ n", averageSearch (searchFaster, start));
```
 

## Task 2.

A scattered matrix is a matrix of size m x n that has most of the elements zero. Since storing a large number of null elements in a two-dimensional table is wasteful, it is more appropriate to write the scattered matrix in the form of an indicative list of non-null elements. In addition to the value, each element of the list contains both indices of this element in the matrix and a pointer to the following element:
```
struct element {
  int mind, nind;
  int value;
  struct element * nasl;
}
```
Write a program for working with scattered matrices in the form of a pointer list, which will allow you to read the matrix from a file, add two matrices and print the matrix in order (from the first to the last row and from the first to the last column) on the screen. The program should read the files given in the first two arguments, add them up, and print them out. The data in the input file is not edited.

 

Example: the matrix m1 contains non-zero elements at positions (3,0), (1,1), (2,2) and (0,3), and the matrix m2 at positions (2,0), (1,1), (2.2) and (0.3). The correct (arranged) printout of the sum of these two matrices is
```
2 0 2
3 0 8
2 2 10
0 4 4
```
(note: at position (1,1) the values -5 and 5 add up to 0, so this value is not displayed in the result).
