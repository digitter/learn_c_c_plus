#include <stdio.h>

// C言語では文字列とは文字の配列のこと !!!

int main() {
  // 文字列 a b c. どこで終わりにするかを \0 で表す !!!
  char s1[4] = { 'a', 'b', 'c', '\0' };
  // 11個の文字 '\0' が実は入っている.
  char s2[] = "Hello World";
  // 最大10文字まで入る文字列(= 最後に'\0'が入るので9文字指定できる)
  char s3[10];

  printf("文字列を入力してください。:");
  // 文字列の入力. 配列の時はアンパサンド(＆)をつけない.
  scanf("%s", s3);
  printf("s1 = %s\n", s1);
  printf("s2 = %s\n", s2);
  printf("s3 = %s\n", s3);
}
