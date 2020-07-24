# Tasks - 5th day
## Task 1:

The file (the file name is given as the first argument) contains the points in the plane. Each point is given with a name and two coordinates. The point name contains a maximum of 5 letters. The file contains a maximum of 100 points.

Write a program that

a) reads the file and saves the data in a table,

b) print the points in alphabetical order according to the name of the point,

c) print out points arranged according to the distance of the point from the coordinate starting point

Example of input files: [points1](https://ucilnica.fri.uni-lj.si/pluginfile.php/110115/mod_assign/intro/t1),[points2](https://ucilnica.fri.uni-lj.si/pluginfile.php/110115/mod_assign/intro/t2)

## Task 2:

Write a program that generates N random numbers between 1 and 100. The program should count how many of these numbers fell on the interval between 1 and 10, how many on the interval between 11 and 20,…, and how many on the interval between 91 and 100 Finally, have the program draw a diagram to illustrate the distribution of numbers by intervals.

 

Example: if N is 13 and if the program generates the numbers 34, 12, 45, 39, 90, 21, 56, 85, 31, 76, 17, 54, 98, the diagram should be as follows:
```
                       o

         o             o             o                           o

         o      o      o      o      o             o      o      o

---------------------------------------------------------------------

 1-10  11-20  21-30  31-40  41-50  51-60  61-70  71-80  81-90  91-100 
```
 

(Explanation: no number was generated on the interval between 1 and 10, so no circle is plotted there; three numbers were generated on the interval between 31 and 40, so three circles are drawn there; the same applies to the other intervals).

 

Additional instruction: the plotted diagram must not be higher than M (the highest columns can contain a maximum of M circles). Therefore, recalculate all values in the columns relative to M.

 

The N and M parameters are given as the first and second arguments since the program call.
