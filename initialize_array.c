#include <stdio.h>

int main() {
  int n[] = { 5, 4, 3, 2, 1 };
  int i;

  for(i = 0; i < 5; i++) {
    printf("n[%d] = %d\n", i, n[i]);
  }
}
