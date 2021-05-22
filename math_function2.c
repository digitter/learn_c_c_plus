#include <stdio.h>
#include <math.h>

int main() {
  int n = -2;

  double d1 = -2.5, d2 = 4.0;

  printf("%dの絶対値は%d\n", n, abs(n)); // 絶対値

  printf("%fの絶対値は%f\n", d1, fabs(d1)); // 絶対値

  printf("%fの2乗は%fです。\n", d2, pow(d2, 2)); // 累乗
  printf("%fの平方根は%fです。\n", d2, sqrt(d2)); // 平方根
}
