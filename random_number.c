#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int a, b;

  // 乱数の初期化
  // srandの引数は数値
  srand((unsigned) time(NULL)); // 擬似乱数
  // srand(0);

  // randは0~の数値
  // 1から10までの乱数を発生させる
  a = rand() % 10 + 1;
  b = rand() % 10 + 1;

  // 計算結果を出力
  printf("%d + %d = %d\n", a, b, a + b);
}
