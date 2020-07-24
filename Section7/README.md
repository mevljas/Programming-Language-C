# Tasks - 7th day
## Task 1: 
A phone book is written in the.txt file. In the first line there is information about the number of people, in all other lines there are people, one per line. The data in the row is separated by a colon. Read the data from the file in the table

 person * persons;  

where the person is such a structure:

```
typedef struct {

char * name;

char * surname;

char * phone;

} person;
```

 

Each person in the table should take up **exactly as much memory** as is absolutely necessary! You can assume that the length of each line in the file is less than 100 characters.

 After reading, the program should list the exact amount of memory that needed to be reserved for successful reading and remembering the contents of the entire file.

 

## Task 2:

a) write a mergesort function that sorts the table of persons (the person is a structure from the previous task); one of the parameters of the function should determine the criteria according to which the data are edited (either by name or by surname),

b) with the help of the program you wrote for the exercise, read the file of the person.txt and sort the data (with your mergesort function) first by name and then by surname; display the edited data on the screen.

c) sort the data with the built-in quicksort, first by name and then by last name and compare the printout. What difference do you notice?
