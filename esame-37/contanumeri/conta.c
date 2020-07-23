#include <stdlib.h>
#include <stdio.h>

size_t contanumeri(const char* filename){

  FILE *file;
  int i = 0;
  file = fopen(filename, "r");

  if(!file)
    return 0;

  while (true) {
    int c = fgetc(file);
    if (c == EOF) {
        break;
    }
    if ('0' <= c && c <= '9') {
        ++i;
    }
 } 

  return i;

}
