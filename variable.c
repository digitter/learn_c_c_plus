#include <stdio.h>

int main()
{
  int a;
  a = 6;

  int b = 3;

  int add, sub;

  double avg; // 8byte 実数が入る変数

  add = a + b;
  sub = a - b;
  avg = (a + b) / 2.0;

  printf("%d + %d = %d\n", a, b, add);
  printf("%d - %d = %d\n", a, b, sub);
  printf("%d と %dの平均値: %f\n", a, b, avg);
}
