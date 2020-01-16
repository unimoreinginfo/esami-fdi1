#include <stdlib.h>
#include <stdio.h>

size_t contanumeri(const char* filename){

  FILE *file;
  int i = 0;
  file = fopen(filename, "r");

  if(!file)
    return 0;

  while(!feof(file)){

    char c = fgetc(file);
    if(c >= 48 && c <= 57)
      ++i;

  }

  return i;

}
