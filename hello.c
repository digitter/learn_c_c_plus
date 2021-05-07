// コンパイル
// gcc -o file ./file.c

// %s string
// %d decimal
// %c 一文字
// %f float

#include <stdio.h>

int main() {
  printf("こんにちは。私の名前は%sです。 \n年齢は%d歳", "谷田一樹", 23);
  printf("イニシャルは、%cです。\n", 'T');
  printf("%f + %f = %f\n", 1.2, 2.7, 1.2 + 2.7);
  printf("Hello, world!\n");
}
