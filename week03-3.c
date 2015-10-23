#include <stdio.h>
#include <stdlib.h>

#define MAX 256

typedef struct gift_t {
  char code[MAX];
  char name[MAX];
  int price;
} gift;

int main(void) {
  int i, n;
  gift *gifts[512];
  char inputFilePath[MAX];
  char outputFilePath[MAX];
  FILE *fp;

  printf("データ数を入力してください：");
  scanf("%d", &n);

  printf("入力ファイル名を指定してください：");
  scanf("%s", inputFilePath);

  printf("出力ファイル名を指定してください：");
  scanf("%s", outputFilePath);

  // インプット
  fp = fopen(inputFilePath, "r");
  for (i = 0; i < n; i++) {
    gifts[i] = (gift *)malloc(sizeof(gift));
    fscanf(fp, "%s %s %d", gifts[i]->code, gifts[i]->name, &(gifts[i]->price));
  }
  fclose(fp);

  // アウトプット
  fp = fopen(outputFilePath, "w");
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