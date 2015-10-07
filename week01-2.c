#include <stdio.h>

int main(void) {
  FILE *fp;
  fp = fopen("./src/helloworld.txt", "w");

  if (fp == NULL) {
    printf("ファイルをオープンできませんでした。\n");
  } else {
    printf("ファイルに文字列を書き込みました。\n");
    fprintf(fp, "%s\n%s\n%s", "Hello World!!", "When I woke up this morning, I found many people in my room.", "What's up?? : -0");
    fclose(fp);
  }

  return 0;
}