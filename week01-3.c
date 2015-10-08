#include <stdio.h>

typedef struct gift {
  char code[256];
  char name[256];
  int price;
} gift_t;

int main(void) {
  // 構造体
  gift_t data;

  // 変数
  char str[256];
  int i = 0;

  // ファイル読み込み
  FILE *fp;
  if((fp = fopen("./_source/gifts.dat", "r")) == NULL) {
    printf("gifts.datが見つかりません.");
  }
  fscanf(fp, "%s %s %d", data.code, data.name, &data.price);
  fclose(fp);

  // 出力
  printf("code: %s\n", data.code);
  printf("name: %s\n", data.name);
  printf("price: %d\n", data.price);

  return 0;
}