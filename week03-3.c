#include <stdio.h>
#include <stdlib.h>

#define STR_SIZE 1024

typedef struct gift_t {
  char code[STR_SIZE];
  char name[STR_SIZE];
  int price;
} gift;

int main(void) {
  int n, i;
  gift *gifts[512];
  char filePath[STR_SIZE];
  FILE *fp;

  printf("データ数を入力してください：");
  scanf("%d", &n);

  printf("ファイル名を指定してください：");
  scanf("%s", filePath);

  // インプット
  fp = fopen(filePath, "r");
  for (i = 0; i < n; i++) {
    gifts[i] = (gift *)malloc(sizeof(gift));
    fscanf(fp, "%s %s %d", gifts[i]->code, gifts[i]->name, &(gifts[i]->price));
  }
  fclose(fp);

  // アウトプット
  fp = fopen("./_build/output.txt", "w");
  for (i = 0; i < n; i++) {
    fprintf(fp, "code: %s\n", gifts[i]->code);
    fprintf(fp, "name: %s\n", gifts[i]->name);
    fprintf(fp, "price: %d\n", gifts[i]->price);
  }
  fclose(fp);

  printf("表示形式変換後ファイルに出力しました。\n");

  // メモリ解放
  for (i = 0; i < n; i++) {
    free(gifts[i]);
  }

  return 0;
}