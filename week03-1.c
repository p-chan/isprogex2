#include <stdio.h>
#include <stdlib.h>

int main(void) {
  // 変数宣言
  int max;
  char *str1, *str2;

  // 最大長を取得
  printf("文字列の最大長を入力してください: ");
  scanf("%d", &max);

  // メモリ確保
  str1 = (char *)malloc(max+1);
  if (str1 == NULL) {
    printf("メモリの確保に失敗しました.\n");
    return -1;
  }

  // 文字列の入力
  printf("文字列を入れてください: ");
  scanf("%s", str1);

  // str1のアドレスをstr2にコピー
  str2 = str1;

  // 文字列の末尾を検索
  while( *str2 != '\0') {
    str2++;
  }

  // 文字列を後ろから大文字化して出力
  while( str2 > str1 ) {
    str2--;
    putchar(toupper(*str2));
  }

  // メモリ解放
  free(str1);

  putchar('\n');
  return 0;
}
