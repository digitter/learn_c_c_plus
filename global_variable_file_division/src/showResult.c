#include <stdio.h>
#include "../headers/showResult.h"

// 外部のファイルに変数が定義されていますよ宣言
extern int ans;

void showAnswer() {
  printf("%d\n", ans);
}
