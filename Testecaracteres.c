#include <stdio.h>
#include <stdlib.h>

int main(){
  int i;
  for (i = 0; i < 255; i++) {
    printf(".%c.\n", i);
  }
  return 0;
}
