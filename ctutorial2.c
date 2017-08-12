#include <stdio.h>

int main() {

  printf("\n");

  for (int i = 0; i <= 40; i++) {

    if((i % 2) == 0) continue;
    printf("%d ", i);

  }
}
