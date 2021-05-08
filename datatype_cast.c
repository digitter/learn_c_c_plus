#include <stdio.h>

int main(void)
{
  int i1, i2, j1, j2; // 整数
  double d1, d2, e1, e2; // 実数

  j1 = 3;
  j2 = 3;

  d1 = 1.23;
  d2 = 1.23;

  i1 = d1;
  i2 = (int)d2; // キャストして代入

  e1 = j1;
  e2 = (double)2; // キャストして代入

  printf("d1 = %f d2 = %f\n", d1, d2);
  printf("i1 = %d i2 = %d\n", i1, i2);
  printf("j1 = %d i2 = %d\n", j1, i2);
  printf("e1 = %f e2 = %f\n", e1, e2);
}
