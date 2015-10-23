#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  // 変数
  char tmp[64];
  int len;
  char *name[5];
  int i, j;

  printf("名前を最大5人分入力してください.\n");
  for (i = 0; i < 5 ; i++) {
    // 文字列取得
    // 終了の場合forから抜ける
    if (scanf("%s", tmp) == EOF) {
      printf("ctrl+d\n");
      break;
    }

    // tmpの文字数はかる
    len = strlen(tmp);

    // メモリ確保
    name[i] = (char *)malloc(len+1);
    if (name[i] == NULL) {
      printf("メモリの確保に失敗しました.\n");
      return -1;
    }

    // コピーしる
    strcpy(name[i], tmp);
  }

  // 出力
  for (j = 0; j < i; j++) {
    printf("%p %s\n", name[j], name[j]);
  }

  // メモリ解放
  for (j = 0; j < i; j++) {
    free(name[j]);
  }

  putchar('\n');
  return 0;
}