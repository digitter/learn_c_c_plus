#include <stdio.h>

int main() {
  // 16進数
  unsigned char i = 0xf;  // 00001111b = 0xf = 15
  unsigned char j = 0xff; // 11111111b = 0xff = 255

  printf("%x << 1 = %x\n", i, i << 1);        // 1ビット左シフト 00011110b = 0x1e0 = 30
  printf("%x >> 1 = %x\n", i, i >> 1);        // 1ビット右シフト 00000111b = 0x7 = 7
  printf("%x | %x = %x\n", i, i, i | j);      // OR演算 11111111b = 0xff = 255
  printf("%x & %x = %x\n", i, j, i & j);      // AND演算 00001111 = 0xf = 15
  printf("~%x = %x\n", i, (unsigned char)~i); // NOT演算 11110000 = 0xf0 = 15
}
