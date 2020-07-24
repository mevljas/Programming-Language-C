# Tasks - 9th day
## Task 1.

Write a program that converts all colors in a BMP image (example: [bear](https://ucilnica.fri.uni-lj.si/pluginfile.php/123081/mod_assign/intro/Bear.bmp) and [wolf](https://ucilnica.fri.uni-lj.si/pluginfile.php/123081/mod_assign/intro/wolf.bmp)) into shades of gray. Use the fread() command to read the file, with a buffer of 2048 bytes and fwrite() to write. Information on the BMP format can be found on [wikipedia](http://en.wikipedia.org/wiki/BMP_file_format). Convert the color point (R, G, B) into a gray point (S, S, S) according to the formula S = (R + G + B) / 3. The names of the input and output files are given in the first and second arguments of the program.

Note: for proper reading of the structure, write **#pragma pack(1)** before declaring the structure
