#include <stdio.h>
#include <stdlib.h>

int main() {
  char format[10];
  
  int n = 10;
  
  // ustvarimo format oblike "%nd", kjer je n parameter
  sprintf(format, "%c%dd\n", '%', n);
  
  for(int i=0; i<10; i++)
    printf(format, i);
}
