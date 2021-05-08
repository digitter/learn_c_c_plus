#include <stdio.h>

int main() {
  int num;
  printf("数値を入力:");
  scanf("%d", &num); // 標準入力を int 変数a に紐付け

  if (num == 1) {
    printf("one\n");
  }
  else if (num == 2) {
    printf("two\n");
  }
  else if (num == 3) {
    printf("three\n");
  }
  else if (num > 0) {
    printf("入力した値は、1~3以外の正の数です。\n");
  }
  else {
    printf("入力した値は、正の数ではありません\n");
  }
}
