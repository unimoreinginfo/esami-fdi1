#include <stdlib.h>
#include <stdio.h>
#include "conta.h"

int main(){

  size_t numeri = contanumeri("ciao.txt");
  printf("%d", numeri);
  return 0;

}
